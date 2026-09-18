# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/2/108/good-ember/battle-108-1789673668314014321`

## Battle summary

**Ember** · 360 s · 37 shots.

### Turning points

- 19.9s, squad 4: contact (events line 204). First recorded contact.
- 24.7s, squad 0: withdrawal ([trace 1591](#trace-1591)). 62.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 42.4s, squad 0: help call ([trace 2494](#trace-2494)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 37 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 760](#trace-760)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 82.8s, squad 0 chose FightHere: nearest known group ([trace 3691](#trace-3691)), followed by 0 shots and 0 own casualties; estimate 4.6 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 759](#trace-759)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174991436832869, 'next_transition': 778}.
- 82.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.545536 retreat threshold=0.220000 initiative=requires intent ([trace 3690](#trace-3690)). Following evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3703}.

### Communication

64 matched deliveries (mean 0.26s, max 5.25s); 245 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.85s, squad 4, contact, evidence events line 204: First recorded contact; .
- 24.70s, squad 0, withdrawal, evidence 1591: BreakContact: believed ratio at least two without superiority; 62.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 42.35s, squad 0, help call, evidence 2494: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.392111525270066, 'next_transition': 458}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.392111525270066, 'next_transition': 458}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.392111525270066, 'next_transition': 458}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-361"></a>
<a id="trace-368"></a>
<a id="trace-388"></a>
<a id="trace-395"></a>
<a id="trace-408"></a>
<a id="trace-419"></a>
<a id="trace-437"></a>
<a id="trace-460"></a>
<a id="trace-473"></a>
<a id="trace-481"></a>
<a id="trace-564"></a>
<a id="trace-653"></a>
<a id="trace-675"></a>
<a id="trace-684"></a>
<a id="trace-705"></a>
<a id="trace-730"></a>
<a id="trace-743"></a>
<a id="trace-757"></a>
<a id="trace-780"></a>
<a id="trace-791"></a>
<a id="trace-874"></a>
<a id="trace-884"></a>
<a id="trace-904"></a>
<a id="trace-918"></a>
<a id="trace-930"></a>
<a id="trace-939"></a>
<a id="trace-956"></a>
<a id="trace-970"></a>
<a id="trace-1035"></a>
<a id="trace-1047"></a>
<a id="trace-1131"></a>
<a id="trace-1147"></a>
<a id="trace-1440"></a>
<a id="trace-1449"></a>
<a id="trace-1487"></a>
<a id="trace-1502"></a>
<a id="trace-1515"></a>
<a id="trace-1547"></a>
<a id="trace-1579"></a>
<a id="trace-1752"></a>
<a id="trace-1838"></a>
<a id="trace-1849"></a>
<a id="trace-1873"></a>
<a id="trace-1895"></a>
<a id="trace-1913"></a>
<a id="trace-1922"></a>
<a id="trace-1940"></a>
<a id="trace-1955"></a>
<a id="trace-1968"></a>
<a id="trace-1979"></a>
<a id="trace-2057"></a>
<a id="trace-2063"></a>
<a id="trace-2077"></a>
<a id="trace-2085"></a>
<a id="trace-2098"></a>
<a id="trace-2109"></a>
<a id="trace-2116"></a>
<a id="trace-2123"></a>
<a id="trace-2135"></a>
<a id="trace-2141"></a>
<a id="trace-2222"></a>
<a id="trace-2228"></a>
<a id="trace-2242"></a>
<a id="trace-2255"></a>
<a id="trace-2266"></a>
<a id="trace-2272"></a>
<a id="trace-2339"></a>
<a id="trace-2357"></a>
<a id="trace-2368"></a>
<a id="trace-2380"></a>
<a id="trace-2456"></a>
<a id="trace-2471"></a>
<a id="trace-2480"></a>
<a id="trace-2484"></a>
<a id="trace-2493"></a>
<a id="trace-2502"></a>
<a id="trace-2508"></a>
<a id="trace-2514"></a>
<a id="trace-2519"></a>
<a id="trace-2524"></a>
<a id="trace-2593"></a>
<a id="trace-2599"></a>
<a id="trace-2604"></a>
<a id="trace-2606"></a>
<a id="trace-2610"></a>
<a id="trace-2614"></a>
<a id="trace-2618"></a>
<a id="trace-2624"></a>
<a id="trace-2632"></a>
<a id="trace-2638"></a>
<a id="trace-2708"></a>
<a id="trace-2717"></a>
<a id="trace-2728"></a>
<a id="trace-2736"></a>
<a id="trace-2748"></a>
<a id="trace-2754"></a>
<a id="trace-2765"></a>
<a id="trace-2773"></a>
<a id="trace-2783"></a>
<a id="trace-2792"></a>
<a id="trace-2865"></a>
<a id="trace-2871"></a>
<a id="trace-2882"></a>
<a id="trace-2889"></a>
<a id="trace-2901"></a>
<a id="trace-2908"></a>
<a id="trace-2918"></a>
<a id="trace-2924"></a>
<a id="trace-2933"></a>
<a id="trace-2943"></a>
<a id="trace-3017"></a>
<a id="trace-3024"></a>
<a id="trace-3039"></a>
<a id="trace-3047"></a>
<a id="trace-3060"></a>
<a id="trace-3070"></a>
<a id="trace-3084"></a>
<a id="trace-3091"></a>
<a id="trace-3101"></a>
<a id="trace-3111"></a>
<a id="trace-3183"></a>
<a id="trace-3199"></a>
<a id="trace-3206"></a>
<a id="trace-3220"></a>
<a id="trace-3226"></a>
<a id="trace-3239"></a>
<a id="trace-3247"></a>
<a id="trace-3258"></a>
<a id="trace-3266"></a>
<a id="trace-3339"></a>
<a id="trace-3345"></a>
<a id="trace-3354"></a>
<a id="trace-3361"></a>
<a id="trace-3373"></a>
<a id="trace-3379"></a>
<a id="trace-3391"></a>
<a id="trace-3397"></a>
<a id="trace-3409"></a>
<a id="trace-3419"></a>
<a id="trace-3493"></a>
<a id="trace-3502"></a>
<a id="trace-3512"></a>
<a id="trace-3519"></a>
<a id="trace-3530"></a>
<a id="trace-3538"></a>
<a id="trace-3548"></a>
<a id="trace-3555"></a>
<a id="trace-3564"></a>
<a id="trace-3571"></a>
<a id="trace-3644"></a>
<a id="trace-3651"></a>
<a id="trace-3663"></a>
<a id="trace-3670"></a>
<a id="trace-3682"></a>
<a id="trace-3689"></a>
<a id="trace-3705"></a>
<a id="trace-3713"></a>
<a id="trace-3723"></a>
<a id="trace-3731"></a>
<a id="trace-3804"></a>
<a id="trace-3809"></a>
<a id="trace-3819"></a>
<a id="trace-3826"></a>
<a id="trace-3838"></a>
<a id="trace-3847"></a>
<a id="trace-3866"></a>
<a id="trace-3871"></a>
<a id="trace-3884"></a>
<a id="trace-3897"></a>
<a id="trace-3970"></a>
<a id="trace-3980"></a>
<a id="trace-3990"></a>
<a id="trace-3996"></a>
<a id="trace-4012"></a>
<a id="trace-4022"></a>
<a id="trace-4036"></a>
<a id="trace-4044"></a>
<a id="trace-4059"></a>
<a id="trace-4068"></a>
<a id="trace-4139"></a>
<a id="trace-4148"></a>
<a id="trace-4160"></a>
<a id="trace-4168"></a>
<a id="trace-4178"></a>
<a id="trace-4184"></a>
<a id="trace-4196"></a>
<a id="trace-4203"></a>
<a id="trace-4214"></a>
<a id="trace-4222"></a>
<a id="trace-4295"></a>
<a id="trace-4300"></a>
<a id="trace-4311"></a>
<a id="trace-4320"></a>
<a id="trace-4330"></a>
<a id="trace-4338"></a>
<a id="trace-4350"></a>
<a id="trace-4357"></a>
<a id="trace-4369"></a>
<a id="trace-4376"></a>
<a id="trace-4448"></a>
<a id="trace-4454"></a>
<a id="trace-4465"></a>
<a id="trace-4470"></a>
<a id="trace-4480"></a>
<a id="trace-4490"></a>
<a id="trace-4502"></a>
<a id="trace-4508"></a>
<a id="trace-4520"></a>
<a id="trace-4527"></a>
<a id="trace-4600"></a>
<a id="trace-4610"></a>
<a id="trace-4620"></a>
<a id="trace-4627"></a>
<a id="trace-4636"></a>
<a id="trace-4643"></a>
<a id="trace-4654"></a>
<a id="trace-4663"></a>
<a id="trace-4676"></a>
<a id="trace-4683"></a>
<a id="trace-4756"></a>
<a id="trace-4763"></a>
<a id="trace-4773"></a>
<a id="trace-4779"></a>
<a id="trace-4793"></a>
<a id="trace-4800"></a>
<a id="trace-4812"></a>
<a id="trace-4817"></a>
<a id="trace-4827"></a>
<a id="trace-4836"></a>
<a id="trace-4910"></a>
<a id="trace-4919"></a>
<a id="trace-4929"></a>
<a id="trace-4935"></a>
<a id="trace-4946"></a>
<a id="trace-4952"></a>
<a id="trace-4964"></a>
<a id="trace-4974"></a>
<a id="trace-4986"></a>
<a id="trace-4993"></a>
<a id="trace-5064"></a>
<a id="trace-5073"></a>
<a id="trace-5083"></a>
<a id="trace-5091"></a>
<a id="trace-5102"></a>
<a id="trace-5109"></a>
<a id="trace-5120"></a>
<a id="trace-5127"></a>
<a id="trace-5139"></a>
<a id="trace-5147"></a>
<a id="trace-5220"></a>
<a id="trace-5226"></a>
<a id="trace-5238"></a>
<a id="trace-5246"></a>
<a id="trace-5257"></a>
<a id="trace-5266"></a>
<a id="trace-5276"></a>
<a id="trace-5282"></a>
<a id="trace-5294"></a>
<a id="trace-5302"></a>
<a id="trace-5374"></a>
<a id="trace-5381"></a>
<a id="trace-5391"></a>
<a id="trace-5398"></a>
<a id="trace-5407"></a>
<a id="trace-5416"></a>
<a id="trace-5487"></a>
<a id="trace-5498"></a>
<a id="trace-5510"></a>
<a id="trace-5517"></a>
<a id="trace-5599"></a>
<a id="trace-5614"></a>
<a id="trace-5626"></a>
<a id="trace-5633"></a>
<a id="trace-5653"></a>
<a id="trace-5658"></a>
<a id="trace-5670"></a>
<a id="trace-5735"></a>
<a id="trace-5754"></a>
<a id="trace-5773"></a>
<a id="trace-5847"></a>
<a id="trace-5855"></a>
<a id="trace-5870"></a>
<a id="trace-5879"></a>
<a id="trace-5892"></a>
<a id="trace-5899"></a>
<a id="trace-5918"></a>
<a id="trace-5931"></a>
<a id="trace-5942"></a>
<a id="trace-5955"></a>
<a id="trace-6087"></a>
<a id="trace-6095"></a>
<a id="trace-6110"></a>
<a id="trace-6116"></a>
<a id="trace-6131"></a>
<a id="trace-6150"></a>
<a id="trace-6162"></a>
<a id="trace-6172"></a>
<a id="trace-6189"></a>
<a id="trace-6197"></a>
<a id="trace-6275"></a>
<a id="trace-6283"></a>
<a id="trace-6301"></a>
<a id="trace-6317"></a>
<a id="trace-6326"></a>
<a id="trace-6334"></a>
<a id="trace-6349"></a>
<a id="trace-6359"></a>
<a id="trace-6370"></a>
<a id="trace-6379"></a>
<a id="trace-6456"></a>
<a id="trace-6462"></a>
<a id="trace-6475"></a>
<a id="trace-6483"></a>
<a id="trace-6493"></a>
<a id="trace-6501"></a>
<a id="trace-6510"></a>
<a id="trace-6515"></a>
<a id="trace-6526"></a>
<a id="trace-6533"></a>
<a id="trace-6607"></a>
<a id="trace-6617"></a>
<a id="trace-6631"></a>
<a id="trace-6636"></a>
<a id="trace-6648"></a>
<a id="trace-6655"></a>
<a id="trace-6665"></a>
<a id="trace-6673"></a>
<a id="trace-6681"></a>
<a id="trace-6688"></a>
<a id="trace-6761"></a>
<a id="trace-6768"></a>
<a id="trace-6781"></a>
<a id="trace-6788"></a>
<a id="trace-6802"></a>
<a id="trace-6809"></a>
<a id="trace-6820"></a>
<a id="trace-6828"></a>
<a id="trace-6838"></a>
<a id="trace-6847"></a>
<a id="trace-6919"></a>
<a id="trace-6925"></a>
<a id="trace-6938"></a>
<a id="trace-6945"></a>
<a id="trace-6954"></a>
<a id="trace-6962"></a>
<a id="trace-6972"></a>
<a id="trace-6979"></a>
<a id="trace-6992"></a>
<a id="trace-7001"></a>
<a id="trace-7076"></a>
<a id="trace-7084"></a>
<a id="trace-7096"></a>
<a id="trace-7102"></a>
<a id="trace-7112"></a>
<a id="trace-7119"></a>
<a id="trace-7129"></a>
<a id="trace-7136"></a>
<a id="trace-7147"></a>
<a id="trace-7154"></a>
<a id="trace-7228"></a>
<a id="trace-7236"></a>
<a id="trace-7252"></a>
<a id="trace-7263"></a>
<a id="trace-7272"></a>
<a id="trace-7277"></a>
<a id="trace-7287"></a>
<a id="trace-7294"></a>
<a id="trace-7304"></a>
<a id="trace-7312"></a>
<a id="trace-7385"></a>
<a id="trace-7391"></a>
<a id="trace-7404"></a>
<a id="trace-7413"></a>
<a id="trace-7423"></a>
<a id="trace-7432"></a>
<a id="trace-7446"></a>
<a id="trace-7453"></a>
<a id="trace-7463"></a>
<a id="trace-7471"></a>
<a id="trace-7544"></a>
<a id="trace-7551"></a>
<a id="trace-7564"></a>
<a id="trace-7570"></a>
<a id="trace-7579"></a>
<a id="trace-7585"></a>
<a id="trace-7596"></a>
<a id="trace-7605"></a>
<a id="trace-7615"></a>
<a id="trace-7623"></a>
<a id="trace-7700"></a>
<a id="trace-7707"></a>
<a id="trace-7720"></a>
<a id="trace-7727"></a>
<a id="trace-7737"></a>
<a id="trace-7743"></a>
<a id="trace-7753"></a>
<a id="trace-7760"></a>
<a id="trace-7769"></a>
<a id="trace-7778"></a>
<a id="trace-7852"></a>
<a id="trace-7858"></a>
<a id="trace-7873"></a>
<a id="trace-7884"></a>
<a id="trace-7897"></a>
<a id="trace-7904"></a>
<a id="trace-7914"></a>
<a id="trace-7919"></a>
<a id="trace-7929"></a>
<a id="trace-7936"></a>
<a id="trace-8009"></a>
<a id="trace-8017"></a>
<a id="trace-8029"></a>
<a id="trace-8036"></a>
<a id="trace-8047"></a>
<a id="trace-8055"></a>
<a id="trace-8067"></a>
<a id="trace-8076"></a>
<a id="trace-8086"></a>
<a id="trace-8094"></a>
<a id="trace-8167"></a>
<a id="trace-8173"></a>
<a id="trace-8185"></a>
<a id="trace-8193"></a>
<a id="trace-8202"></a>
<a id="trace-8208"></a>
<a id="trace-8219"></a>
<a id="trace-8225"></a>
<a id="trace-8236"></a>
<a id="trace-8247"></a>
<a id="trace-8320"></a>
<a id="trace-8327"></a>
<a id="trace-8342"></a>
<a id="trace-8349"></a>
<a id="trace-8358"></a>
<a id="trace-8366"></a>
<a id="trace-8375"></a>
<a id="trace-8381"></a>
<a id="trace-8391"></a>
<a id="trace-8400"></a>
<a id="trace-8473"></a>
<a id="trace-8481"></a>
<a id="trace-8497"></a>
<a id="trace-8502"></a>
<a id="trace-8512"></a>
<a id="trace-8523"></a>
<a id="trace-8533"></a>
<a id="trace-8541"></a>
<a id="trace-8549"></a>
<a id="trace-8556"></a>
<a id="trace-8628"></a>
<a id="trace-8635"></a>
<a id="trace-8649"></a>
<a id="trace-8656"></a>
<a id="trace-8667"></a>
<a id="trace-8674"></a>
<a id="trace-8685"></a>
<a id="trace-8693"></a>
<a id="trace-8705"></a>
<a id="trace-8715"></a>
<a id="trace-8787"></a>
<a id="trace-8792"></a>
<a id="trace-8805"></a>
<a id="trace-8812"></a>
<a id="trace-8822"></a>
<a id="trace-8829"></a>
<a id="trace-8840"></a>
<a id="trace-8846"></a>
<a id="trace-8857"></a>
<a id="trace-8868"></a>
<a id="trace-8941"></a>
<a id="trace-8950"></a>
<a id="trace-8963"></a>
<a id="trace-8969"></a>
<a id="trace-8980"></a>
<a id="trace-8986"></a>
<a id="trace-8995"></a>
<a id="trace-9002"></a>
<a id="trace-9012"></a>
<a id="trace-9020"></a>
<a id="trace-9093"></a>
<a id="trace-9101"></a>
<a id="trace-9116"></a>
<a id="trace-9123"></a>
<a id="trace-9133"></a>
<a id="trace-9138"></a>
<a id="trace-9149"></a>
<a id="trace-9159"></a>
<a id="trace-9169"></a>
<a id="trace-9177"></a>
<a id="trace-9250"></a>
<a id="trace-9256"></a>
<a id="trace-9270"></a>
<a id="trace-9277"></a>
<a id="trace-9288"></a>
<a id="trace-9298"></a>
<a id="trace-9307"></a>
<a id="trace-9314"></a>
<a id="trace-9324"></a>
<a id="trace-9332"></a>
<a id="trace-9409"></a>
<a id="trace-9416"></a>
<a id="trace-9428"></a>
<a id="trace-9434"></a>
<a id="trace-9444"></a>
<a id="trace-9452"></a>
<a id="trace-9462"></a>
<a id="trace-9471"></a>
<a id="trace-9481"></a>
<a id="trace-9488"></a>
<a id="trace-9561"></a>
<a id="trace-9568"></a>
<a id="trace-9581"></a>
<a id="trace-9590"></a>
<a id="trace-9600"></a>
<a id="trace-9606"></a>
<a id="trace-9616"></a>
<a id="trace-9623"></a>
<a id="trace-9634"></a>
<a id="trace-9643"></a>
<a id="trace-9715"></a>
<a id="trace-9720"></a>
<a id="trace-9735"></a>
<a id="trace-9742"></a>
<a id="trace-9752"></a>
<a id="trace-9759"></a>
<a id="trace-9768"></a>
<a id="trace-9775"></a>
<a id="trace-9787"></a>
<a id="trace-9796"></a>
<a id="trace-9868"></a>
<a id="trace-9876"></a>
<a id="trace-9888"></a>
<a id="trace-9894"></a>
<a id="trace-9905"></a>
<a id="trace-9914"></a>
<a id="trace-9924"></a>
<a id="trace-9931"></a>
<a id="trace-9941"></a>
<a id="trace-9949"></a>
<a id="trace-10022"></a>
<a id="trace-10028"></a>
<a id="trace-10046"></a>
<a id="trace-10055"></a>
<a id="trace-10064"></a>
<a id="trace-10071"></a>
<a id="trace-10081"></a>
<a id="trace-10089"></a>
<a id="trace-10101"></a>
<a id="trace-10109"></a>
<a id="trace-10182"></a>
<a id="trace-10187"></a>
<a id="trace-10200"></a>
<a id="trace-10207"></a>
<a id="trace-10220"></a>
<a id="trace-10232"></a>
<a id="trace-10241"></a>
<a id="trace-10247"></a>
<a id="trace-10262"></a>
<a id="trace-10272"></a>
<a id="trace-10350"></a>
<a id="trace-10359"></a>
<a id="trace-10374"></a>
<a id="trace-10380"></a>
<a id="trace-10397"></a>
<a id="trace-10407"></a>
<a id="trace-10415"></a>
<a id="trace-10427"></a>
<a id="trace-10435"></a>
<a id="trace-10510"></a>
<a id="trace-10517"></a>
<a id="trace-10528"></a>
<a id="trace-10536"></a>
<a id="trace-10548"></a>
<a id="trace-10554"></a>
<a id="trace-10563"></a>
<a id="trace-10569"></a>
<a id="trace-10578"></a>
<a id="trace-10588"></a>
<a id="trace-10661"></a>
<a id="trace-10667"></a>
<a id="trace-10679"></a>
<a id="trace-10688"></a>
<a id="trace-10700"></a>
<a id="trace-10706"></a>
<a id="trace-10717"></a>
<a id="trace-10723"></a>
<a id="trace-10735"></a>
<a id="trace-10742"></a>
<a id="trace-10817"></a>
<a id="trace-10825"></a>
<a id="trace-10835"></a>
<a id="trace-10840"></a>
<a id="trace-10851"></a>
<a id="trace-10858"></a>
<a id="trace-10868"></a>
<a id="trace-10877"></a>
<a id="trace-10888"></a>
<a id="trace-10895"></a>
<a id="trace-10971"></a>
<a id="trace-10980"></a>
<a id="trace-10990"></a>
<a id="trace-10997"></a>
<a id="trace-11006"></a>
<a id="trace-11011"></a>
<a id="trace-11020"></a>
<a id="trace-11026"></a>
<a id="trace-11036"></a>
<a id="trace-11044"></a>
<a id="trace-11122"></a>
<a id="trace-11130"></a>
<a id="trace-11141"></a>
<a id="trace-11149"></a>
<a id="trace-11161"></a>
<a id="trace-11168"></a>
<a id="trace-11177"></a>
<a id="trace-11182"></a>
<a id="trace-11192"></a>
<a id="trace-11200"></a>
<a id="trace-11274"></a>
<a id="trace-11282"></a>
<a id="trace-11293"></a>
<a id="trace-11300"></a>
<a id="trace-11314"></a>
<a id="trace-11320"></a>
<a id="trace-11330"></a>
<a id="trace-11339"></a>
<a id="trace-11348"></a>
<a id="trace-11355"></a>
<a id="trace-11429"></a>
<a id="trace-11436"></a>
<a id="trace-11447"></a>
<a id="trace-11454"></a>
<a id="trace-11465"></a>
<a id="trace-11471"></a>
<a id="trace-11481"></a>
<a id="trace-11490"></a>
<a id="trace-11502"></a>
<a id="trace-11513"></a>
<a id="trace-11589"></a>
<a id="trace-11595"></a>
<a id="trace-11605"></a>
<a id="trace-11612"></a>
<a id="trace-11622"></a>
<a id="trace-11629"></a>
<a id="trace-11639"></a>
<a id="trace-11644"></a>
<a id="trace-11654"></a>
<a id="trace-11662"></a>
<a id="trace-11738"></a>
<a id="trace-11746"></a>
<a id="trace-11760"></a>
<a id="trace-11766"></a>
<a id="trace-11778"></a>
<a id="trace-11785"></a>
<a id="trace-11794"></a>
<a id="trace-11801"></a>
<a id="trace-11811"></a>
<a id="trace-11818"></a>
<a id="trace-11893"></a>
<a id="trace-11900"></a>
<a id="trace-11911"></a>
<a id="trace-11920"></a>
<a id="trace-11929"></a>
<a id="trace-11936"></a>
<a id="trace-11949"></a>
<a id="trace-11958"></a>
<a id="trace-11967"></a>
<a id="trace-11975"></a>
<a id="trace-12050"></a>
<a id="trace-12056"></a>
<a id="trace-12067"></a>
<a id="trace-12074"></a>
<a id="trace-12083"></a>
<a id="trace-12091"></a>
<a id="trace-12100"></a>
<a id="trace-12107"></a>
<a id="trace-12118"></a>
<a id="trace-12128"></a>
<a id="trace-12208"></a>
<a id="trace-12214"></a>
<a id="trace-12225"></a>
<a id="trace-12231"></a>
<a id="trace-12241"></a>
<a id="trace-12248"></a>
<a id="trace-12258"></a>
<a id="trace-12266"></a>
<a id="trace-12275"></a>
<a id="trace-12282"></a>
<a id="trace-12359"></a>
<a id="trace-12367"></a>
<a id="trace-12380"></a>
<a id="trace-12391"></a>
<a id="trace-12401"></a>
<a id="trace-12407"></a>
<a id="trace-12417"></a>
<a id="trace-12423"></a>
<a id="trace-12432"></a>
<a id="trace-12441"></a>
<a id="trace-12514"></a>
<a id="trace-12519"></a>
<a id="trace-12530"></a>
<a id="trace-12537"></a>
<a id="trace-12547"></a>
<a id="trace-12556"></a>
<a id="trace-12568"></a>
<a id="trace-12575"></a>
<a id="trace-12588"></a>
<a id="trace-12596"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6016026431200764, 'next_transition': 232}.
<a id="trace-458"></a>
<a id="trace-471"></a>
<a id="trace-479"></a>
<a id="trace-562"></a>
- 8.70s–10.20s (×4), actor 5, squad 0 (trace 458): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449645501381134, 'next_transition': 471}.
<a id="trace-567"></a>
- 10.35s–10.35s (×1), actor 0, squad 0 (trace 567): traveling overwatch. Knowledge: actor memory at 10.00s, trace 484. Next observer evidence: {'until': 10.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247176819333797, 'next_transition': 594}.
<a id="trace-568"></a>
- 10.35s–10.35s (×1), actor 0, squad 0 (trace 568): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 484. Next observer evidence: {'until': 10.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247176819333797, 'next_transition': 594}.
<a id="trace-594"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 594): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 484. Next observer evidence: {'until': 10.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724964103906173, 'next_transition': 651}.
<a id="trace-651"></a>
<a id="trace-673"></a>
<a id="trace-741"></a>
- 10.70s–13.20s (×3), actor 5, squad 0 (trace 651): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 486. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3385150886577124, 'next_transition': 673}.
<a id="trace-141"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174991436832869, 'next_transition': 778}.
<a id="trace-759"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 759): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 759. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174991436832869, 'next_transition': 778}.
<a id="trace-760"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 760): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 760. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174991436832869, 'next_transition': 778}.
<a id="trace-778"></a>
<a id="trace-789"></a>
<a id="trace-872"></a>
<a id="trace-882"></a>
<a id="trace-902"></a>
<a id="trace-916"></a>
<a id="trace-928"></a>
<a id="trace-937"></a>
<a id="trace-968"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 778): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 760. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8648393589361473, 'next_transition': 789}.
<a id="trace-973"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 973): received platoon directive. Knowledge: actor memory at 15.00s, trace 795. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15111532560018534, 'next_transition': 1033}.
<a id="trace-1033"></a>
<a id="trace-1045"></a>
<a id="trace-1129"></a>
<a id="trace-1145"></a>
- 19.25s–20.75s (×4), actor 5, squad 0 (trace 1033): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 797. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149994543646068, 'next_transition': 1045}.
<a id="trace-1154"></a>
- 21.10s–21.10s (×1), actor 0, squad 0 (trace 1154): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1052. Next observer evidence: None.
<a id="trace-1155"></a>
- 21.10s–21.10s (×1), actor 0, squad 0 (trace 1155): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1052. Next observer evidence: None.
<a id="trace-1156"></a>
<a id="trace-1248"></a>
<a id="trace-1343"></a>
- 21.10s–21.20s (×3), actor 0, squad 0 (trace 1156): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1052. Next observer evidence: None.
<a id="trace-1447"></a>
<a id="trace-1513"></a>
<a id="trace-1577"></a>
- 21.75s–24.25s (×3), actor 5, squad 0 (trace 1447): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1054. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3099777970467867, 'next_transition': 1513}.
<a id="trace-1591"></a>
- 24.70s–24.70s (×1), actor 0, squad 0 (trace 1591): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 1052. Next observer evidence: None.
<a id="trace-1592"></a>
- 24.70s–24.70s (×1), actor 0, squad 0 (trace 1592): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 1052. Next observer evidence: None.
<a id="trace-1750"></a>
<a id="trace-1836"></a>
<a id="trace-1847"></a>
<a id="trace-1911"></a>
<a id="trace-1938"></a>
<a id="trace-1977"></a>
<a id="trace-2055"></a>
<a id="trace-2061"></a>
<a id="trace-2083"></a>
<a id="trace-2096"></a>
<a id="trace-2114"></a>
<a id="trace-2121"></a>
<a id="trace-2133"></a>
<a id="trace-2139"></a>
<a id="trace-2220"></a>
<a id="trace-2226"></a>
<a id="trace-2253"></a>
<a id="trace-2264"></a>
- 24.75s–37.25s (×18), actor 5, squad 0 (trace 1750): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1054. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6269001126814098, 'next_transition': 1836}.
<a id="trace-2275"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 2275): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 2148. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501733814530125, 'next_transition': 2337}.
<a id="trace-2276"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 2276): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 2148. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501733814530125, 'next_transition': 2337}.
<a id="trace-2337"></a>
<a id="trace-2355"></a>
<a id="trace-2378"></a>
<a id="trace-2454"></a>
<a id="trace-2469"></a>
<a id="trace-2478"></a>
<a id="trace-2482"></a>
<a id="trace-2491"></a>
- 38.25s–42.25s (×8), actor 5, squad 0 (trace 2337): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2150. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49401570795719885, 'next_transition': 2355}.
<a id="trace-2494"></a>
- 42.35s–42.35s (×1), actor 1, squad 0 (trace 2494): NeedSupport. Knowledge: actor memory at 40.00s, trace 2385. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399967899923492, 'next_transition': 2500}.
<a id="trace-2500"></a>
<a id="trace-2506"></a>
<a id="trace-2512"></a>
<a id="trace-2597"></a>
<a id="trace-2622"></a>
<a id="trace-2630"></a>
<a id="trace-2636"></a>
<a id="trace-2706"></a>
<a id="trace-2715"></a>
<a id="trace-2726"></a>
<a id="trace-2746"></a>
<a id="trace-2752"></a>
<a id="trace-2763"></a>
<a id="trace-2771"></a>
<a id="trace-2781"></a>
<a id="trace-2790"></a>
<a id="trace-2869"></a>
<a id="trace-2880"></a>
<a id="trace-2887"></a>
<a id="trace-2899"></a>
<a id="trace-2906"></a>
<a id="trace-2916"></a>
<a id="trace-2922"></a>
<a id="trace-2931"></a>
<a id="trace-2941"></a>
<a id="trace-3015"></a>
<a id="trace-3022"></a>
<a id="trace-3037"></a>
<a id="trace-3045"></a>
<a id="trace-3058"></a>
- 42.75s–62.25s (×30), actor 5, squad 0 (trace 2500): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2386. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259990999961843, 'next_transition': 2506}.
<a id="trace-3061"></a>
- 62.35s–62.35s (×1), actor 1, squad 0 (trace 3061): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 60.00s, trace 2946. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3068}.
<a id="trace-3068"></a>
<a id="trace-3082"></a>
<a id="trace-3089"></a>
<a id="trace-3099"></a>
<a id="trace-3109"></a>
<a id="trace-3181"></a>
<a id="trace-3189"></a>
<a id="trace-3218"></a>
<a id="trace-3224"></a>
<a id="trace-3256"></a>
<a id="trace-3264"></a>
<a id="trace-3337"></a>
<a id="trace-3343"></a>
<a id="trace-3352"></a>
<a id="trace-3371"></a>
<a id="trace-3389"></a>
<a id="trace-3395"></a>
<a id="trace-3407"></a>
<a id="trace-3417"></a>
<a id="trace-3491"></a>
<a id="trace-3500"></a>
<a id="trace-3510"></a>
<a id="trace-3517"></a>
<a id="trace-3528"></a>
<a id="trace-3536"></a>
<a id="trace-3553"></a>
<a id="trace-3642"></a>
<a id="trace-3661"></a>
<a id="trace-3680"></a>
<a id="trace-3687"></a>
- 62.75s–82.75s (×30), actor 5, squad 0 (trace 3068): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 2947. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3082}.
<a id="trace-591"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (events line 591): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3690"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (trace 3690): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.545536 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 82.80s, trace 3690. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3703}.
<a id="trace-3691"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (trace 3691): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.545536 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 82.80s, trace 3691. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3703}.
<a id="trace-3703"></a>
<a id="trace-3711"></a>
<a id="trace-3721"></a>
<a id="trace-3729"></a>
<a id="trace-3802"></a>
<a id="trace-3824"></a>
<a id="trace-3845"></a>
- 83.25s–87.75s (×7), actor 5, squad 0 (trace 3703): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.80s, trace 3691. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3711}.
<a id="trace-3851"></a>
- 88.15s–88.15s (×1), actor 1, squad 0 (trace 3851): MoveTactically. Knowledge: actor memory at 85.00s, trace 3733. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3858}.
<a id="trace-3852"></a>
- 88.15s–88.15s (×1), actor 1, squad 0 (trace 3852): traveling overwatch. Knowledge: actor memory at 85.00s, trace 3733. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3858}.
<a id="trace-3853"></a>
- 88.15s–88.15s (×1), actor 1, squad 0 (trace 3853): received platoon directive. Knowledge: actor memory at 85.00s, trace 3733. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3858}.
<a id="trace-3858"></a>
- 88.20s–88.20s (×1), actor 1, squad 0 (trace 3858): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 3733. Next observer evidence: None.
<a id="trace-3864"></a>
<a id="trace-3882"></a>
<a id="trace-3895"></a>
<a id="trace-3968"></a>
<a id="trace-3978"></a>
<a id="trace-3988"></a>
<a id="trace-3994"></a>
<a id="trace-4010"></a>
<a id="trace-4020"></a>
<a id="trace-4034"></a>
<a id="trace-4042"></a>
<a id="trace-4066"></a>
<a id="trace-4146"></a>
<a id="trace-4158"></a>
<a id="trace-4166"></a>
<a id="trace-4176"></a>
<a id="trace-4182"></a>
<a id="trace-4194"></a>
<a id="trace-4201"></a>
<a id="trace-4212"></a>
<a id="trace-4309"></a>
<a id="trace-4318"></a>
<a id="trace-4328"></a>
<a id="trace-4336"></a>
<a id="trace-4355"></a>
<a id="trace-4367"></a>
<a id="trace-4463"></a>
<a id="trace-4478"></a>
<a id="trace-4488"></a>
<a id="trace-4500"></a>
<a id="trace-4518"></a>
<a id="trace-4525"></a>
<a id="trace-4608"></a>
<a id="trace-4618"></a>
<a id="trace-4625"></a>
<a id="trace-4641"></a>
<a id="trace-4652"></a>
<a id="trace-4661"></a>
<a id="trace-4674"></a>
<a id="trace-4754"></a>
<a id="trace-4761"></a>
<a id="trace-4771"></a>
<a id="trace-4791"></a>
<a id="trace-4798"></a>
<a id="trace-4810"></a>
<a id="trace-4834"></a>
<a id="trace-4908"></a>
<a id="trace-4917"></a>
<a id="trace-4927"></a>
<a id="trace-4933"></a>
<a id="trace-4944"></a>
<a id="trace-4962"></a>
<a id="trace-4972"></a>
<a id="trace-4984"></a>
<a id="trace-4991"></a>
<a id="trace-5071"></a>
<a id="trace-5081"></a>
<a id="trace-5089"></a>
<a id="trace-5100"></a>
<a id="trace-5107"></a>
<a id="trace-5125"></a>
<a id="trace-5137"></a>
<a id="trace-5145"></a>
<a id="trace-5218"></a>
<a id="trace-5236"></a>
<a id="trace-5244"></a>
<a id="trace-5255"></a>
<a id="trace-5274"></a>
<a id="trace-5280"></a>
<a id="trace-5300"></a>
<a id="trace-5379"></a>
<a id="trace-5389"></a>
<a id="trace-5396"></a>
<a id="trace-5414"></a>
- 88.25s–137.80s (×74), actor 5, squad 0 (trace 3864): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 3734. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3882}.
<a id="trace-5422"></a>
- 138.05s–138.05s (×1), actor 1, squad 0 (trace 5422): traveling. Knowledge: actor memory at 135.00s, trace 5304. Next observer evidence: None.
<a id="trace-5423"></a>
- 138.05s–138.05s (×1), actor 1, squad 0 (trace 5423): current contact unknown for 10 s. Knowledge: actor memory at 135.00s, trace 5304. Next observer evidence: None.
<a id="trace-1020"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (events line 1020): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5478"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 5478): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 5478. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5485}.
<a id="trace-5479"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 5479): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 5479. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5485}.
<a id="trace-5485"></a>
<a id="trace-5496"></a>
<a id="trace-5508"></a>
<a id="trace-5515"></a>
<a id="trace-5597"></a>
<a id="trace-5612"></a>
<a id="trace-5624"></a>
<a id="trace-5631"></a>
<a id="trace-5651"></a>
<a id="trace-5668"></a>
- 138.30s–143.30s (×10), actor 5, squad 0 (trace 5485): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 138.10s, trace 5479. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052501904727352694, 'next_transition': 5496}.
<a id="trace-5675"></a>
- 143.45s–143.45s (×1), actor 1, squad 0 (trace 5675): received platoon directive. Knowledge: actor memory at 140.00s, trace 5523. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11755504148175833, 'next_transition': 5733}.
<a id="trace-5733"></a>
<a id="trace-5771"></a>
<a id="trace-5845"></a>
<a id="trace-5868"></a>
<a id="trace-5877"></a>
<a id="trace-5890"></a>
<a id="trace-5916"></a>
<a id="trace-5929"></a>
<a id="trace-5953"></a>
- 143.80s–149.80s (×9), actor 5, squad 0 (trace 5733): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 5524. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8925448698265529, 'next_transition': 5771}.
<a id="trace-6028"></a>
- 150.25s–150.25s (×1), actor 1, squad 0 (trace 6028): matching received arrivals: traveling stage complete. Knowledge: actor memory at 150.00s, trace 5957. Next observer evidence: None.
<a id="trace-6085"></a>
<a id="trace-6093"></a>
<a id="trace-6108"></a>
<a id="trace-6148"></a>
<a id="trace-6160"></a>
<a id="trace-6170"></a>
<a id="trace-6187"></a>
<a id="trace-6195"></a>
<a id="trace-6273"></a>
<a id="trace-6281"></a>
<a id="trace-6299"></a>
<a id="trace-6315"></a>
<a id="trace-6324"></a>
- 150.30s–157.30s (×13), actor 5, squad 0 (trace 6085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 5958. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600119964155538, 'next_transition': 6093}.
<a id="trace-6329"></a>
- 157.45s–157.45s (×1), actor 1, squad 0 (trace 6329): traveling overwatch. Knowledge: actor memory at 155.00s, trace 6204. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6800115819706622, 'next_transition': 6347}.
<a id="trace-6330"></a>
- 157.45s–157.45s (×1), actor 1, squad 0 (trace 6330): matching received arrivals: traveling stage complete. Knowledge: actor memory at 155.00s, trace 6204. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6800115819706622, 'next_transition': 6347}.
<a id="trace-6347"></a>
<a id="trace-6357"></a>
<a id="trace-6368"></a>
<a id="trace-6377"></a>
<a id="trace-6454"></a>
<a id="trace-6460"></a>
<a id="trace-6473"></a>
<a id="trace-6491"></a>
<a id="trace-6499"></a>
<a id="trace-6508"></a>
<a id="trace-6524"></a>
<a id="trace-6605"></a>
<a id="trace-6615"></a>
<a id="trace-6646"></a>
<a id="trace-6653"></a>
<a id="trace-6663"></a>
<a id="trace-6671"></a>
<a id="trace-6686"></a>
<a id="trace-6759"></a>
<a id="trace-6766"></a>
<a id="trace-6786"></a>
<a id="trace-6800"></a>
<a id="trace-6807"></a>
<a id="trace-6818"></a>
<a id="trace-6836"></a>
<a id="trace-6845"></a>
<a id="trace-6917"></a>
<a id="trace-6923"></a>
<a id="trace-6936"></a>
<a id="trace-6943"></a>
<a id="trace-6960"></a>
<a id="trace-6970"></a>
<a id="trace-6990"></a>
<a id="trace-6999"></a>
<a id="trace-7074"></a>
<a id="trace-7082"></a>
<a id="trace-7094"></a>
<a id="trace-7100"></a>
<a id="trace-7110"></a>
<a id="trace-7117"></a>
<a id="trace-7127"></a>
<a id="trace-7134"></a>
<a id="trace-7145"></a>
<a id="trace-7152"></a>
<a id="trace-7226"></a>
<a id="trace-7234"></a>
<a id="trace-7250"></a>
<a id="trace-7261"></a>
<a id="trace-7270"></a>
<a id="trace-7285"></a>
<a id="trace-7292"></a>
<a id="trace-7302"></a>
<a id="trace-7310"></a>
<a id="trace-7383"></a>
<a id="trace-7389"></a>
<a id="trace-7402"></a>
<a id="trace-7411"></a>
<a id="trace-7421"></a>
<a id="trace-7430"></a>
<a id="trace-7444"></a>
<a id="trace-7451"></a>
<a id="trace-7461"></a>
<a id="trace-7469"></a>
<a id="trace-7542"></a>
<a id="trace-7549"></a>
<a id="trace-7562"></a>
<a id="trace-7568"></a>
<a id="trace-7594"></a>
<a id="trace-7603"></a>
<a id="trace-7613"></a>
<a id="trace-7621"></a>
<a id="trace-7705"></a>
<a id="trace-7718"></a>
<a id="trace-7725"></a>
<a id="trace-7735"></a>
<a id="trace-7741"></a>
<a id="trace-7751"></a>
<a id="trace-7758"></a>
<a id="trace-7776"></a>
<a id="trace-7850"></a>
<a id="trace-7856"></a>
<a id="trace-7871"></a>
<a id="trace-7882"></a>
- 158.30s–206.80s (×83), actor 5, squad 0 (trace 6347): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 6205. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599753666022375, 'next_transition': 6357}.
<a id="trace-1600"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (events line 1600): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7889"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (trace 7889): renew committed intent (75 s lifetime). Knowledge: actor memory at 207.15s, trace 7889. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7895}.
<a id="trace-7895"></a>
<a id="trace-7902"></a>
<a id="trace-7912"></a>
<a id="trace-7927"></a>
<a id="trace-8007"></a>
<a id="trace-8015"></a>
<a id="trace-8027"></a>
<a id="trace-8034"></a>
<a id="trace-8045"></a>
<a id="trace-8053"></a>
<a id="trace-8074"></a>
<a id="trace-8084"></a>
<a id="trace-8092"></a>
<a id="trace-8165"></a>
<a id="trace-8191"></a>
<a id="trace-8200"></a>
<a id="trace-8206"></a>
<a id="trace-8217"></a>
<a id="trace-8234"></a>
<a id="trace-8245"></a>
<a id="trace-8318"></a>
<a id="trace-8325"></a>
<a id="trace-8347"></a>
<a id="trace-8364"></a>
<a id="trace-8373"></a>
<a id="trace-8379"></a>
<a id="trace-8389"></a>
<a id="trace-8398"></a>
<a id="trace-8471"></a>
<a id="trace-8479"></a>
<a id="trace-8495"></a>
<a id="trace-8510"></a>
<a id="trace-8521"></a>
<a id="trace-8531"></a>
<a id="trace-8539"></a>
<a id="trace-8554"></a>
<a id="trace-8633"></a>
<a id="trace-8647"></a>
<a id="trace-8654"></a>
<a id="trace-8665"></a>
<a id="trace-8672"></a>
<a id="trace-8691"></a>
<a id="trace-8703"></a>
<a id="trace-8713"></a>
<a id="trace-8785"></a>
<a id="trace-8803"></a>
<a id="trace-8810"></a>
<a id="trace-8820"></a>
<a id="trace-8827"></a>
<a id="trace-8838"></a>
<a id="trace-8844"></a>
<a id="trace-8855"></a>
<a id="trace-8866"></a>
<a id="trace-8939"></a>
<a id="trace-8948"></a>
<a id="trace-8967"></a>
<a id="trace-8978"></a>
<a id="trace-9000"></a>
<a id="trace-9010"></a>
<a id="trace-9018"></a>
<a id="trace-9091"></a>
<a id="trace-9099"></a>
<a id="trace-9114"></a>
<a id="trace-9131"></a>
<a id="trace-9147"></a>
<a id="trace-9157"></a>
<a id="trace-9167"></a>
<a id="trace-9175"></a>
<a id="trace-9248"></a>
<a id="trace-9254"></a>
<a id="trace-9268"></a>
<a id="trace-9275"></a>
<a id="trace-9286"></a>
<a id="trace-9296"></a>
<a id="trace-9305"></a>
<a id="trace-9312"></a>
<a id="trace-9322"></a>
<a id="trace-9330"></a>
<a id="trace-9407"></a>
<a id="trace-9414"></a>
<a id="trace-9432"></a>
<a id="trace-9442"></a>
<a id="trace-9450"></a>
<a id="trace-9460"></a>
<a id="trace-9469"></a>
<a id="trace-9486"></a>
<a id="trace-9566"></a>
<a id="trace-9579"></a>
<a id="trace-9604"></a>
<a id="trace-9614"></a>
<a id="trace-9621"></a>
<a id="trace-9632"></a>
<a id="trace-9641"></a>
<a id="trace-9733"></a>
<a id="trace-9740"></a>
<a id="trace-9757"></a>
<a id="trace-9773"></a>
<a id="trace-9785"></a>
<a id="trace-9794"></a>
<a id="trace-9874"></a>
<a id="trace-9892"></a>
<a id="trace-9903"></a>
<a id="trace-9912"></a>
<a id="trace-9922"></a>
<a id="trace-9929"></a>
<a id="trace-9939"></a>
<a id="trace-9947"></a>
<a id="trace-10020"></a>
- 207.30s–275.30s (×108), actor 5, squad 0 (trace 7895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.15s, trace 7889. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7902}.
<a id="trace-2122"></a>
- 276.20s–276.20s (×1), actor 5, squad 0 (events line 2122): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10038"></a>
- 276.20s–276.20s (×1), actor 5, squad 0 (trace 10038): renew committed intent (75 s lifetime). Knowledge: actor memory at 276.20s, trace 10038. Next observer evidence: None.
<a id="trace-10044"></a>
<a id="trace-10053"></a>
<a id="trace-10062"></a>
<a id="trace-10069"></a>
<a id="trace-10079"></a>
<a id="trace-10087"></a>
<a id="trace-10099"></a>
<a id="trace-10107"></a>
<a id="trace-10180"></a>
<a id="trace-10198"></a>
- 276.30s–281.30s (×10), actor 5, squad 0 (trace 10044): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 276.20s, trace 10038. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10053}.
<a id="trace-10211"></a>
- 282.20s–282.20s (×1), actor 1, squad 0 (trace 10211): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 280.00s, trace 10111. Next observer evidence: None.
<a id="trace-10212"></a>
- 282.20s–282.20s (×1), actor 1, squad 0 (trace 10212): MoveTactically. Knowledge: actor memory at 280.00s, trace 10111. Next observer evidence: None.
<a id="trace-10213"></a>
- 282.20s–282.20s (×1), actor 1, squad 0 (trace 10213): . Knowledge: actor memory at 280.00s, trace 10111. Next observer evidence: None.
<a id="trace-10218"></a>
<a id="trace-10230"></a>
<a id="trace-10239"></a>
<a id="trace-10245"></a>
<a id="trace-10260"></a>
<a id="trace-10270"></a>
<a id="trace-10348"></a>
<a id="trace-10357"></a>
<a id="trace-10372"></a>
<a id="trace-10378"></a>
<a id="trace-10388"></a>
<a id="trace-10395"></a>
<a id="trace-10405"></a>
<a id="trace-10413"></a>
<a id="trace-10425"></a>
<a id="trace-10433"></a>
<a id="trace-10508"></a>
<a id="trace-10526"></a>
<a id="trace-10534"></a>
<a id="trace-10546"></a>
<a id="trace-10552"></a>
<a id="trace-10586"></a>
<a id="trace-10665"></a>
<a id="trace-10677"></a>
<a id="trace-10686"></a>
<a id="trace-10698"></a>
<a id="trace-10715"></a>
<a id="trace-10721"></a>
<a id="trace-10733"></a>
<a id="trace-10815"></a>
<a id="trace-10823"></a>
<a id="trace-10833"></a>
<a id="trace-10849"></a>
<a id="trace-10856"></a>
<a id="trace-10866"></a>
<a id="trace-10893"></a>
<a id="trace-10969"></a>
<a id="trace-10978"></a>
<a id="trace-11004"></a>
<a id="trace-11042"></a>
<a id="trace-11120"></a>
<a id="trace-11128"></a>
<a id="trace-11139"></a>
<a id="trace-11147"></a>
<a id="trace-11159"></a>
<a id="trace-11175"></a>
<a id="trace-11190"></a>
<a id="trace-11198"></a>
<a id="trace-11280"></a>
<a id="trace-11291"></a>
<a id="trace-11298"></a>
<a id="trace-11312"></a>
<a id="trace-11346"></a>
<a id="trace-11353"></a>
<a id="trace-11434"></a>
<a id="trace-11445"></a>
<a id="trace-11452"></a>
<a id="trace-11463"></a>
<a id="trace-11469"></a>
<a id="trace-11479"></a>
<a id="trace-11488"></a>
<a id="trace-11500"></a>
<a id="trace-11511"></a>
<a id="trace-11587"></a>
<a id="trace-11593"></a>
<a id="trace-11610"></a>
<a id="trace-11620"></a>
<a id="trace-11627"></a>
<a id="trace-11637"></a>
<a id="trace-11652"></a>
<a id="trace-11736"></a>
<a id="trace-11744"></a>
<a id="trace-11758"></a>
<a id="trace-11776"></a>
<a id="trace-11783"></a>
<a id="trace-11799"></a>
<a id="trace-11809"></a>
<a id="trace-11816"></a>
<a id="trace-11891"></a>
<a id="trace-11898"></a>
<a id="trace-11909"></a>
<a id="trace-11918"></a>
<a id="trace-11934"></a>
<a id="trace-11956"></a>
<a id="trace-11973"></a>
<a id="trace-12048"></a>
<a id="trace-12054"></a>
<a id="trace-12065"></a>
<a id="trace-12072"></a>
<a id="trace-12089"></a>
<a id="trace-12105"></a>
<a id="trace-12116"></a>
- 282.30s–344.30s (×92), actor 5, squad 0 (trace 10218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 10112. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10230}.
<a id="trace-2652"></a>
- 345.20s–345.20s (×1), actor 5, squad 0 (events line 2652): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12145"></a>
- 345.20s–345.20s (×1), actor 5, squad 0 (trace 12145): renew committed intent (75 s lifetime). Knowledge: actor memory at 345.20s, trace 12145. Next observer evidence: None.
<a id="trace-12206"></a>
<a id="trace-12223"></a>
<a id="trace-12229"></a>
<a id="trace-12239"></a>
<a id="trace-12246"></a>
<a id="trace-12256"></a>
<a id="trace-12264"></a>
<a id="trace-12273"></a>
<a id="trace-12280"></a>
<a id="trace-12357"></a>
- 345.30s–350.30s (×10), actor 5, squad 0 (trace 12206): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.20s, trace 12145. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12223}.
<a id="trace-12362"></a>
- 350.55s–350.55s (×1), actor 1, squad 0 (trace 12362): received platoon directive. Knowledge: actor memory at 350.00s, trace 12289. Next observer evidence: {'until': 350.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12365}.
<a id="trace-12365"></a>
<a id="trace-12378"></a>
<a id="trace-12389"></a>
<a id="trace-12399"></a>
<a id="trace-12415"></a>
<a id="trace-12439"></a>
<a id="trace-12528"></a>
<a id="trace-12545"></a>
<a id="trace-12554"></a>
<a id="trace-12566"></a>
<a id="trace-12573"></a>
<a id="trace-12586"></a>
<a id="trace-12594"></a>
- 350.80s–359.80s (×13), actor 5, squad 0 (trace 12365): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 12290. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12378}.

## Net delivery

64 matched order/radio deliveries; 245 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.255s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1056: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1057: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1763: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1767: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1768: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1769: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1770: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1980: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1983: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1984: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1985: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1986: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1987: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2148: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2150: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2151: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2152: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2153: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2154: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2155: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2386: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2387: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2388: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2389: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2390: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2391: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2527: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2528: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2529: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2530: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2531: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2532: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2641: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2642: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2643: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2644: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2645: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2646: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 2796: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 2797: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 2798: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 2799: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 2800: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 2801: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 2946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 2947: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 2948: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 2949: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 2950: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 2951: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 2952: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3115: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3116: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3117: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3118: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3119: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3120: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3269: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3270: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3271: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3272: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3273: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3274: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3422: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3423: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3424: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3425: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3426: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3427: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 3575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 3576: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 3577: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 3578: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 3579: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 3580: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 3581: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.80s leader 5, trace 3690: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.80s leader 5, trace 3691: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 3733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 3734: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 3735: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 3736: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 3737: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 3738: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 3739: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 3899: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 3900: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 3901: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 3902: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 3903: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 3904: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 3905: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4071: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4072: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4073: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4074: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4075: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4076: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4077: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4224: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4225: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4226: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4227: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4228: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4229: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4230: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 4378: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 4379: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 4380: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 4381: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 4382: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 4383: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 4384: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 4531: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 4532: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 4533: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 4534: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 4535: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 4536: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 4537: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 4685: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 4686: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 4687: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 4688: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 4689: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 4690: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 4691: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 4838: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 4839: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 4840: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 4841: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 4842: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 4843: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 4844: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 4996: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 4997: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 4998: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 4999: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 5000: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 5001: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 5002: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5152: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5153: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5154: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5155: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 5304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 5305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 5306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 5307: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 5308: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 5309: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 5310: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 5478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 5479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 5523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 5524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 5525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 5526: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 5527: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 5528: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 5529: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 5775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 5776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 5777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 5778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 5779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 5780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 5781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 5957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 5958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 5959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 5960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 5961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 5962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 5963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 6204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 6206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 6207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 6692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 6693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 6694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 6695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 6696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 6697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 6698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 6848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 6849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 6850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 6851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 6852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 6853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 6854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 7003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 7157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 7159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 7314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 7632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 7634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 7781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 7782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 7783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 7784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 7785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 7786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 7787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.15s leader 5, trace 7889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 7938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 7939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 7940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 7941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 7942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 7943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 7944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 8097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 8249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 8251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 8716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 8718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 8870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 8871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 8872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 8873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 8874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 8875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 8876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 9179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 9335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 9644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 9798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 9799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 9800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 9801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 9802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 9803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 9804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 9952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 9953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 9954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 9955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 9956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 9957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 9958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 276.20s leader 5, trace 10038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 10111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 10278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 10746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 10748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 10901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 10902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 10903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 10904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 10905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 10906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 10907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 11204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 11361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 11666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 11823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 11824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 11825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 11826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 11827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 11828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 11829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 11979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 11980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 11981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 11982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 11983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 11984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 11985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.20s leader 5, trace 12145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 12289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
