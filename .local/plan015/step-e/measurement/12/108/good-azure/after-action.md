# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/108/good-azure/battle-108-1789673894905117113`

## Battle summary

**Ember** · 360 s · 88 shots.

### Turning points

- 36.9s, squad 4: contact (events line 383). First recorded contact.
- 43.1s, squad 0: withdrawal ([trace 3082](#trace-3082)). 83.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 59.2s, squad 0: help call ([trace 4057](#trace-4057)). No completion observed before termination.
- 89.8s, squad 0: withdrawal ([trace 5309](#trace-5309)). 141.2s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 11 shots, 2/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 77 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 29.8s, squad 0 chose renewed the existing objective ([trace 1544](#trace-1544)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
- 29.8s: renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 1543](#trace-1543)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1618}.

### Communication

126 matched deliveries (mean 0.17s, max 1.60s); 246 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 36.90s, squad 4, contact, evidence events line 383: First recorded contact; .
- 43.10s, squad 0, withdrawal, evidence 3082: BreakContact: believed ratio at least two without superiority; 83.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 59.20s, squad 0, help call, evidence 4057: NeedSupport; No completion observed before termination.
- 89.75s, squad 0, withdrawal, evidence 5309: Withdraw to received rally; 141.2s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000992380147, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299966549222812, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629984931416188, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-503"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-568"></a>
<a id="trace-598"></a>
<a id="trace-610"></a>
<a id="trace-622"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-758"></a>
<a id="trace-776"></a>
<a id="trace-785"></a>
<a id="trace-798"></a>
<a id="trace-818"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889259074811279, 'next_transition': 503}.
<a id="trace-479"></a>
<a id="trace-505"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-550"></a>
<a id="trace-570"></a>
<a id="trace-600"></a>
<a id="trace-612"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-760"></a>
<a id="trace-778"></a>
<a id="trace-787"></a>
<a id="trace-820"></a>
<a id="trace-915"></a>
<a id="trace-997"></a>
<a id="trace-1012"></a>
<a id="trace-1035"></a>
<a id="trace-1064"></a>
<a id="trace-1079"></a>
<a id="trace-1100"></a>
<a id="trace-1125"></a>
<a id="trace-1137"></a>
<a id="trace-1222"></a>
<a id="trace-1239"></a>
<a id="trace-1253"></a>
<a id="trace-1269"></a>
<a id="trace-1290"></a>
<a id="trace-1300"></a>
<a id="trace-1323"></a>
<a id="trace-1341"></a>
<a id="trace-1433"></a>
<a id="trace-1442"></a>
<a id="trace-1465"></a>
<a id="trace-1473"></a>
<a id="trace-1485"></a>
<a id="trace-1497"></a>
<a id="trace-1510"></a>
<a id="trace-1518"></a>
<a id="trace-1620"></a>
<a id="trace-1790"></a>
<a id="trace-1808"></a>
<a id="trace-1823"></a>
<a id="trace-1870"></a>
<a id="trace-1881"></a>
<a id="trace-1960"></a>
<a id="trace-1971"></a>
<a id="trace-1991"></a>
<a id="trace-2010"></a>
<a id="trace-2020"></a>
<a id="trace-2628"></a>
<a id="trace-2639"></a>
<a id="trace-2662"></a>
<a id="trace-2895"></a>
<a id="trace-2978"></a>
<a id="trace-3011"></a>
<a id="trace-3043"></a>
<a id="trace-3247"></a>
<a id="trace-3255"></a>
<a id="trace-3268"></a>
<a id="trace-3285"></a>
<a id="trace-3360"></a>
<a id="trace-3365"></a>
<a id="trace-3380"></a>
<a id="trace-3391"></a>
<a id="trace-3406"></a>
<a id="trace-3414"></a>
<a id="trace-3427"></a>
<a id="trace-3441"></a>
<a id="trace-3450"></a>
<a id="trace-3461"></a>
<a id="trace-3559"></a>
<a id="trace-3592"></a>
<a id="trace-3622"></a>
<a id="trace-3659"></a>
<a id="trace-3712"></a>
<a id="trace-3745"></a>
<a id="trace-3780"></a>
<a id="trace-3807"></a>
<a id="trace-3827"></a>
<a id="trace-3841"></a>
<a id="trace-3913"></a>
<a id="trace-3974"></a>
<a id="trace-3985"></a>
<a id="trace-3998"></a>
<a id="trace-4012"></a>
<a id="trace-4019"></a>
<a id="trace-4054"></a>
<a id="trace-4065"></a>
<a id="trace-4074"></a>
<a id="trace-4160"></a>
<a id="trace-4181"></a>
<a id="trace-4196"></a>
<a id="trace-4209"></a>
<a id="trace-4220"></a>
<a id="trace-4226"></a>
<a id="trace-4239"></a>
<a id="trace-4342"></a>
<a id="trace-4372"></a>
<a id="trace-4393"></a>
<a id="trace-4406"></a>
<a id="trace-4415"></a>
<a id="trace-4507"></a>
<a id="trace-4521"></a>
<a id="trace-4526"></a>
<a id="trace-4540"></a>
<a id="trace-4629"></a>
<a id="trace-4646"></a>
<a id="trace-4653"></a>
<a id="trace-4672"></a>
<a id="trace-4690"></a>
<a id="trace-4765"></a>
<a id="trace-4775"></a>
<a id="trace-4789"></a>
<a id="trace-4798"></a>
<a id="trace-4809"></a>
<a id="trace-4821"></a>
<a id="trace-4832"></a>
<a id="trace-4842"></a>
<a id="trace-4856"></a>
<a id="trace-4864"></a>
<a id="trace-4949"></a>
<a id="trace-4959"></a>
<a id="trace-4970"></a>
<a id="trace-4980"></a>
<a id="trace-5090"></a>
<a id="trace-5100"></a>
<a id="trace-5121"></a>
<a id="trace-5140"></a>
<a id="trace-5212"></a>
<a id="trace-5255"></a>
<a id="trace-5263"></a>
<a id="trace-5270"></a>
<a id="trace-5287"></a>
<a id="trace-5292"></a>
<a id="trace-5303"></a>
<a id="trace-5308"></a>
<a id="trace-5467"></a>
<a id="trace-5476"></a>
<a id="trace-5497"></a>
<a id="trace-5514"></a>
<a id="trace-5522"></a>
<a id="trace-5531"></a>
<a id="trace-5538"></a>
<a id="trace-5611"></a>
<a id="trace-5618"></a>
<a id="trace-5631"></a>
<a id="trace-5640"></a>
<a id="trace-5652"></a>
<a id="trace-5659"></a>
<a id="trace-5682"></a>
<a id="trace-5691"></a>
<a id="trace-5701"></a>
<a id="trace-5777"></a>
<a id="trace-5785"></a>
<a id="trace-5797"></a>
<a id="trace-5827"></a>
<a id="trace-5837"></a>
<a id="trace-5843"></a>
<a id="trace-5857"></a>
<a id="trace-5870"></a>
<a id="trace-5953"></a>
<a id="trace-6031"></a>
<a id="trace-6047"></a>
<a id="trace-6055"></a>
<a id="trace-6072"></a>
<a id="trace-6082"></a>
<a id="trace-6103"></a>
<a id="trace-6183"></a>
<a id="trace-6195"></a>
<a id="trace-6204"></a>
<a id="trace-6213"></a>
<a id="trace-6228"></a>
<a id="trace-6250"></a>
<a id="trace-6258"></a>
<a id="trace-6275"></a>
<a id="trace-6283"></a>
<a id="trace-6357"></a>
<a id="trace-6375"></a>
<a id="trace-6395"></a>
<a id="trace-6404"></a>
<a id="trace-6419"></a>
<a id="trace-6427"></a>
<a id="trace-6440"></a>
<a id="trace-6449"></a>
<a id="trace-6532"></a>
<a id="trace-6539"></a>
<a id="trace-6621"></a>
<a id="trace-6638"></a>
<a id="trace-6649"></a>
<a id="trace-6656"></a>
<a id="trace-6676"></a>
<a id="trace-6688"></a>
<a id="trace-6764"></a>
<a id="trace-6773"></a>
<a id="trace-6788"></a>
<a id="trace-6812"></a>
<a id="trace-6819"></a>
<a id="trace-6842"></a>
<a id="trace-6852"></a>
<a id="trace-6861"></a>
<a id="trace-6936"></a>
<a id="trace-6997"></a>
<a id="trace-7010"></a>
<a id="trace-7019"></a>
<a id="trace-7038"></a>
<a id="trace-7049"></a>
<a id="trace-7066"></a>
<a id="trace-7175"></a>
<a id="trace-7194"></a>
<a id="trace-7203"></a>
<a id="trace-7215"></a>
<a id="trace-7244"></a>
<a id="trace-7258"></a>
<a id="trace-7340"></a>
<a id="trace-7366"></a>
<a id="trace-7376"></a>
<a id="trace-7398"></a>
<a id="trace-7406"></a>
<a id="trace-7434"></a>
<a id="trace-7462"></a>
<a id="trace-7536"></a>
<a id="trace-7664"></a>
<a id="trace-7674"></a>
<a id="trace-7699"></a>
<a id="trace-7738"></a>
<a id="trace-7747"></a>
<a id="trace-7828"></a>
<a id="trace-7836"></a>
<a id="trace-7848"></a>
<a id="trace-7859"></a>
<a id="trace-7873"></a>
<a id="trace-7890"></a>
<a id="trace-7909"></a>
<a id="trace-7927"></a>
<a id="trace-7936"></a>
<a id="trace-8110"></a>
<a id="trace-8118"></a>
<a id="trace-8132"></a>
<a id="trace-8152"></a>
<a id="trace-8167"></a>
<a id="trace-8242"></a>
<a id="trace-8250"></a>
<a id="trace-8372"></a>
<a id="trace-8382"></a>
<a id="trace-8404"></a>
<a id="trace-8412"></a>
<a id="trace-8425"></a>
<a id="trace-8453"></a>
<a id="trace-8466"></a>
<a id="trace-8540"></a>
<a id="trace-8552"></a>
<a id="trace-8567"></a>
<a id="trace-8574"></a>
<a id="trace-8590"></a>
<a id="trace-8614"></a>
<a id="trace-8724"></a>
<a id="trace-8736"></a>
<a id="trace-8746"></a>
<a id="trace-8773"></a>
<a id="trace-8780"></a>
<a id="trace-8891"></a>
<a id="trace-8898"></a>
<a id="trace-8918"></a>
<a id="trace-8925"></a>
<a id="trace-9003"></a>
<a id="trace-9013"></a>
<a id="trace-9028"></a>
<a id="trace-9043"></a>
<a id="trace-9063"></a>
<a id="trace-9081"></a>
<a id="trace-9088"></a>
<a id="trace-9104"></a>
<a id="trace-9115"></a>
<a id="trace-9193"></a>
<a id="trace-9204"></a>
<a id="trace-9216"></a>
<a id="trace-9224"></a>
<a id="trace-9242"></a>
<a id="trace-9262"></a>
<a id="trace-9271"></a>
<a id="trace-9289"></a>
<a id="trace-9298"></a>
<a id="trace-9383"></a>
<a id="trace-9398"></a>
<a id="trace-9404"></a>
<a id="trace-9421"></a>
<a id="trace-9430"></a>
<a id="trace-9440"></a>
<a id="trace-9451"></a>
<a id="trace-9463"></a>
<a id="trace-9540"></a>
<a id="trace-9687"></a>
<a id="trace-9694"></a>
<a id="trace-9712"></a>
<a id="trace-9723"></a>
<a id="trace-9734"></a>
<a id="trace-9760"></a>
<a id="trace-9771"></a>
<a id="trace-9868"></a>
<a id="trace-9879"></a>
<a id="trace-9893"></a>
<a id="trace-9920"></a>
<a id="trace-9944"></a>
<a id="trace-9952"></a>
<a id="trace-10551"></a>
<a id="trace-10558"></a>
<a id="trace-10569"></a>
<a id="trace-10580"></a>
<a id="trace-10585"></a>
<a id="trace-10594"></a>
<a id="trace-10601"></a>
<a id="trace-10616"></a>
<a id="trace-10696"></a>
<a id="trace-10715"></a>
<a id="trace-10734"></a>
<a id="trace-10745"></a>
<a id="trace-10762"></a>
<a id="trace-10833"></a>
<a id="trace-10837"></a>
<a id="trace-10845"></a>
<a id="trace-10853"></a>
<a id="trace-10862"></a>
<a id="trace-10867"></a>
<a id="trace-10880"></a>
<a id="trace-10894"></a>
<a id="trace-10966"></a>
<a id="trace-10973"></a>
<a id="trace-10981"></a>
<a id="trace-10996"></a>
<a id="trace-11000"></a>
<a id="trace-11009"></a>
<a id="trace-11014"></a>
<a id="trace-11025"></a>
<a id="trace-11030"></a>
<a id="trace-11102"></a>
<a id="trace-11115"></a>
<a id="trace-11141"></a>
<a id="trace-11150"></a>
<a id="trace-11154"></a>
<a id="trace-11164"></a>
<a id="trace-11169"></a>
<a id="trace-11245"></a>
<a id="trace-11254"></a>
<a id="trace-11260"></a>
<a id="trace-11270"></a>
<a id="trace-11277"></a>
<a id="trace-11286"></a>
<a id="trace-11305"></a>
<a id="trace-11381"></a>
<a id="trace-11386"></a>
<a id="trace-11401"></a>
<a id="trace-11410"></a>
<a id="trace-11414"></a>
<a id="trace-11423"></a>
<a id="trace-11430"></a>
<a id="trace-11439"></a>
<a id="trace-11446"></a>
<a id="trace-11523"></a>
<a id="trace-11554"></a>
<a id="trace-11563"></a>
<a id="trace-11665"></a>
<a id="trace-11671"></a>
<a id="trace-11683"></a>
<a id="trace-11703"></a>
<a id="trace-11714"></a>
<a id="trace-11718"></a>
<a id="trace-11790"></a>
<a id="trace-11796"></a>
<a id="trace-11804"></a>
<a id="trace-11823"></a>
<a id="trace-11833"></a>
<a id="trace-11850"></a>
<a id="trace-11933"></a>
<a id="trace-11942"></a>
<a id="trace-11950"></a>
<a id="trace-11962"></a>
<a id="trace-11975"></a>
<a id="trace-11985"></a>
<a id="trace-11991"></a>
<a id="trace-12065"></a>
<a id="trace-12071"></a>
<a id="trace-12080"></a>
<a id="trace-12087"></a>
<a id="trace-12099"></a>
<a id="trace-12105"></a>
<a id="trace-12113"></a>
<a id="trace-12127"></a>
<a id="trace-12131"></a>
<a id="trace-12204"></a>
<a id="trace-12218"></a>
<a id="trace-12236"></a>
<a id="trace-12240"></a>
<a id="trace-12249"></a>
<a id="trace-12256"></a>
<a id="trace-12267"></a>
<a id="trace-12273"></a>
<a id="trace-12345"></a>
<a id="trace-12349"></a>
<a id="trace-12358"></a>
<a id="trace-12366"></a>
<a id="trace-12375"></a>
<a id="trace-12381"></a>
<a id="trace-12392"></a>
<a id="trace-12396"></a>
<a id="trace-12406"></a>
<a id="trace-12413"></a>
<a id="trace-12484"></a>
<a id="trace-12491"></a>
<a id="trace-12503"></a>
<a id="trace-12510"></a>
<a id="trace-12523"></a>
<a id="trace-12533"></a>
<a id="trace-12538"></a>
<a id="trace-12549"></a>
<a id="trace-12553"></a>
<a id="trace-12627"></a>
<a id="trace-12633"></a>
<a id="trace-12641"></a>
<a id="trace-12657"></a>
<a id="trace-12662"></a>
<a id="trace-12674"></a>
<a id="trace-12679"></a>
<a id="trace-12689"></a>
<a id="trace-12694"></a>
<a id="trace-12779"></a>
<a id="trace-12789"></a>
<a id="trace-12797"></a>
<a id="trace-12802"></a>
<a id="trace-12812"></a>
<a id="trace-12816"></a>
<a id="trace-12905"></a>
<a id="trace-12910"></a>
<a id="trace-12919"></a>
<a id="trace-12926"></a>
<a id="trace-12941"></a>
<a id="trace-12951"></a>
<a id="trace-12956"></a>
<a id="trace-12966"></a>
<a id="trace-12970"></a>
<a id="trace-13043"></a>
<a id="trace-13057"></a>
<a id="trace-13066"></a>
<a id="trace-13079"></a>
<a id="trace-13103"></a>
<a id="trace-13110"></a>
<a id="trace-13185"></a>
<a id="trace-13194"></a>
<a id="trace-13209"></a>
<a id="trace-13215"></a>
<a id="trace-13240"></a>
<a id="trace-13247"></a>
<a id="trace-13318"></a>
<a id="trace-13324"></a>
<a id="trace-13335"></a>
<a id="trace-13341"></a>
<a id="trace-13350"></a>
<a id="trace-13355"></a>
<a id="trace-13364"></a>
<a id="trace-13369"></a>
<a id="trace-13380"></a>
<a id="trace-13384"></a>
<a id="trace-13456"></a>
<a id="trace-13466"></a>
<a id="trace-13490"></a>
<a id="trace-13494"></a>
<a id="trace-13505"></a>
<a id="trace-13510"></a>
<a id="trace-13520"></a>
<a id="trace-13596"></a>
<a id="trace-13601"></a>
<a id="trace-13618"></a>
<a id="trace-13628"></a>
<a id="trace-13634"></a>
<a id="trace-13644"></a>
<a id="trace-13648"></a>
<a id="trace-13665"></a>
<a id="trace-13737"></a>
<a id="trace-13750"></a>
<a id="trace-13756"></a>
<a id="trace-13764"></a>
<a id="trace-13778"></a>
<a id="trace-13784"></a>
<a id="trace-13796"></a>
<a id="trace-13873"></a>
<a id="trace-13903"></a>
<a id="trace-13907"></a>
<a id="trace-13916"></a>
<a id="trace-13922"></a>
<a id="trace-13935"></a>
<a id="trace-14008"></a>
<a id="trace-14012"></a>
<a id="trace-14023"></a>
<a id="trace-14042"></a>
<a id="trace-14049"></a>
<a id="trace-14058"></a>
<a id="trace-14071"></a>
<a id="trace-14077"></a>
<a id="trace-14148"></a>
<a id="trace-14155"></a>
<a id="trace-14183"></a>
<a id="trace-14196"></a>
<a id="trace-14202"></a>
<a id="trace-14214"></a>
<a id="trace-14218"></a>
<a id="trace-14290"></a>
<a id="trace-14303"></a>
<a id="trace-14310"></a>
<a id="trace-14319"></a>
<a id="trace-14332"></a>
<a id="trace-14337"></a>
<a id="trace-14348"></a>
<a id="trace-14356"></a>
<a id="trace-14433"></a>
<a id="trace-14451"></a>
<a id="trace-14459"></a>
<a id="trace-14464"></a>
<a id="trace-14473"></a>
<a id="trace-14477"></a>
<a id="trace-14567"></a>
<a id="trace-14577"></a>
<a id="trace-14584"></a>
<a id="trace-14596"></a>
<a id="trace-14605"></a>
<a id="trace-14613"></a>
<a id="trace-14618"></a>
<a id="trace-14628"></a>
<a id="trace-14632"></a>
<a id="trace-14704"></a>
<a id="trace-14709"></a>
<a id="trace-14718"></a>
<a id="trace-14725"></a>
<a id="trace-14739"></a>
<a id="trace-14748"></a>
<a id="trace-14755"></a>
<a id="trace-14769"></a>
<a id="trace-14775"></a>
<a id="trace-14850"></a>
<a id="trace-14859"></a>
<a id="trace-14866"></a>
<a id="trace-14875"></a>
<a id="trace-14891"></a>
<a id="trace-14902"></a>
<a id="trace-14909"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512296585661652, 'next_transition': 505}.
<a id="trace-827"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 827): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4373164729897716, 'next_transition': 913}.
<a id="trace-913"></a>
<a id="trace-995"></a>
<a id="trace-1010"></a>
<a id="trace-1033"></a>
<a id="trace-1049"></a>
<a id="trace-1062"></a>
<a id="trace-1077"></a>
<a id="trace-1098"></a>
<a id="trace-1112"></a>
<a id="trace-1123"></a>
<a id="trace-1135"></a>
<a id="trace-1220"></a>
<a id="trace-1237"></a>
<a id="trace-1251"></a>
<a id="trace-1267"></a>
<a id="trace-1288"></a>
<a id="trace-1298"></a>
<a id="trace-1311"></a>
<a id="trace-1321"></a>
<a id="trace-1339"></a>
<a id="trace-1358"></a>
<a id="trace-1431"></a>
- 14.70s–25.25s (×22), actor 5, squad 0 (trace 913): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843638008796445, 'next_transition': 995}.
<a id="trace-1435"></a>
- 25.35s–25.35s (×1), actor 0, squad 0 (trace 1435): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 1361. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300040853438943, 'next_transition': 1440}.
<a id="trace-1440"></a>
<a id="trace-1463"></a>
<a id="trace-1471"></a>
<a id="trace-1483"></a>
<a id="trace-1495"></a>
<a id="trace-1508"></a>
<a id="trace-1516"></a>
<a id="trace-1534"></a>
<a id="trace-1541"></a>
- 25.75s–29.75s (×9), actor 5, squad 0 (trace 1440): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1363. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449813268062497, 'next_transition': 1463}.
<a id="trace-307"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 307): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1543"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1543): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1543. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1618}.
<a id="trace-1544"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1544): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1544. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1618}.
<a id="trace-1618"></a>
<a id="trace-1625"></a>
<a id="trace-1635"></a>
- 30.25s–31.25s (×3), actor 5, squad 0 (trace 1618): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1549. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1625}.
<a id="trace-1637"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1637): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 1547. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-1640"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1640): MoveTactically. Knowledge: actor memory at 30.00s, trace 1547. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-1641"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1641): traveling overwatch. Knowledge: actor memory at 30.00s, trace 1547. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-1642"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1642): Reorganise complete. Knowledge: actor memory at 30.00s, trace 1547. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-1788"></a>
<a id="trace-1806"></a>
<a id="trace-1821"></a>
<a id="trace-1835"></a>
<a id="trace-1846"></a>
<a id="trace-1868"></a>
<a id="trace-1879"></a>
<a id="trace-1958"></a>
<a id="trace-1969"></a>
<a id="trace-1989"></a>
<a id="trace-2008"></a>
<a id="trace-2018"></a>
<a id="trace-2028"></a>
- 31.75s–37.75s (×13), actor 5, squad 0 (trace 1788): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1549. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625129297265215, 'next_transition': 1806}.
<a id="trace-2032"></a>
- 37.90s–37.90s (×1), actor 0, squad 0 (trace 2032): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 1888. Next observer evidence: None.
<a id="trace-2033"></a>
- 37.90s–37.90s (×1), actor 0, squad 0 (trace 2033): bounding overwatch. Knowledge: actor memory at 35.00s, trace 1888. Next observer evidence: None.
<a id="trace-2034"></a>
<a id="trace-2227"></a>
<a id="trace-2424"></a>
- 37.90s–38.05s (×3), actor 0, squad 0 (trace 2034): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 1888. Next observer evidence: None.
<a id="trace-2626"></a>
<a id="trace-2637"></a>
<a id="trace-2660"></a>
- 38.25s–39.25s (×3), actor 5, squad 0 (trace 2626): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1890. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.866554461912114, 'next_transition': 2637}.
<a id="trace-2680"></a>
- 39.60s–39.60s (×1), actor 0, squad 0 (trace 2680): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 1888. Next observer evidence: None.
<a id="trace-2893"></a>
<a id="trace-2976"></a>
<a id="trace-3009"></a>
<a id="trace-3041"></a>
<a id="trace-3051"></a>
- 39.75s–41.75s (×5), actor 5, squad 0 (trace 2893): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1890. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1453500000000001, 'next_transition': 2976}.
<a id="trace-435"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 435): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3058"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3058): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506174 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3058. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37871895645025067, 'next_transition': 3068}.
<a id="trace-3059"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3059): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506174 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3059. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37871895645025067, 'next_transition': 3068}.
<a id="trace-3068"></a>
<a id="trace-3076"></a>
- 42.25s–42.75s (×2), actor 5, squad 0 (trace 3068): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 3059. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.762005229517884, 'next_transition': 3076}.
<a id="trace-3081"></a>
- 43.05s–43.05s (×1), actor 5, squad 0 (trace 3081): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 43.05s, trace 3081. Next observer evidence: None.
<a id="trace-3082"></a>
- 43.10s–43.10s (×1), actor 0, squad 0 (trace 3082): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 2899. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150095812142564, 'next_transition': 3245}.
<a id="trace-3083"></a>
- 43.10s–43.10s (×1), actor 0, squad 0 (trace 3083): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 2899. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150095812142564, 'next_transition': 3245}.
<a id="trace-3245"></a>
<a id="trace-3253"></a>
<a id="trace-3266"></a>
<a id="trace-3283"></a>
<a id="trace-3358"></a>
<a id="trace-3363"></a>
<a id="trace-3378"></a>
<a id="trace-3389"></a>
<a id="trace-3404"></a>
<a id="trace-3412"></a>
<a id="trace-3425"></a>
<a id="trace-3439"></a>
<a id="trace-3448"></a>
<a id="trace-3459"></a>
<a id="trace-3557"></a>
<a id="trace-3590"></a>
<a id="trace-3620"></a>
<a id="trace-3657"></a>
<a id="trace-3710"></a>
<a id="trace-3743"></a>
<a id="trace-3778"></a>
<a id="trace-3805"></a>
<a id="trace-3825"></a>
<a id="trace-3839"></a>
<a id="trace-3911"></a>
- 43.25s–55.25s (×25), actor 5, squad 0 (trace 3245): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 43.05s, trace 3081. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299946048356055, 'next_transition': 3253}.
<a id="trace-3916"></a>
- 55.55s–55.55s (×1), actor 0, squad 0 (trace 3916): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3842. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750938868842101, 'next_transition': 3972}.
<a id="trace-3917"></a>
- 55.55s–55.55s (×1), actor 0, squad 0 (trace 3917): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3842. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750938868842101, 'next_transition': 3972}.
<a id="trace-3972"></a>
<a id="trace-3983"></a>
<a id="trace-3996"></a>
<a id="trace-4010"></a>
<a id="trace-4017"></a>
<a id="trace-4038"></a>
<a id="trace-4052"></a>
- 55.75s–58.75s (×7), actor 5, squad 0 (trace 3972): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3844. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249078065741096, 'next_transition': 3983}.
<a id="trace-4057"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 4057): NeedSupport. Knowledge: actor memory at 55.00s, trace 3842. Next observer evidence: None.
<a id="trace-4063"></a>
<a id="trace-4072"></a>
<a id="trace-4149"></a>
<a id="trace-4158"></a>
<a id="trace-4172"></a>
<a id="trace-4179"></a>
<a id="trace-4194"></a>
<a id="trace-4207"></a>
<a id="trace-4218"></a>
<a id="trace-4224"></a>
<a id="trace-4237"></a>
<a id="trace-4245"></a>
<a id="trace-4322"></a>
<a id="trace-4328"></a>
<a id="trace-4340"></a>
<a id="trace-4355"></a>
<a id="trace-4365"></a>
<a id="trace-4370"></a>
<a id="trace-4382"></a>
<a id="trace-4391"></a>
<a id="trace-4404"></a>
<a id="trace-4413"></a>
<a id="trace-4493"></a>
<a id="trace-4505"></a>
<a id="trace-4519"></a>
<a id="trace-4524"></a>
<a id="trace-4538"></a>
- 59.25s–72.25s (×27), actor 5, squad 0 (trace 4063): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3844. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418011582856854, 'next_transition': 4072}.
<a id="trace-4543"></a>
- 72.35s–72.35s (×1), actor 0, squad 0 (trace 4543): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 4419. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501497781851606, 'next_transition': 4627}.
<a id="trace-4565"></a>
- 72.35s–72.35s (×1), actor 0, squad 0 (trace 4565): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 4419. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501497781851606, 'next_transition': 4627}.
<a id="trace-4627"></a>
<a id="trace-4644"></a>
<a id="trace-4651"></a>
<a id="trace-4670"></a>
<a id="trace-4688"></a>
<a id="trace-4763"></a>
<a id="trace-4773"></a>
<a id="trace-4787"></a>
<a id="trace-4796"></a>
<a id="trace-4807"></a>
<a id="trace-4819"></a>
<a id="trace-4830"></a>
<a id="trace-4840"></a>
<a id="trace-4862"></a>
<a id="trace-4938"></a>
<a id="trace-4947"></a>
<a id="trace-4957"></a>
<a id="trace-4968"></a>
<a id="trace-4978"></a>
<a id="trace-4988"></a>
- 72.75s–82.75s (×20), actor 5, squad 0 (trace 4627): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4421. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47201014356155485, 'next_transition': 4644}.
<a id="trace-4996"></a>
- 83.00s–83.00s (×1), actor 0, squad 0 (trace 4996): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 4867. Next observer evidence: None.
<a id="trace-5003"></a>
- 83.05s–83.05s (×1), actor 0, squad 0 (trace 5003): MoveTactically. Knowledge: actor memory at 80.00s, trace 4867. Next observer evidence: None.
<a id="trace-5004"></a>
- 83.05s–83.05s (×1), actor 0, squad 0 (trace 5004): traveling overwatch. Knowledge: actor memory at 80.00s, trace 4867. Next observer evidence: None.
<a id="trace-5005"></a>
- 83.05s–83.05s (×1), actor 0, squad 0 (trace 5005): received platoon directive. Knowledge: actor memory at 80.00s, trace 4867. Next observer evidence: None.
<a id="trace-5031"></a>
- 83.10s–83.10s (×1), actor 0, squad 0 (trace 5031): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 4867. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749724203934393, 'next_transition': 5088}.
<a id="trace-5088"></a>
<a id="trace-5098"></a>
<a id="trace-5118"></a>
<a id="trace-5209"></a>
<a id="trace-5252"></a>
<a id="trace-5267"></a>
- 83.25s–87.25s (×6), actor 5, squad 0 (trace 5088): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4869. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09746262104006931, 'next_transition': 5098}.
<a id="trace-654"></a>
- 88.05s–88.05s (×1), actor 5, squad 0 (events line 654): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5277"></a>
- 88.05s–88.05s (×1), actor 5, squad 0 (trace 5277): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445836 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.05s, trace 5277. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100224855686754, 'next_transition': 5284}.
<a id="trace-5278"></a>
- 88.05s–88.05s (×1), actor 5, squad 0 (trace 5278): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445836 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.05s, trace 5278. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100224855686754, 'next_transition': 5284}.
<a id="trace-5284"></a>
<a id="trace-5300"></a>
- 88.25s–89.25s (×2), actor 5, squad 0 (trace 5284): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 88.05s, trace 5278. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749971356169183, 'next_transition': 5300}.
<a id="trace-5309"></a>
- 89.75s–89.75s (×1), actor 0, squad 0 (trace 5309): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 5145. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600244625255859, 'next_transition': 5453}.
<a id="trace-5310"></a>
- 89.75s–89.75s (×1), actor 0, squad 0 (trace 5310): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 5145. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600244625255859, 'next_transition': 5453}.
<a id="trace-5453"></a>
<a id="trace-5473"></a>
<a id="trace-5494"></a>
<a id="trace-5511"></a>
<a id="trace-5528"></a>
<a id="trace-5608"></a>
<a id="trace-5628"></a>
<a id="trace-5649"></a>
<a id="trace-5667"></a>
<a id="trace-5688"></a>
<a id="trace-5774"></a>
<a id="trace-5794"></a>
<a id="trace-5813"></a>
<a id="trace-5834"></a>
<a id="trace-5854"></a>
<a id="trace-5940"></a>
- 90.25s–105.25s (×16), actor 5, squad 0 (trace 5453): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5387. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3911976045641854, 'next_transition': 5473}.
<a id="trace-5958"></a>
- 105.95s–105.95s (×1), actor 0, squad 0 (trace 5958): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 5874. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199937168842205, 'next_transition': 6020}.
<a id="trace-5959"></a>
- 105.95s–105.95s (×1), actor 0, squad 0 (trace 5959): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 5874. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199937168842205, 'next_transition': 6020}.
<a id="trace-6020"></a>
<a id="trace-6044"></a>
<a id="trace-6069"></a>
<a id="trace-6100"></a>
<a id="trace-6180"></a>
<a id="trace-6201"></a>
<a id="trace-6225"></a>
<a id="trace-6247"></a>
<a id="trace-6272"></a>
<a id="trace-6354"></a>
<a id="trace-6372"></a>
<a id="trace-6392"></a>
<a id="trace-6416"></a>
<a id="trace-6437"></a>
<a id="trace-6529"></a>
<a id="trace-6548"></a>
- 106.25s–121.25s (×16), actor 5, squad 0 (trace 6020): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 5876. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.917697940329162, 'next_transition': 6044}.
<a id="trace-6556"></a>
- 121.55s–121.55s (×1), actor 0, squad 0 (trace 6556): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 6454. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400027645457165, 'next_transition': 6618}.
<a id="trace-6557"></a>
- 121.55s–121.55s (×1), actor 0, squad 0 (trace 6557): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 6454. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400027645457165, 'next_transition': 6618}.
<a id="trace-6618"></a>
<a id="trace-6646"></a>
<a id="trace-6673"></a>
<a id="trace-6761"></a>
<a id="trace-6785"></a>
<a id="trace-6809"></a>
<a id="trace-6828"></a>
<a id="trace-6849"></a>
<a id="trace-6933"></a>
- 122.25s–130.30s (×9), actor 5, squad 0 (trace 6618): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6456. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27932277432215313, 'next_transition': 6646}.
<a id="trace-6939"></a>
- 130.55s–130.55s (×1), actor 0, squad 0 (trace 6939): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 6863. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149916436281388, 'next_transition': 7007}.
<a id="trace-6940"></a>
- 130.55s–130.55s (×1), actor 0, squad 0 (trace 6940): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 6863. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149916436281388, 'next_transition': 7007}.
<a id="trace-7007"></a>
<a id="trace-7035"></a>
<a id="trace-7063"></a>
<a id="trace-7091"></a>
<a id="trace-7172"></a>
<a id="trace-7191"></a>
<a id="trace-7212"></a>
<a id="trace-7235"></a>
<a id="trace-7255"></a>
<a id="trace-7337"></a>
- 131.30s–140.30s (×10), actor 5, squad 0 (trace 7007): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 6865. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6426198400990196, 'next_transition': 7035}.
<a id="trace-7358"></a>
- 141.20s–141.20s (×1), actor 0, squad 0 (trace 7358): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 140.00s, trace 7270. Next observer evidence: None.
<a id="trace-7363"></a>
<a id="trace-7395"></a>
<a id="trace-7415"></a>
- 141.30s–143.30s (×3), actor 5, squad 0 (trace 7363): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 7272. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4405521295931927, 'next_transition': 7395}.
<a id="trace-1112"></a>
- 143.75s–143.75s (×1), actor 5, squad 0 (events line 1112): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7452}.
<a id="trace-7429"></a>
- 143.75s–143.75s (×1), actor 5, squad 0 (trace 7429): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.561598 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.75s, trace 7429. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7452}.
<a id="trace-7430"></a>
- 143.75s–143.75s (×1), actor 5, squad 0 (trace 7430): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.561598 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.75s, trace 7430. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7452}.
<a id="trace-7452"></a>
<a id="trace-7533"></a>
- 144.30s–145.30s (×2), actor 5, squad 0 (trace 7452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 143.75s, trace 7430. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3968994345059064, 'next_transition': 7533}.
<a id="trace-7538"></a>
- 145.45s–145.45s (×1), actor 0, squad 0 (trace 7538): MoveTactically. Knowledge: actor memory at 145.00s, trace 7464. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7661}.
<a id="trace-7539"></a>
- 145.45s–145.45s (×1), actor 0, squad 0 (trace 7539): traveling. Knowledge: actor memory at 145.00s, trace 7464. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7661}.
<a id="trace-7540"></a>
- 145.45s–145.45s (×1), actor 0, squad 0 (trace 7540): received platoon directive. Knowledge: actor memory at 145.00s, trace 7464. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7661}.
<a id="trace-7661"></a>
<a id="trace-7682"></a>
<a id="trace-7710"></a>
<a id="trace-7735"></a>
<a id="trace-7825"></a>
<a id="trace-7845"></a>
<a id="trace-7870"></a>
<a id="trace-7896"></a>
<a id="trace-7924"></a>
<a id="trace-8007"></a>
<a id="trace-8031"></a>
- 146.30s–156.30s (×11), actor 5, squad 0 (trace 7661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 7466. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.033197842221621, 'next_transition': 7682}.
<a id="trace-8047"></a>
- 156.95s–156.95s (×1), actor 0, squad 0 (trace 8047): traveling overwatch. Knowledge: actor memory at 155.00s, trace 7942. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42002148225484176, 'next_transition': 8107}.
<a id="trace-8048"></a>
- 156.95s–156.95s (×1), actor 0, squad 0 (trace 8048): matching received arrivals: traveling stage complete. Knowledge: actor memory at 155.00s, trace 7942. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42002148225484176, 'next_transition': 8107}.
<a id="trace-8107"></a>
<a id="trace-8129"></a>
<a id="trace-8149"></a>
- 157.30s–159.30s (×3), actor 5, squad 0 (trace 8107): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 7944. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3901903849379817, 'next_transition': 8129}.
<a id="trace-1263"></a>
- 159.35s–159.35s (×1), actor 5, squad 0 (events line 1263): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8155"></a>
- 159.35s–159.35s (×1), actor 5, squad 0 (trace 8155): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 159.35s, trace 8155. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.123503669576234, 'next_transition': 8239}.
<a id="trace-8156"></a>
- 159.35s–159.35s (×1), actor 5, squad 0 (trace 8156): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 159.35s, trace 8156. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.123503669576234, 'next_transition': 8239}.
<a id="trace-8239"></a>
- 160.30s–160.30s (×1), actor 5, squad 0 (trace 8239): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 8172. Next observer evidence: {'until': 161, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9198064595855944, 'next_transition': 8258}.
<a id="trace-8258"></a>
- 161.05s–161.05s (×1), actor 0, squad 0 (trace 8258): traveling. Knowledge: actor memory at 160.00s, trace 8170. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36120323611440996, 'next_transition': 8369}.
<a id="trace-8259"></a>
- 161.05s–161.05s (×1), actor 0, squad 0 (trace 8259): received platoon directive. Knowledge: actor memory at 160.00s, trace 8170. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36120323611440996, 'next_transition': 8369}.
<a id="trace-8369"></a>
<a id="trace-8401"></a>
<a id="trace-8422"></a>
<a id="trace-8450"></a>
<a id="trace-8537"></a>
<a id="trace-8564"></a>
<a id="trace-8587"></a>
<a id="trace-8611"></a>
<a id="trace-8638"></a>
<a id="trace-8721"></a>
<a id="trace-8743"></a>
<a id="trace-8770"></a>
- 161.30s–172.30s (×12), actor 5, squad 0 (trace 8369): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 8172. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3843247715443259, 'next_transition': 8401}.
<a id="trace-8789"></a>
- 173.15s–173.15s (×1), actor 0, squad 0 (trace 8789): matching received arrivals: traveling stage complete. Knowledge: actor memory at 170.00s, trace 8650. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100000661375566, 'next_transition': 8888}.
<a id="trace-8888"></a>
<a id="trace-8915"></a>
<a id="trace-9000"></a>
<a id="trace-9025"></a>
<a id="trace-9051"></a>
<a id="trace-9078"></a>
<a id="trace-9101"></a>
<a id="trace-9190"></a>
<a id="trace-9213"></a>
<a id="trace-9239"></a>
<a id="trace-9259"></a>
<a id="trace-9286"></a>
<a id="trace-9370"></a>
<a id="trace-9395"></a>
- 173.30s–186.30s (×14), actor 5, squad 0 (trace 8888): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 8652. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2390350153271552, 'next_transition': 8915}.
<a id="trace-9400"></a>
- 186.35s–186.35s (×1), actor 0, squad 0 (trace 9400): matching received arrivals: deployment leg complete. Knowledge: actor memory at 185.00s, trace 9305. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9975071116427078, 'next_transition': 9414}.
<a id="trace-9414"></a>
<a id="trace-9427"></a>
<a id="trace-9448"></a>
- 187.30s–189.30s (×3), actor 5, squad 0 (trace 9414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9307. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9427}.
<a id="trace-1540"></a>
- 189.35s–189.35s (×1), actor 5, squad 0 (events line 1540): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9452"></a>
- 189.35s–189.35s (×1), actor 5, squad 0 (trace 9452): two Done objectives within 18 m: resolved next leg must be at least 40 m ahead. Knowledge: actor memory at 189.35s, trace 9452. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9533}.
<a id="trace-9453"></a>
- 189.35s–189.35s (×1), actor 5, squad 0 (trace 9453): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.35s, trace 9453. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9533}.
<a id="trace-9454"></a>
- 189.35s–189.35s (×1), actor 5, squad 0 (trace 9454): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.35s, trace 9454. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9533}.
<a id="trace-9533"></a>
- 190.30s–190.30s (×1), actor 5, squad 0 (trace 9533): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 9468. Next observer evidence: {'until': 191, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9544}.
<a id="trace-9544"></a>
- 191.05s–191.05s (×1), actor 0, squad 0 (trace 9544): Reorganise: completed/failed drill. Knowledge: actor memory at 190.00s, trace 9466. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9684}.
<a id="trace-9547"></a>
- 191.05s–191.05s (×1), actor 0, squad 0 (trace 9547): MoveTactically. Knowledge: actor memory at 190.00s, trace 9466. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9684}.
<a id="trace-9548"></a>
- 191.05s–191.05s (×1), actor 0, squad 0 (trace 9548): traveling overwatch. Knowledge: actor memory at 190.00s, trace 9466. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9684}.
<a id="trace-9549"></a>
- 191.05s–191.05s (×1), actor 0, squad 0 (trace 9549): Reorganise complete. Knowledge: actor memory at 190.00s, trace 9466. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9684}.
<a id="trace-9684"></a>
<a id="trace-9709"></a>
<a id="trace-9731"></a>
<a id="trace-9757"></a>
<a id="trace-9841"></a>
<a id="trace-9865"></a>
<a id="trace-9890"></a>
<a id="trace-9917"></a>
<a id="trace-9941"></a>
- 191.30s–199.30s (×9), actor 5, squad 0 (trace 9684): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 9468. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2645843932577196, 'next_transition': 9709}.
<a id="trace-9963"></a>
- 200.00s–200.00s (×1), actor 0, squad 0 (trace 9963): ReactToContact: cover and return fire. Knowledge: actor memory at 200.00s, trace 9955. Next observer evidence: None.
<a id="trace-9964"></a>
- 200.00s–200.00s (×1), actor 0, squad 0 (trace 9964): bounding overwatch. Knowledge: actor memory at 200.00s, trace 9955. Next observer evidence: None.
<a id="trace-9965"></a>
<a id="trace-10134"></a>
<a id="trace-10303"></a>
- 200.00s–200.10s (×3), actor 0, squad 0 (trace 9965): new contact inside 100 m. Knowledge: actor memory at 200.00s, trace 9955. Next observer evidence: None.
<a id="trace-10591"></a>
- 203.30s–203.30s (×1), actor 5, squad 0 (trace 10591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 9957. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300382409028831, 'next_transition': 10597}.
<a id="trace-10597"></a>
- 203.60s–203.60s (×1), actor 1, squad 0 (trace 10597): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 9956. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449926982389866, 'next_transition': 10613}.
<a id="trace-10613"></a>
<a id="trace-10693"></a>
- 204.30s–205.30s (×2), actor 5, squad 0 (trace 10613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 9957. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749844322167126, 'next_transition': 10693}.
<a id="trace-1710"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (events line 1710): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10703"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 10703): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 206.15s, trace 10703. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150068510762902, 'next_transition': 10712}.
<a id="trace-10704"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 10704): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 206.15s, trace 10704. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150068510762902, 'next_transition': 10712}.
<a id="trace-10712"></a>
<a id="trace-10726"></a>
- 206.30s–207.30s (×2), actor 5, squad 0 (trace 10712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 10704. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623149456623946, 'next_transition': 10726}.
<a id="trace-10731"></a>
- 207.75s–207.75s (×1), actor 1, squad 0 (trace 10731): received platoon directive; retain contact cover stage. Knowledge: actor memory at 205.00s, trace 10625. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10740}.
<a id="trace-10740"></a>
<a id="trace-10752"></a>
- 208.30s–209.30s (×2), actor 5, squad 0 (trace 10740): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 10704. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10752}.
<a id="trace-1728"></a>
- 209.75s–209.75s (×1), actor 5, squad 0 (events line 1728): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 210, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10770}.
<a id="trace-10757"></a>
- 209.75s–209.75s (×1), actor 5, squad 0 (trace 10757): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 209.75s, trace 10757. Next observer evidence: {'until': 210, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10770}.
<a id="trace-10758"></a>
- 209.75s–209.75s (×1), actor 5, squad 0 (trace 10758): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 209.75s, trace 10758. Next observer evidence: {'until': 210, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10770}.
<a id="trace-10770"></a>
- 210.05s–210.05s (×1), actor 1, squad 0 (trace 10770): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 210.00s, trace 10763. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10830}.
<a id="trace-10830"></a>
<a id="trace-10842"></a>
- 210.30s–211.30s (×2), actor 5, squad 0 (trace 10830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10764. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10842}.
<a id="trace-10846"></a>
- 211.35s–211.35s (×1), actor 1, squad 0 (trace 10846): traveling overwatch. Knowledge: actor memory at 210.00s, trace 10763. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10859}.
<a id="trace-10847"></a>
- 211.35s–211.35s (×1), actor 1, squad 0 (trace 10847): received platoon directive. Knowledge: actor memory at 210.00s, trace 10763. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10859}.
<a id="trace-10859"></a>
<a id="trace-10873"></a>
<a id="trace-10888"></a>
<a id="trace-10963"></a>
<a id="trace-10978"></a>
<a id="trace-10993"></a>
<a id="trace-11006"></a>
<a id="trace-11022"></a>
<a id="trace-11099"></a>
<a id="trace-11112"></a>
<a id="trace-11133"></a>
<a id="trace-11147"></a>
<a id="trace-11161"></a>
<a id="trace-11238"></a>
<a id="trace-11251"></a>
<a id="trace-11267"></a>
<a id="trace-11283"></a>
<a id="trace-11302"></a>
<a id="trace-11378"></a>
<a id="trace-11392"></a>
<a id="trace-11407"></a>
<a id="trace-11420"></a>
<a id="trace-11436"></a>
<a id="trace-11517"></a>
<a id="trace-11530"></a>
<a id="trace-11547"></a>
<a id="trace-11560"></a>
<a id="trace-11573"></a>
<a id="trace-11649"></a>
<a id="trace-11662"></a>
<a id="trace-11680"></a>
<a id="trace-11693"></a>
<a id="trace-11711"></a>
<a id="trace-11787"></a>
<a id="trace-11801"></a>
<a id="trace-11817"></a>
<a id="trace-11830"></a>
<a id="trace-11847"></a>
<a id="trace-11926"></a>
<a id="trace-11939"></a>
<a id="trace-11955"></a>
<a id="trace-11968"></a>
<a id="trace-11982"></a>
<a id="trace-12062"></a>
<a id="trace-12077"></a>
<a id="trace-12096"></a>
<a id="trace-12110"></a>
<a id="trace-12124"></a>
<a id="trace-12201"></a>
<a id="trace-12215"></a>
<a id="trace-12233"></a>
<a id="trace-12246"></a>
<a id="trace-12264"></a>
<a id="trace-12342"></a>
<a id="trace-12355"></a>
<a id="trace-12372"></a>
<a id="trace-12389"></a>
<a id="trace-12403"></a>
- 212.30s–269.30s (×58), actor 5, squad 0 (trace 10859): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10764. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10873}.
<a id="trace-2176"></a>
- 270.30s–270.30s (×1), actor 5, squad 0 (events line 2176): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12481"></a>
- 270.30s–270.30s (×1), actor 5, squad 0 (trace 12481): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 12415. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12500}.
<a id="trace-12485"></a>
- 270.30s–270.30s (×1), actor 5, squad 0 (trace 12485): renew committed intent (75 s lifetime). Knowledge: actor memory at 270.30s, trace 12485. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12500}.
<a id="trace-12500"></a>
<a id="trace-12516"></a>
<a id="trace-12530"></a>
<a id="trace-12546"></a>
<a id="trace-12624"></a>
<a id="trace-12638"></a>
<a id="trace-12654"></a>
<a id="trace-12671"></a>
<a id="trace-12686"></a>
<a id="trace-12764"></a>
<a id="trace-12776"></a>
<a id="trace-12794"></a>
<a id="trace-12809"></a>
<a id="trace-12824"></a>
<a id="trace-12902"></a>
<a id="trace-12916"></a>
<a id="trace-12932"></a>
<a id="trace-12948"></a>
<a id="trace-12963"></a>
<a id="trace-13040"></a>
<a id="trace-13054"></a>
<a id="trace-13072"></a>
<a id="trace-13086"></a>
<a id="trace-13100"></a>
<a id="trace-13179"></a>
<a id="trace-13191"></a>
<a id="trace-13206"></a>
<a id="trace-13221"></a>
<a id="trace-13237"></a>
<a id="trace-13315"></a>
<a id="trace-13332"></a>
<a id="trace-13347"></a>
<a id="trace-13361"></a>
<a id="trace-13377"></a>
<a id="trace-13453"></a>
<a id="trace-13472"></a>
<a id="trace-13487"></a>
<a id="trace-13502"></a>
<a id="trace-13517"></a>
<a id="trace-13593"></a>
<a id="trace-13607"></a>
<a id="trace-13625"></a>
<a id="trace-13641"></a>
<a id="trace-13656"></a>
<a id="trace-13734"></a>
<a id="trace-13747"></a>
<a id="trace-13775"></a>
<a id="trace-13793"></a>
<a id="trace-13870"></a>
<a id="trace-13886"></a>
<a id="trace-13900"></a>
<a id="trace-13913"></a>
<a id="trace-13928"></a>
<a id="trace-14005"></a>
<a id="trace-14020"></a>
<a id="trace-14039"></a>
<a id="trace-14055"></a>
<a id="trace-14068"></a>
- 271.30s–329.30s (×58), actor 5, squad 0 (trace 12500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.30s, trace 12485. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12516}.
<a id="trace-2633"></a>
- 330.30s–330.30s (×1), actor 5, squad 0 (events line 2633): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14145"></a>
- 330.30s–330.30s (×1), actor 5, squad 0 (trace 14145): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 14079. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14161}.
<a id="trace-14149"></a>
- 330.30s–330.30s (×1), actor 5, squad 0 (trace 14149): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.30s, trace 14149. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14161}.
<a id="trace-14161"></a>
<a id="trace-14175"></a>
<a id="trace-14193"></a>
<a id="trace-14211"></a>
<a id="trace-14287"></a>
<a id="trace-14300"></a>
<a id="trace-14316"></a>
<a id="trace-14329"></a>
<a id="trace-14345"></a>
<a id="trace-14427"></a>
<a id="trace-14441"></a>
<a id="trace-14456"></a>
<a id="trace-14470"></a>
<a id="trace-14484"></a>
<a id="trace-14560"></a>
<a id="trace-14574"></a>
<a id="trace-14593"></a>
<a id="trace-14610"></a>
<a id="trace-14625"></a>
<a id="trace-14701"></a>
<a id="trace-14715"></a>
<a id="trace-14731"></a>
<a id="trace-14745"></a>
<a id="trace-14766"></a>
<a id="trace-14844"></a>
<a id="trace-14856"></a>
<a id="trace-14872"></a>
<a id="trace-14885"></a>
<a id="trace-14899"></a>
- 331.30s–359.30s (×29), actor 5, squad 0 (trace 14161): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.30s, trace 14149. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14175}.

## Net delivery

126 matched order/radio deliveries; 246 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.167s; maximum 1.600s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 1888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2899: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2902: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2903: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2904: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2905: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2906: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3058: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3059: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.05s leader 5, trace 3081: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3287: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3289: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3290: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3291: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3292: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3293: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3294: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3473: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3475: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3476: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3477: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3478: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3479: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3480: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3842: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3844: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3845: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3846: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3847: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3848: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3849: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 4077: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4079: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4080: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4081: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4082: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4083: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4084: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4251: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4253: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4254: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4255: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4256: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4257: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4258: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4419: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4421: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4422: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4423: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4424: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4425: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4426: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4694: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4696: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4697: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4698: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4699: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4700: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4701: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4867: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4869: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4870: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4871: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4872: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4873: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4874: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5145: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5147: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5148: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5149: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5150: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5151: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.05s leader 5, trace 5277: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.05s leader 5, trace 5278: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5385: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5387: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5388: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5389: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5390: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5391: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5541: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5543: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5544: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5545: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5546: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5547: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5706: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5708: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5709: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5710: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5711: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5712: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5874: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5876: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5877: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5878: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5879: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5880: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 6112: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6114: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6115: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6116: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6117: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6118: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6286: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6288: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6289: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6290: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6291: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6292: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6454: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6456: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6457: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6458: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6459: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6460: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6694: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6696: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6697: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6698: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6699: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6700: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6863: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6865: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6866: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6867: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6868: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6869: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 7106: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7108: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7109: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7110: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7111: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7112: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7270: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7272: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7273: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7274: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7275: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7276: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.75s leader 5, trace 7429: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.75s leader 5, trace 7430: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 7464: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7466: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7467: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7468: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7469: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7470: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7751: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7753: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7754: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7755: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7756: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7757: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 7942: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7944: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7945: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7946: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7947: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7948: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 159.35s leader 5, trace 8155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 159.35s leader 5, trace 8156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 8170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8173: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8174: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8175: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8176: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8471: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8472: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8473: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8474: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 8650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8653: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8654: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8655: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8656: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 8927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8930: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8931: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8932: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8933: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9120: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9121: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9122: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9123: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9308: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9309: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9310: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9311: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.35s leader 5, trace 9452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.35s leader 5, trace 9453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.35s leader 5, trace 9454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 9773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 9955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9958: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9959: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10627: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10628: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 10703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 10704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 209.75s leader 5, trace 10757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 209.75s leader 5, trace 10758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10765: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10766: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10768: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10899: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10900: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10901: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10902: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11034: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11035: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11037: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11173: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11174: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11176: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11314: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11315: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11317: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11451: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11452: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11454: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11583: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11584: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11586: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11723: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11724: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11726: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11858: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11859: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11861: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11995: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11996: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11998: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12136: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12137: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12139: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12278: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12279: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12281: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 12414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 12416: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12417: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12419: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.30s leader 5, trace 12485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12560: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12561: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12563: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12699: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12700: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12702: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12837: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12838: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12840: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12976: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12977: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12979: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13115: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13116: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13118: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13250: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13251: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13253: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 13387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 13389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 13669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 14080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.30s leader 5, trace 14149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 14222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 14223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Moss incapacitated
- 1: Vale killed in action

## Outcome attribution

- 88.05s, evidence 654: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 88.05s, evidence 5277: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445836 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100224855686754, 'next_transition': 5284}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 88.05s, evidence 5278: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445836 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100224855686754, 'next_transition': 5284}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
