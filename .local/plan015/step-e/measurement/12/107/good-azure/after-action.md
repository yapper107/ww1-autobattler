# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/107/good-azure/battle-107-1789673887427142292`

## Battle summary

**Ember** · 360 s · 75 shots.

### Turning points

- 28.6s, squad 4: contact (events line 299). First recorded contact.
- 39.2s, squad 0: withdrawal ([trace 2283](#trace-2283)). 78.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.5s, squad 0: help call ([trace 3117](#trace-3117)). No completion observed before termination.
- 85.8s, squad 0: withdrawal ([trace 4830](#trace-4830)). 145.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 213.8s, squad 0: withdrawal ([trace 11531](#trace-11531)). 249.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 233.7s, squad 0: help call ([trace 12501](#trace-12501)). No completion observed before termination.
- 260.7s, squad 0: withdrawal ([trace 13381](#trace-13381)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 5 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 70 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 35.5s, squad 0 chose took cover and returned fire ([trace 1848](#trace-1848)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
- 39.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.406547 retreat threshold=0.500000 initiative=delegated ([trace 2452](#trace-2452)). Following evidence: None.

### Communication

188 matched deliveries (mean 0.14s, max 1.85s); 251 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.55s, squad 4, contact, evidence events line 299: First recorded contact; .
- 39.20s, squad 0, withdrawal, evidence 2283: BreakContact: believed ratio at least two without superiority; 78.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.50s, squad 0, help call, evidence 3117: NeedSupport; No completion observed before termination.
- 85.75s, squad 0, withdrawal, evidence 4830: Withdraw to received rally; 145.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 213.80s, squad 0, withdrawal, evidence 11531: BreakContact: believed ratio at least two without superiority; 249.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 233.70s, squad 0, help call, evidence 12501: NeedSupport; No completion observed before termination.
- 260.70s, squad 0, withdrawal, evidence 13381: Withdraw to received rally; No completion observed before termination.

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
<a id="trace-371"></a>
<a id="trace-390"></a>
<a id="trace-398"></a>
<a id="trace-413"></a>
<a id="trace-423"></a>
<a id="trace-443"></a>
<a id="trace-467"></a>
<a id="trace-480"></a>
<a id="trace-487"></a>
<a id="trace-570"></a>
<a id="trace-578"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299966549222812, 'next_transition': 290}.
<a id="trace-400"></a>
<a id="trace-445"></a>
<a id="trace-469"></a>
<a id="trace-489"></a>
<a id="trace-572"></a>
<a id="trace-580"></a>
<a id="trace-699"></a>
<a id="trace-732"></a>
<a id="trace-800"></a>
<a id="trace-814"></a>
<a id="trace-907"></a>
<a id="trace-956"></a>
<a id="trace-966"></a>
<a id="trace-988"></a>
<a id="trace-997"></a>
<a id="trace-1019"></a>
<a id="trace-1104"></a>
<a id="trace-1124"></a>
<a id="trace-1245"></a>
<a id="trace-1270"></a>
<a id="trace-1279"></a>
<a id="trace-1295"></a>
<a id="trace-1302"></a>
<a id="trace-1325"></a>
<a id="trace-1340"></a>
<a id="trace-1417"></a>
<a id="trace-1427"></a>
<a id="trace-1477"></a>
<a id="trace-1487"></a>
<a id="trace-1507"></a>
<a id="trace-1523"></a>
<a id="trace-1589"></a>
<a id="trace-1605"></a>
<a id="trace-1685"></a>
<a id="trace-1696"></a>
<a id="trace-1706"></a>
<a id="trace-1714"></a>
<a id="trace-1727"></a>
<a id="trace-1740"></a>
<a id="trace-1749"></a>
<a id="trace-1756"></a>
<a id="trace-1766"></a>
<a id="trace-2176"></a>
<a id="trace-2188"></a>
<a id="trace-2201"></a>
<a id="trace-2229"></a>
<a id="trace-2243"></a>
<a id="trace-2265"></a>
<a id="trace-2444"></a>
<a id="trace-2534"></a>
<a id="trace-2560"></a>
<a id="trace-2568"></a>
<a id="trace-2586"></a>
<a id="trace-2603"></a>
<a id="trace-2611"></a>
<a id="trace-2617"></a>
<a id="trace-2629"></a>
<a id="trace-2730"></a>
<a id="trace-2758"></a>
<a id="trace-2794"></a>
<a id="trace-2844"></a>
<a id="trace-2893"></a>
<a id="trace-2938"></a>
<a id="trace-3007"></a>
<a id="trace-3029"></a>
<a id="trace-3112"></a>
<a id="trace-3126"></a>
<a id="trace-3144"></a>
<a id="trace-3171"></a>
<a id="trace-3264"></a>
<a id="trace-3299"></a>
<a id="trace-3342"></a>
<a id="trace-3373"></a>
<a id="trace-3425"></a>
<a id="trace-3504"></a>
<a id="trace-3516"></a>
<a id="trace-3538"></a>
<a id="trace-3546"></a>
<a id="trace-3556"></a>
<a id="trace-3579"></a>
<a id="trace-3591"></a>
<a id="trace-3597"></a>
<a id="trace-3685"></a>
<a id="trace-3692"></a>
<a id="trace-3698"></a>
<a id="trace-3722"></a>
<a id="trace-3733"></a>
<a id="trace-3744"></a>
<a id="trace-3756"></a>
<a id="trace-3841"></a>
<a id="trace-3852"></a>
<a id="trace-3865"></a>
<a id="trace-3884"></a>
<a id="trace-3896"></a>
<a id="trace-3904"></a>
<a id="trace-3936"></a>
<a id="trace-4029"></a>
<a id="trace-4044"></a>
<a id="trace-4124"></a>
<a id="trace-4136"></a>
<a id="trace-4155"></a>
<a id="trace-4168"></a>
<a id="trace-4183"></a>
<a id="trace-4196"></a>
<a id="trace-4218"></a>
<a id="trace-4238"></a>
<a id="trace-4251"></a>
<a id="trace-4334"></a>
<a id="trace-4348"></a>
<a id="trace-4372"></a>
<a id="trace-4386"></a>
<a id="trace-4409"></a>
<a id="trace-4426"></a>
<a id="trace-4489"></a>
<a id="trace-4637"></a>
<a id="trace-4668"></a>
<a id="trace-4681"></a>
<a id="trace-4696"></a>
<a id="trace-4710"></a>
<a id="trace-4743"></a>
<a id="trace-4822"></a>
<a id="trace-4829"></a>
<a id="trace-5001"></a>
<a id="trace-5016"></a>
<a id="trace-5037"></a>
<a id="trace-5087"></a>
<a id="trace-5109"></a>
<a id="trace-5196"></a>
<a id="trace-5220"></a>
<a id="trace-5228"></a>
<a id="trace-5243"></a>
<a id="trace-5255"></a>
<a id="trace-5272"></a>
<a id="trace-5281"></a>
<a id="trace-5301"></a>
<a id="trace-5313"></a>
<a id="trace-5406"></a>
<a id="trace-5420"></a>
<a id="trace-5435"></a>
<a id="trace-5450"></a>
<a id="trace-5458"></a>
<a id="trace-5530"></a>
<a id="trace-5540"></a>
<a id="trace-5561"></a>
<a id="trace-5571"></a>
<a id="trace-5669"></a>
<a id="trace-5736"></a>
<a id="trace-5751"></a>
<a id="trace-5759"></a>
<a id="trace-5775"></a>
<a id="trace-5873"></a>
<a id="trace-5892"></a>
<a id="trace-5904"></a>
<a id="trace-5915"></a>
<a id="trace-5930"></a>
<a id="trace-5945"></a>
<a id="trace-5960"></a>
<a id="trace-5977"></a>
<a id="trace-5987"></a>
<a id="trace-6105"></a>
<a id="trace-6122"></a>
<a id="trace-6132"></a>
<a id="trace-6145"></a>
<a id="trace-6159"></a>
<a id="trace-6230"></a>
<a id="trace-6326"></a>
<a id="trace-6374"></a>
<a id="trace-6396"></a>
<a id="trace-6458"></a>
<a id="trace-6477"></a>
<a id="trace-6487"></a>
<a id="trace-6501"></a>
<a id="trace-6516"></a>
<a id="trace-6593"></a>
<a id="trace-6613"></a>
<a id="trace-6638"></a>
<a id="trace-6657"></a>
<a id="trace-6674"></a>
<a id="trace-6690"></a>
<a id="trace-6699"></a>
<a id="trace-6715"></a>
<a id="trace-6725"></a>
<a id="trace-6803"></a>
<a id="trace-6814"></a>
<a id="trace-6831"></a>
<a id="trace-6846"></a>
<a id="trace-6857"></a>
<a id="trace-6885"></a>
<a id="trace-6915"></a>
<a id="trace-6923"></a>
<a id="trace-7013"></a>
<a id="trace-7022"></a>
<a id="trace-7032"></a>
<a id="trace-7049"></a>
<a id="trace-7061"></a>
<a id="trace-7078"></a>
<a id="trace-7144"></a>
<a id="trace-7154"></a>
<a id="trace-7179"></a>
<a id="trace-7272"></a>
<a id="trace-7376"></a>
<a id="trace-7389"></a>
<a id="trace-7430"></a>
<a id="trace-7437"></a>
<a id="trace-7530"></a>
<a id="trace-7553"></a>
<a id="trace-7579"></a>
<a id="trace-7587"></a>
<a id="trace-7599"></a>
<a id="trace-7629"></a>
<a id="trace-7647"></a>
<a id="trace-7722"></a>
<a id="trace-7733"></a>
<a id="trace-7755"></a>
<a id="trace-7770"></a>
<a id="trace-7789"></a>
<a id="trace-7822"></a>
<a id="trace-7840"></a>
<a id="trace-7855"></a>
<a id="trace-7868"></a>
<a id="trace-7949"></a>
<a id="trace-8080"></a>
<a id="trace-8090"></a>
<a id="trace-8107"></a>
<a id="trace-8123"></a>
<a id="trace-8149"></a>
<a id="trace-8183"></a>
<a id="trace-8265"></a>
<a id="trace-8276"></a>
<a id="trace-8292"></a>
<a id="trace-8310"></a>
<a id="trace-8430"></a>
<a id="trace-8443"></a>
<a id="trace-8469"></a>
<a id="trace-8480"></a>
<a id="trace-8498"></a>
<a id="trace-8598"></a>
<a id="trace-8612"></a>
<a id="trace-8626"></a>
<a id="trace-8643"></a>
<a id="trace-8663"></a>
<a id="trace-8674"></a>
<a id="trace-8689"></a>
<a id="trace-8698"></a>
<a id="trace-8718"></a>
<a id="trace-8738"></a>
<a id="trace-8822"></a>
<a id="trace-8854"></a>
<a id="trace-8864"></a>
<a id="trace-8992"></a>
<a id="trace-9010"></a>
<a id="trace-9029"></a>
<a id="trace-9041"></a>
<a id="trace-9053"></a>
<a id="trace-9144"></a>
<a id="trace-9156"></a>
<a id="trace-9175"></a>
<a id="trace-9187"></a>
<a id="trace-9204"></a>
<a id="trace-9219"></a>
<a id="trace-9232"></a>
<a id="trace-9245"></a>
<a id="trace-9266"></a>
<a id="trace-9280"></a>
<a id="trace-9366"></a>
<a id="trace-9385"></a>
<a id="trace-9405"></a>
<a id="trace-9421"></a>
<a id="trace-9431"></a>
<a id="trace-9462"></a>
<a id="trace-9485"></a>
<a id="trace-9567"></a>
<a id="trace-9583"></a>
<a id="trace-9598"></a>
<a id="trace-9627"></a>
<a id="trace-9637"></a>
<a id="trace-9650"></a>
<a id="trace-9656"></a>
<a id="trace-9672"></a>
<a id="trace-9679"></a>
<a id="trace-9757"></a>
<a id="trace-9769"></a>
<a id="trace-9779"></a>
<a id="trace-9788"></a>
<a id="trace-9909"></a>
<a id="trace-9919"></a>
<a id="trace-9937"></a>
<a id="trace-9966"></a>
<a id="trace-9975"></a>
<a id="trace-10063"></a>
<a id="trace-10072"></a>
<a id="trace-10085"></a>
<a id="trace-10096"></a>
<a id="trace-10116"></a>
<a id="trace-10133"></a>
<a id="trace-10148"></a>
<a id="trace-10157"></a>
<a id="trace-10180"></a>
<a id="trace-10190"></a>
<a id="trace-10270"></a>
<a id="trace-10278"></a>
<a id="trace-10302"></a>
<a id="trace-10328"></a>
<a id="trace-10344"></a>
<a id="trace-10387"></a>
<a id="trace-10395"></a>
<a id="trace-10575"></a>
<a id="trace-10590"></a>
<a id="trace-10611"></a>
<a id="trace-10626"></a>
<a id="trace-10645"></a>
<a id="trace-10655"></a>
<a id="trace-10673"></a>
<a id="trace-10684"></a>
<a id="trace-10698"></a>
<a id="trace-10788"></a>
<a id="trace-10797"></a>
<a id="trace-10824"></a>
<a id="trace-10834"></a>
<a id="trace-10876"></a>
<a id="trace-10892"></a>
<a id="trace-10902"></a>
<a id="trace-10916"></a>
<a id="trace-11273"></a>
<a id="trace-11392"></a>
<a id="trace-11418"></a>
<a id="trace-11440"></a>
<a id="trace-11464"></a>
<a id="trace-11514"></a>
<a id="trace-11530"></a>
<a id="trace-11705"></a>
<a id="trace-11718"></a>
<a id="trace-11791"></a>
<a id="trace-11816"></a>
<a id="trace-11833"></a>
<a id="trace-11844"></a>
<a id="trace-11898"></a>
<a id="trace-11928"></a>
<a id="trace-11961"></a>
<a id="trace-11990"></a>
<a id="trace-12086"></a>
<a id="trace-12122"></a>
<a id="trace-12141"></a>
<a id="trace-12158"></a>
<a id="trace-12175"></a>
<a id="trace-12210"></a>
<a id="trace-12285"></a>
<a id="trace-12293"></a>
<a id="trace-12335"></a>
<a id="trace-12348"></a>
<a id="trace-12359"></a>
<a id="trace-12368"></a>
<a id="trace-12380"></a>
<a id="trace-12385"></a>
<a id="trace-12467"></a>
<a id="trace-12475"></a>
<a id="trace-12483"></a>
<a id="trace-12489"></a>
<a id="trace-12494"></a>
<a id="trace-12500"></a>
<a id="trace-12517"></a>
<a id="trace-12521"></a>
<a id="trace-12593"></a>
<a id="trace-12599"></a>
<a id="trace-12607"></a>
<a id="trace-12612"></a>
<a id="trace-12621"></a>
<a id="trace-12628"></a>
<a id="trace-12638"></a>
<a id="trace-12646"></a>
<a id="trace-12656"></a>
<a id="trace-12740"></a>
<a id="trace-12748"></a>
<a id="trace-12761"></a>
<a id="trace-12768"></a>
<a id="trace-12793"></a>
<a id="trace-12800"></a>
<a id="trace-12810"></a>
<a id="trace-12818"></a>
<a id="trace-12892"></a>
<a id="trace-12899"></a>
<a id="trace-12911"></a>
<a id="trace-12920"></a>
<a id="trace-12929"></a>
<a id="trace-12937"></a>
<a id="trace-12952"></a>
<a id="trace-12959"></a>
<a id="trace-12980"></a>
<a id="trace-13057"></a>
<a id="trace-13063"></a>
<a id="trace-13083"></a>
<a id="trace-13093"></a>
<a id="trace-13101"></a>
<a id="trace-13117"></a>
<a id="trace-13128"></a>
<a id="trace-13216"></a>
<a id="trace-13223"></a>
<a id="trace-13234"></a>
<a id="trace-13240"></a>
<a id="trace-13250"></a>
<a id="trace-13273"></a>
<a id="trace-13294"></a>
<a id="trace-13375"></a>
<a id="trace-13439"></a>
<a id="trace-13469"></a>
<a id="trace-13488"></a>
<a id="trace-13501"></a>
<a id="trace-13509"></a>
<a id="trace-13536"></a>
<a id="trace-13613"></a>
<a id="trace-13645"></a>
<a id="trace-13657"></a>
<a id="trace-13696"></a>
<a id="trace-13714"></a>
<a id="trace-13722"></a>
<a id="trace-13800"></a>
<a id="trace-13809"></a>
<a id="trace-13827"></a>
<a id="trace-13842"></a>
<a id="trace-13872"></a>
<a id="trace-13902"></a>
<a id="trace-13984"></a>
<a id="trace-13998"></a>
<a id="trace-14016"></a>
<a id="trace-14027"></a>
<a id="trace-14033"></a>
<a id="trace-14050"></a>
<a id="trace-14067"></a>
<a id="trace-14149"></a>
<a id="trace-14162"></a>
<a id="trace-14169"></a>
<a id="trace-14183"></a>
<a id="trace-14199"></a>
<a id="trace-14215"></a>
<a id="trace-14222"></a>
<a id="trace-14295"></a>
<a id="trace-14315"></a>
<a id="trace-14332"></a>
<a id="trace-14341"></a>
<a id="trace-14351"></a>
<a id="trace-14363"></a>
<a id="trace-14373"></a>
<a id="trace-14379"></a>
<a id="trace-14452"></a>
<a id="trace-14461"></a>
<a id="trace-14472"></a>
<a id="trace-14479"></a>
<a id="trace-14489"></a>
<a id="trace-14496"></a>
<a id="trace-14506"></a>
<a id="trace-14515"></a>
<a id="trace-14527"></a>
<a id="trace-14535"></a>
<a id="trace-14607"></a>
<a id="trace-14628"></a>
<a id="trace-14636"></a>
<a id="trace-14646"></a>
<a id="trace-14653"></a>
<a id="trace-14663"></a>
<a id="trace-14670"></a>
<a id="trace-14681"></a>
<a id="trace-14761"></a>
<a id="trace-14797"></a>
<a id="trace-14804"></a>
<a id="trace-14817"></a>
<a id="trace-14835"></a>
<a id="trace-14841"></a>
<a id="trace-14914"></a>
<a id="trace-14934"></a>
<a id="trace-14943"></a>
<a id="trace-14954"></a>
<a id="trace-14960"></a>
<a id="trace-14987"></a>
<a id="trace-14998"></a>
<a id="trace-15078"></a>
<a id="trace-15089"></a>
<a id="trace-15096"></a>
<a id="trace-15114"></a>
<a id="trace-15124"></a>
<a id="trace-15131"></a>
<a id="trace-15143"></a>
<a id="trace-15151"></a>
<a id="trace-15224"></a>
<a id="trace-15233"></a>
<a id="trace-15247"></a>
<a id="trace-15254"></a>
<a id="trace-15264"></a>
<a id="trace-15280"></a>
<a id="trace-15303"></a>
<a id="trace-15377"></a>
<a id="trace-15390"></a>
<a id="trace-15401"></a>
<a id="trace-15409"></a>
<a id="trace-15424"></a>
<a id="trace-15435"></a>
<a id="trace-15445"></a>
<a id="trace-15463"></a>
<a id="trace-15543"></a>
<a id="trace-15572"></a>
<a id="trace-15579"></a>
<a id="trace-15589"></a>
<a id="trace-15596"></a>
<a id="trace-15613"></a>
<a id="trace-15686"></a>
<a id="trace-15699"></a>
<a id="trace-15715"></a>
<a id="trace-15726"></a>
<a id="trace-15733"></a>
<a id="trace-15744"></a>
<a id="trace-15754"></a>
<a id="trace-15764"></a>
<a id="trace-15842"></a>
<a id="trace-15862"></a>
<a id="trace-15870"></a>
<a id="trace-15897"></a>
<a id="trace-15906"></a>
<a id="trace-15916"></a>
<a id="trace-15998"></a>
<a id="trace-16006"></a>
<a id="trace-16017"></a>
<a id="trace-16024"></a>
<a id="trace-16034"></a>
<a id="trace-16051"></a>
<a id="trace-16059"></a>
<a id="trace-16072"></a>
<a id="trace-16079"></a>
<a id="trace-16153"></a>
<a id="trace-16173"></a>
<a id="trace-16179"></a>
<a id="trace-16197"></a>
<a id="trace-16207"></a>
<a id="trace-16225"></a>
<a id="trace-16231"></a>
<a id="trace-16304"></a>
<a id="trace-16314"></a>
<a id="trace-16327"></a>
<a id="trace-16335"></a>
<a id="trace-16346"></a>
<a id="trace-16352"></a>
<a id="trace-16363"></a>
<a id="trace-16382"></a>
<a id="trace-16461"></a>
<a id="trace-16469"></a>
<a id="trace-16480"></a>
<a id="trace-16515"></a>
<a id="trace-16524"></a>
<a id="trace-16534"></a>
<a id="trace-16542"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 400): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2575415815027621, 'next_transition': 445}.
<a id="trace-585"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 585): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724963650723586, 'next_transition': 697}.
<a id="trace-697"></a>
<a id="trace-712"></a>
<a id="trace-730"></a>
<a id="trace-748"></a>
<a id="trace-763"></a>
<a id="trace-775"></a>
<a id="trace-798"></a>
<a id="trace-812"></a>
<a id="trace-896"></a>
<a id="trace-905"></a>
<a id="trace-927"></a>
<a id="trace-941"></a>
<a id="trace-954"></a>
<a id="trace-964"></a>
<a id="trace-986"></a>
<a id="trace-995"></a>
<a id="trace-1011"></a>
<a id="trace-1017"></a>
<a id="trace-1102"></a>
<a id="trace-1122"></a>
- 11.20s–20.75s (×20), actor 5, squad 0 (trace 697): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 494. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 712}.
<a id="trace-1132"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1132): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1025. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150028501840404, 'next_transition': 1230}.
<a id="trace-1133"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1133): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1025. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150028501840404, 'next_transition': 1230}.
<a id="trace-1230"></a>
<a id="trace-1243"></a>
<a id="trace-1268"></a>
<a id="trace-1277"></a>
<a id="trace-1293"></a>
<a id="trace-1300"></a>
<a id="trace-1323"></a>
<a id="trace-1338"></a>
<a id="trace-1415"></a>
<a id="trace-1425"></a>
<a id="trace-1450"></a>
<a id="trace-1457"></a>
<a id="trace-1475"></a>
<a id="trace-1485"></a>
<a id="trace-1505"></a>
<a id="trace-1521"></a>
- 21.25s–28.75s (×16), actor 5, squad 0 (trace 1230): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1027. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300052179213487, 'next_transition': 1243}.
<a id="trace-1529"></a>
- 28.95s–28.95s (×1), actor 0, squad 0 (trace 1529): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1343. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299811033370957, 'next_transition': 1587}.
<a id="trace-1587"></a>
<a id="trace-1603"></a>
<a id="trace-1683"></a>
<a id="trace-1694"></a>
<a id="trace-1704"></a>
<a id="trace-1712"></a>
<a id="trace-1725"></a>
<a id="trace-1738"></a>
<a id="trace-1747"></a>
<a id="trace-1754"></a>
<a id="trace-1764"></a>
<a id="trace-1771"></a>
<a id="trace-1846"></a>
- 29.25s–35.25s (×13), actor 5, squad 0 (trace 1587): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1345. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6666560963539894, 'next_transition': 1603}.
<a id="trace-1848"></a>
- 35.50s–35.50s (×1), actor 0, squad 0 (trace 1848): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1958}.
<a id="trace-1849"></a>
- 35.50s–35.50s (×1), actor 0, squad 0 (trace 1849): bounding overwatch. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1958}.
<a id="trace-1850"></a>
<a id="trace-1958"></a>
<a id="trace-2066"></a>
- 35.50s–35.70s (×3), actor 0, squad 0 (trace 1850): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1958}.
<a id="trace-2174"></a>
<a id="trace-2186"></a>
<a id="trace-2199"></a>
<a id="trace-2227"></a>
<a id="trace-2231"></a>
<a id="trace-2241"></a>
<a id="trace-2263"></a>
- 35.75s–38.75s (×7), actor 5, squad 0 (trace 2174): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1779. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11293265100271045, 'next_transition': 2186}.
<a id="trace-2273"></a>
- 39.05s–39.05s (×1), actor 5, squad 0 (trace 2273): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 39.05s, trace 2273. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2283}.
<a id="trace-2283"></a>
- 39.20s–39.20s (×1), actor 0, squad 0 (trace 2283): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: None.
<a id="trace-2284"></a>
- 39.20s–39.20s (×1), actor 0, squad 0 (trace 2284): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: None.
<a id="trace-2442"></a>
- 39.25s–39.25s (×1), actor 5, squad 0 (trace 2442): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.05s, trace 2273. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 360}.
<a id="trace-360"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 360): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2452"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 2452): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.406547 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 2452. Next observer evidence: None.
<a id="trace-2453"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 2453): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.406547 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 2453. Next observer evidence: None.
<a id="trace-2456"></a>
<a id="trace-2532"></a>
<a id="trace-2551"></a>
<a id="trace-2558"></a>
<a id="trace-2566"></a>
<a id="trace-2584"></a>
<a id="trace-2601"></a>
<a id="trace-2609"></a>
<a id="trace-2615"></a>
<a id="trace-2627"></a>
<a id="trace-2639"></a>
<a id="trace-2728"></a>
<a id="trace-2756"></a>
<a id="trace-2792"></a>
<a id="trace-2842"></a>
<a id="trace-2891"></a>
<a id="trace-2936"></a>
<a id="trace-2969"></a>
<a id="trace-3005"></a>
<a id="trace-3027"></a>
<a id="trace-3034"></a>
<a id="trace-3110"></a>
- 39.75s–50.25s (×22), actor 5, squad 0 (trace 2456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 2453. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2532}.
<a id="trace-3117"></a>
- 50.50s–50.50s (×1), actor 0, squad 0 (trace 3117): NeedSupport. Knowledge: actor memory at 50.00s, trace 3036. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40995951465430447, 'next_transition': 3124}.
<a id="trace-3124"></a>
<a id="trace-3142"></a>
<a id="trace-3169"></a>
- 50.75s–51.75s (×3), actor 5, squad 0 (trace 3124): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3038. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3842484485197156, 'next_transition': 3142}.
<a id="trace-3202"></a>
- 52.20s–52.20s (×1), actor 0, squad 0 (trace 3202): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 3036. Next observer evidence: None.
<a id="trace-3203"></a>
- 52.20s–52.20s (×1), actor 0, squad 0 (trace 3203): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 3036. Next observer evidence: None.
<a id="trace-3262"></a>
<a id="trace-3297"></a>
<a id="trace-3340"></a>
<a id="trace-3371"></a>
<a id="trace-3409"></a>
<a id="trace-3423"></a>
<a id="trace-3502"></a>
<a id="trace-3514"></a>
<a id="trace-3526"></a>
<a id="trace-3536"></a>
<a id="trace-3544"></a>
<a id="trace-3554"></a>
<a id="trace-3571"></a>
<a id="trace-3577"></a>
<a id="trace-3589"></a>
<a id="trace-3595"></a>
<a id="trace-3670"></a>
<a id="trace-3683"></a>
<a id="trace-3690"></a>
<a id="trace-3696"></a>
<a id="trace-3715"></a>
<a id="trace-3720"></a>
<a id="trace-3731"></a>
<a id="trace-3742"></a>
<a id="trace-3754"></a>
<a id="trace-3762"></a>
<a id="trace-3839"></a>
<a id="trace-3850"></a>
<a id="trace-3863"></a>
<a id="trace-3882"></a>
<a id="trace-3894"></a>
<a id="trace-3902"></a>
<a id="trace-3922"></a>
<a id="trace-3934"></a>
- 52.25s–68.75s (×34), actor 5, squad 0 (trace 3262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3038. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003824999999997303, 'next_transition': 3297}.
<a id="trace-3937"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3937): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 3770. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875231331885564, 'next_transition': 4027}.
<a id="trace-3959"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3959): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 3770. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875231331885564, 'next_transition': 4027}.
<a id="trace-4027"></a>
<a id="trace-4042"></a>
<a id="trace-4122"></a>
<a id="trace-4134"></a>
<a id="trace-4153"></a>
<a id="trace-4166"></a>
<a id="trace-4181"></a>
<a id="trace-4194"></a>
<a id="trace-4209"></a>
<a id="trace-4216"></a>
<a id="trace-4236"></a>
<a id="trace-4249"></a>
<a id="trace-4332"></a>
<a id="trace-4346"></a>
<a id="trace-4361"></a>
<a id="trace-4370"></a>
<a id="trace-4384"></a>
<a id="trace-4395"></a>
<a id="trace-4407"></a>
<a id="trace-4424"></a>
- 69.25s–78.75s (×20), actor 5, squad 0 (trace 4027): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3772. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512249899534125, 'next_transition': 4042}.
<a id="trace-4428"></a>
- 78.80s–78.80s (×1), actor 0, squad 0 (trace 4428): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 4256. Next observer evidence: None.
<a id="trace-4433"></a>
- 78.85s–78.85s (×1), actor 0, squad 0 (trace 4433): MoveTactically. Knowledge: actor memory at 75.00s, trace 4256. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45616702863367486, 'next_transition': 4469}.
<a id="trace-4434"></a>
- 78.85s–78.85s (×1), actor 0, squad 0 (trace 4434): traveling overwatch. Knowledge: actor memory at 75.00s, trace 4256. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45616702863367486, 'next_transition': 4469}.
<a id="trace-4435"></a>
- 78.85s–78.85s (×1), actor 0, squad 0 (trace 4435): received platoon directive. Knowledge: actor memory at 75.00s, trace 4256. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45616702863367486, 'next_transition': 4469}.
<a id="trace-4469"></a>
<a id="trace-4487"></a>
<a id="trace-4572"></a>
<a id="trace-4591"></a>
<a id="trace-4620"></a>
<a id="trace-4635"></a>
<a id="trace-4666"></a>
<a id="trace-4679"></a>
<a id="trace-4694"></a>
<a id="trace-4708"></a>
- 79.25s–83.75s (×10), actor 5, squad 0 (trace 4469): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4258. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31497857268392127, 'next_transition': 4487}.
<a id="trace-743"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (events line 743): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4715"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 4715): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.447994 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 4715. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341138886813756, 'next_transition': 4728}.
<a id="trace-4716"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 4716): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.447994 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 4716. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341138886813756, 'next_transition': 4728}.
<a id="trace-4728"></a>
<a id="trace-4741"></a>
<a id="trace-4820"></a>
<a id="trace-4827"></a>
- 84.25s–85.75s (×4), actor 5, squad 0 (trace 4728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.05s, trace 4716. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679861360081127, 'next_transition': 4741}.
<a id="trace-4830"></a>
- 85.75s–85.75s (×1), actor 0, squad 0 (trace 4830): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 4749. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2852211796222943, 'next_transition': 4999}.
<a id="trace-4831"></a>
- 85.75s–85.75s (×1), actor 0, squad 0 (trace 4831): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 4749. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2852211796222943, 'next_transition': 4999}.
<a id="trace-4999"></a>
<a id="trace-5014"></a>
<a id="trace-5035"></a>
<a id="trace-5046"></a>
<a id="trace-5068"></a>
<a id="trace-5085"></a>
<a id="trace-5107"></a>
<a id="trace-5118"></a>
<a id="trace-5194"></a>
<a id="trace-5209"></a>
<a id="trace-5218"></a>
<a id="trace-5226"></a>
<a id="trace-5241"></a>
<a id="trace-5253"></a>
<a id="trace-5270"></a>
<a id="trace-5279"></a>
<a id="trace-5299"></a>
<a id="trace-5311"></a>
<a id="trace-5404"></a>
<a id="trace-5418"></a>
<a id="trace-5433"></a>
<a id="trace-5448"></a>
<a id="trace-5456"></a>
- 86.25s–97.75s (×23), actor 5, squad 0 (trace 4999): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4751. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000798380743219, 'next_transition': 5014}.
<a id="trace-5466"></a>
- 98.15s–98.15s (×1), actor 0, squad 0 (trace 5466): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 5319. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150053837039881, 'next_transition': 5528}.
<a id="trace-5467"></a>
- 98.15s–98.15s (×1), actor 0, squad 0 (trace 5467): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 5319. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150053837039881, 'next_transition': 5528}.
<a id="trace-5528"></a>
<a id="trace-5538"></a>
<a id="trace-5559"></a>
<a id="trace-5569"></a>
<a id="trace-5649"></a>
<a id="trace-5667"></a>
<a id="trace-5688"></a>
<a id="trace-5703"></a>
<a id="trace-5717"></a>
<a id="trace-5734"></a>
<a id="trace-5749"></a>
<a id="trace-5757"></a>
<a id="trace-5773"></a>
<a id="trace-5783"></a>
<a id="trace-5864"></a>
<a id="trace-5871"></a>
<a id="trace-5890"></a>
<a id="trace-5902"></a>
<a id="trace-5913"></a>
<a id="trace-5928"></a>
<a id="trace-5943"></a>
<a id="trace-5958"></a>
<a id="trace-5975"></a>
<a id="trace-5985"></a>
<a id="trace-6067"></a>
<a id="trace-6080"></a>
<a id="trace-6094"></a>
<a id="trace-6103"></a>
<a id="trace-6120"></a>
<a id="trace-6130"></a>
<a id="trace-6143"></a>
<a id="trace-6157"></a>
- 98.25s–113.75s (×32), actor 5, squad 0 (trace 5528): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5321. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300108320596556, 'next_transition': 5538}.
<a id="trace-6160"></a>
- 113.75s–113.75s (×1), actor 0, squad 0 (trace 6160): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 5993. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512366187604612, 'next_transition': 6228}.
<a id="trace-6161"></a>
- 113.75s–113.75s (×1), actor 0, squad 0 (trace 6161): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 5993. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512366187604612, 'next_transition': 6228}.
<a id="trace-6228"></a>
<a id="trace-6248"></a>
<a id="trace-6324"></a>
<a id="trace-6338"></a>
<a id="trace-6361"></a>
<a id="trace-6372"></a>
<a id="trace-6394"></a>
- 114.25s–117.25s (×7), actor 5, squad 0 (trace 6228): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 5995. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6248}.
<a id="trace-6398"></a>
- 117.35s–117.35s (×1), actor 0, squad 0 (trace 6398): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 6251. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6456}.
<a id="trace-6399"></a>
- 117.35s–117.35s (×1), actor 0, squad 0 (trace 6399): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 6251. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6456}.
<a id="trace-6456"></a>
<a id="trace-6475"></a>
<a id="trace-6485"></a>
<a id="trace-6499"></a>
<a id="trace-6514"></a>
<a id="trace-6591"></a>
<a id="trace-6611"></a>
<a id="trace-6628"></a>
<a id="trace-6636"></a>
<a id="trace-6655"></a>
<a id="trace-6672"></a>
<a id="trace-6688"></a>
<a id="trace-6697"></a>
<a id="trace-6713"></a>
<a id="trace-6723"></a>
<a id="trace-6801"></a>
<a id="trace-6812"></a>
<a id="trace-6829"></a>
<a id="trace-6844"></a>
<a id="trace-6855"></a>
<a id="trace-6867"></a>
<a id="trace-6883"></a>
<a id="trace-6900"></a>
<a id="trace-6913"></a>
<a id="trace-6921"></a>
<a id="trace-7011"></a>
<a id="trace-7020"></a>
<a id="trace-7030"></a>
<a id="trace-7047"></a>
<a id="trace-7059"></a>
<a id="trace-7076"></a>
- 117.75s–132.80s (×31), actor 5, squad 0 (trace 6456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6253. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028359591080443673, 'next_transition': 6475}.
<a id="trace-7082"></a>
- 132.95s–132.95s (×1), actor 0, squad 0 (trace 7082): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 6924. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300132967743275, 'next_transition': 7142}.
<a id="trace-7083"></a>
- 132.95s–132.95s (×1), actor 0, squad 0 (trace 7083): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 6924. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300132967743275, 'next_transition': 7142}.
<a id="trace-7142"></a>
<a id="trace-7152"></a>
<a id="trace-7177"></a>
<a id="trace-7188"></a>
<a id="trace-7270"></a>
<a id="trace-7282"></a>
- 133.30s–135.80s (×6), actor 5, squad 0 (trace 7142): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 6926. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662432996565925, 'next_transition': 7152}.
<a id="trace-7290"></a>
- 136.00s–136.00s (×1), actor 0, squad 0 (trace 7290): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 7192. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7352}.
<a id="trace-7291"></a>
- 136.00s–136.00s (×1), actor 0, squad 0 (trace 7291): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 7192. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7352}.
<a id="trace-7352"></a>
<a id="trace-7359"></a>
<a id="trace-7374"></a>
<a id="trace-7387"></a>
<a id="trace-7399"></a>
<a id="trace-7410"></a>
<a id="trace-7428"></a>
<a id="trace-7435"></a>
<a id="trace-7516"></a>
<a id="trace-7528"></a>
<a id="trace-7543"></a>
<a id="trace-7551"></a>
<a id="trace-7577"></a>
<a id="trace-7585"></a>
<a id="trace-7597"></a>
<a id="trace-7613"></a>
<a id="trace-7627"></a>
- 136.30s–144.30s (×17), actor 5, squad 0 (trace 7352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7194. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7359}.
<a id="trace-1362"></a>
- 144.45s–144.45s (×1), actor 5, squad 0 (events line 1362): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3843550450405948, 'next_transition': 7645}.
<a id="trace-7632"></a>
- 144.45s–144.45s (×1), actor 5, squad 0 (trace 7632): renew committed intent (75 s lifetime). Knowledge: actor memory at 144.45s, trace 7632. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3843550450405948, 'next_transition': 7645}.
<a id="trace-7645"></a>
<a id="trace-7720"></a>
- 144.80s–145.30s (×2), actor 5, squad 0 (trace 7645): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 144.45s, trace 7632. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8565150223465076, 'next_transition': 7720}.
<a id="trace-7726"></a>
- 145.75s–145.75s (×1), actor 0, squad 0 (trace 7726): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 7650. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4279944830547906, 'next_transition': 7731}.
<a id="trace-7731"></a>
<a id="trace-7753"></a>
<a id="trace-7768"></a>
<a id="trace-7787"></a>
<a id="trace-7799"></a>
<a id="trace-7820"></a>
<a id="trace-7838"></a>
- 145.80s–148.80s (×7), actor 5, squad 0 (trace 7731): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 7652. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.822503181075424, 'next_transition': 7753}.
<a id="trace-1421"></a>
- 149.25s–149.25s (×1), actor 5, squad 0 (events line 1421): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7847"></a>
- 149.25s–149.25s (×1), actor 5, squad 0 (trace 7847): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.591483 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 149.25s, trace 7847. Next observer evidence: None.
<a id="trace-7848"></a>
- 149.25s–149.25s (×1), actor 5, squad 0 (trace 7848): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.591483 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 149.25s, trace 7848. Next observer evidence: None.
<a id="trace-7852"></a>
<a id="trace-7866"></a>
<a id="trace-7947"></a>
<a id="trace-7958"></a>
- 149.30s–150.80s (×4), actor 5, squad 0 (trace 7852): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 149.25s, trace 7848. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12004022914199093, 'next_transition': 7866}.
<a id="trace-7965"></a>
- 150.95s–150.95s (×1), actor 0, squad 0 (trace 7965): MoveTactically. Knowledge: actor memory at 150.00s, trace 7869. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8078}.
<a id="trace-7966"></a>
- 150.95s–150.95s (×1), actor 0, squad 0 (trace 7966): traveling. Knowledge: actor memory at 150.00s, trace 7869. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8078}.
<a id="trace-7967"></a>
- 150.95s–150.95s (×1), actor 0, squad 0 (trace 7967): received platoon directive. Knowledge: actor memory at 150.00s, trace 7869. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8078}.
<a id="trace-8078"></a>
<a id="trace-8088"></a>
<a id="trace-8105"></a>
<a id="trace-8121"></a>
<a id="trace-8138"></a>
<a id="trace-8147"></a>
<a id="trace-8174"></a>
<a id="trace-8181"></a>
- 151.30s–154.80s (×8), actor 5, squad 0 (trace 8078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 7871. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028340181390561586, 'next_transition': 8088}.
<a id="trace-1483"></a>
- 155.25s–155.25s (×1), actor 5, squad 0 (events line 1483): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8257"></a>
- 155.25s–155.25s (×1), actor 5, squad 0 (trace 8257): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 155.25s, trace 8257. Next observer evidence: None.
<a id="trace-8258"></a>
- 155.25s–155.25s (×1), actor 5, squad 0 (trace 8258): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 155.25s, trace 8258. Next observer evidence: None.
<a id="trace-8262"></a>
<a id="trace-8274"></a>
<a id="trace-8290"></a>
<a id="trace-8308"></a>
- 155.30s–156.80s (×4), actor 5, squad 0 (trace 8262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.25s, trace 8258. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126473954549931, 'next_transition': 8274}.
<a id="trace-8315"></a>
- 156.95s–156.95s (×1), actor 0, squad 0 (trace 8315): received platoon directive. Knowledge: actor memory at 155.00s, trace 8190. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1716133570949954, 'next_transition': 8428}.
<a id="trace-8428"></a>
<a id="trace-8441"></a>
<a id="trace-8467"></a>
<a id="trace-8478"></a>
<a id="trace-8496"></a>
<a id="trace-8506"></a>
<a id="trace-8596"></a>
<a id="trace-8610"></a>
<a id="trace-8624"></a>
<a id="trace-8641"></a>
<a id="trace-8661"></a>
<a id="trace-8672"></a>
<a id="trace-8687"></a>
<a id="trace-8696"></a>
<a id="trace-8716"></a>
<a id="trace-8736"></a>
<a id="trace-8820"></a>
<a id="trace-8829"></a>
<a id="trace-8852"></a>
<a id="trace-8862"></a>
<a id="trace-8872"></a>
- 157.30s–167.30s (×21), actor 5, squad 0 (trace 8428): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.25s, trace 8258. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.758102233132622, 'next_transition': 8441}.
<a id="trace-8883"></a>
- 167.75s–167.75s (×1), actor 0, squad 0 (trace 8883): matching received arrivals: traveling stage complete. Knowledge: actor memory at 165.00s, trace 8743. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150261635165911, 'next_transition': 8990}.
<a id="trace-8990"></a>
<a id="trace-9008"></a>
<a id="trace-9027"></a>
<a id="trace-9039"></a>
<a id="trace-9051"></a>
<a id="trace-9142"></a>
<a id="trace-9154"></a>
<a id="trace-9173"></a>
<a id="trace-9185"></a>
<a id="trace-9202"></a>
<a id="trace-9217"></a>
<a id="trace-9230"></a>
<a id="trace-9243"></a>
<a id="trace-9264"></a>
<a id="trace-9278"></a>
<a id="trace-9356"></a>
<a id="trace-9364"></a>
<a id="trace-9383"></a>
<a id="trace-9403"></a>
<a id="trace-9419"></a>
<a id="trace-9429"></a>
<a id="trace-9451"></a>
<a id="trace-9460"></a>
<a id="trace-9472"></a>
<a id="trace-9483"></a>
<a id="trace-9565"></a>
<a id="trace-9581"></a>
- 167.80s–180.80s (×27), actor 5, squad 0 (trace 8990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 8745. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23621969117751757, 'next_transition': 9008}.
<a id="trace-9587"></a>
- 180.95s–180.95s (×1), actor 0, squad 0 (trace 9587): matching received arrivals: deployment leg complete. Knowledge: actor memory at 180.00s, trace 9486. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300159821881433, 'next_transition': 9596}.
<a id="trace-9596"></a>
<a id="trace-9606"></a>
<a id="trace-9625"></a>
<a id="trace-9635"></a>
<a id="trace-9648"></a>
<a id="trace-9654"></a>
<a id="trace-9670"></a>
<a id="trace-9677"></a>
- 181.30s–184.80s (×8), actor 5, squad 0 (trace 9596): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9488. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450237864995776, 'next_transition': 9606}.
<a id="trace-1787"></a>
- 185.25s–185.25s (×1), actor 5, squad 0 (events line 1787): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9749"></a>
- 185.25s–185.25s (×1), actor 5, squad 0 (trace 9749): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.25s, trace 9749. Next observer evidence: None.
<a id="trace-9750"></a>
- 185.25s–185.25s (×1), actor 5, squad 0 (trace 9750): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.25s, trace 9750. Next observer evidence: None.
<a id="trace-9754"></a>
<a id="trace-9767"></a>
<a id="trace-9777"></a>
<a id="trace-9786"></a>
- 185.30s–186.80s (×4), actor 5, squad 0 (trace 9754): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.25s, trace 9750. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9767}.
<a id="trace-9790"></a>
- 186.95s–186.95s (×1), actor 0, squad 0 (trace 9790): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 9682. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9907}.
<a id="trace-9793"></a>
- 186.95s–186.95s (×1), actor 0, squad 0 (trace 9793): MoveTactically. Knowledge: actor memory at 185.00s, trace 9682. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9907}.
<a id="trace-9794"></a>
- 186.95s–186.95s (×1), actor 0, squad 0 (trace 9794): Reorganise complete. Knowledge: actor memory at 185.00s, trace 9682. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9907}.
<a id="trace-9907"></a>
<a id="trace-9917"></a>
<a id="trace-9935"></a>
<a id="trace-9950"></a>
<a id="trace-9964"></a>
<a id="trace-9973"></a>
<a id="trace-10061"></a>
<a id="trace-10070"></a>
<a id="trace-10083"></a>
<a id="trace-10094"></a>
<a id="trace-10114"></a>
<a id="trace-10131"></a>
<a id="trace-10146"></a>
<a id="trace-10155"></a>
<a id="trace-10178"></a>
<a id="trace-10188"></a>
<a id="trace-10268"></a>
<a id="trace-10276"></a>
<a id="trace-10300"></a>
<a id="trace-10313"></a>
<a id="trace-10326"></a>
<a id="trace-10342"></a>
<a id="trace-10361"></a>
<a id="trace-10375"></a>
<a id="trace-10385"></a>
<a id="trace-10393"></a>
- 187.30s–199.80s (×26), actor 5, squad 0 (trace 9907): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.25s, trace 9750. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028350099206175282, 'next_transition': 9917}.
<a id="trace-10416"></a>
- 200.15s–200.15s (×1), actor 0, squad 0 (trace 10416): traveling overwatch. Knowledge: actor memory at 200.00s, trace 10401. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1566500107325234, 'next_transition': 10573}.
<a id="trace-10417"></a>
- 200.15s–200.15s (×1), actor 0, squad 0 (trace 10417): matching received arrivals: traveling stage complete. Knowledge: actor memory at 200.00s, trace 10401. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1566500107325234, 'next_transition': 10573}.
<a id="trace-10573"></a>
<a id="trace-10588"></a>
<a id="trace-10609"></a>
<a id="trace-10624"></a>
<a id="trace-10643"></a>
<a id="trace-10653"></a>
<a id="trace-10671"></a>
<a id="trace-10682"></a>
<a id="trace-10696"></a>
<a id="trace-10713"></a>
<a id="trace-10786"></a>
<a id="trace-10795"></a>
<a id="trace-10822"></a>
<a id="trace-10832"></a>
<a id="trace-10848"></a>
<a id="trace-10859"></a>
<a id="trace-10874"></a>
<a id="trace-10890"></a>
<a id="trace-10900"></a>
<a id="trace-10914"></a>
- 200.30s–209.80s (×20), actor 5, squad 0 (trace 10573): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 10403. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575005339673473, 'next_transition': 10588}.
<a id="trace-10918"></a>
- 209.85s–209.85s (×1), actor 0, squad 0 (trace 10918): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 10716. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23627349026000002, 'next_transition': 11048}.
<a id="trace-11048"></a>
- 210.20s–210.20s (×1), actor 0, squad 0 (trace 11048): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: None.
<a id="trace-11049"></a>
- 210.20s–210.20s (×1), actor 0, squad 0 (trace 11049): bounding overwatch. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: None.
<a id="trace-11050"></a>
<a id="trace-11157"></a>
- 210.20s–210.25s (×2), actor 0, squad 0 (trace 11050): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: None.
<a id="trace-11271"></a>
- 210.30s–210.30s (×1), actor 5, squad 0 (trace 11271): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10974. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08505396525882834, 'next_transition': 11390}.
<a id="trace-11274"></a>
- 210.30s–210.30s (×1), actor 0, squad 0 (trace 11274): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08505396525882834, 'next_transition': 11390}.
<a id="trace-11390"></a>
<a id="trace-11416"></a>
<a id="trace-11438"></a>
<a id="trace-11462"></a>
<a id="trace-11492"></a>
<a id="trace-11512"></a>
<a id="trace-11528"></a>
- 210.80s–213.80s (×7), actor 5, squad 0 (trace 11390): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10974. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12960167835043654, 'next_transition': 11416}.
<a id="trace-11531"></a>
- 213.80s–213.80s (×1), actor 0, squad 0 (trace 11531): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2096}.
<a id="trace-11532"></a>
- 213.80s–213.80s (×1), actor 0, squad 0 (trace 11532): rearward bound: one stationary suppressing element. Knowledge: actor memory at 210.00s, trace 10972. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2096}.
<a id="trace-2096"></a>
- 214.05s–214.05s (×1), actor 5, squad 0 (events line 2096): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11688"></a>
- 214.05s–214.05s (×1), actor 5, squad 0 (trace 11688): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675352 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 214.05s, trace 11688. Next observer evidence: None.
<a id="trace-11689"></a>
- 214.05s–214.05s (×1), actor 5, squad 0 (trace 11689): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675352 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 214.05s, trace 11689. Next observer evidence: None.
<a id="trace-11691"></a>
- 214.10s–214.10s (×1), actor 5, squad 0 (trace 11691): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 214.10s, trace 11691. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11703}.
<a id="trace-11703"></a>
<a id="trace-11716"></a>
<a id="trace-11789"></a>
<a id="trace-11796"></a>
<a id="trace-11814"></a>
<a id="trace-11831"></a>
<a id="trace-11842"></a>
<a id="trace-11863"></a>
<a id="trace-11896"></a>
<a id="trace-11926"></a>
<a id="trace-11959"></a>
<a id="trace-11988"></a>
<a id="trace-12084"></a>
<a id="trace-12108"></a>
<a id="trace-12120"></a>
<a id="trace-12127"></a>
<a id="trace-12139"></a>
<a id="trace-12156"></a>
<a id="trace-12164"></a>
<a id="trace-12173"></a>
<a id="trace-12188"></a>
<a id="trace-12208"></a>
<a id="trace-12283"></a>
<a id="trace-12291"></a>
<a id="trace-12318"></a>
<a id="trace-12325"></a>
<a id="trace-12333"></a>
<a id="trace-12346"></a>
<a id="trace-12357"></a>
- 214.30s–228.30s (×29), actor 5, squad 0 (trace 11703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 214.10s, trace 11691. Next observer evidence: {'until': 214.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11716}.
<a id="trace-12369"></a>
- 229.20s–229.20s (×1), actor 1, squad 0 (trace 12369): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 225.00s, trace 12213. Next observer evidence: None.
<a id="trace-12370"></a>
- 229.20s–229.20s (×1), actor 1, squad 0 (trace 12370): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 225.00s, trace 12213. Next observer evidence: None.
<a id="trace-12377"></a>
<a id="trace-12382"></a>
<a id="trace-12460"></a>
<a id="trace-12464"></a>
<a id="trace-12473"></a>
<a id="trace-12481"></a>
<a id="trace-12487"></a>
<a id="trace-12492"></a>
<a id="trace-12498"></a>
- 229.30s–233.30s (×9), actor 5, squad 0 (trace 12377): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 12214. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599756010071441, 'next_transition': 12382}.
<a id="trace-12501"></a>
- 233.70s–233.70s (×1), actor 1, squad 0 (trace 12501): NeedSupport. Knowledge: actor memory at 230.00s, trace 12390. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001441287397956, 'next_transition': 12509}.
<a id="trace-12509"></a>
<a id="trace-12515"></a>
<a id="trace-12519"></a>
<a id="trace-12591"></a>
<a id="trace-12597"></a>
<a id="trace-12605"></a>
<a id="trace-12610"></a>
<a id="trace-12619"></a>
<a id="trace-12626"></a>
<a id="trace-12636"></a>
<a id="trace-12644"></a>
<a id="trace-12654"></a>
<a id="trace-12665"></a>
<a id="trace-12738"></a>
<a id="trace-12746"></a>
<a id="trace-12759"></a>
<a id="trace-12766"></a>
<a id="trace-12776"></a>
<a id="trace-12782"></a>
<a id="trace-12791"></a>
<a id="trace-12798"></a>
<a id="trace-12808"></a>
<a id="trace-12816"></a>
<a id="trace-12890"></a>
<a id="trace-12897"></a>
<a id="trace-12909"></a>
<a id="trace-12918"></a>
<a id="trace-12927"></a>
<a id="trace-12935"></a>
<a id="trace-12950"></a>
<a id="trace-12957"></a>
- 233.80s–248.80s (×31), actor 5, squad 0 (trace 12509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 12391. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400276415555791, 'next_transition': 12515}.
<a id="trace-12964"></a>
- 249.20s–249.20s (×1), actor 1, squad 0 (trace 12964): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 245.00s, trace 12822. Next observer evidence: None.
<a id="trace-12970"></a>
<a id="trace-12978"></a>
<a id="trace-13055"></a>
<a id="trace-13061"></a>
<a id="trace-13072"></a>
<a id="trace-13081"></a>
<a id="trace-13091"></a>
<a id="trace-13099"></a>
<a id="trace-13110"></a>
<a id="trace-13115"></a>
<a id="trace-13126"></a>
<a id="trace-13141"></a>
<a id="trace-13214"></a>
<a id="trace-13221"></a>
<a id="trace-13232"></a>
<a id="trace-13238"></a>
<a id="trace-13248"></a>
<a id="trace-13255"></a>
<a id="trace-13264"></a>
<a id="trace-13271"></a>
- 249.30s–258.80s (×20), actor 5, squad 0 (trace 12970): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 12823. Next observer evidence: {'until': 249.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12978}.
<a id="trace-2364"></a>
- 259.10s–259.10s (×1), actor 5, squad 0 (events line 2364): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13275"></a>
- 259.10s–259.10s (×1), actor 5, squad 0 (trace 13275): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227210 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.10s, trace 13275. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}.
<a id="trace-13276"></a>
- 259.10s–259.10s (×1), actor 5, squad 0 (trace 13276): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227210 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.10s, trace 13276. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}.
<a id="trace-13283"></a>
<a id="trace-13292"></a>
- 259.30s–259.80s (×2), actor 5, squad 0 (trace 13283): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 259.10s, trace 13276. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13292}.
<a id="trace-13363"></a>
- 260.25s–260.25s (×1), actor 1, squad 0 (trace 13363): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: None.
<a id="trace-13364"></a>
- 260.25s–260.25s (×1), actor 1, squad 0 (trace 13364): MoveTactically. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: None.
<a id="trace-13365"></a>
- 260.25s–260.25s (×1), actor 1, squad 0 (trace 13365): traveling overwatch. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: None.
<a id="trace-13366"></a>
- 260.25s–260.25s (×1), actor 1, squad 0 (trace 13366): . Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: None.
<a id="trace-13373"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (trace 13373): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 13300. Next observer evidence: {'until': 260.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13381}.
<a id="trace-13376"></a>
- 260.30s–260.30s (×1), actor 1, squad 0 (trace 13376): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: {'until': 260.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13381}.
<a id="trace-13381"></a>
- 260.70s–260.70s (×1), actor 1, squad 0 (trace 13381): Withdraw to received rally. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13437}.
<a id="trace-13382"></a>
- 260.70s–260.70s (×1), actor 1, squad 0 (trace 13382): rearward bound: one stationary suppressing element. Knowledge: actor memory at 260.00s, trace 13299. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13437}.
<a id="trace-13437"></a>
<a id="trace-13456"></a>
<a id="trace-13467"></a>
<a id="trace-13477"></a>
<a id="trace-13486"></a>
<a id="trace-13499"></a>
<a id="trace-13507"></a>
<a id="trace-13522"></a>
<a id="trace-13534"></a>
<a id="trace-13611"></a>
<a id="trace-13618"></a>
<a id="trace-13634"></a>
<a id="trace-13643"></a>
<a id="trace-13655"></a>
<a id="trace-13670"></a>
<a id="trace-13686"></a>
<a id="trace-13694"></a>
<a id="trace-13712"></a>
<a id="trace-13720"></a>
<a id="trace-13798"></a>
<a id="trace-13807"></a>
<a id="trace-13820"></a>
<a id="trace-13825"></a>
<a id="trace-13840"></a>
- 260.80s–272.30s (×24), actor 5, squad 0 (trace 13437): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 13300. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13456}.
<a id="trace-13849"></a>
- 272.65s–272.65s (×1), actor 1, squad 0 (trace 13849): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 13725. Next observer evidence: {'until': 272.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000000064, 'next_transition': 13857}.
<a id="trace-13850"></a>
- 272.65s–272.65s (×1), actor 1, squad 0 (trace 13850): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 13725. Next observer evidence: {'until': 272.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000000064, 'next_transition': 13857}.
<a id="trace-13857"></a>
<a id="trace-13870"></a>
<a id="trace-13882"></a>
<a id="trace-13900"></a>
<a id="trace-13906"></a>
<a id="trace-13982"></a>
<a id="trace-13996"></a>
<a id="trace-14007"></a>
<a id="trace-14014"></a>
<a id="trace-14025"></a>
<a id="trace-14031"></a>
<a id="trace-14041"></a>
<a id="trace-14048"></a>
<a id="trace-14059"></a>
<a id="trace-14065"></a>
<a id="trace-14139"></a>
<a id="trace-14147"></a>
<a id="trace-14160"></a>
<a id="trace-14167"></a>
<a id="trace-14181"></a>
<a id="trace-14189"></a>
<a id="trace-14197"></a>
<a id="trace-14204"></a>
<a id="trace-14213"></a>
<a id="trace-14220"></a>
<a id="trace-14293"></a>
<a id="trace-14302"></a>
<a id="trace-14313"></a>
<a id="trace-14319"></a>
<a id="trace-14330"></a>
<a id="trace-14339"></a>
<a id="trace-14349"></a>
<a id="trace-14361"></a>
<a id="trace-14371"></a>
<a id="trace-14377"></a>
<a id="trace-14450"></a>
<a id="trace-14459"></a>
<a id="trace-14470"></a>
<a id="trace-14477"></a>
<a id="trace-14487"></a>
<a id="trace-14494"></a>
<a id="trace-14504"></a>
<a id="trace-14513"></a>
<a id="trace-14533"></a>
<a id="trace-14605"></a>
<a id="trace-14614"></a>
<a id="trace-14626"></a>
<a id="trace-14634"></a>
<a id="trace-14644"></a>
<a id="trace-14651"></a>
<a id="trace-14661"></a>
<a id="trace-14668"></a>
<a id="trace-14679"></a>
<a id="trace-14686"></a>
<a id="trace-14759"></a>
<a id="trace-14771"></a>
<a id="trace-14780"></a>
<a id="trace-14786"></a>
<a id="trace-14795"></a>
<a id="trace-14802"></a>
<a id="trace-14815"></a>
<a id="trace-14824"></a>
<a id="trace-14833"></a>
<a id="trace-14839"></a>
<a id="trace-14912"></a>
<a id="trace-14922"></a>
<a id="trace-14932"></a>
<a id="trace-14941"></a>
<a id="trace-14952"></a>
<a id="trace-14958"></a>
<a id="trace-14968"></a>
<a id="trace-14976"></a>
<a id="trace-14985"></a>
<a id="trace-14996"></a>
<a id="trace-15069"></a>
<a id="trace-15076"></a>
<a id="trace-15087"></a>
<a id="trace-15094"></a>
<a id="trace-15105"></a>
<a id="trace-15112"></a>
<a id="trace-15122"></a>
<a id="trace-15129"></a>
<a id="trace-15141"></a>
<a id="trace-15149"></a>
<a id="trace-15222"></a>
<a id="trace-15231"></a>
<a id="trace-15245"></a>
<a id="trace-15252"></a>
<a id="trace-15262"></a>
<a id="trace-15269"></a>
<a id="trace-15278"></a>
<a id="trace-15287"></a>
<a id="trace-15296"></a>
<a id="trace-15301"></a>
- 272.80s–319.80s (×94), actor 5, squad 0 (trace 13857): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 13726. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400666666666629, 'next_transition': 13870}.
<a id="trace-2862"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (events line 2862): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15375"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (trace 15375): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 15309. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15388}.
<a id="trace-15378"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (trace 15378): renew committed intent (75 s lifetime). Knowledge: actor memory at 320.30s, trace 15378. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15388}.
<a id="trace-15388"></a>
<a id="trace-15399"></a>
<a id="trace-15407"></a>
<a id="trace-15417"></a>
<a id="trace-15422"></a>
<a id="trace-15433"></a>
<a id="trace-15443"></a>
<a id="trace-15454"></a>
<a id="trace-15461"></a>
<a id="trace-15533"></a>
<a id="trace-15541"></a>
<a id="trace-15552"></a>
<a id="trace-15559"></a>
<a id="trace-15570"></a>
<a id="trace-15577"></a>
<a id="trace-15587"></a>
<a id="trace-15594"></a>
<a id="trace-15605"></a>
<a id="trace-15611"></a>
<a id="trace-15684"></a>
<a id="trace-15697"></a>
<a id="trace-15708"></a>
<a id="trace-15713"></a>
<a id="trace-15724"></a>
<a id="trace-15731"></a>
<a id="trace-15742"></a>
<a id="trace-15752"></a>
<a id="trace-15762"></a>
<a id="trace-15768"></a>
<a id="trace-15840"></a>
<a id="trace-15849"></a>
<a id="trace-15860"></a>
<a id="trace-15868"></a>
<a id="trace-15880"></a>
<a id="trace-15886"></a>
<a id="trace-15895"></a>
<a id="trace-15904"></a>
<a id="trace-15914"></a>
<a id="trace-15922"></a>
<a id="trace-15996"></a>
<a id="trace-16004"></a>
<a id="trace-16015"></a>
<a id="trace-16022"></a>
<a id="trace-16032"></a>
<a id="trace-16041"></a>
<a id="trace-16049"></a>
<a id="trace-16057"></a>
<a id="trace-16070"></a>
<a id="trace-16077"></a>
<a id="trace-16151"></a>
<a id="trace-16160"></a>
<a id="trace-16171"></a>
<a id="trace-16177"></a>
<a id="trace-16189"></a>
<a id="trace-16195"></a>
<a id="trace-16205"></a>
<a id="trace-16214"></a>
<a id="trace-16223"></a>
<a id="trace-16229"></a>
<a id="trace-16302"></a>
<a id="trace-16312"></a>
<a id="trace-16325"></a>
<a id="trace-16333"></a>
<a id="trace-16344"></a>
<a id="trace-16350"></a>
<a id="trace-16361"></a>
<a id="trace-16371"></a>
<a id="trace-16380"></a>
<a id="trace-16388"></a>
<a id="trace-16459"></a>
<a id="trace-16467"></a>
<a id="trace-16478"></a>
<a id="trace-16486"></a>
<a id="trace-16495"></a>
<a id="trace-16501"></a>
<a id="trace-16513"></a>
<a id="trace-16522"></a>
<a id="trace-16532"></a>
<a id="trace-16540"></a>
- 320.80s–359.80s (×79), actor 5, squad 0 (trace 15388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.30s, trace 15378. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15399}.

## Net delivery

188 matched order/radio deliveries; 251 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.144s; maximum 1.850s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1611: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1612: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1613: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1614: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 1777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1781: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1782: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1783: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1784: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.05s leader 5, trace 2273: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 2452: estimate 4.92; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 2453: estimate 4.92; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2461: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2463: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2464: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2465: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2466: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2467: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2468: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 2650: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2652: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2653: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2654: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2655: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2656: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2657: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3036: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3038: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3039: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3040: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3041: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3042: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3043: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3431: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3433: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3434: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3435: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3436: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3437: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3438: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3598: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3600: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3601: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3602: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3603: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3604: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3605: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 3770: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3772: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3773: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3774: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3775: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3776: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3777: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4045: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4047: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4048: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4049: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4050: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4051: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4052: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4256: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4258: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4259: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4260: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4261: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4262: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4263: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4496: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4498: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4499: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4500: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4501: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4502: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4503: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 4715: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 4716: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 4749: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4751: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4752: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4753: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4754: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4755: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4756: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5121: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5123: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5124: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5125: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5126: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5127: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5128: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5319: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5321: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5322: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5323: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5324: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5325: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5326: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5572: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5574: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5575: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5576: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5577: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5578: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5579: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5791: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5793: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5794: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5795: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5796: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5797: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5798: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 5993: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5995: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5996: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5997: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5998: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5999: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6000: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6251: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6253: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6254: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6255: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6256: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6257: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6258: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6517: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6519: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6520: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6521: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6522: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6523: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6524: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6732: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6734: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6735: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6736: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6737: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6738: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6739: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6924: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6926: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6927: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6928: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6929: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6930: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6931: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 7192: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7194: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7195: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7196: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7197: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7198: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7199: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7442: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7444: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7445: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7446: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7447: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7448: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7449: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.45s leader 5, trace 7632: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 7650: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7652: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7653: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7654: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7655: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7656: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7657: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.25s leader 5, trace 7847: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.25s leader 5, trace 7848: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7869: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7871: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7872: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7873: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7874: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7875: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7876: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 8190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8194: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8196: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8197: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.25s leader 5, trace 8257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.25s leader 5, trace 8258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 8513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 9061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 9282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.25s leader 5, trace 9749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.25s leader 5, trace 9750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 10195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 10401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 10716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 10972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10976: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10977: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10978: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 214.05s leader 5, trace 11688: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 214.05s leader 5, trace 11689: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 214.10s leader 5, trace 11691: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 11720: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11722: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11723: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11724: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11725: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11726: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11727: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 11999: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 12000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12001: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12002: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12003: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12004: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12005: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12006: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 12212: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12214: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12215: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12216: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12217: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12218: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12219: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 12390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12391: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12392: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12393: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12394: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12395: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12396: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12523: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12524: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12525: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12526: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12527: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12528: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12529: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12669: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12670: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12671: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12672: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12673: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12674: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12675: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12822: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12823: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12824: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12825: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12826: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12827: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12828: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12986: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12987: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12988: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12989: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12990: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12991: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12992: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 13145: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13146: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13147: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13148: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13149: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13150: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13151: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.10s leader 5, trace 13275: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.10s leader 5, trace 13276: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13299: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13300: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13301: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13302: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13303: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13304: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13305: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13542: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13543: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13544: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13545: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13546: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13547: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13548: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13725: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13726: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13727: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13728: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13729: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13730: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13731: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13913: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13914: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13915: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13916: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13917: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13918: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13919: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 14069: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14070: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14071: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14072: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14073: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14074: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14075: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14224: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14225: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14226: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14227: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14228: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14229: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14230: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14383: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14384: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14385: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14386: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14387: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14388: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14389: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14536: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14537: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14538: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14539: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14540: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14541: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14542: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14689: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14690: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14691: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14692: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14693: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14694: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14695: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14844: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14845: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14846: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14847: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14848: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14849: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14850: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15000: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15001: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15002: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15003: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15004: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15005: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15006: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15153: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15154: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15155: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15156: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15157: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15158: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15159: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15308: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15309: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15310: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15311: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15312: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15313: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15314: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.30s leader 5, trace 15378: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15464: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15465: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15466: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15467: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15468: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15469: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15470: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 15615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 16235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 16390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

- 84.05s, evidence 743: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 4715: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.447994 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341138886813756, 'next_transition': 4728}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 4716: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.447994 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341138886813756, 'next_transition': 4728}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 144.45s, evidence 1362: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3843550450405948, 'next_transition': 7645}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.10s, evidence 2364: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.10s, evidence 13275: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227210 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.10s, evidence 13276: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227210 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 320.30s, evidence 2862: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
