# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/108/good-azure/battle-108-1789673688993492623`

## Battle summary

**Ember** · 360 s · 282 shots.

### Turning points

- 14.3s, squad 4: contact (events line 157). First recorded contact.
- 22.5s, squad 0: withdrawal ([trace 1989](#trace-1989)). 33.9s, squad 0: took cover and returned fire.
- 32.9s, squad 0: help call ([trace 2638](#trace-2638)). No completion observed before termination.
- 37.9s, squad 0: withdrawal ([trace 2832](#trace-2832)). 58.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 68.5s, squad 0: withdrawal ([trace 4106](#trace-4106)). 113.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 187.4s, squad 0: withdrawal ([trace 9886](#trace-9886)). 221.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 204.4s, squad 0: help call ([trace 10789](#trace-10789)). No completion observed before termination.
- 233.7s, squad 0: withdrawal ([trace 11997](#trace-11997)). 283.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 326.6s, squad 0: help call ([trace 16360](#trace-16360)). No completion observed before termination.
- 343.8s, squad 0: withdrawal ([trace 17097](#trace-17097)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 48 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 234 shots, 1/6 lost.

### Decisions and attribution

At 337.6s, squad 0 chose advanced tactically ([trace 16780](#trace-16780)), followed by 2 shots and 0 own casualties; estimate 1.4 against 0 distinct squad-reported contacts; At 185.8s, squad 0 chose FightHere: nearest known group ([trace 9834](#trace-9834)), followed by 1 shots and 0 own casualties; estimate 3.9 against 3 distinct squad-reported contacts; At 340.0s, squad 0 chose took cover and returned fire ([trace 16884](#trace-16884)), followed by 1 shots and 0 own casualties; estimate 1.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 388](#trace-388)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
- 21.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477291 retreat threshold=0.500000 initiative=delegated ([trace 1922](#trace-1922)). Following evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15694383378946472, 'next_transition': 1934}.

### Communication

298 matched deliveries (mean 0.25s, max 1.50s); 248 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.35s, squad 4, contact, evidence events line 157: First recorded contact; .
- 22.45s, squad 0, withdrawal, evidence 1989: BreakContact: believed ratio at least two without superiority; 33.9s, squad 0: took cover and returned fire.
- 32.90s, squad 0, help call, evidence 2638: NeedSupport; No completion observed before termination.
- 37.85s, squad 0, withdrawal, evidence 2832: BreakContact: believed ratio at least two without superiority; 58.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 68.45s, squad 0, withdrawal, evidence 4106: Withdraw to received rally; 113.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 187.45s, squad 0, withdrawal, evidence 9886: BreakContact: believed ratio at least two without superiority; 221.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 204.40s, squad 0, help call, evidence 10789: NeedSupport; No completion observed before termination.
- 233.70s, squad 0, withdrawal, evidence 11997: Withdraw to received rally; 283.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 326.55s, squad 0, help call, evidence 16360: NeedSupport; No completion observed before termination.
- 343.75s, squad 0, withdrawal, evidence 17097: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-323"></a>
<a id="trace-341"></a>
<a id="trace-357"></a>
<a id="trace-372"></a>
<a id="trace-383"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200042408263083, 'next_transition': 341}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-388"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 388): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 388. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-389"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 389): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 389. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-402"></a>
<a id="trace-421"></a>
<a id="trace-495"></a>
<a id="trace-507"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 389. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.799996465134876, 'next_transition': 421}.
<a id="trace-509"></a>
<a id="trace-661"></a>
<a id="trace-685"></a>
<a id="trace-707"></a>
<a id="trace-727"></a>
<a id="trace-752"></a>
<a id="trace-783"></a>
<a id="trace-800"></a>
<a id="trace-896"></a>
<a id="trace-909"></a>
<a id="trace-925"></a>
<a id="trace-938"></a>
<a id="trace-957"></a>
<a id="trace-975"></a>
<a id="trace-988"></a>
<a id="trace-1128"></a>
<a id="trace-1149"></a>
<a id="trace-1230"></a>
<a id="trace-1238"></a>
<a id="trace-1256"></a>
<a id="trace-1283"></a>
<a id="trace-1504"></a>
<a id="trace-1530"></a>
<a id="trace-1777"></a>
<a id="trace-1800"></a>
<a id="trace-1890"></a>
<a id="trace-1911"></a>
<a id="trace-1936"></a>
<a id="trace-1957"></a>
<a id="trace-1975"></a>
<a id="trace-2231"></a>
<a id="trace-2268"></a>
<a id="trace-2287"></a>
<a id="trace-2383"></a>
<a id="trace-2391"></a>
<a id="trace-2418"></a>
<a id="trace-2432"></a>
<a id="trace-2442"></a>
<a id="trace-2451"></a>
<a id="trace-2466"></a>
<a id="trace-2482"></a>
<a id="trace-2585"></a>
<a id="trace-2613"></a>
<a id="trace-2623"></a>
<a id="trace-2636"></a>
<a id="trace-2684"></a>
<a id="trace-2698"></a>
<a id="trace-2777"></a>
<a id="trace-2784"></a>
<a id="trace-2799"></a>
<a id="trace-2818"></a>
<a id="trace-2825"></a>
<a id="trace-2899"></a>
<a id="trace-2909"></a>
<a id="trace-2924"></a>
<a id="trace-2932"></a>
<a id="trace-3009"></a>
<a id="trace-3027"></a>
<a id="trace-3035"></a>
<a id="trace-3073"></a>
<a id="trace-3080"></a>
<a id="trace-3094"></a>
<a id="trace-3111"></a>
<a id="trace-3183"></a>
<a id="trace-3191"></a>
<a id="trace-3209"></a>
<a id="trace-3215"></a>
<a id="trace-3225"></a>
<a id="trace-3233"></a>
<a id="trace-3250"></a>
<a id="trace-3262"></a>
<a id="trace-3273"></a>
<a id="trace-3386"></a>
<a id="trace-3471"></a>
<a id="trace-3486"></a>
<a id="trace-3496"></a>
<a id="trace-3513"></a>
<a id="trace-3531"></a>
<a id="trace-3544"></a>
<a id="trace-3555"></a>
<a id="trace-3564"></a>
<a id="trace-3581"></a>
<a id="trace-3589"></a>
<a id="trace-3665"></a>
<a id="trace-3674"></a>
<a id="trace-3688"></a>
<a id="trace-3705"></a>
<a id="trace-3714"></a>
<a id="trace-3723"></a>
<a id="trace-3754"></a>
<a id="trace-3776"></a>
<a id="trace-3790"></a>
<a id="trace-3891"></a>
<a id="trace-3908"></a>
<a id="trace-3923"></a>
<a id="trace-3933"></a>
<a id="trace-3943"></a>
<a id="trace-3949"></a>
<a id="trace-3964"></a>
<a id="trace-4079"></a>
<a id="trace-4096"></a>
<a id="trace-4166"></a>
<a id="trace-4180"></a>
<a id="trace-4195"></a>
<a id="trace-4276"></a>
<a id="trace-4294"></a>
<a id="trace-4300"></a>
<a id="trace-4316"></a>
<a id="trace-4328"></a>
<a id="trace-4343"></a>
<a id="trace-4351"></a>
<a id="trace-4367"></a>
<a id="trace-4379"></a>
<a id="trace-4451"></a>
<a id="trace-4458"></a>
<a id="trace-4472"></a>
<a id="trace-4480"></a>
<a id="trace-4493"></a>
<a id="trace-4499"></a>
<a id="trace-4518"></a>
<a id="trace-4528"></a>
<a id="trace-4536"></a>
<a id="trace-4549"></a>
<a id="trace-4744"></a>
<a id="trace-4770"></a>
<a id="trace-4780"></a>
<a id="trace-4797"></a>
<a id="trace-4820"></a>
<a id="trace-4827"></a>
<a id="trace-4842"></a>
<a id="trace-4852"></a>
<a id="trace-4931"></a>
<a id="trace-4953"></a>
<a id="trace-4968"></a>
<a id="trace-4981"></a>
<a id="trace-5008"></a>
<a id="trace-5017"></a>
<a id="trace-5030"></a>
<a id="trace-5038"></a>
<a id="trace-5122"></a>
<a id="trace-5136"></a>
<a id="trace-5155"></a>
<a id="trace-5236"></a>
<a id="trace-5247"></a>
<a id="trace-5277"></a>
<a id="trace-5288"></a>
<a id="trace-5365"></a>
<a id="trace-5376"></a>
<a id="trace-5394"></a>
<a id="trace-5401"></a>
<a id="trace-5415"></a>
<a id="trace-5421"></a>
<a id="trace-5445"></a>
<a id="trace-5458"></a>
<a id="trace-5467"></a>
<a id="trace-5544"></a>
<a id="trace-5551"></a>
<a id="trace-5569"></a>
<a id="trace-5603"></a>
<a id="trace-5719"></a>
<a id="trace-5732"></a>
<a id="trace-5751"></a>
<a id="trace-5761"></a>
<a id="trace-5855"></a>
<a id="trace-5878"></a>
<a id="trace-5890"></a>
<a id="trace-5897"></a>
<a id="trace-5913"></a>
<a id="trace-5929"></a>
<a id="trace-5947"></a>
<a id="trace-6030"></a>
<a id="trace-6039"></a>
<a id="trace-6051"></a>
<a id="trace-6061"></a>
<a id="trace-6077"></a>
<a id="trace-6102"></a>
<a id="trace-6116"></a>
<a id="trace-6139"></a>
<a id="trace-6156"></a>
<a id="trace-6231"></a>
<a id="trace-6263"></a>
<a id="trace-6290"></a>
<a id="trace-6297"></a>
<a id="trace-6311"></a>
<a id="trace-6318"></a>
<a id="trace-6327"></a>
<a id="trace-6334"></a>
<a id="trace-6406"></a>
<a id="trace-6411"></a>
<a id="trace-6437"></a>
<a id="trace-6445"></a>
<a id="trace-6459"></a>
<a id="trace-6470"></a>
<a id="trace-6479"></a>
<a id="trace-6646"></a>
<a id="trace-6723"></a>
<a id="trace-6894"></a>
<a id="trace-6910"></a>
<a id="trace-6941"></a>
<a id="trace-6952"></a>
<a id="trace-6988"></a>
<a id="trace-6998"></a>
<a id="trace-7011"></a>
<a id="trace-7092"></a>
<a id="trace-7100"></a>
<a id="trace-7118"></a>
<a id="trace-7129"></a>
<a id="trace-7147"></a>
<a id="trace-7161"></a>
<a id="trace-7174"></a>
<a id="trace-7275"></a>
<a id="trace-7300"></a>
<a id="trace-7313"></a>
<a id="trace-7324"></a>
<a id="trace-7362"></a>
<a id="trace-7531"></a>
<a id="trace-7619"></a>
<a id="trace-7647"></a>
<a id="trace-7664"></a>
<a id="trace-7676"></a>
<a id="trace-7688"></a>
<a id="trace-7709"></a>
<a id="trace-7745"></a>
<a id="trace-7820"></a>
<a id="trace-7845"></a>
<a id="trace-7856"></a>
<a id="trace-7875"></a>
<a id="trace-7917"></a>
<a id="trace-7930"></a>
<a id="trace-8010"></a>
<a id="trace-8018"></a>
<a id="trace-8029"></a>
<a id="trace-8037"></a>
<a id="trace-8055"></a>
<a id="trace-8073"></a>
<a id="trace-8088"></a>
<a id="trace-8107"></a>
<a id="trace-8114"></a>
<a id="trace-8217"></a>
<a id="trace-8222"></a>
<a id="trace-8232"></a>
<a id="trace-8416"></a>
<a id="trace-8434"></a>
<a id="trace-8512"></a>
<a id="trace-8524"></a>
<a id="trace-8541"></a>
<a id="trace-8549"></a>
<a id="trace-8567"></a>
<a id="trace-8573"></a>
<a id="trace-8587"></a>
<a id="trace-8609"></a>
<a id="trace-8626"></a>
<a id="trace-8703"></a>
<a id="trace-8711"></a>
<a id="trace-8734"></a>
<a id="trace-8742"></a>
<a id="trace-8755"></a>
<a id="trace-8781"></a>
<a id="trace-8895"></a>
<a id="trace-8903"></a>
<a id="trace-8912"></a>
<a id="trace-8986"></a>
<a id="trace-9002"></a>
<a id="trace-9019"></a>
<a id="trace-9034"></a>
<a id="trace-9052"></a>
<a id="trace-9062"></a>
<a id="trace-9136"></a>
<a id="trace-9142"></a>
<a id="trace-9156"></a>
<a id="trace-9169"></a>
<a id="trace-9191"></a>
<a id="trace-9207"></a>
<a id="trace-9319"></a>
<a id="trace-9333"></a>
<a id="trace-9347"></a>
<a id="trace-9420"></a>
<a id="trace-9439"></a>
<a id="trace-9459"></a>
<a id="trace-9468"></a>
<a id="trace-9574"></a>
<a id="trace-9605"></a>
<a id="trace-9705"></a>
<a id="trace-9722"></a>
<a id="trace-9747"></a>
<a id="trace-9832"></a>
<a id="trace-9864"></a>
<a id="trace-9872"></a>
<a id="trace-10047"></a>
<a id="trace-10068"></a>
<a id="trace-10083"></a>
<a id="trace-10099"></a>
<a id="trace-10112"></a>
<a id="trace-10210"></a>
<a id="trace-10224"></a>
<a id="trace-10236"></a>
<a id="trace-10253"></a>
<a id="trace-10270"></a>
<a id="trace-10288"></a>
<a id="trace-10315"></a>
<a id="trace-10328"></a>
<a id="trace-10424"></a>
<a id="trace-10438"></a>
<a id="trace-10447"></a>
<a id="trace-10469"></a>
<a id="trace-10481"></a>
<a id="trace-10489"></a>
<a id="trace-10582"></a>
<a id="trace-10698"></a>
<a id="trace-10710"></a>
<a id="trace-10734"></a>
<a id="trace-10745"></a>
<a id="trace-10762"></a>
<a id="trace-10774"></a>
<a id="trace-10787"></a>
<a id="trace-10887"></a>
<a id="trace-10908"></a>
<a id="trace-10933"></a>
<a id="trace-10961"></a>
<a id="trace-10981"></a>
<a id="trace-11061"></a>
<a id="trace-11072"></a>
<a id="trace-11083"></a>
<a id="trace-11090"></a>
<a id="trace-11107"></a>
<a id="trace-11122"></a>
<a id="trace-11141"></a>
<a id="trace-11161"></a>
<a id="trace-11238"></a>
<a id="trace-11245"></a>
<a id="trace-11263"></a>
<a id="trace-11341"></a>
<a id="trace-11347"></a>
<a id="trace-11374"></a>
<a id="trace-11386"></a>
<a id="trace-11396"></a>
<a id="trace-11410"></a>
<a id="trace-11484"></a>
<a id="trace-11499"></a>
<a id="trace-11540"></a>
<a id="trace-11559"></a>
<a id="trace-11628"></a>
<a id="trace-11655"></a>
<a id="trace-11675"></a>
<a id="trace-11762"></a>
<a id="trace-11777"></a>
<a id="trace-11783"></a>
<a id="trace-11792"></a>
<a id="trace-11798"></a>
<a id="trace-11812"></a>
<a id="trace-11836"></a>
<a id="trace-11927"></a>
<a id="trace-11936"></a>
<a id="trace-11957"></a>
<a id="trace-11974"></a>
<a id="trace-11985"></a>
<a id="trace-11994"></a>
<a id="trace-12056"></a>
<a id="trace-12075"></a>
<a id="trace-12087"></a>
<a id="trace-12175"></a>
<a id="trace-12232"></a>
<a id="trace-12247"></a>
<a id="trace-12370"></a>
<a id="trace-12376"></a>
<a id="trace-12390"></a>
<a id="trace-12419"></a>
<a id="trace-12436"></a>
<a id="trace-12448"></a>
<a id="trace-12523"></a>
<a id="trace-12638"></a>
<a id="trace-12657"></a>
<a id="trace-12689"></a>
<a id="trace-12709"></a>
<a id="trace-12736"></a>
<a id="trace-12832"></a>
<a id="trace-12848"></a>
<a id="trace-12855"></a>
<a id="trace-12887"></a>
<a id="trace-12904"></a>
<a id="trace-12919"></a>
<a id="trace-12929"></a>
<a id="trace-13004"></a>
<a id="trace-13013"></a>
<a id="trace-13031"></a>
<a id="trace-13040"></a>
<a id="trace-13057"></a>
<a id="trace-13066"></a>
<a id="trace-13084"></a>
<a id="trace-13105"></a>
<a id="trace-13112"></a>
<a id="trace-13192"></a>
<a id="trace-13215"></a>
<a id="trace-13297"></a>
<a id="trace-13304"></a>
<a id="trace-13319"></a>
<a id="trace-13335"></a>
<a id="trace-13349"></a>
<a id="trace-13362"></a>
<a id="trace-13451"></a>
<a id="trace-13460"></a>
<a id="trace-13475"></a>
<a id="trace-13485"></a>
<a id="trace-13495"></a>
<a id="trace-13504"></a>
<a id="trace-13517"></a>
<a id="trace-13526"></a>
<a id="trace-13539"></a>
<a id="trace-13547"></a>
<a id="trace-13626"></a>
<a id="trace-13636"></a>
<a id="trace-13646"></a>
<a id="trace-13654"></a>
<a id="trace-13681"></a>
<a id="trace-13800"></a>
<a id="trace-13811"></a>
<a id="trace-13832"></a>
<a id="trace-13846"></a>
<a id="trace-13920"></a>
<a id="trace-13931"></a>
<a id="trace-13951"></a>
<a id="trace-13973"></a>
<a id="trace-13980"></a>
<a id="trace-13999"></a>
<a id="trace-14007"></a>
<a id="trace-14019"></a>
<a id="trace-14034"></a>
<a id="trace-14136"></a>
<a id="trace-14145"></a>
<a id="trace-14161"></a>
<a id="trace-14172"></a>
<a id="trace-14187"></a>
<a id="trace-14200"></a>
<a id="trace-14312"></a>
<a id="trace-14327"></a>
<a id="trace-14344"></a>
<a id="trace-14351"></a>
<a id="trace-14375"></a>
<a id="trace-14391"></a>
<a id="trace-14404"></a>
<a id="trace-14419"></a>
<a id="trace-14425"></a>
<a id="trace-14609"></a>
<a id="trace-14628"></a>
<a id="trace-14643"></a>
<a id="trace-14663"></a>
<a id="trace-14708"></a>
<a id="trace-14717"></a>
<a id="trace-14798"></a>
<a id="trace-14816"></a>
<a id="trace-14840"></a>
<a id="trace-14852"></a>
<a id="trace-15044"></a>
<a id="trace-15059"></a>
<a id="trace-15145"></a>
<a id="trace-15157"></a>
<a id="trace-15180"></a>
<a id="trace-15193"></a>
<a id="trace-15209"></a>
<a id="trace-15220"></a>
<a id="trace-15235"></a>
<a id="trace-15247"></a>
<a id="trace-15260"></a>
<a id="trace-15275"></a>
<a id="trace-15353"></a>
<a id="trace-15364"></a>
<a id="trace-15402"></a>
<a id="trace-15411"></a>
<a id="trace-15427"></a>
<a id="trace-15445"></a>
<a id="trace-15458"></a>
<a id="trace-15549"></a>
<a id="trace-15558"></a>
<a id="trace-15576"></a>
<a id="trace-15594"></a>
<a id="trace-15601"></a>
<a id="trace-15774"></a>
<a id="trace-15784"></a>
<a id="trace-15814"></a>
<a id="trace-15891"></a>
<a id="trace-15921"></a>
<a id="trace-15931"></a>
<a id="trace-15948"></a>
<a id="trace-15974"></a>
<a id="trace-15985"></a>
<a id="trace-16000"></a>
<a id="trace-16088"></a>
<a id="trace-16139"></a>
<a id="trace-16147"></a>
<a id="trace-16162"></a>
<a id="trace-16170"></a>
<a id="trace-16202"></a>
<a id="trace-16278"></a>
<a id="trace-16339"></a>
<a id="trace-16351"></a>
<a id="trace-16411"></a>
<a id="trace-16421"></a>
<a id="trace-16443"></a>
<a id="trace-16470"></a>
<a id="trace-16481"></a>
<a id="trace-16559"></a>
<a id="trace-16565"></a>
<a id="trace-16606"></a>
<a id="trace-16619"></a>
<a id="trace-16625"></a>
<a id="trace-16643"></a>
<a id="trace-16649"></a>
<a id="trace-16720"></a>
<a id="trace-16749"></a>
<a id="trace-16761"></a>
<a id="trace-16777"></a>
<a id="trace-16851"></a>
<a id="trace-16860"></a>
<a id="trace-16874"></a>
<a id="trace-16882"></a>
<a id="trace-17038"></a>
<a id="trace-17058"></a>
<a id="trace-17072"></a>
<a id="trace-17084"></a>
<a id="trace-17092"></a>
<a id="trace-17216"></a>
<a id="trace-17323"></a>
<a id="trace-17339"></a>
<a id="trace-17353"></a>
<a id="trace-17363"></a>
<a id="trace-17372"></a>
<a id="trace-17385"></a>
<a id="trace-17392"></a>
<a id="trace-17403"></a>
<a id="trace-17416"></a>
<a id="trace-17494"></a>
<a id="trace-17506"></a>
<a id="trace-17516"></a>
<a id="trace-17526"></a>
<a id="trace-17542"></a>
<a id="trace-17555"></a>
<a id="trace-17560"></a>
<a id="trace-17567"></a>
<a id="trace-17574"></a>
<a id="trace-17648"></a>
<a id="trace-17654"></a>
<a id="trace-17659"></a>
<a id="trace-17665"></a>
<a id="trace-17681"></a>
<a id="trace-17688"></a>
<a id="trace-17695"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 509): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 434. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623503842739046, 'next_transition': 661}.
<a id="trace-518"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 518): traveling overwatch. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5570094391110296, 'next_transition': 659}.
<a id="trace-519"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 519): received platoon directive. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5570094391110296, 'next_transition': 659}.
<a id="trace-659"></a>
<a id="trace-683"></a>
<a id="trace-705"></a>
<a id="trace-725"></a>
<a id="trace-750"></a>
<a id="trace-781"></a>
<a id="trace-798"></a>
<a id="trace-811"></a>
<a id="trace-894"></a>
<a id="trace-907"></a>
<a id="trace-923"></a>
<a id="trace-936"></a>
<a id="trace-955"></a>
<a id="trace-973"></a>
<a id="trace-986"></a>
<a id="trace-997"></a>
- 6.20s–13.70s (×16), actor 5, squad 0 (trace 659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 428. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.84356598480356, 'next_transition': 683}.
<a id="trace-1007"></a>
- 13.95s–13.95s (×1), actor 0, squad 0 (trace 1007): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 816. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1126}.
<a id="trace-1126"></a>
<a id="trace-1147"></a>
<a id="trace-1228"></a>
<a id="trace-1236"></a>
<a id="trace-1254"></a>
<a id="trace-1273"></a>
<a id="trace-1281"></a>
- 14.20s–17.25s (×7), actor 5, squad 0 (trace 1126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 819. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026250438942890943, 'next_transition': 1147}.
<a id="trace-1289"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1289): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1153. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1502}.
<a id="trace-1290"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1290): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1153. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1502}.
<a id="trace-1291"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1291): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1153. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1502}.
<a id="trace-1502"></a>
<a id="trace-1528"></a>
<a id="trace-1547"></a>
- 17.75s–18.75s (×3), actor 5, squad 0 (trace 1502): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 18.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4126246497732746, 'next_transition': 1528}.
<a id="trace-1549"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1549): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1153. Next observer evidence: {'until': 19.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48232672778593805, 'next_transition': 1775}.
<a id="trace-1775"></a>
<a id="trace-1798"></a>
<a id="trace-1888"></a>
<a id="trace-1909"></a>
- 19.25s–20.75s (×4), actor 5, squad 0 (trace 1775): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18325537250100243, 'next_transition': 1798}.
<a id="trace-259"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 259): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1921"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1921): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 21.05s, trace 1921. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15694383378946472, 'next_transition': 1934}.
<a id="trace-1922"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1922): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477291 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1922. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15694383378946472, 'next_transition': 1934}.
<a id="trace-1923"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1923): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477291 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15694383378946472, 'next_transition': 1934}.
<a id="trace-1934"></a>
<a id="trace-1955"></a>
<a id="trace-1973"></a>
- 21.25s–22.25s (×3), actor 5, squad 0 (trace 1934): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09210339963842216, 'next_transition': 1955}.
<a id="trace-1989"></a>
- 22.45s–22.45s (×1), actor 0, squad 0 (trace 1989): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 1810. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04553494094892641, 'next_transition': 2229}.
<a id="trace-1990"></a>
- 22.45s–22.45s (×1), actor 0, squad 0 (trace 1990): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 1810. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04553494094892641, 'next_transition': 2229}.
<a id="trace-2229"></a>
<a id="trace-2249"></a>
<a id="trace-2266"></a>
<a id="trace-2285"></a>
<a id="trace-2303"></a>
<a id="trace-2381"></a>
<a id="trace-2389"></a>
<a id="trace-2416"></a>
<a id="trace-2430"></a>
<a id="trace-2440"></a>
<a id="trace-2449"></a>
<a id="trace-2464"></a>
<a id="trace-2480"></a>
<a id="trace-2492"></a>
<a id="trace-2500"></a>
<a id="trace-2583"></a>
<a id="trace-2591"></a>
<a id="trace-2602"></a>
<a id="trace-2611"></a>
<a id="trace-2621"></a>
<a id="trace-2634"></a>
- 22.75s–32.75s (×21), actor 5, squad 0 (trace 2229): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 23.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14272879434827135, 'next_transition': 2249}.
<a id="trace-2637"></a>
- 32.90s–32.90s (×1), actor 1, squad 0 (trace 2637): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 30.00s, trace 2507. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.75600954911784, 'next_transition': 2648}.
<a id="trace-2638"></a>
- 32.90s–32.90s (×1), actor 1, squad 0 (trace 2638): NeedSupport. Knowledge: actor memory at 30.00s, trace 2507. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.75600954911784, 'next_transition': 2648}.
<a id="trace-2648"></a>
<a id="trace-2653"></a>
- 33.25s–33.75s (×2), actor 5, squad 0 (trace 2648): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2509. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559830996141802, 'next_transition': 2653}.
<a id="trace-2656"></a>
- 33.90s–33.90s (×1), actor 1, squad 0 (trace 2656): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2507. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559930865027518, 'next_transition': 2682}.
<a id="trace-2660"></a>
- 33.90s–33.90s (×1), actor 1, squad 0 (trace 2660): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2507. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559930865027518, 'next_transition': 2682}.
<a id="trace-2661"></a>
- 33.90s–33.90s (×1), actor 1, squad 0 (trace 2661): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 2507. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559930865027518, 'next_transition': 2682}.
<a id="trace-2682"></a>
<a id="trace-2696"></a>
<a id="trace-2775"></a>
<a id="trace-2782"></a>
<a id="trace-2797"></a>
<a id="trace-2816"></a>
<a id="trace-2823"></a>
<a id="trace-2828"></a>
- 34.25s–37.75s (×8), actor 5, squad 0 (trace 2682): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2509. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560104892045981, 'next_transition': 2696}.
<a id="trace-2832"></a>
- 37.85s–37.85s (×1), actor 1, squad 0 (trace 2832): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 2700. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520001785713656, 'next_transition': 2897}.
<a id="trace-2833"></a>
- 37.85s–37.85s (×1), actor 1, squad 0 (trace 2833): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 2700. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520001785713656, 'next_transition': 2897}.
<a id="trace-2897"></a>
<a id="trace-2907"></a>
<a id="trace-2922"></a>
<a id="trace-2930"></a>
<a id="trace-3007"></a>
<a id="trace-3025"></a>
<a id="trace-3033"></a>
<a id="trace-3041"></a>
<a id="trace-3055"></a>
<a id="trace-3061"></a>
<a id="trace-3071"></a>
<a id="trace-3078"></a>
<a id="trace-3092"></a>
<a id="trace-3109"></a>
<a id="trace-3181"></a>
<a id="trace-3189"></a>
<a id="trace-3207"></a>
<a id="trace-3213"></a>
<a id="trace-3223"></a>
<a id="trace-3231"></a>
<a id="trace-3248"></a>
<a id="trace-3260"></a>
<a id="trace-3271"></a>
- 38.25s–49.25s (×23), actor 5, squad 0 (trace 2897): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2702. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2835038101080626, 'next_transition': 2907}.
<a id="trace-3277"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 3277): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 3113. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198245653219675, 'next_transition': 3384}.
<a id="trace-3278"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 3278): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 3113. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198245653219675, 'next_transition': 3384}.
<a id="trace-3384"></a>
<a id="trace-3469"></a>
<a id="trace-3484"></a>
<a id="trace-3494"></a>
<a id="trace-3511"></a>
<a id="trace-3529"></a>
<a id="trace-3542"></a>
<a id="trace-3553"></a>
<a id="trace-3562"></a>
<a id="trace-3579"></a>
<a id="trace-3587"></a>
<a id="trace-3663"></a>
<a id="trace-3672"></a>
<a id="trace-3686"></a>
<a id="trace-3703"></a>
<a id="trace-3712"></a>
<a id="trace-3721"></a>
- 49.75s–57.75s (×17), actor 5, squad 0 (trace 3384): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3115. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18901453065835733, 'next_transition': 3469}.
<a id="trace-3733"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 3733): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 3593. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35399540868687585, 'next_transition': 3745}.
<a id="trace-3745"></a>
<a id="trace-3752"></a>
<a id="trace-3774"></a>
<a id="trace-3788"></a>
<a id="trace-3869"></a>
<a id="trace-3889"></a>
<a id="trace-3899"></a>
<a id="trace-3906"></a>
<a id="trace-3921"></a>
<a id="trace-3931"></a>
<a id="trace-3941"></a>
<a id="trace-3947"></a>
<a id="trace-3962"></a>
<a id="trace-3970"></a>
<a id="trace-4048"></a>
<a id="trace-4058"></a>
- 58.25s–65.75s (×16), actor 5, squad 0 (trace 3745): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3595. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079977245289336, 'next_transition': 3752}.
<a id="trace-540"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (events line 540): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4065"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 4065): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358271 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.05s, trace 4065. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4077}.
<a id="trace-4066"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 4066): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358271 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.05s, trace 4066. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4077}.
<a id="trace-4077"></a>
<a id="trace-4082"></a>
<a id="trace-4089"></a>
<a id="trace-4094"></a>
<a id="trace-4102"></a>
- 66.25s–68.25s (×5), actor 5, squad 0 (trace 4077): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 4066. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4082}.
<a id="trace-4106"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 4106): Withdraw to received rally. Knowledge: actor memory at 65.00s, trace 3980. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4164}.
<a id="trace-4107"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 4107): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 3980. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4164}.
<a id="trace-4164"></a>
<a id="trace-4178"></a>
<a id="trace-4193"></a>
<a id="trace-4265"></a>
<a id="trace-4274"></a>
<a id="trace-4292"></a>
<a id="trace-4298"></a>
<a id="trace-4314"></a>
<a id="trace-4326"></a>
<a id="trace-4341"></a>
<a id="trace-4349"></a>
<a id="trace-4365"></a>
<a id="trace-4377"></a>
<a id="trace-4449"></a>
<a id="trace-4456"></a>
<a id="trace-4470"></a>
<a id="trace-4478"></a>
<a id="trace-4491"></a>
<a id="trace-4497"></a>
<a id="trace-4516"></a>
<a id="trace-4526"></a>
<a id="trace-4547"></a>
- 68.75s–79.75s (×22), actor 5, squad 0 (trace 4164): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 4066. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031489001254406145, 'next_transition': 4178}.
<a id="trace-4567"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 4567): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 4556. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4734}.
<a id="trace-4568"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 4568): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 4556. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4734}.
<a id="trace-4734"></a>
<a id="trace-4742"></a>
<a id="trace-4768"></a>
<a id="trace-4778"></a>
<a id="trace-4795"></a>
<a id="trace-4806"></a>
<a id="trace-4818"></a>
<a id="trace-4825"></a>
<a id="trace-4840"></a>
<a id="trace-4850"></a>
<a id="trace-4929"></a>
<a id="trace-4951"></a>
<a id="trace-4966"></a>
<a id="trace-4979"></a>
<a id="trace-4989"></a>
<a id="trace-5006"></a>
<a id="trace-5015"></a>
<a id="trace-5028"></a>
<a id="trace-5036"></a>
<a id="trace-5113"></a>
<a id="trace-5120"></a>
<a id="trace-5134"></a>
<a id="trace-5140"></a>
<a id="trace-5153"></a>
<a id="trace-5165"></a>
- 80.25s–92.75s (×25), actor 5, squad 0 (trace 4734): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4558. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4742}.
<a id="trace-5172"></a>
- 93.05s–93.05s (×1), actor 1, squad 0 (trace 5172): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5041. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3539694204727662, 'next_transition': 5234}.
<a id="trace-5173"></a>
- 93.05s–93.05s (×1), actor 1, squad 0 (trace 5173): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5041. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3539694204727662, 'next_transition': 5234}.
<a id="trace-5234"></a>
<a id="trace-5245"></a>
<a id="trace-5275"></a>
<a id="trace-5286"></a>
<a id="trace-5363"></a>
<a id="trace-5374"></a>
<a id="trace-5392"></a>
<a id="trace-5399"></a>
<a id="trace-5413"></a>
<a id="trace-5419"></a>
<a id="trace-5437"></a>
<a id="trace-5443"></a>
<a id="trace-5456"></a>
<a id="trace-5465"></a>
<a id="trace-5542"></a>
<a id="trace-5549"></a>
<a id="trace-5567"></a>
<a id="trace-5578"></a>
<a id="trace-5597"></a>
<a id="trace-5601"></a>
- 93.25s–102.75s (×20), actor 5, squad 0 (trace 5234): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5043. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.645040050862568, 'next_transition': 5245}.
<a id="trace-5605"></a>
- 102.85s–102.85s (×1), actor 1, squad 0 (trace 5605): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 5471. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5717}.
<a id="trace-5606"></a>
- 102.85s–102.85s (×1), actor 1, squad 0 (trace 5606): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 5471. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5717}.
<a id="trace-5717"></a>
<a id="trace-5730"></a>
<a id="trace-5749"></a>
<a id="trace-5759"></a>
<a id="trace-5842"></a>
<a id="trace-5853"></a>
<a id="trace-5868"></a>
<a id="trace-5876"></a>
<a id="trace-5888"></a>
<a id="trace-5895"></a>
<a id="trace-5911"></a>
<a id="trace-5927"></a>
<a id="trace-5945"></a>
<a id="trace-5953"></a>
<a id="trace-6028"></a>
<a id="trace-6037"></a>
<a id="trace-6049"></a>
<a id="trace-6059"></a>
<a id="trace-6075"></a>
<a id="trace-6086"></a>
<a id="trace-6100"></a>
- 103.25s–113.25s (×21), actor 5, squad 0 (trace 5717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5473. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5730}.
<a id="trace-6106"></a>
- 113.45s–113.45s (×1), actor 1, squad 0 (trace 6106): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 5957. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31512839089256667, 'next_transition': 6114}.
<a id="trace-6114"></a>
<a id="trace-6137"></a>
<a id="trace-6154"></a>
<a id="trace-6229"></a>
<a id="trace-6239"></a>
<a id="trace-6261"></a>
<a id="trace-6288"></a>
<a id="trace-6295"></a>
<a id="trace-6309"></a>
<a id="trace-6316"></a>
<a id="trace-6325"></a>
<a id="trace-6332"></a>
<a id="trace-6404"></a>
<a id="trace-6409"></a>
<a id="trace-6418"></a>
<a id="trace-6425"></a>
- 113.75s–121.75s (×16), actor 5, squad 0 (trace 6114): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 5959. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0576276663737325, 'next_transition': 6137}.
<a id="trace-929"></a>
- 122.20s–122.20s (×1), actor 5, squad 0 (events line 929): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6429"></a>
- 122.20s–122.20s (×1), actor 5, squad 0 (trace 6429): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.785337 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.20s, trace 6429. Next observer evidence: None.
<a id="trace-6430"></a>
- 122.20s–122.20s (×1), actor 5, squad 0 (trace 6430): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.785337 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.20s, trace 6430. Next observer evidence: None.
<a id="trace-6434"></a>
<a id="trace-6443"></a>
<a id="trace-6457"></a>
- 122.25s–123.25s (×3), actor 5, squad 0 (trace 6434): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.20s, trace 6430. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6443}.
<a id="trace-939"></a>
- 123.40s–123.40s (×1), actor 5, squad 0 (events line 939): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6468}.
<a id="trace-6460"></a>
- 123.40s–123.40s (×1), actor 5, squad 0 (trace 6460): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 123.40s, trace 6460. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6468}.
<a id="trace-6461"></a>
- 123.40s–123.40s (×1), actor 5, squad 0 (trace 6461): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 123.40s, trace 6461. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6468}.
<a id="trace-6468"></a>
<a id="trace-6477"></a>
- 123.75s–124.25s (×2), actor 5, squad 0 (trace 6468): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.40s, trace 6461. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6477}.
<a id="trace-6481"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 6481): MoveTactically. Knowledge: actor memory at 120.00s, trace 6337. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6644}.
<a id="trace-6482"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 6482): traveling. Knowledge: actor memory at 120.00s, trace 6337. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6644}.
<a id="trace-6483"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 6483): received platoon directive. Knowledge: actor memory at 120.00s, trace 6337. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6644}.
<a id="trace-6644"></a>
<a id="trace-6721"></a>
- 124.75s–125.25s (×2), actor 5, squad 0 (trace 6644): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.40s, trace 6461. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03146823795511754, 'next_transition': 6721}.
<a id="trace-6725"></a>
- 125.45s–125.45s (×1), actor 1, squad 0 (trace 6725): received platoon directive. Knowledge: actor memory at 125.00s, trace 6650. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18307879623460085, 'next_transition': 6892}.
<a id="trace-6892"></a>
<a id="trace-6908"></a>
<a id="trace-6924"></a>
<a id="trace-6939"></a>
<a id="trace-6950"></a>
<a id="trace-6970"></a>
<a id="trace-6986"></a>
<a id="trace-6996"></a>
<a id="trace-7009"></a>
<a id="trace-7090"></a>
<a id="trace-7098"></a>
<a id="trace-7116"></a>
<a id="trace-7127"></a>
<a id="trace-7145"></a>
<a id="trace-7159"></a>
<a id="trace-7172"></a>
<a id="trace-7179"></a>
<a id="trace-7194"></a>
<a id="trace-7202"></a>
<a id="trace-7273"></a>
<a id="trace-7281"></a>
<a id="trace-7298"></a>
<a id="trace-7311"></a>
<a id="trace-7322"></a>
<a id="trace-7334"></a>
<a id="trace-7353"></a>
<a id="trace-7360"></a>
- 125.75s–138.80s (×27), actor 5, squad 0 (trace 6892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6652. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0618897040888282, 'next_transition': 6908}.
<a id="trace-7366"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 7366): matching received arrivals: traveling stage complete. Knowledge: actor memory at 135.00s, trace 7205. Next observer evidence: None.
<a id="trace-7529"></a>
<a id="trace-7536"></a>
<a id="trace-7617"></a>
<a id="trace-7635"></a>
<a id="trace-7645"></a>
<a id="trace-7662"></a>
<a id="trace-7674"></a>
<a id="trace-7686"></a>
<a id="trace-7698"></a>
<a id="trace-7707"></a>
<a id="trace-7723"></a>
<a id="trace-7743"></a>
<a id="trace-7818"></a>
<a id="trace-7830"></a>
<a id="trace-7843"></a>
<a id="trace-7854"></a>
<a id="trace-7862"></a>
<a id="trace-7873"></a>
<a id="trace-7890"></a>
<a id="trace-7905"></a>
<a id="trace-7915"></a>
<a id="trace-7928"></a>
<a id="trace-8008"></a>
<a id="trace-8016"></a>
<a id="trace-8027"></a>
<a id="trace-8035"></a>
<a id="trace-8053"></a>
- 139.30s–152.30s (×27), actor 5, squad 0 (trace 7529): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7207. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7536}.
<a id="trace-8063"></a>
- 152.70s–152.70s (×1), actor 1, squad 0 (trace 8063): matching received arrivals: deployment leg complete. Knowledge: actor memory at 150.00s, trace 7933. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600002539682192, 'next_transition': 8071}.
<a id="trace-8071"></a>
<a id="trace-8080"></a>
<a id="trace-8086"></a>
<a id="trace-8105"></a>
<a id="trace-8112"></a>
<a id="trace-8184"></a>
<a id="trace-8189"></a>
<a id="trace-8199"></a>
<a id="trace-8202"></a>
- 152.80s–156.80s (×9), actor 5, squad 0 (trace 8071): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 7935. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.504000077777771, 'next_transition': 8080}.
<a id="trace-1179"></a>
- 157.00s–157.00s (×1), actor 5, squad 0 (events line 1179): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8215}.
<a id="trace-8204"></a>
- 157.00s–157.00s (×1), actor 5, squad 0 (trace 8204): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.00s, trace 8204. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8215}.
<a id="trace-8205"></a>
- 157.00s–157.00s (×1), actor 5, squad 0 (trace 8205): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.00s, trace 8205. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8215}.
<a id="trace-8215"></a>
<a id="trace-8220"></a>
<a id="trace-8230"></a>
- 157.30s–158.30s (×3), actor 5, squad 0 (trace 8215): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 157.00s, trace 8205. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8220}.
<a id="trace-8237"></a>
- 158.65s–158.65s (×1), actor 1, squad 0 (trace 8237): Reorganise: completed/failed drill. Knowledge: actor memory at 155.00s, trace 8118. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8401}.
<a id="trace-8241"></a>
- 158.65s–158.65s (×1), actor 1, squad 0 (trace 8241): MoveTactically. Knowledge: actor memory at 155.00s, trace 8118. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8401}.
<a id="trace-8242"></a>
- 158.65s–158.65s (×1), actor 1, squad 0 (trace 8242): Reorganise complete. Knowledge: actor memory at 155.00s, trace 8118. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8401}.
<a id="trace-8401"></a>
<a id="trace-8414"></a>
<a id="trace-8432"></a>
<a id="trace-8510"></a>
<a id="trace-8522"></a>
<a id="trace-8539"></a>
<a id="trace-8547"></a>
<a id="trace-8565"></a>
<a id="trace-8571"></a>
<a id="trace-8585"></a>
<a id="trace-8591"></a>
<a id="trace-8607"></a>
<a id="trace-8624"></a>
<a id="trace-8701"></a>
<a id="trace-8709"></a>
<a id="trace-8732"></a>
<a id="trace-8740"></a>
<a id="trace-8753"></a>
<a id="trace-8759"></a>
<a id="trace-8779"></a>
<a id="trace-8796"></a>
<a id="trace-8807"></a>
<a id="trace-8813"></a>
<a id="trace-8893"></a>
<a id="trace-8901"></a>
<a id="trace-8910"></a>
<a id="trace-8919"></a>
- 158.80s–171.80s (×27), actor 5, squad 0 (trace 8401): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 157.00s, trace 8205. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8414}.
<a id="trace-8922"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 8922): traveling overwatch. Knowledge: actor memory at 170.00s, trace 8819. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724999999999994, 'next_transition': 8984}.
<a id="trace-8923"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 8923): matching received arrivals: traveling stage complete. Knowledge: actor memory at 170.00s, trace 8819. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724999999999994, 'next_transition': 8984}.
<a id="trace-8984"></a>
<a id="trace-9000"></a>
<a id="trace-9017"></a>
<a id="trace-9032"></a>
<a id="trace-9050"></a>
<a id="trace-9060"></a>
<a id="trace-9134"></a>
<a id="trace-9140"></a>
<a id="trace-9154"></a>
<a id="trace-9167"></a>
<a id="trace-9178"></a>
<a id="trace-9189"></a>
<a id="trace-9205"></a>
- 172.30s–178.30s (×13), actor 5, squad 0 (trace 8984): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 8821. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24347999999999956, 'next_transition': 9000}.
<a id="trace-9209"></a>
- 178.45s–178.45s (×1), actor 1, squad 0 (trace 9209): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 9066. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9317}.
<a id="trace-9317"></a>
<a id="trace-9331"></a>
<a id="trace-9345"></a>
<a id="trace-9418"></a>
<a id="trace-9437"></a>
<a id="trace-9457"></a>
<a id="trace-9466"></a>
- 178.80s–181.80s (×7), actor 5, squad 0 (trace 9317): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 9068. Next observer evidence: {'until': 179.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9331}.
<a id="trace-9473"></a>
- 182.05s–182.05s (×1), actor 1, squad 0 (trace 9473): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 9349. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21617252198604991, 'next_transition': 9572}.
<a id="trace-9474"></a>
- 182.05s–182.05s (×1), actor 1, squad 0 (trace 9474): bounding overwatch. Knowledge: actor memory at 180.00s, trace 9349. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21617252198604991, 'next_transition': 9572}.
<a id="trace-9475"></a>
- 182.05s–182.05s (×1), actor 1, squad 0 (trace 9475): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 9349. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21617252198604991, 'next_transition': 9572}.
<a id="trace-9572"></a>
<a id="trace-9586"></a>
<a id="trace-9603"></a>
- 182.30s–183.30s (×3), actor 5, squad 0 (trace 9572): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9351. Next observer evidence: {'until': 182.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6456475364507579, 'next_transition': 9586}.
<a id="trace-9612"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 9612): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 9349. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21673572216083983, 'next_transition': 9703}.
<a id="trace-9703"></a>
<a id="trace-9720"></a>
<a id="trace-9745"></a>
<a id="trace-9824"></a>
- 183.80s–185.30s (×4), actor 5, squad 0 (trace 9703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9351. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4385590444979318, 'next_transition': 9720}.
<a id="trace-1412"></a>
- 185.80s–185.80s (×1), actor 5, squad 0 (events line 1412): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 186.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5153082820696323, 'next_transition': 9862}.
<a id="trace-9830"></a>
- 185.80s–185.80s (×1), actor 5, squad 0 (trace 9830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9761. Next observer evidence: {'until': 186.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5153082820696323, 'next_transition': 9862}.
<a id="trace-9833"></a>
- 185.80s–185.80s (×1), actor 5, squad 0 (trace 9833): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553328 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.80s, trace 9833. Next observer evidence: {'until': 186.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5153082820696323, 'next_transition': 9862}.
<a id="trace-9834"></a>
- 185.80s–185.80s (×1), actor 5, squad 0 (trace 9834): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553328 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.80s, trace 9834. Next observer evidence: {'until': 186.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5153082820696323, 'next_transition': 9862}.
<a id="trace-9862"></a>
<a id="trace-9870"></a>
- 186.30s–186.80s (×2), actor 5, squad 0 (trace 9862): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.80s, trace 9834. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24238799563806784, 'next_transition': 9870}.
<a id="trace-9873"></a>
- 187.10s–187.10s (×1), actor 5, squad 0 (trace 9873): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 187.10s, trace 9873. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08324896962725738, 'next_transition': 9880}.
<a id="trace-9880"></a>
- 187.30s–187.30s (×1), actor 5, squad 0 (trace 9880): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 187.10s, trace 9873. Next observer evidence: {'until': 187.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.042275004435245504, 'next_transition': 9886}.
<a id="trace-9886"></a>
- 187.45s–187.45s (×1), actor 1, squad 0 (trace 9886): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 9759. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10045}.
<a id="trace-9887"></a>
- 187.45s–187.45s (×1), actor 1, squad 0 (trace 9887): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 9759. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10045}.
<a id="trace-10045"></a>
<a id="trace-10066"></a>
<a id="trace-10081"></a>
<a id="trace-10097"></a>
<a id="trace-10110"></a>
<a id="trace-10193"></a>
<a id="trace-10208"></a>
<a id="trace-10222"></a>
<a id="trace-10234"></a>
<a id="trace-10251"></a>
<a id="trace-10268"></a>
<a id="trace-10286"></a>
<a id="trace-10298"></a>
<a id="trace-10313"></a>
<a id="trace-10326"></a>
<a id="trace-10404"></a>
<a id="trace-10409"></a>
<a id="trace-10422"></a>
<a id="trace-10436"></a>
<a id="trace-10445"></a>
<a id="trace-10451"></a>
<a id="trace-10467"></a>
<a id="trace-10473"></a>
<a id="trace-10479"></a>
<a id="trace-10487"></a>
<a id="trace-10565"></a>
<a id="trace-10580"></a>
- 187.80s–200.80s (×27), actor 5, squad 0 (trace 10045): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 187.10s, trace 9873. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10066}.
<a id="trace-10587"></a>
- 201.25s–201.25s (×1), actor 1, squad 0 (trace 10587): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 10495. Next observer evidence: None.
<a id="trace-10588"></a>
- 201.25s–201.25s (×1), actor 1, squad 0 (trace 10588): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 10495. Next observer evidence: None.
<a id="trace-10696"></a>
<a id="trace-10708"></a>
<a id="trace-10732"></a>
<a id="trace-10743"></a>
<a id="trace-10760"></a>
<a id="trace-10772"></a>
<a id="trace-10785"></a>
- 201.30s–204.30s (×7), actor 5, squad 0 (trace 10696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 10497. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7808882670588757, 'next_transition': 10708}.
<a id="trace-10789"></a>
- 204.40s–204.40s (×1), actor 1, squad 0 (trace 10789): NeedSupport. Knowledge: actor memory at 200.00s, trace 10495. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4218258999437746, 'next_transition': 10809}.
<a id="trace-10809"></a>
<a id="trace-10885"></a>
<a id="trace-10892"></a>
<a id="trace-10906"></a>
<a id="trace-10914"></a>
<a id="trace-10922"></a>
<a id="trace-10931"></a>
<a id="trace-10946"></a>
<a id="trace-10959"></a>
<a id="trace-10970"></a>
<a id="trace-11059"></a>
<a id="trace-11070"></a>
<a id="trace-11081"></a>
<a id="trace-11088"></a>
<a id="trace-11105"></a>
<a id="trace-11120"></a>
<a id="trace-11131"></a>
<a id="trace-11139"></a>
<a id="trace-11152"></a>
<a id="trace-11159"></a>
<a id="trace-11236"></a>
<a id="trace-11243"></a>
<a id="trace-11261"></a>
<a id="trace-11275"></a>
- 204.80s–216.80s (×24), actor 5, squad 0 (trace 10809): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 10497. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7958969490357923, 'next_transition': 10885}.
<a id="trace-11279"></a>
- 217.15s–217.15s (×1), actor 1, squad 0 (trace 11279): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 215.00s, trace 11170. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3427321480198705, 'next_transition': 11339}.
<a id="trace-11280"></a>
- 217.15s–217.15s (×1), actor 1, squad 0 (trace 11280): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 215.00s, trace 11170. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3427321480198705, 'next_transition': 11339}.
<a id="trace-11339"></a>
<a id="trace-11345"></a>
<a id="trace-11372"></a>
<a id="trace-11384"></a>
<a id="trace-11394"></a>
<a id="trace-11408"></a>
<a id="trace-11482"></a>
<a id="trace-11488"></a>
<a id="trace-11497"></a>
- 217.30s–221.30s (×9), actor 5, squad 0 (trace 11339): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 11172. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9651449802052683, 'next_transition': 11345}.
<a id="trace-11502"></a>
- 221.65s–221.65s (×1), actor 1, squad 0 (trace 11502): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 11415. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11508}.
<a id="trace-11508"></a>
<a id="trace-11517"></a>
- 221.80s–222.30s (×2), actor 5, squad 0 (trace 11508): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11417. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11517}.
<a id="trace-11526"></a>
- 222.65s–222.65s (×1), actor 1, squad 0 (trace 11526): MoveTactically. Knowledge: actor memory at 220.00s, trace 11415. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11538}.
<a id="trace-11527"></a>
- 222.65s–222.65s (×1), actor 1, squad 0 (trace 11527): received platoon directive. Knowledge: actor memory at 220.00s, trace 11415. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11538}.
<a id="trace-11538"></a>
<a id="trace-11557"></a>
- 222.80s–223.30s (×2), actor 5, squad 0 (trace 11538): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11417. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11557}.
<a id="trace-11569"></a>
- 223.65s–223.65s (×1), actor 1, squad 0 (trace 11569): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 11415. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11626}.
<a id="trace-11626"></a>
<a id="trace-11653"></a>
<a id="trace-11673"></a>
<a id="trace-11749"></a>
<a id="trace-11760"></a>
<a id="trace-11775"></a>
<a id="trace-11781"></a>
<a id="trace-11790"></a>
<a id="trace-11796"></a>
<a id="trace-11810"></a>
<a id="trace-11823"></a>
<a id="trace-11834"></a>
<a id="trace-11843"></a>
<a id="trace-11925"></a>
<a id="trace-11934"></a>
<a id="trace-11947"></a>
<a id="trace-11955"></a>
- 223.80s–231.80s (×17), actor 5, squad 0 (trace 11626): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11417. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11653}.
<a id="trace-1722"></a>
- 232.10s–232.10s (×1), actor 5, squad 0 (events line 1722): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11959"></a>
- 232.10s–232.10s (×1), actor 5, squad 0 (trace 11959): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.10s, trace 11959. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}.
<a id="trace-11960"></a>
- 232.10s–232.10s (×1), actor 5, squad 0 (trace 11960): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.10s, trace 11960. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}.
<a id="trace-11972"></a>
<a id="trace-11983"></a>
<a id="trace-11992"></a>
- 232.30s–233.30s (×3), actor 5, squad 0 (trace 11972): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.10s, trace 11960. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260056697137067, 'next_transition': 11983}.
<a id="trace-11997"></a>
- 233.70s–233.70s (×1), actor 1, squad 0 (trace 11997): Withdraw to received rally. Knowledge: actor memory at 230.00s, trace 11855. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519949364570644, 'next_transition': 12054}.
<a id="trace-11998"></a>
- 233.70s–233.70s (×1), actor 1, squad 0 (trace 11998): rearward bound: one stationary suppressing element. Knowledge: actor memory at 230.00s, trace 11855. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519949364570644, 'next_transition': 12054}.
<a id="trace-12054"></a>
<a id="trace-12073"></a>
<a id="trace-12085"></a>
<a id="trace-12165"></a>
<a id="trace-12173"></a>
<a id="trace-12193"></a>
<a id="trace-12211"></a>
<a id="trace-12223"></a>
<a id="trace-12230"></a>
<a id="trace-12245"></a>
<a id="trace-12254"></a>
<a id="trace-12262"></a>
<a id="trace-12269"></a>
<a id="trace-12347"></a>
<a id="trace-12359"></a>
<a id="trace-12368"></a>
<a id="trace-12374"></a>
<a id="trace-12388"></a>
<a id="trace-12399"></a>
<a id="trace-12407"></a>
<a id="trace-12417"></a>
<a id="trace-12434"></a>
<a id="trace-12446"></a>
<a id="trace-12521"></a>
- 233.80s–245.30s (×24), actor 5, squad 0 (trace 12054): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.10s, trace 11960. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18898206246289653, 'next_transition': 12073}.
<a id="trace-12529"></a>
- 245.65s–245.65s (×1), actor 1, squad 0 (trace 12529): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 12455. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519741002563564, 'next_transition': 12636}.
<a id="trace-12530"></a>
- 245.65s–245.65s (×1), actor 1, squad 0 (trace 12530): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 12455. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519741002563564, 'next_transition': 12636}.
<a id="trace-12636"></a>
<a id="trace-12655"></a>
<a id="trace-12668"></a>
<a id="trace-12681"></a>
<a id="trace-12687"></a>
<a id="trace-12707"></a>
<a id="trace-12722"></a>
<a id="trace-12734"></a>
<a id="trace-12745"></a>
<a id="trace-12821"></a>
<a id="trace-12830"></a>
<a id="trace-12846"></a>
<a id="trace-12853"></a>
<a id="trace-12871"></a>
<a id="trace-12885"></a>
<a id="trace-12897"></a>
<a id="trace-12902"></a>
<a id="trace-12917"></a>
<a id="trace-12927"></a>
<a id="trace-13002"></a>
<a id="trace-13011"></a>
<a id="trace-13029"></a>
<a id="trace-13038"></a>
<a id="trace-13055"></a>
<a id="trace-13064"></a>
<a id="trace-13082"></a>
<a id="trace-13093"></a>
<a id="trace-13103"></a>
<a id="trace-13110"></a>
<a id="trace-13190"></a>
<a id="trace-13201"></a>
<a id="trace-13213"></a>
<a id="trace-13224"></a>
- 245.80s–261.80s (×33), actor 5, squad 0 (trace 12636): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 12457. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18903106622986668, 'next_transition': 12655}.
<a id="trace-13236"></a>
- 262.25s–262.25s (×1), actor 1, squad 0 (trace 13236): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 260.00s, trace 13118. Next observer evidence: None.
<a id="trace-13237"></a>
- 262.25s–262.25s (×1), actor 1, squad 0 (trace 13237): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 260.00s, trace 13118. Next observer evidence: None.
<a id="trace-13295"></a>
<a id="trace-13302"></a>
<a id="trace-13317"></a>
<a id="trace-13333"></a>
<a id="trace-13347"></a>
<a id="trace-13360"></a>
<a id="trace-13449"></a>
<a id="trace-13458"></a>
<a id="trace-13473"></a>
<a id="trace-13483"></a>
<a id="trace-13493"></a>
<a id="trace-13502"></a>
<a id="trace-13515"></a>
<a id="trace-13524"></a>
<a id="trace-13537"></a>
<a id="trace-13545"></a>
<a id="trace-13624"></a>
<a id="trace-13634"></a>
<a id="trace-13644"></a>
<a id="trace-13652"></a>
<a id="trace-13667"></a>
<a id="trace-13679"></a>
- 262.30s–272.80s (×22), actor 5, squad 0 (trace 13295): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 13120. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13302}.
<a id="trace-13689"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 13689): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 13550. Next observer evidence: None.
<a id="trace-13690"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 13690): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 13550. Next observer evidence: None.
<a id="trace-13798"></a>
<a id="trace-13809"></a>
<a id="trace-13830"></a>
<a id="trace-13844"></a>
<a id="trace-13918"></a>
<a id="trace-13929"></a>
<a id="trace-13949"></a>
<a id="trace-13958"></a>
<a id="trace-13971"></a>
<a id="trace-13978"></a>
<a id="trace-13997"></a>
<a id="trace-14005"></a>
<a id="trace-14017"></a>
<a id="trace-14032"></a>
<a id="trace-14110"></a>
<a id="trace-14119"></a>
<a id="trace-14134"></a>
<a id="trace-14143"></a>
<a id="trace-14159"></a>
<a id="trace-14170"></a>
- 273.30s–282.80s (×20), actor 5, squad 0 (trace 13798): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 13552. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560014581996538, 'next_transition': 13809}.
<a id="trace-14175"></a>
- 283.00s–283.00s (×1), actor 1, squad 0 (trace 14175): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 280.00s, trace 14038. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19272161577770452, 'next_transition': 14185}.
<a id="trace-14185"></a>
<a id="trace-14198"></a>
<a id="trace-14220"></a>
<a id="trace-14230"></a>
<a id="trace-14310"></a>
<a id="trace-14325"></a>
<a id="trace-14342"></a>
<a id="trace-14349"></a>
<a id="trace-14365"></a>
<a id="trace-14373"></a>
<a id="trace-14389"></a>
- 283.30s–288.30s (×11), actor 5, squad 0 (trace 14185): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 14040. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5781847871817776, 'next_transition': 14198}.
<a id="trace-2141"></a>
- 288.60s–288.60s (×1), actor 5, squad 0 (events line 2141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14392"></a>
- 288.60s–288.60s (×1), actor 5, squad 0 (trace 14392): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.550257 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 288.60s, trace 14392. Next observer evidence: {'until': 288.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0630002031742751, 'next_transition': 14402}.
<a id="trace-14393"></a>
- 288.60s–288.60s (×1), actor 5, squad 0 (trace 14393): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.550257 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 288.60s, trace 14393. Next observer evidence: {'until': 288.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0630002031742751, 'next_transition': 14402}.
<a id="trace-14402"></a>
<a id="trace-14417"></a>
<a id="trace-14423"></a>
- 288.80s–289.80s (×3), actor 5, squad 0 (trace 14402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.60s, trace 14393. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040009920625177, 'next_transition': 14417}.
<a id="trace-14496"></a>
- 290.25s–290.25s (×1), actor 1, squad 0 (trace 14496): MoveTactically. Knowledge: actor memory at 290.00s, trace 14430. Next observer evidence: None.
<a id="trace-14497"></a>
- 290.25s–290.25s (×1), actor 1, squad 0 (trace 14497): traveling overwatch. Knowledge: actor memory at 290.00s, trace 14430. Next observer evidence: None.
<a id="trace-14498"></a>
- 290.25s–290.25s (×1), actor 1, squad 0 (trace 14498): received platoon directive. Knowledge: actor memory at 290.00s, trace 14430. Next observer evidence: None.
<a id="trace-14607"></a>
<a id="trace-14616"></a>
<a id="trace-14626"></a>
<a id="trace-14641"></a>
<a id="trace-14652"></a>
<a id="trace-14661"></a>
<a id="trace-14679"></a>
<a id="trace-14689"></a>
<a id="trace-14706"></a>
<a id="trace-14715"></a>
<a id="trace-14788"></a>
<a id="trace-14796"></a>
<a id="trace-14814"></a>
<a id="trace-14826"></a>
- 290.30s–296.80s (×14), actor 5, squad 0 (trace 14607): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 14432. Next observer evidence: {'until': 290.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14616}.
<a id="trace-2211"></a>
- 297.30s–297.30s (×1), actor 5, squad 0 (events line 2211): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14838"></a>
- 297.30s–297.30s (×1), actor 5, squad 0 (trace 14838): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 14722. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.334193198285443, 'next_transition': 14850}.
<a id="trace-14841"></a>
- 297.30s–297.30s (×1), actor 5, squad 0 (trace 14841): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 297.30s, trace 14841. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.334193198285443, 'next_transition': 14850}.
<a id="trace-14842"></a>
- 297.30s–297.30s (×1), actor 5, squad 0 (trace 14842): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 297.30s, trace 14842. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.334193198285443, 'next_transition': 14850}.
<a id="trace-14850"></a>
<a id="trace-14863"></a>
<a id="trace-14870"></a>
- 297.80s–298.80s (×3), actor 5, squad 0 (trace 14850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.30s, trace 14842. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8894412586334355, 'next_transition': 14863}.
<a id="trace-14880"></a>
- 299.00s–299.00s (×1), actor 1, squad 0 (trace 14880): traveling. Knowledge: actor memory at 295.00s, trace 14720. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19274261904329223, 'next_transition': 15042}.
<a id="trace-14881"></a>
- 299.00s–299.00s (×1), actor 1, squad 0 (trace 14881): received platoon directive. Knowledge: actor memory at 295.00s, trace 14720. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19274261904329223, 'next_transition': 15042}.
<a id="trace-15042"></a>
<a id="trace-15057"></a>
<a id="trace-15143"></a>
<a id="trace-15155"></a>
<a id="trace-15178"></a>
<a id="trace-15191"></a>
<a id="trace-15207"></a>
<a id="trace-15218"></a>
<a id="trace-15233"></a>
<a id="trace-15245"></a>
<a id="trace-15258"></a>
<a id="trace-15273"></a>
<a id="trace-15351"></a>
<a id="trace-15362"></a>
<a id="trace-15377"></a>
<a id="trace-15385"></a>
<a id="trace-15400"></a>
<a id="trace-15409"></a>
<a id="trace-15425"></a>
<a id="trace-15443"></a>
<a id="trace-15456"></a>
<a id="trace-15470"></a>
<a id="trace-15547"></a>
<a id="trace-15556"></a>
<a id="trace-15566"></a>
<a id="trace-15574"></a>
<a id="trace-15592"></a>
<a id="trace-15599"></a>
- 299.30s–312.80s (×28), actor 5, squad 0 (trace 15042): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.30s, trace 14842. Next observer evidence: {'until': 299.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6411549283009735, 'next_transition': 15057}.
<a id="trace-15609"></a>
- 312.85s–312.85s (×1), actor 1, squad 0 (trace 15609): matching received arrivals: traveling stage complete. Knowledge: actor memory at 310.00s, trace 15474. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039920205717541, 'next_transition': 15772}.
<a id="trace-15772"></a>
<a id="trace-15782"></a>
<a id="trace-15805"></a>
<a id="trace-15812"></a>
<a id="trace-15889"></a>
<a id="trace-15905"></a>
<a id="trace-15919"></a>
<a id="trace-15929"></a>
<a id="trace-15946"></a>
<a id="trace-15956"></a>
<a id="trace-15972"></a>
<a id="trace-15983"></a>
<a id="trace-15998"></a>
<a id="trace-16007"></a>
<a id="trace-16086"></a>
<a id="trace-16098"></a>
<a id="trace-16112"></a>
<a id="trace-16121"></a>
<a id="trace-16137"></a>
<a id="trace-16145"></a>
<a id="trace-16160"></a>
<a id="trace-16168"></a>
<a id="trace-16186"></a>
<a id="trace-16200"></a>
<a id="trace-16276"></a>
- 313.30s–325.30s (×25), actor 5, squad 0 (trace 15772): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 15476. Next observer evidence: {'until': 313.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8505315869689216, 'next_transition': 15782}.
<a id="trace-16284"></a>
- 325.70s–325.70s (×1), actor 1, squad 0 (trace 16284): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3426996700979579, 'next_transition': 16337}.
<a id="trace-16285"></a>
- 325.70s–325.70s (×1), actor 1, squad 0 (trace 16285): bounding overwatch. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3426996700979579, 'next_transition': 16337}.
<a id="trace-16286"></a>
- 325.70s–325.70s (×1), actor 1, squad 0 (trace 16286): new contact inside 100 m. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3426996700979579, 'next_transition': 16337}.
<a id="trace-16337"></a>
<a id="trace-16349"></a>
- 325.80s–326.30s (×2), actor 5, squad 0 (trace 16337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 16210. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5968769328993616, 'next_transition': 16349}.
<a id="trace-16358"></a>
- 326.55s–326.55s (×1), actor 1, squad 0 (trace 16358): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299926428141854, 'next_transition': 16367}.
<a id="trace-16360"></a>
- 326.55s–326.55s (×1), actor 1, squad 0 (trace 16360): NeedSupport. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299926428141854, 'next_transition': 16367}.
<a id="trace-16367"></a>
- 326.80s–326.80s (×1), actor 5, squad 0 (trace 16367): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 16210. Next observer evidence: {'until': 327.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.630042619590135, 'next_transition': 16375}.
<a id="trace-16375"></a>
- 327.25s–327.25s (×1), actor 1, squad 0 (trace 16375): Reorganise: completed/failed drill. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: None.
<a id="trace-16378"></a>
- 327.25s–327.25s (×1), actor 1, squad 0 (trace 16378): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: None.
<a id="trace-16379"></a>
- 327.25s–327.25s (×1), actor 1, squad 0 (trace 16379): Reorganise complete: known contact. Knowledge: actor memory at 325.00s, trace 16208. Next observer evidence: None.
<a id="trace-16409"></a>
<a id="trace-16419"></a>
<a id="trace-16441"></a>
- 327.30s–328.30s (×3), actor 5, squad 0 (trace 16409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 16210. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512060798830146, 'next_transition': 16419}.
<a id="trace-2448"></a>
- 328.55s–328.55s (×1), actor 5, squad 0 (events line 2448): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16448"></a>
- 328.55s–328.55s (×1), actor 5, squad 0 (trace 16448): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.027362 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 328.55s, trace 16448. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3337246413210924, 'next_transition': 16455}.
<a id="trace-16449"></a>
- 328.55s–328.55s (×1), actor 5, squad 0 (trace 16449): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.027362 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 328.55s, trace 16449. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3337246413210924, 'next_transition': 16455}.
<a id="trace-16455"></a>
<a id="trace-16468"></a>
<a id="trace-16479"></a>
<a id="trace-16557"></a>
<a id="trace-16563"></a>
- 328.80s–330.80s (×5), actor 5, squad 0 (trace 16455): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.55s, trace 16449. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8850509250069991, 'next_transition': 16468}.
<a id="trace-16569"></a>
- 330.85s–330.85s (×1), actor 1, squad 0 (trace 16569): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 330.00s, trace 16486. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2550082082012264, 'next_transition': 16576}.
<a id="trace-16576"></a>
<a id="trace-16581"></a>
- 331.30s–331.80s (×2), actor 5, squad 0 (trace 16576): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 16487. Next observer evidence: {'until': 331.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38249369946608247, 'next_transition': 16581}.
<a id="trace-16585"></a>
- 331.85s–331.85s (×1), actor 1, squad 0 (trace 16585): received platoon directive; retain contact cover stage. Knowledge: actor memory at 330.00s, trace 16486. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25500589381669214, 'next_transition': 16595}.
<a id="trace-16595"></a>
<a id="trace-16604"></a>
<a id="trace-16617"></a>
<a id="trace-16623"></a>
<a id="trace-16641"></a>
<a id="trace-16647"></a>
<a id="trace-16718"></a>
<a id="trace-16731"></a>
- 332.30s–335.80s (×8), actor 5, squad 0 (trace 16595): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 16487. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.461237371719716, 'next_transition': 16604}.
<a id="trace-2481"></a>
- 336.05s–336.05s (×1), actor 5, squad 0 (events line 2481): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16736"></a>
- 336.05s–336.05s (×1), actor 5, squad 0 (trace 16736): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.380617 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.05s, trace 16736. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749046180008886, 'next_transition': 16747}.
<a id="trace-16737"></a>
- 336.05s–336.05s (×1), actor 5, squad 0 (trace 16737): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.380617 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.05s, trace 16737. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749046180008886, 'next_transition': 16747}.
<a id="trace-16747"></a>
<a id="trace-16759"></a>
- 336.30s–336.80s (×2), actor 5, squad 0 (trace 16747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 336.05s, trace 16737. Next observer evidence: {'until': 336.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2776073936313202, 'next_transition': 16759}.
<a id="trace-16767"></a>
- 336.90s–336.90s (×1), actor 1, squad 0 (trace 16767): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 335.00s, trace 16653. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299804064413435, 'next_transition': 16775}.
<a id="trace-16775"></a>
- 337.30s–337.30s (×1), actor 5, squad 0 (trace 16775): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 336.05s, trace 16737. Next observer evidence: {'until': 337.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6300297532656696, 'next_transition': 16780}.
<a id="trace-16780"></a>
- 337.65s–337.65s (×1), actor 1, squad 0 (trace 16780): MoveTactically. Knowledge: actor memory at 335.00s, trace 16653. Next observer evidence: {'until': 337.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3149902032464251, 'next_transition': 16837}.
<a id="trace-16781"></a>
- 337.65s–337.65s (×1), actor 1, squad 0 (trace 16781): received platoon directive. Knowledge: actor memory at 335.00s, trace 16653. Next observer evidence: {'until': 337.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3149902032464251, 'next_transition': 16837}.
<a id="trace-16837"></a>
<a id="trace-16849"></a>
<a id="trace-16858"></a>
<a id="trace-16872"></a>
<a id="trace-16880"></a>
- 337.80s–339.80s (×5), actor 5, squad 0 (trace 16837): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 336.05s, trace 16737. Next observer evidence: {'until': 338.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.4804011611572391, 'next_transition': 16849}.
<a id="trace-16884"></a>
- 339.95s–339.95s (×1), actor 1, squad 0 (trace 16884): ReactToContact: cover and return fire. Knowledge: actor memory at 335.00s, trace 16653. Next observer evidence: {'until': 340.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21239929031190288, 'next_transition': 17021}.
<a id="trace-16885"></a>
- 339.95s–339.95s (×1), actor 1, squad 0 (trace 16885): new contact inside 100 m. Knowledge: actor memory at 335.00s, trace 16653. Next observer evidence: {'until': 340.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21239929031190288, 'next_transition': 17021}.
<a id="trace-17021"></a>
<a id="trace-17036"></a>
<a id="trace-17049"></a>
<a id="trace-17056"></a>
<a id="trace-17070"></a>
<a id="trace-17082"></a>
- 340.30s–342.80s (×6), actor 5, squad 0 (trace 17021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 16954. Next observer evidence: {'until': 340.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3315068108274701, 'next_transition': 17036}.
<a id="trace-17086"></a>
- 343.10s–343.10s (×1), actor 5, squad 0 (trace 17086): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 343.10s, trace 17086. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749076280264376, 'next_transition': 17090}.
<a id="trace-17090"></a>
- 343.30s–343.30s (×1), actor 5, squad 0 (trace 17090): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 343.10s, trace 17086. Next observer evidence: {'until': 343.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2457476254208783, 'next_transition': 17097}.
<a id="trace-17097"></a>
- 343.75s–343.75s (×1), actor 1, squad 0 (trace 17097): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 340.00s, trace 16953. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07252625046319401, 'next_transition': 17214}.
<a id="trace-17098"></a>
- 343.75s–343.75s (×1), actor 1, squad 0 (trace 17098): rearward bound: one stationary suppressing element. Knowledge: actor memory at 340.00s, trace 16953. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07252625046319401, 'next_transition': 17214}.
<a id="trace-17214"></a>
<a id="trace-17224"></a>
<a id="trace-17237"></a>
<a id="trace-17315"></a>
<a id="trace-17321"></a>
<a id="trace-17337"></a>
- 343.80s–346.30s (×6), actor 5, squad 0 (trace 17214): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 343.10s, trace 17086. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17224}.
<a id="trace-17346"></a>
- 346.75s–346.75s (×1), actor 1, squad 0 (trace 17346): support established: element delivered fire on threat area. Knowledge: actor memory at 345.00s, trace 17249. Next observer evidence: {'until': 346.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09630000000000027, 'next_transition': 17351}.
<a id="trace-17347"></a>
- 346.75s–346.75s (×1), actor 1, squad 0 (trace 17347): Fixing. Knowledge: actor memory at 345.00s, trace 17249. Next observer evidence: {'until': 346.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09630000000000027, 'next_transition': 17351}.
<a id="trace-17351"></a>
<a id="trace-17361"></a>
<a id="trace-17370"></a>
<a id="trace-17383"></a>
<a id="trace-17390"></a>
<a id="trace-17401"></a>
<a id="trace-17414"></a>
<a id="trace-17492"></a>
<a id="trace-17504"></a>
<a id="trace-17514"></a>
<a id="trace-17524"></a>
<a id="trace-17534"></a>
<a id="trace-17540"></a>
<a id="trace-17553"></a>
<a id="trace-17558"></a>
<a id="trace-17565"></a>
<a id="trace-17572"></a>
<a id="trace-17642"></a>
<a id="trace-17646"></a>
<a id="trace-17652"></a>
<a id="trace-17657"></a>
<a id="trace-17663"></a>
<a id="trace-17668"></a>
<a id="trace-17675"></a>
<a id="trace-17679"></a>
<a id="trace-17686"></a>
<a id="trace-17693"></a>
- 346.80s–359.80s (×27), actor 5, squad 0 (trace 17351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 17250. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17361}.

## Net delivery

298 matched order/radio deliveries; 248 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.250s; maximum 1.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1154: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1161: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1162: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1163: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1164: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1810: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1811: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1814: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1816: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1817: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1818: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1819: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1820: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1821: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1921: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1922: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1923: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2306: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2307: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2309: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2310: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2312: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2313: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2314: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2315: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2316: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2317: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2507: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2509: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2510: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2512: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2513: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2514: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2515: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2516: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2517: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2700: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2702: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2703: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2705: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2706: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2707: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2708: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2709: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2934: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2936: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2937: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2939: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2940: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2941: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2942: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2943: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3113: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3115: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3116: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3118: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3119: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3120: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3121: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3122: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3393: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3395: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3396: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3398: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3399: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3400: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3401: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3402: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3593: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3595: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3596: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3598: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3599: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3600: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3601: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3602: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3793: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3795: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3796: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3798: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3799: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3800: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3801: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3802: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3980: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3982: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3983: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3985: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3986: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3987: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3988: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 3989: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 4065: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 4066: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4198: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4200: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4201: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4203: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4204: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4205: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4206: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4207: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4381: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4383: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4384: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4386: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4387: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4388: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4389: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4390: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4556: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4558: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4559: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4561: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4562: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4563: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4564: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4565: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4858: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4860: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4861: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4863: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4864: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4865: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4866: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4867: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5041: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5043: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5044: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5046: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5047: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5048: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5049: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5050: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5293: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5295: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5296: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5298: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5299: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5300: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5301: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5302: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5471: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5473: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5474: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5476: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5477: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5478: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5479: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5480: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5767: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5769: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5770: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5772: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5773: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5774: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5775: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5776: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5957: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5959: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5960: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 5961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5962: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5963: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5964: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5965: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5966: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6158: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6160: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6161: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6163: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6164: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6165: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6166: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6167: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6337: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6339: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6340: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6342: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6343: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6344: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6345: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6346: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.20s leader 5, trace 6429: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.20s leader 5, trace 6430: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.40s leader 5, trace 6460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.40s leader 5, trace 6461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6655: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6656: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6657: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6658: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6659: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7018: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7019: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7020: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7021: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7022: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 7549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 7753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 7937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.00s leader 5, trace 8204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.00s leader 5, trace 8205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 8444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 8634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 8637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 8820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 8823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 9070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9350: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 9353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9356: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9357: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9358: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9759: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9760: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9762: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 9763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9764: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9766: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9767: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9768: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.80s leader 5, trace 9833: estimate 3.92; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.80s leader 5, trace 9834: estimate 3.92; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 187.10s leader 5, trace 9873: estimate 6.38; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10116: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 10117: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10118: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10119: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 10120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10121: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10123: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10124: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10125: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10331: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 10332: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10333: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10334: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 10335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10336: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10338: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10339: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10340: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10495: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 10496: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10497: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10498: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 10499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10500: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10502: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10503: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10504: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10814: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10815: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10816: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10817: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 10818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10819: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10821: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10822: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10823: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10986: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10987: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10988: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10989: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 10990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10991: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10993: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10994: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10995: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11170: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 11171: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11172: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11173: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 11174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11175: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11177: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11178: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11179: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11415: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 11416: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11417: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11418: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 11419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11420: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11422: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11423: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11424: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11680: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11681: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11682: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11683: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 11684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11685: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11687: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11688: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11689: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11855: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 11856: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11857: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11858: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 11859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11860: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11862: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11863: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11864: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.10s leader 5, trace 11959: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.10s leader 5, trace 11960: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12094: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 12095: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12096: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12097: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 12098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12099: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12101: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12102: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12103: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12275: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 12276: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12277: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12278: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 12279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12280: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12282: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12283: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12284: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12455: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12456: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12457: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12458: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 12459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12460: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12462: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12463: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12464: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12750: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 12751: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12752: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12753: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 12754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12755: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12757: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12758: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12759: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12933: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 12934: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12935: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12936: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 12937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12938: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12940: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12941: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12942: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13118: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 13119: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13120: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13121: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 13122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13123: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13125: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13126: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13127: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13372: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 13373: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13374: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13375: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 13376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13377: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13379: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13380: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13381: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13550: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 13551: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13552: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13553: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 13554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13555: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13557: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13558: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13559: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13851: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 13852: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13853: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13854: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 13855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13856: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13858: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13859: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13860: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 14038: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 14039: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14040: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14041: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 14042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14043: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14045: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14046: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14047: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14238: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 14239: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14240: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14241: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 14242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14243: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14245: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14246: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14247: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.60s leader 5, trace 14392: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.60s leader 5, trace 14393: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14430: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 14431: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14432: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14433: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 14434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14435: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14437: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14438: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 14439: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14720: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 14721: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14722: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14723: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 14724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14725: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14727: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14728: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 14729: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.30s leader 5, trace 14841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.30s leader 5, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 15063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 15064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 15065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 15066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 15067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 15068: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 15069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 15070: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15071: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 15283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 15284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 15285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 15286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 15287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 15288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 15292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 15478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 15817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 15820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 16011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 16012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 16013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 16014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 16015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 16016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 16017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 16018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 16019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 16020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 16208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 16209: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 16210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 16211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 16212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 16213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 16214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 16215: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 16216: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 16217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.55s leader 5, trace 16448: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.55s leader 5, trace 16449: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 16486: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 16487: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 16488: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 16489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 16490: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 16491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 16492: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 16493: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 16494: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 16653: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16654: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 16655: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 16656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 16657: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 16658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16659: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16660: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16661: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.05s leader 5, trace 16736: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.05s leader 5, trace 16737: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16953: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16954: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16955: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 16956: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16957: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16959: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16960: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 16961: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.10s leader 5, trace 17086: estimate 5.41; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17249: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17250: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 17251: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 17252: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 17253: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 17254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 17255: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17256: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 17257: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 17422: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 17423: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 17424: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 17425: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 17426: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 17427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 17428: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 17429: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 17430: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 17578: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 17579: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 17580: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 17581: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 17582: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 17583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 17584: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 17585: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 17586: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 17699: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 17700: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 17701: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 17702: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 17703: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 17704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 17705: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 17706: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 17707: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bram killed in action
- 1: Tern incapacitated

## Outcome attribution

- 66.05s, evidence 540: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 66.05s, evidence 4065: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358271 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4077}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 66.05s, evidence 4066: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358271 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4077}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.10s, evidence 1722: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.10s, evidence 11959: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416601 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.10s, evidence 11960: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416601 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
