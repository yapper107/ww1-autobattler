# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/108/good-ember/battle-108-1789674050141575680`

## Battle summary

**Ember** · 360 s · 1181 shots.

### Turning points

- 17.9s, squad 4: contact (events line 218). First recorded contact.
- 22.5s, squad 1: withdrawal ([trace 4565](#trace-4565)). 97.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 33.7s, squad 0: withdrawal ([trace 6274](#trace-6274)). 105.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 40.0s, squad 1: help call ([trace 7117](#trace-7117)). No completion observed before termination.
- 175.5s, squad 0: help call ([trace 17290](#trace-17290)). No completion observed before termination.
- 183.7s, squad 0: assault ([trace 18503](#trace-18503)). 253.9s, squad 0: advanced tactically.
- 191.9s, squad 0: help call ([trace 19375](#trace-19375)). No completion observed before termination.
- 283.9s, squad 1: assault ([trace 24657](#trace-24657)). 284.9s, squad 1: advanced tactically.
- 331.6s, squad 1: withdrawal ([trace 34261](#trace-34261)). No completion observed before termination.
- 344.2s, squad 1: help call ([trace 35894](#trace-35894)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 559 shots, 6/8 lost.
- **1** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 23 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 489 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 110 shots, 0/4 lost.

### Decisions and attribution

At 331.6s, squad 1 chose broke contact ([trace 34261](#trace-34261)), followed by 2 shots and 1 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 289.0s, squad 0 chose FightHere: nearest known group ([trace 25042](#trace-25042)), followed by 2 shots and 0 own casualties; estimate 1.2 against 0 distinct squad-reported contacts; At 247.6s, squad 0 chose renewed the existing objective ([trace 21829](#trace-21829)), followed by 1 shots and 0 own casualties; estimate 11.7 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1634](#trace-1634)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1703}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 5502](#trace-5502)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5506503356897443, 'next_transition': 5553}.

### Communication

401 matched deliveries (mean 0.59s, max 5.25s); 488 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.90s, squad 4, contact, evidence events line 218: First recorded contact; .
- 22.50s, squad 1, withdrawal, evidence 4565: BreakContact: believed ratio at least two without superiority; 97.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 33.70s, squad 0, withdrawal, evidence 6274: BreakContact: believed ratio at least two without superiority; 105.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 40.00s, squad 1, help call, evidence 7117: NeedSupport; No completion observed before termination.
- 175.50s, squad 0, help call, evidence 17290: NeedSupport; No completion observed before termination.
- 183.65s, squad 0, assault, evidence 18503: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 253.9s, squad 0: advanced tactically.
- 191.85s, squad 0, help call, evidence 19375: NeedSupport; No completion observed before termination.
- 283.90s, squad 1, assault, evidence 24657: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 284.9s, squad 1: advanced tactically.
- 331.55s, squad 1, withdrawal, evidence 34261: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 344.25s, squad 1, help call, evidence 35894: NeedSupport; No completion observed before termination.
- 351.75s, squad 0, help call, evidence 36425: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.729959419632316, 'next_transition': 1101}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.729959419632316, 'next_transition': 1101}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.729959419632316, 'next_transition': 1101}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329237140378726, 'next_transition': 171}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329237140378726, 'next_transition': 171}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329237140378726, 'next_transition': 171}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-766"></a>
<a id="trace-768"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-817"></a>
<a id="trace-819"></a>
<a id="trace-842"></a>
<a id="trace-844"></a>
<a id="trace-873"></a>
<a id="trace-875"></a>
<a id="trace-956"></a>
<a id="trace-958"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1054"></a>
<a id="trace-1056"></a>
<a id="trace-1075"></a>
<a id="trace-1077"></a>
<a id="trace-1103"></a>
<a id="trace-1105"></a>
<a id="trace-1135"></a>
<a id="trace-1137"></a>
<a id="trace-1166"></a>
<a id="trace-1168"></a>
<a id="trace-1188"></a>
<a id="trace-1190"></a>
<a id="trace-1208"></a>
<a id="trace-1210"></a>
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1321"></a>
<a id="trace-1323"></a>
<a id="trace-1525"></a>
<a id="trace-1527"></a>
<a id="trace-1560"></a>
<a id="trace-1562"></a>
<a id="trace-1598"></a>
<a id="trace-1600"></a>
<a id="trace-1629"></a>
<a id="trace-1631"></a>
<a id="trace-1667"></a>
<a id="trace-1669"></a>
<a id="trace-1697"></a>
<a id="trace-1699"></a>
<a id="trace-2038"></a>
<a id="trace-2040"></a>
<a id="trace-2068"></a>
<a id="trace-2070"></a>
<a id="trace-2159"></a>
<a id="trace-2161"></a>
<a id="trace-2183"></a>
<a id="trace-2185"></a>
<a id="trace-2215"></a>
<a id="trace-2217"></a>
<a id="trace-2246"></a>
<a id="trace-2248"></a>
<a id="trace-2269"></a>
<a id="trace-2271"></a>
<a id="trace-2293"></a>
<a id="trace-2295"></a>
<a id="trace-2326"></a>
<a id="trace-2328"></a>
<a id="trace-3303"></a>
<a id="trace-3305"></a>
<a id="trace-4123"></a>
<a id="trace-4125"></a>
<a id="trace-4180"></a>
<a id="trace-4182"></a>
<a id="trace-4305"></a>
<a id="trace-4307"></a>
<a id="trace-4357"></a>
<a id="trace-4359"></a>
<a id="trace-4423"></a>
<a id="trace-4425"></a>
<a id="trace-4483"></a>
<a id="trace-4485"></a>
<a id="trace-4552"></a>
<a id="trace-4554"></a>
<a id="trace-4946"></a>
<a id="trace-4948"></a>
<a id="trace-4969"></a>
<a id="trace-4971"></a>
<a id="trace-4990"></a>
<a id="trace-4992"></a>
<a id="trace-5024"></a>
<a id="trace-5026"></a>
<a id="trace-5055"></a>
<a id="trace-5057"></a>
<a id="trace-5152"></a>
<a id="trace-5154"></a>
<a id="trace-5449"></a>
<a id="trace-5451"></a>
<a id="trace-5485"></a>
<a id="trace-5487"></a>
<a id="trace-5523"></a>
<a id="trace-5525"></a>
<a id="trace-5557"></a>
<a id="trace-5559"></a>
<a id="trace-5579"></a>
<a id="trace-5581"></a>
<a id="trace-5634"></a>
<a id="trace-5636"></a>
<a id="trace-5929"></a>
<a id="trace-5931"></a>
<a id="trace-5964"></a>
<a id="trace-5966"></a>
<a id="trace-6010"></a>
<a id="trace-6012"></a>
<a id="trace-6104"></a>
<a id="trace-6106"></a>
<a id="trace-6130"></a>
<a id="trace-6132"></a>
<a id="trace-6166"></a>
<a id="trace-6168"></a>
<a id="trace-6185"></a>
<a id="trace-6187"></a>
<a id="trace-6212"></a>
<a id="trace-6214"></a>
<a id="trace-6234"></a>
<a id="trace-6236"></a>
<a id="trace-6253"></a>
<a id="trace-6255"></a>
<a id="trace-6579"></a>
<a id="trace-6581"></a>
<a id="trace-6604"></a>
<a id="trace-6606"></a>
<a id="trace-6637"></a>
<a id="trace-6639"></a>
<a id="trace-6734"></a>
<a id="trace-6736"></a>
<a id="trace-6754"></a>
<a id="trace-6756"></a>
<a id="trace-6778"></a>
<a id="trace-6780"></a>
<a id="trace-6810"></a>
<a id="trace-6812"></a>
<a id="trace-6828"></a>
<a id="trace-6830"></a>
<a id="trace-6839"></a>
<a id="trace-6841"></a>
<a id="trace-7019"></a>
<a id="trace-7021"></a>
<a id="trace-7037"></a>
<a id="trace-7039"></a>
<a id="trace-7063"></a>
<a id="trace-7065"></a>
<a id="trace-7084"></a>
<a id="trace-7086"></a>
<a id="trace-7184"></a>
<a id="trace-7186"></a>
<a id="trace-7218"></a>
<a id="trace-7220"></a>
<a id="trace-7249"></a>
<a id="trace-7251"></a>
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7314"></a>
<a id="trace-7316"></a>
<a id="trace-7351"></a>
<a id="trace-7353"></a>
<a id="trace-7392"></a>
<a id="trace-7394"></a>
<a id="trace-7422"></a>
<a id="trace-7424"></a>
<a id="trace-7455"></a>
<a id="trace-7457"></a>
<a id="trace-7488"></a>
<a id="trace-7490"></a>
<a id="trace-7574"></a>
<a id="trace-7576"></a>
<a id="trace-7600"></a>
<a id="trace-7602"></a>
<a id="trace-7629"></a>
<a id="trace-7631"></a>
<a id="trace-7647"></a>
<a id="trace-7649"></a>
<a id="trace-7777"></a>
<a id="trace-7779"></a>
<a id="trace-7799"></a>
<a id="trace-7801"></a>
<a id="trace-7843"></a>
<a id="trace-7845"></a>
<a id="trace-7898"></a>
<a id="trace-7900"></a>
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7953"></a>
<a id="trace-7955"></a>
<a id="trace-8058"></a>
<a id="trace-8060"></a>
<a id="trace-8077"></a>
<a id="trace-8079"></a>
<a id="trace-8100"></a>
<a id="trace-8102"></a>
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8139"></a>
<a id="trace-8141"></a>
<a id="trace-8161"></a>
<a id="trace-8163"></a>
<a id="trace-8182"></a>
<a id="trace-8184"></a>
<a id="trace-8203"></a>
<a id="trace-8205"></a>
<a id="trace-8231"></a>
<a id="trace-8233"></a>
<a id="trace-8249"></a>
<a id="trace-8251"></a>
<a id="trace-8336"></a>
<a id="trace-8338"></a>
<a id="trace-8352"></a>
<a id="trace-8354"></a>
<a id="trace-8379"></a>
<a id="trace-8381"></a>
<a id="trace-8403"></a>
<a id="trace-8405"></a>
<a id="trace-8421"></a>
<a id="trace-8423"></a>
<a id="trace-8495"></a>
<a id="trace-8497"></a>
<a id="trace-8517"></a>
<a id="trace-8519"></a>
<a id="trace-8543"></a>
<a id="trace-8545"></a>
<a id="trace-8573"></a>
<a id="trace-8575"></a>
<a id="trace-8595"></a>
<a id="trace-8597"></a>
<a id="trace-8694"></a>
<a id="trace-8696"></a>
<a id="trace-8719"></a>
<a id="trace-8721"></a>
<a id="trace-8738"></a>
<a id="trace-8740"></a>
<a id="trace-8752"></a>
<a id="trace-8754"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8792"></a>
<a id="trace-8794"></a>
<a id="trace-8814"></a>
<a id="trace-8816"></a>
<a id="trace-8998"></a>
<a id="trace-9000"></a>
<a id="trace-9030"></a>
<a id="trace-9032"></a>
<a id="trace-9057"></a>
<a id="trace-9059"></a>
<a id="trace-9145"></a>
<a id="trace-9147"></a>
<a id="trace-9192"></a>
<a id="trace-9194"></a>
<a id="trace-9208"></a>
<a id="trace-9210"></a>
<a id="trace-9234"></a>
<a id="trace-9236"></a>
<a id="trace-9246"></a>
<a id="trace-9248"></a>
<a id="trace-9270"></a>
<a id="trace-9272"></a>
<a id="trace-9289"></a>
<a id="trace-9291"></a>
<a id="trace-9316"></a>
<a id="trace-9318"></a>
<a id="trace-9495"></a>
<a id="trace-9497"></a>
<a id="trace-9583"></a>
<a id="trace-9585"></a>
<a id="trace-9610"></a>
<a id="trace-9612"></a>
<a id="trace-9644"></a>
<a id="trace-9646"></a>
<a id="trace-9666"></a>
<a id="trace-9668"></a>
<a id="trace-9698"></a>
<a id="trace-9700"></a>
<a id="trace-9724"></a>
<a id="trace-9726"></a>
<a id="trace-9754"></a>
<a id="trace-9756"></a>
<a id="trace-9774"></a>
<a id="trace-9776"></a>
<a id="trace-9795"></a>
<a id="trace-9797"></a>
<a id="trace-9819"></a>
<a id="trace-9821"></a>
<a id="trace-9901"></a>
<a id="trace-9903"></a>
<a id="trace-9927"></a>
<a id="trace-9929"></a>
<a id="trace-9956"></a>
<a id="trace-9958"></a>
<a id="trace-9976"></a>
<a id="trace-9978"></a>
<a id="trace-10114"></a>
<a id="trace-10116"></a>
<a id="trace-10138"></a>
<a id="trace-10140"></a>
<a id="trace-10175"></a>
<a id="trace-10177"></a>
<a id="trace-10211"></a>
<a id="trace-10213"></a>
<a id="trace-10229"></a>
<a id="trace-10231"></a>
<a id="trace-10258"></a>
<a id="trace-10260"></a>
<a id="trace-10348"></a>
<a id="trace-10350"></a>
<a id="trace-10369"></a>
<a id="trace-10371"></a>
<a id="trace-10396"></a>
<a id="trace-10398"></a>
<a id="trace-10414"></a>
<a id="trace-10416"></a>
<a id="trace-10440"></a>
<a id="trace-10442"></a>
<a id="trace-10460"></a>
<a id="trace-10462"></a>
<a id="trace-10483"></a>
<a id="trace-10485"></a>
<a id="trace-10510"></a>
<a id="trace-10512"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10556"></a>
<a id="trace-10558"></a>
<a id="trace-10700"></a>
<a id="trace-10702"></a>
<a id="trace-10718"></a>
<a id="trace-10720"></a>
<a id="trace-10744"></a>
<a id="trace-10746"></a>
<a id="trace-10768"></a>
<a id="trace-10770"></a>
<a id="trace-10787"></a>
<a id="trace-10789"></a>
<a id="trace-10812"></a>
<a id="trace-10814"></a>
<a id="trace-10837"></a>
<a id="trace-10839"></a>
<a id="trace-10852"></a>
<a id="trace-10854"></a>
<a id="trace-10873"></a>
<a id="trace-10875"></a>
<a id="trace-10886"></a>
<a id="trace-10888"></a>
<a id="trace-10972"></a>
<a id="trace-10974"></a>
<a id="trace-10991"></a>
<a id="trace-10993"></a>
<a id="trace-11006"></a>
<a id="trace-11008"></a>
<a id="trace-11178"></a>
<a id="trace-11180"></a>
<a id="trace-11201"></a>
<a id="trace-11203"></a>
<a id="trace-11226"></a>
<a id="trace-11228"></a>
<a id="trace-11258"></a>
<a id="trace-11260"></a>
<a id="trace-11271"></a>
<a id="trace-11273"></a>
<a id="trace-11296"></a>
<a id="trace-11298"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
<a id="trace-11396"></a>
<a id="trace-11398"></a>
<a id="trace-11414"></a>
<a id="trace-11416"></a>
<a id="trace-11432"></a>
<a id="trace-11434"></a>
<a id="trace-11447"></a>
<a id="trace-11449"></a>
<a id="trace-11464"></a>
<a id="trace-11466"></a>
<a id="trace-11474"></a>
<a id="trace-11476"></a>
<a id="trace-11498"></a>
<a id="trace-11500"></a>
<a id="trace-11518"></a>
<a id="trace-11520"></a>
<a id="trace-11543"></a>
<a id="trace-11545"></a>
<a id="trace-11555"></a>
<a id="trace-11557"></a>
<a id="trace-11638"></a>
<a id="trace-11640"></a>
<a id="trace-11656"></a>
<a id="trace-11658"></a>
<a id="trace-11670"></a>
<a id="trace-11672"></a>
<a id="trace-11683"></a>
<a id="trace-11685"></a>
<a id="trace-11700"></a>
<a id="trace-11702"></a>
<a id="trace-11714"></a>
<a id="trace-11716"></a>
<a id="trace-11734"></a>
<a id="trace-11736"></a>
<a id="trace-11749"></a>
<a id="trace-11751"></a>
<a id="trace-11769"></a>
<a id="trace-11771"></a>
<a id="trace-11777"></a>
<a id="trace-11779"></a>
<a id="trace-11854"></a>
<a id="trace-11856"></a>
<a id="trace-11873"></a>
<a id="trace-11875"></a>
<a id="trace-11895"></a>
<a id="trace-11897"></a>
<a id="trace-11930"></a>
<a id="trace-11932"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-12141"></a>
<a id="trace-12143"></a>
<a id="trace-12182"></a>
<a id="trace-12184"></a>
<a id="trace-12206"></a>
<a id="trace-12208"></a>
<a id="trace-12242"></a>
<a id="trace-12244"></a>
<a id="trace-12259"></a>
<a id="trace-12261"></a>
<a id="trace-12349"></a>
<a id="trace-12351"></a>
<a id="trace-12366"></a>
<a id="trace-12368"></a>
<a id="trace-12381"></a>
<a id="trace-12383"></a>
<a id="trace-12396"></a>
<a id="trace-12398"></a>
<a id="trace-12414"></a>
<a id="trace-12416"></a>
<a id="trace-12429"></a>
<a id="trace-12431"></a>
<a id="trace-12455"></a>
<a id="trace-12457"></a>
<a id="trace-12470"></a>
<a id="trace-12472"></a>
<a id="trace-12491"></a>
<a id="trace-12493"></a>
<a id="trace-12503"></a>
<a id="trace-12505"></a>
<a id="trace-12586"></a>
<a id="trace-12588"></a>
<a id="trace-12599"></a>
<a id="trace-12601"></a>
<a id="trace-12621"></a>
<a id="trace-12623"></a>
<a id="trace-12642"></a>
<a id="trace-12644"></a>
<a id="trace-12665"></a>
<a id="trace-12667"></a>
<a id="trace-12678"></a>
<a id="trace-12680"></a>
<a id="trace-12699"></a>
<a id="trace-12701"></a>
<a id="trace-12710"></a>
<a id="trace-12712"></a>
<a id="trace-12735"></a>
<a id="trace-12737"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-12964"></a>
<a id="trace-12966"></a>
<a id="trace-12992"></a>
<a id="trace-12994"></a>
<a id="trace-13014"></a>
<a id="trace-13016"></a>
<a id="trace-13032"></a>
<a id="trace-13034"></a>
<a id="trace-13050"></a>
<a id="trace-13052"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13088"></a>
<a id="trace-13090"></a>
<a id="trace-13109"></a>
<a id="trace-13111"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13206"></a>
<a id="trace-13208"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13247"></a>
<a id="trace-13249"></a>
<a id="trace-13264"></a>
<a id="trace-13266"></a>
<a id="trace-13278"></a>
<a id="trace-13280"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13330"></a>
<a id="trace-13332"></a>
<a id="trace-13356"></a>
<a id="trace-13358"></a>
<a id="trace-13479"></a>
<a id="trace-13481"></a>
<a id="trace-13567"></a>
<a id="trace-13569"></a>
<a id="trace-13584"></a>
<a id="trace-13586"></a>
<a id="trace-13605"></a>
<a id="trace-13607"></a>
<a id="trace-13617"></a>
<a id="trace-13619"></a>
<a id="trace-13643"></a>
<a id="trace-13645"></a>
<a id="trace-13659"></a>
<a id="trace-13661"></a>
<a id="trace-13683"></a>
<a id="trace-13685"></a>
<a id="trace-13692"></a>
<a id="trace-13694"></a>
<a id="trace-13715"></a>
<a id="trace-13717"></a>
<a id="trace-13737"></a>
<a id="trace-13739"></a>
<a id="trace-13974"></a>
<a id="trace-13976"></a>
<a id="trace-13992"></a>
<a id="trace-13994"></a>
<a id="trace-14029"></a>
<a id="trace-14031"></a>
<a id="trace-14048"></a>
<a id="trace-14050"></a>
<a id="trace-14067"></a>
<a id="trace-14069"></a>
<a id="trace-14090"></a>
<a id="trace-14092"></a>
<a id="trace-14112"></a>
<a id="trace-14114"></a>
<a id="trace-14128"></a>
<a id="trace-14130"></a>
<a id="trace-14153"></a>
<a id="trace-14155"></a>
<a id="trace-14165"></a>
<a id="trace-14167"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14268"></a>
<a id="trace-14270"></a>
<a id="trace-14292"></a>
<a id="trace-14294"></a>
<a id="trace-14307"></a>
<a id="trace-14309"></a>
<a id="trace-14331"></a>
<a id="trace-14333"></a>
<a id="trace-14343"></a>
<a id="trace-14345"></a>
<a id="trace-14366"></a>
<a id="trace-14368"></a>
<a id="trace-14383"></a>
<a id="trace-14385"></a>
<a id="trace-14411"></a>
<a id="trace-14413"></a>
<a id="trace-14425"></a>
<a id="trace-14427"></a>
<a id="trace-14508"></a>
<a id="trace-14510"></a>
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14648"></a>
<a id="trace-14650"></a>
<a id="trace-14666"></a>
<a id="trace-14668"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14706"></a>
<a id="trace-14708"></a>
<a id="trace-14731"></a>
<a id="trace-14733"></a>
<a id="trace-14748"></a>
<a id="trace-14750"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14788"></a>
<a id="trace-14790"></a>
<a id="trace-14866"></a>
<a id="trace-14868"></a>
<a id="trace-14878"></a>
<a id="trace-14880"></a>
<a id="trace-14895"></a>
<a id="trace-14897"></a>
<a id="trace-14905"></a>
<a id="trace-14907"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14945"></a>
<a id="trace-14947"></a>
<a id="trace-14962"></a>
<a id="trace-14964"></a>
<a id="trace-14978"></a>
<a id="trace-14980"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15118"></a>
<a id="trace-15120"></a>
<a id="trace-15144"></a>
<a id="trace-15146"></a>
<a id="trace-15161"></a>
<a id="trace-15163"></a>
<a id="trace-15178"></a>
<a id="trace-15180"></a>
<a id="trace-15187"></a>
<a id="trace-15189"></a>
<a id="trace-15412"></a>
<a id="trace-15414"></a>
<a id="trace-15430"></a>
<a id="trace-15432"></a>
<a id="trace-15455"></a>
<a id="trace-15457"></a>
<a id="trace-15470"></a>
<a id="trace-15472"></a>
<a id="trace-15546"></a>
<a id="trace-15548"></a>
<a id="trace-15562"></a>
<a id="trace-15564"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15615"></a>
<a id="trace-15617"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-15647"></a>
<a id="trace-15649"></a>
<a id="trace-15657"></a>
<a id="trace-15659"></a>
<a id="trace-15681"></a>
<a id="trace-15683"></a>
<a id="trace-15694"></a>
<a id="trace-15696"></a>
<a id="trace-15912"></a>
<a id="trace-15914"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-15991"></a>
<a id="trace-15993"></a>
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16035"></a>
<a id="trace-16037"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16081"></a>
<a id="trace-16083"></a>
<a id="trace-16094"></a>
<a id="trace-16096"></a>
<a id="trace-16177"></a>
<a id="trace-16179"></a>
<a id="trace-16198"></a>
<a id="trace-16200"></a>
<a id="trace-16217"></a>
<a id="trace-16219"></a>
<a id="trace-16230"></a>
<a id="trace-16232"></a>
<a id="trace-16612"></a>
<a id="trace-16614"></a>
<a id="trace-16637"></a>
<a id="trace-16639"></a>
<a id="trace-16669"></a>
<a id="trace-16671"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-17144"></a>
<a id="trace-17146"></a>
<a id="trace-17183"></a>
<a id="trace-17185"></a>
<a id="trace-17277"></a>
<a id="trace-17279"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17737"></a>
<a id="trace-17739"></a>
<a id="trace-17771"></a>
<a id="trace-17773"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17828"></a>
<a id="trace-17830"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17885"></a>
<a id="trace-17887"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-18021"></a>
<a id="trace-18023"></a>
<a id="trace-18046"></a>
<a id="trace-18048"></a>
<a id="trace-18075"></a>
<a id="trace-18077"></a>
<a id="trace-18092"></a>
<a id="trace-18094"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18135"></a>
<a id="trace-18137"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18880"></a>
<a id="trace-18882"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18996"></a>
<a id="trace-18998"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19039"></a>
<a id="trace-19041"></a>
<a id="trace-19055"></a>
<a id="trace-19057"></a>
<a id="trace-19077"></a>
<a id="trace-19079"></a>
<a id="trace-19088"></a>
<a id="trace-19090"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19161"></a>
<a id="trace-19163"></a>
<a id="trace-19299"></a>
<a id="trace-19301"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19347"></a>
<a id="trace-19349"></a>
<a id="trace-19367"></a>
<a id="trace-19369"></a>
<a id="trace-19410"></a>
<a id="trace-19412"></a>
<a id="trace-19425"></a>
<a id="trace-19427"></a>
<a id="trace-19442"></a>
<a id="trace-19444"></a>
<a id="trace-19453"></a>
<a id="trace-19455"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19511"></a>
<a id="trace-19513"></a>
<a id="trace-19611"></a>
<a id="trace-19613"></a>
<a id="trace-19632"></a>
<a id="trace-19634"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19713"></a>
<a id="trace-19715"></a>
<a id="trace-19726"></a>
<a id="trace-19728"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19762"></a>
<a id="trace-19764"></a>
<a id="trace-19780"></a>
<a id="trace-19782"></a>
<a id="trace-19794"></a>
<a id="trace-19796"></a>
<a id="trace-19873"></a>
<a id="trace-19875"></a>
<a id="trace-19888"></a>
<a id="trace-19890"></a>
<a id="trace-19909"></a>
<a id="trace-19911"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19964"></a>
<a id="trace-19966"></a>
<a id="trace-19979"></a>
<a id="trace-19981"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
<a id="trace-20005"></a>
<a id="trace-20007"></a>
<a id="trace-20085"></a>
<a id="trace-20087"></a>
<a id="trace-20099"></a>
<a id="trace-20101"></a>
<a id="trace-20119"></a>
<a id="trace-20121"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20144"></a>
<a id="trace-20146"></a>
<a id="trace-20158"></a>
<a id="trace-20160"></a>
<a id="trace-20177"></a>
<a id="trace-20179"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20209"></a>
<a id="trace-20211"></a>
<a id="trace-20222"></a>
<a id="trace-20224"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20322"></a>
<a id="trace-20324"></a>
<a id="trace-20338"></a>
<a id="trace-20340"></a>
<a id="trace-20348"></a>
<a id="trace-20350"></a>
<a id="trace-20365"></a>
<a id="trace-20367"></a>
<a id="trace-20377"></a>
<a id="trace-20379"></a>
<a id="trace-20389"></a>
<a id="trace-20391"></a>
<a id="trace-20402"></a>
<a id="trace-20404"></a>
<a id="trace-20419"></a>
<a id="trace-20421"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20509"></a>
<a id="trace-20511"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20541"></a>
<a id="trace-20543"></a>
<a id="trace-20555"></a>
<a id="trace-20557"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20585"></a>
<a id="trace-20587"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20615"></a>
<a id="trace-20617"></a>
<a id="trace-20630"></a>
<a id="trace-20632"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20727"></a>
<a id="trace-20729"></a>
<a id="trace-20748"></a>
<a id="trace-20750"></a>
<a id="trace-20761"></a>
<a id="trace-20763"></a>
<a id="trace-20778"></a>
<a id="trace-20780"></a>
<a id="trace-20791"></a>
<a id="trace-20793"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20838"></a>
<a id="trace-20840"></a>
<a id="trace-20858"></a>
<a id="trace-20860"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20948"></a>
<a id="trace-20950"></a>
<a id="trace-20966"></a>
<a id="trace-20968"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-20994"></a>
<a id="trace-20996"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21024"></a>
<a id="trace-21026"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21061"></a>
<a id="trace-21063"></a>
<a id="trace-21136"></a>
<a id="trace-21138"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21182"></a>
<a id="trace-21184"></a>
<a id="trace-21194"></a>
<a id="trace-21196"></a>
<a id="trace-21210"></a>
<a id="trace-21212"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21234"></a>
<a id="trace-21236"></a>
<a id="trace-21244"></a>
<a id="trace-21246"></a>
<a id="trace-21261"></a>
<a id="trace-21263"></a>
<a id="trace-21271"></a>
<a id="trace-21273"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21358"></a>
<a id="trace-21360"></a>
<a id="trace-21383"></a>
<a id="trace-21385"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21419"></a>
<a id="trace-21421"></a>
<a id="trace-21442"></a>
<a id="trace-21444"></a>
<a id="trace-21457"></a>
<a id="trace-21459"></a>
<a id="trace-21468"></a>
<a id="trace-21470"></a>
<a id="trace-21483"></a>
<a id="trace-21485"></a>
<a id="trace-21495"></a>
<a id="trace-21497"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21585"></a>
<a id="trace-21587"></a>
<a id="trace-21602"></a>
<a id="trace-21604"></a>
<a id="trace-21613"></a>
<a id="trace-21615"></a>
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21641"></a>
<a id="trace-21643"></a>
<a id="trace-21654"></a>
<a id="trace-21656"></a>
<a id="trace-21667"></a>
<a id="trace-21669"></a>
<a id="trace-21686"></a>
<a id="trace-21688"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21769"></a>
<a id="trace-21771"></a>
<a id="trace-21782"></a>
<a id="trace-21784"></a>
<a id="trace-21801"></a>
<a id="trace-21803"></a>
<a id="trace-21809"></a>
<a id="trace-21811"></a>
<a id="trace-21825"></a>
<a id="trace-21827"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21854"></a>
<a id="trace-21856"></a>
<a id="trace-21865"></a>
<a id="trace-21867"></a>
<a id="trace-21883"></a>
<a id="trace-21885"></a>
<a id="trace-21897"></a>
<a id="trace-21899"></a>
<a id="trace-21979"></a>
<a id="trace-21981"></a>
<a id="trace-21991"></a>
<a id="trace-21993"></a>
<a id="trace-22015"></a>
<a id="trace-22017"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22055"></a>
<a id="trace-22057"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22091"></a>
<a id="trace-22093"></a>
<a id="trace-22222"></a>
<a id="trace-22224"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22583"></a>
<a id="trace-22585"></a>
<a id="trace-22613"></a>
<a id="trace-22615"></a>
<a id="trace-22630"></a>
<a id="trace-22632"></a>
<a id="trace-22649"></a>
<a id="trace-22651"></a>
<a id="trace-22662"></a>
<a id="trace-22664"></a>
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22768"></a>
<a id="trace-22770"></a>
<a id="trace-22784"></a>
<a id="trace-22786"></a>
<a id="trace-22805"></a>
<a id="trace-22807"></a>
<a id="trace-22815"></a>
<a id="trace-22817"></a>
<a id="trace-22833"></a>
<a id="trace-22835"></a>
<a id="trace-22847"></a>
<a id="trace-22849"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22904"></a>
<a id="trace-22906"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-22994"></a>
<a id="trace-22996"></a>
<a id="trace-23166"></a>
<a id="trace-23168"></a>
<a id="trace-23189"></a>
<a id="trace-23191"></a>
<a id="trace-23202"></a>
<a id="trace-23204"></a>
<a id="trace-23230"></a>
<a id="trace-23232"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23266"></a>
<a id="trace-23268"></a>
<a id="trace-23284"></a>
<a id="trace-23286"></a>
<a id="trace-23311"></a>
<a id="trace-23313"></a>
<a id="trace-23329"></a>
<a id="trace-23331"></a>
<a id="trace-23411"></a>
<a id="trace-23413"></a>
<a id="trace-23437"></a>
<a id="trace-23439"></a>
<a id="trace-23460"></a>
<a id="trace-23462"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23514"></a>
<a id="trace-23516"></a>
<a id="trace-23532"></a>
<a id="trace-23534"></a>
<a id="trace-23548"></a>
<a id="trace-23550"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23586"></a>
<a id="trace-23588"></a>
<a id="trace-23673"></a>
<a id="trace-23675"></a>
<a id="trace-23695"></a>
<a id="trace-23697"></a>
<a id="trace-23719"></a>
<a id="trace-23721"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23759"></a>
<a id="trace-23761"></a>
<a id="trace-23774"></a>
<a id="trace-23776"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23818"></a>
<a id="trace-23820"></a>
<a id="trace-23837"></a>
<a id="trace-23839"></a>
<a id="trace-23907"></a>
<a id="trace-23909"></a>
<a id="trace-23999"></a>
<a id="trace-24001"></a>
<a id="trace-24030"></a>
<a id="trace-24032"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24192"></a>
<a id="trace-24194"></a>
<a id="trace-24229"></a>
<a id="trace-24231"></a>
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24289"></a>
<a id="trace-24291"></a>
<a id="trace-24299"></a>
<a id="trace-24301"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24712"></a>
<a id="trace-24714"></a>
<a id="trace-24806"></a>
<a id="trace-24808"></a>
<a id="trace-24838"></a>
<a id="trace-24840"></a>
<a id="trace-24915"></a>
<a id="trace-24917"></a>
<a id="trace-24950"></a>
<a id="trace-24952"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25022"></a>
<a id="trace-25024"></a>
<a id="trace-25032"></a>
<a id="trace-25034"></a>
<a id="trace-25064"></a>
<a id="trace-25066"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25161"></a>
<a id="trace-25163"></a>
<a id="trace-25190"></a>
<a id="trace-25192"></a>
<a id="trace-25216"></a>
<a id="trace-25218"></a>
<a id="trace-25230"></a>
<a id="trace-25232"></a>
<a id="trace-25257"></a>
<a id="trace-25259"></a>
<a id="trace-25266"></a>
<a id="trace-25268"></a>
<a id="trace-25482"></a>
<a id="trace-25484"></a>
<a id="trace-25491"></a>
<a id="trace-25493"></a>
<a id="trace-25544"></a>
<a id="trace-25546"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25761"></a>
<a id="trace-25763"></a>
<a id="trace-25799"></a>
<a id="trace-25801"></a>
<a id="trace-25840"></a>
<a id="trace-25842"></a>
<a id="trace-25869"></a>
<a id="trace-25871"></a>
<a id="trace-25901"></a>
<a id="trace-25903"></a>
<a id="trace-25919"></a>
<a id="trace-25921"></a>
<a id="trace-25934"></a>
<a id="trace-25936"></a>
<a id="trace-25945"></a>
<a id="trace-25947"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-26042"></a>
<a id="trace-26044"></a>
<a id="trace-26060"></a>
<a id="trace-26062"></a>
<a id="trace-26084"></a>
<a id="trace-26086"></a>
<a id="trace-26096"></a>
<a id="trace-26098"></a>
<a id="trace-26122"></a>
<a id="trace-26124"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28741"></a>
<a id="trace-28743"></a>
<a id="trace-28758"></a>
<a id="trace-28760"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28799"></a>
<a id="trace-28801"></a>
<a id="trace-28888"></a>
<a id="trace-28890"></a>
<a id="trace-28904"></a>
<a id="trace-28906"></a>
<a id="trace-28923"></a>
<a id="trace-28925"></a>
<a id="trace-28934"></a>
<a id="trace-28936"></a>
<a id="trace-28954"></a>
<a id="trace-28956"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28982"></a>
<a id="trace-28984"></a>
<a id="trace-28997"></a>
<a id="trace-28999"></a>
<a id="trace-29092"></a>
<a id="trace-29094"></a>
<a id="trace-29105"></a>
<a id="trace-29107"></a>
<a id="trace-29191"></a>
<a id="trace-29193"></a>
<a id="trace-29203"></a>
<a id="trace-29205"></a>
<a id="trace-29228"></a>
<a id="trace-29230"></a>
<a id="trace-29244"></a>
<a id="trace-29246"></a>
<a id="trace-29266"></a>
<a id="trace-29268"></a>
<a id="trace-29280"></a>
<a id="trace-29282"></a>
<a id="trace-29302"></a>
<a id="trace-29304"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29330"></a>
<a id="trace-29332"></a>
<a id="trace-29341"></a>
<a id="trace-29343"></a>
<a id="trace-29422"></a>
<a id="trace-29424"></a>
<a id="trace-29437"></a>
<a id="trace-29439"></a>
<a id="trace-29460"></a>
<a id="trace-29462"></a>
<a id="trace-29477"></a>
<a id="trace-29479"></a>
<a id="trace-29506"></a>
<a id="trace-29508"></a>
<a id="trace-29519"></a>
<a id="trace-29521"></a>
<a id="trace-29543"></a>
<a id="trace-29545"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
<a id="trace-29879"></a>
<a id="trace-29881"></a>
<a id="trace-29897"></a>
<a id="trace-29899"></a>
<a id="trace-30339"></a>
<a id="trace-30341"></a>
<a id="trace-30367"></a>
<a id="trace-30369"></a>
<a id="trace-30416"></a>
<a id="trace-30418"></a>
<a id="trace-30786"></a>
<a id="trace-30788"></a>
<a id="trace-30826"></a>
<a id="trace-30828"></a>
<a id="trace-30895"></a>
<a id="trace-30897"></a>
<a id="trace-30926"></a>
<a id="trace-30928"></a>
<a id="trace-30952"></a>
<a id="trace-30954"></a>
<a id="trace-30991"></a>
<a id="trace-30993"></a>
<a id="trace-31006"></a>
<a id="trace-31008"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31112"></a>
<a id="trace-31114"></a>
<a id="trace-31138"></a>
<a id="trace-31140"></a>
<a id="trace-31567"></a>
<a id="trace-31569"></a>
<a id="trace-31600"></a>
<a id="trace-31602"></a>
<a id="trace-32439"></a>
<a id="trace-32441"></a>
<a id="trace-32481"></a>
<a id="trace-32483"></a>
<a id="trace-32879"></a>
<a id="trace-32881"></a>
<a id="trace-32935"></a>
<a id="trace-32937"></a>
<a id="trace-33338"></a>
<a id="trace-33340"></a>
<a id="trace-33433"></a>
<a id="trace-33435"></a>
<a id="trace-33848"></a>
<a id="trace-33850"></a>
<a id="trace-34243"></a>
<a id="trace-34245"></a>
<a id="trace-34644"></a>
<a id="trace-34646"></a>
<a id="trace-34704"></a>
<a id="trace-34706"></a>
<a id="trace-34732"></a>
<a id="trace-34734"></a>
<a id="trace-34763"></a>
<a id="trace-34765"></a>
<a id="trace-34800"></a>
<a id="trace-34802"></a>
<a id="trace-34827"></a>
<a id="trace-34829"></a>
<a id="trace-34848"></a>
<a id="trace-34850"></a>
<a id="trace-34931"></a>
<a id="trace-34933"></a>
<a id="trace-34951"></a>
<a id="trace-34953"></a>
<a id="trace-34980"></a>
<a id="trace-34982"></a>
<a id="trace-35370"></a>
<a id="trace-35372"></a>
<a id="trace-35414"></a>
<a id="trace-35416"></a>
<a id="trace-35453"></a>
<a id="trace-35455"></a>
<a id="trace-35515"></a>
<a id="trace-35517"></a>
<a id="trace-35570"></a>
<a id="trace-35572"></a>
<a id="trace-35618"></a>
<a id="trace-35620"></a>
<a id="trace-35657"></a>
<a id="trace-35659"></a>
<a id="trace-35744"></a>
<a id="trace-35746"></a>
<a id="trace-35770"></a>
<a id="trace-35772"></a>
<a id="trace-35799"></a>
<a id="trace-35801"></a>
<a id="trace-35811"></a>
<a id="trace-35813"></a>
<a id="trace-35830"></a>
<a id="trace-35832"></a>
<a id="trace-35849"></a>
<a id="trace-35851"></a>
<a id="trace-35867"></a>
<a id="trace-35869"></a>
<a id="trace-35880"></a>
<a id="trace-35882"></a>
<a id="trace-35908"></a>
<a id="trace-35910"></a>
<a id="trace-36052"></a>
<a id="trace-36054"></a>
<a id="trace-36136"></a>
<a id="trace-36138"></a>
<a id="trace-36153"></a>
<a id="trace-36155"></a>
<a id="trace-36181"></a>
<a id="trace-36183"></a>
<a id="trace-36194"></a>
<a id="trace-36196"></a>
<a id="trace-36221"></a>
<a id="trace-36223"></a>
<a id="trace-36233"></a>
<a id="trace-36235"></a>
<a id="trace-36254"></a>
<a id="trace-36256"></a>
<a id="trace-36270"></a>
<a id="trace-36272"></a>
<a id="trace-36292"></a>
<a id="trace-36294"></a>
<a id="trace-36307"></a>
<a id="trace-36309"></a>
<a id="trace-36379"></a>
<a id="trace-36381"></a>
<a id="trace-36396"></a>
<a id="trace-36398"></a>
<a id="trace-36415"></a>
<a id="trace-36417"></a>
<a id="trace-36430"></a>
<a id="trace-36432"></a>
<a id="trace-36451"></a>
<a id="trace-36453"></a>
<a id="trace-36461"></a>
<a id="trace-36463"></a>
<a id="trace-36478"></a>
<a id="trace-36480"></a>
<a id="trace-36489"></a>
<a id="trace-36491"></a>
<a id="trace-36502"></a>
<a id="trace-36504"></a>
<a id="trace-36515"></a>
<a id="trace-36517"></a>
<a id="trace-36582"></a>
<a id="trace-36584"></a>
<a id="trace-36594"></a>
<a id="trace-36596"></a>
<a id="trace-36724"></a>
<a id="trace-36726"></a>
<a id="trace-36741"></a>
<a id="trace-36743"></a>
<a id="trace-36760"></a>
<a id="trace-36762"></a>
<a id="trace-36784"></a>
<a id="trace-36786"></a>
<a id="trace-36807"></a>
<a id="trace-36809"></a>
<a id="trace-36820"></a>
<a id="trace-36822"></a>
<a id="trace-36834"></a>
<a id="trace-36836"></a>
<a id="trace-36854"></a>
<a id="trace-36856"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39486361591713726, 'next_transition': 729}.
<a id="trace-1101"></a>
<a id="trace-1133"></a>
<a id="trace-1162"></a>
<a id="trace-1164"></a>
<a id="trace-1184"></a>
<a id="trace-1186"></a>
<a id="trace-1204"></a>
<a id="trace-1206"></a>
<a id="trace-1295"></a>
<a id="trace-1297"></a>
<a id="trace-1317"></a>
<a id="trace-1319"></a>
- 7.70s–10.70s (×12), actor 5, squad 0 (trace 1101): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 888. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44250033780141385, 'next_transition': 1133}.
<a id="trace-1330"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1330): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1216. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1521}.
<a id="trace-1331"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1331): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1216. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1521}.
<a id="trace-1521"></a>
<a id="trace-1523"></a>
<a id="trace-1663"></a>
<a id="trace-1665"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2064"></a>
<a id="trace-2066"></a>
<a id="trace-2155"></a>
<a id="trace-2157"></a>
<a id="trace-2179"></a>
<a id="trace-2181"></a>
<a id="trace-2211"></a>
<a id="trace-2213"></a>
<a id="trace-2242"></a>
<a id="trace-2244"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2289"></a>
<a id="trace-2291"></a>
- 11.20s–17.75s (×20), actor 5, squad 0 (trace 1521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8933631209655148, 'next_transition': 1663}.
<a id="trace-171"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 171): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1703}.
<a id="trace-1634"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1634): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1634. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1703}.
<a id="trace-1635"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1635): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1635. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1703}.
<a id="trace-1703"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1703): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1224. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.80105386898974, 'next_transition': 2908}.
<a id="trace-1704"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1704): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1224. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.80105386898974, 'next_transition': 2908}.
<a id="trace-2329"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2329): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2077. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 2623}.
<a id="trace-2330"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2330): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2077. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 2623}.
<a id="trace-2331"></a>
<a id="trace-2623"></a>
- 18.25s–18.50s (×2), actor 0, squad 0 (trace 2331): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2077. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 2623}.
<a id="trace-2908"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2908): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2085. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3310}.
<a id="trace-2909"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2909): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2085. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3310}.
<a id="trace-2910"></a>
<a id="trace-3310"></a>
<a id="trace-3716"></a>
- 18.60s–19.15s (×3), actor 8, squad 1 (trace 2910): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2085. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3310}.
<a id="trace-3299"></a>
<a id="trace-3301"></a>
<a id="trace-4119"></a>
<a id="trace-4121"></a>
<a id="trace-4176"></a>
<a id="trace-4178"></a>
<a id="trace-4301"></a>
<a id="trace-4303"></a>
<a id="trace-4353"></a>
<a id="trace-4355"></a>
<a id="trace-4479"></a>
<a id="trace-4481"></a>
- 18.75s–21.75s (×12), actor 5, squad 0 (trace 3299): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2082. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24520770707844194, 'next_transition': 4119}.
<a id="trace-4517"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 4517): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4207. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7558610256453979, 'next_transition': 4965}.
<a id="trace-4565"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 4565): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 4215. Next observer evidence: {'until': 38, 'shots': 1, 'casualties': 0, 'mean_displacement': 13.432119354307329, 'next_transition': 6849}.
<a id="trace-4566"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 4566): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 4215. Next observer evidence: {'until': 38, 'shots': 1, 'casualties': 0, 'mean_displacement': 13.432119354307329, 'next_transition': 6849}.
<a id="trace-4965"></a>
<a id="trace-4967"></a>
<a id="trace-5020"></a>
<a id="trace-5022"></a>
<a id="trace-5051"></a>
<a id="trace-5053"></a>
<a id="trace-5148"></a>
<a id="trace-5150"></a>
- 23.25s–25.25s (×8), actor 5, squad 0 (trace 4965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4212. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4492675613746993, 'next_transition': 5020}.
<a id="trace-5164"></a>
- 25.40s–25.40s (×1), actor 0, squad 0 (trace 5164): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5064. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13544980490762282, 'next_transition': 5445}.
<a id="trace-5445"></a>
<a id="trace-5447"></a>
- 25.75s–25.75s (×2), actor 5, squad 0 (trace 5445): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5069. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4191669165614274, 'next_transition': 435}.
<a id="trace-435"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 435): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5502"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5502): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5502. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5506503356897443, 'next_transition': 5553}.
<a id="trace-5503"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5503): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5503. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5506503356897443, 'next_transition': 5553}.
<a id="trace-5553"></a>
<a id="trace-5555"></a>
<a id="trace-5630"></a>
<a id="trace-5632"></a>
- 27.25s–28.25s (×4), actor 5, squad 0 (trace 5553): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5503. Next observer evidence: {'until': 28.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8537218990907066, 'next_transition': 5630}.
<a id="trace-5646"></a>
- 28.35s–28.35s (×1), actor 0, squad 0 (trace 5646): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5064. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5494547615692364, 'next_transition': 6006}.
<a id="trace-6006"></a>
<a id="trace-6008"></a>
<a id="trace-6100"></a>
<a id="trace-6102"></a>
<a id="trace-6126"></a>
<a id="trace-6128"></a>
<a id="trace-6181"></a>
<a id="trace-6183"></a>
<a id="trace-6208"></a>
<a id="trace-6210"></a>
<a id="trace-6249"></a>
<a id="trace-6251"></a>
- 29.75s–33.25s (×12), actor 5, squad 0 (trace 6006): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5503. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7174148261084904, 'next_transition': 6100}.
<a id="trace-6274"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 6274): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 6022. Next observer evidence: None.
<a id="trace-6275"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 6275): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 6022. Next observer evidence: None.
<a id="trace-6575"></a>
<a id="trace-6577"></a>
<a id="trace-6600"></a>
<a id="trace-6602"></a>
<a id="trace-6633"></a>
<a id="trace-6635"></a>
<a id="trace-6730"></a>
<a id="trace-6732"></a>
<a id="trace-6750"></a>
<a id="trace-6752"></a>
<a id="trace-6808"></a>
<a id="trace-6826"></a>
<a id="trace-7017"></a>
<a id="trace-7035"></a>
<a id="trace-7080"></a>
<a id="trace-7082"></a>
<a id="trace-7180"></a>
<a id="trace-7182"></a>
<a id="trace-7214"></a>
<a id="trace-7216"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7269"></a>
<a id="trace-7271"></a>
<a id="trace-7310"></a>
<a id="trace-7312"></a>
<a id="trace-7347"></a>
<a id="trace-7349"></a>
<a id="trace-7388"></a>
<a id="trace-7390"></a>
<a id="trace-7418"></a>
<a id="trace-7420"></a>
- 33.75s–43.75s (×32), actor 5, squad 0 (trace 6575): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6026. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4885775487910026, 'next_transition': 6600}.
<a id="trace-6849"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 6849): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 6661. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.161109755459165, 'next_transition': 7117}.
<a id="trace-6850"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 6850): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 6661. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.161109755459165, 'next_transition': 7117}.
<a id="trace-7117"></a>
- 40.00s–40.00s (×1), actor 8, squad 1 (trace 7117): NeedSupport. Knowledge: actor memory at 40.00s, trace 7101. Next observer evidence: {'until': 57.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 23.151478199932818, 'next_transition': 8433}.
<a id="trace-7584"></a>
- 45.60s–45.60s (×1), actor 1, squad 0 (trace 7584): support established: element delivered fire on threat area. Knowledge: actor memory at 45.00s, trace 7497. Next observer evidence: None.
<a id="trace-7585"></a>
- 45.60s–45.60s (×1), actor 1, squad 0 (trace 7585): Fixing. Knowledge: actor memory at 45.00s, trace 7497. Next observer evidence: None.
<a id="trace-7596"></a>
<a id="trace-7598"></a>
<a id="trace-7625"></a>
<a id="trace-7627"></a>
<a id="trace-7643"></a>
<a id="trace-7645"></a>
- 45.75s–46.75s (×6), actor 5, squad 0 (trace 7596): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7501. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7624849870539385, 'next_transition': 7625}.
<a id="trace-7660"></a>
- 47.15s–47.15s (×1), actor 1, squad 0 (trace 7660): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 7497. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900023775196176, 'next_transition': 7773}.
<a id="trace-7661"></a>
- 47.15s–47.15s (×1), actor 1, squad 0 (trace 7661): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 7497. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900023775196176, 'next_transition': 7773}.
<a id="trace-7773"></a>
<a id="trace-7775"></a>
<a id="trace-7795"></a>
<a id="trace-7797"></a>
<a id="trace-7894"></a>
<a id="trace-7896"></a>
<a id="trace-7918"></a>
<a id="trace-7920"></a>
<a id="trace-7949"></a>
<a id="trace-7951"></a>
<a id="trace-8054"></a>
<a id="trace-8056"></a>
<a id="trace-8073"></a>
<a id="trace-8075"></a>
<a id="trace-8096"></a>
<a id="trace-8098"></a>
<a id="trace-8135"></a>
<a id="trace-8137"></a>
<a id="trace-8157"></a>
<a id="trace-8159"></a>
<a id="trace-8178"></a>
<a id="trace-8180"></a>
<a id="trace-8199"></a>
<a id="trace-8201"></a>
<a id="trace-8227"></a>
<a id="trace-8229"></a>
<a id="trace-8245"></a>
<a id="trace-8247"></a>
<a id="trace-8348"></a>
<a id="trace-8350"></a>
- 47.25s–55.75s (×30), actor 5, squad 0 (trace 7773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7501. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799881793170802, 'next_transition': 7795}.
<a id="trace-8360"></a>
- 55.85s–55.85s (×1), actor 1, squad 0 (trace 8360): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 55.00s, trace 8259. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5057083962578148, 'next_transition': 8375}.
<a id="trace-8375"></a>
<a id="trace-8377"></a>
<a id="trace-8399"></a>
<a id="trace-8401"></a>
<a id="trace-8417"></a>
<a id="trace-8419"></a>
<a id="trace-8491"></a>
<a id="trace-8493"></a>
<a id="trace-8513"></a>
<a id="trace-8515"></a>
<a id="trace-8539"></a>
<a id="trace-8541"></a>
<a id="trace-8569"></a>
<a id="trace-8571"></a>
<a id="trace-8591"></a>
<a id="trace-8593"></a>
<a id="trace-8690"></a>
<a id="trace-8692"></a>
<a id="trace-8715"></a>
<a id="trace-8717"></a>
<a id="trace-8734"></a>
<a id="trace-8736"></a>
<a id="trace-8748"></a>
<a id="trace-8750"></a>
<a id="trace-8776"></a>
<a id="trace-8778"></a>
<a id="trace-8788"></a>
<a id="trace-8790"></a>
<a id="trace-8810"></a>
<a id="trace-8812"></a>
- 56.25s–63.25s (×30), actor 5, squad 0 (trace 8375): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8263. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5057114296255272, 'next_transition': 8399}.
<a id="trace-8433"></a>
- 57.70s–57.70s (×1), actor 8, squad 1 (trace 8433): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 8266. Next observer evidence: {'until': 69.6, 'shots': 12, 'casualties': 0, 'mean_displacement': 7.499999691416659, 'next_transition': 9333}.
<a id="trace-8434"></a>
- 57.70s–57.70s (×1), actor 8, squad 1 (trace 8434): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 8266. Next observer evidence: {'until': 69.6, 'shots': 12, 'casualties': 0, 'mean_displacement': 7.499999691416659, 'next_transition': 9333}.
<a id="trace-8823"></a>
- 63.40s–63.40s (×1), actor 1, squad 0 (trace 8823): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 8606. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000075764987216, 'next_transition': 8994}.
<a id="trace-8824"></a>
- 63.40s–63.40s (×1), actor 1, squad 0 (trace 8824): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 8606. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000075764987216, 'next_transition': 8994}.
<a id="trace-8994"></a>
<a id="trace-8996"></a>
<a id="trace-9026"></a>
<a id="trace-9028"></a>
<a id="trace-9053"></a>
<a id="trace-9055"></a>
<a id="trace-9141"></a>
<a id="trace-9143"></a>
<a id="trace-9163"></a>
<a id="trace-9165"></a>
<a id="trace-9230"></a>
<a id="trace-9232"></a>
<a id="trace-9242"></a>
<a id="trace-9244"></a>
<a id="trace-9312"></a>
<a id="trace-9314"></a>
<a id="trace-9491"></a>
<a id="trace-9493"></a>
<a id="trace-9579"></a>
<a id="trace-9581"></a>
<a id="trace-9606"></a>
<a id="trace-9608"></a>
<a id="trace-9640"></a>
<a id="trace-9642"></a>
<a id="trace-9694"></a>
<a id="trace-9696"></a>
<a id="trace-9750"></a>
<a id="trace-9752"></a>
<a id="trace-9770"></a>
<a id="trace-9772"></a>
<a id="trace-9791"></a>
<a id="trace-9793"></a>
<a id="trace-9815"></a>
<a id="trace-9817"></a>
<a id="trace-9897"></a>
<a id="trace-9899"></a>
<a id="trace-9923"></a>
<a id="trace-9925"></a>
<a id="trace-9952"></a>
<a id="trace-9954"></a>
<a id="trace-9972"></a>
<a id="trace-9974"></a>
- 63.75s–76.75s (×42), actor 5, squad 0 (trace 8994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8610. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3084753482023389, 'next_transition': 9026}.
<a id="trace-9333"></a>
- 69.70s–69.70s (×1), actor 8, squad 1 (trace 9333): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 9077. Next observer evidence: {'until': 81.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 21.57362277558916, 'next_transition': 1075}.
<a id="trace-9334"></a>
- 69.70s–69.70s (×1), actor 8, squad 1 (trace 9334): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 9077. Next observer evidence: {'until': 81.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 21.57362277558916, 'next_transition': 1075}.
<a id="trace-9994"></a>
- 77.05s–77.05s (×1), actor 1, squad 0 (trace 9994): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 9824. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480721286797405, 'next_transition': 10110}.
<a id="trace-9995"></a>
- 77.05s–77.05s (×1), actor 1, squad 0 (trace 9995): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 9824. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480721286797405, 'next_transition': 10110}.
<a id="trace-10110"></a>
<a id="trace-10112"></a>
<a id="trace-10134"></a>
<a id="trace-10136"></a>
<a id="trace-10207"></a>
<a id="trace-10209"></a>
<a id="trace-10344"></a>
<a id="trace-10346"></a>
<a id="trace-10392"></a>
<a id="trace-10394"></a>
<a id="trace-10436"></a>
<a id="trace-10438"></a>
<a id="trace-10456"></a>
<a id="trace-10458"></a>
<a id="trace-10479"></a>
<a id="trace-10481"></a>
<a id="trace-10506"></a>
<a id="trace-10508"></a>
<a id="trace-10530"></a>
<a id="trace-10532"></a>
<a id="trace-10552"></a>
<a id="trace-10554"></a>
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10764"></a>
<a id="trace-10766"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10833"></a>
<a id="trace-10835"></a>
<a id="trace-10869"></a>
<a id="trace-10871"></a>
<a id="trace-10882"></a>
<a id="trace-10884"></a>
<a id="trace-10968"></a>
<a id="trace-10970"></a>
<a id="trace-10987"></a>
<a id="trace-10989"></a>
<a id="trace-11002"></a>
<a id="trace-11004"></a>
- 77.25s–91.25s (×40), actor 5, squad 0 (trace 10110): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9828. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19579077311079013, 'next_transition': 10134}.
<a id="trace-1075"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1075): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10419"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 10419): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.80s, trace 10419. Next observer evidence: {'until': 84.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9263660411656938, 'next_transition': 10564}.
<a id="trace-10564"></a>
- 84.85s–84.85s (×1), actor 8, squad 1 (trace 10564): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 10274. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11477}.
<a id="trace-10565"></a>
- 84.85s–84.85s (×1), actor 8, squad 1 (trace 10565): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 10274. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11477}.
<a id="trace-11014"></a>
- 91.60s–91.60s (×1), actor 1, squad 0 (trace 11014): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 10889. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11174}.
<a id="trace-11015"></a>
- 91.60s–91.60s (×1), actor 1, squad 0 (trace 11015): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 10889. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11174}.
<a id="trace-11174"></a>
<a id="trace-11176"></a>
<a id="trace-11197"></a>
<a id="trace-11199"></a>
<a id="trace-11222"></a>
<a id="trace-11224"></a>
<a id="trace-11254"></a>
<a id="trace-11256"></a>
<a id="trace-11267"></a>
<a id="trace-11269"></a>
<a id="trace-11313"></a>
<a id="trace-11315"></a>
- 91.75s–94.75s (×12), actor 5, squad 0 (trace 11174): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 10893. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11197}.
<a id="trace-1170"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 1170): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11405"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 11405): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.65s, trace 11405. Next observer evidence: None.
<a id="trace-11410"></a>
<a id="trace-11412"></a>
<a id="trace-11428"></a>
<a id="trace-11430"></a>
<a id="trace-11443"></a>
<a id="trace-11445"></a>
<a id="trace-11460"></a>
<a id="trace-11462"></a>
<a id="trace-11470"></a>
<a id="trace-11472"></a>
<a id="trace-11494"></a>
<a id="trace-11496"></a>
<a id="trace-11514"></a>
<a id="trace-11516"></a>
<a id="trace-11539"></a>
<a id="trace-11541"></a>
<a id="trace-11666"></a>
<a id="trace-11668"></a>
<a id="trace-11679"></a>
<a id="trace-11681"></a>
<a id="trace-11696"></a>
<a id="trace-11698"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11765"></a>
<a id="trace-11767"></a>
- 95.75s–104.25s (×28), actor 5, squad 0 (trace 11410): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 11405. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11428}.
<a id="trace-11477"></a>
- 97.75s–97.75s (×1), actor 8, squad 1 (trace 11477): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 11329. Next observer evidence: {'until': 109.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1261}.
<a id="trace-11860"></a>
- 105.45s–105.45s (×1), actor 1, squad 0 (trace 11860): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 105.00s, trace 11781. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35999924902415986, 'next_transition': 11891}.
<a id="trace-11891"></a>
<a id="trace-11893"></a>
- 106.25s–106.25s (×2), actor 5, squad 0 (trace 11891): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11785. Next observer evidence: {'until': 106.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000682645312674, 'next_transition': 11902}.
<a id="trace-11902"></a>
- 106.45s–106.45s (×1), actor 1, squad 0 (trace 11902): MoveTactically. Knowledge: actor memory at 105.00s, trace 11781. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599992490241603, 'next_transition': 11954}.
<a id="trace-11903"></a>
- 106.45s–106.45s (×1), actor 1, squad 0 (trace 11903): received platoon directive. Knowledge: actor memory at 105.00s, trace 11781. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599992490241603, 'next_transition': 11954}.
<a id="trace-11954"></a>
<a id="trace-11956"></a>
- 107.25s–107.25s (×2), actor 5, squad 0 (trace 11954): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11785. Next observer evidence: {'until': 107.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000682645312626, 'next_transition': 11963}.
<a id="trace-11963"></a>
- 107.45s–107.45s (×1), actor 1, squad 0 (trace 11963): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 11781. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999279807919335, 'next_transition': 12137}.
<a id="trace-12137"></a>
<a id="trace-12139"></a>
<a id="trace-12178"></a>
<a id="trace-12180"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12255"></a>
<a id="trace-12257"></a>
<a id="trace-12362"></a>
<a id="trace-12364"></a>
<a id="trace-12377"></a>
<a id="trace-12379"></a>
<a id="trace-12392"></a>
<a id="trace-12394"></a>
<a id="trace-12425"></a>
<a id="trace-12427"></a>
<a id="trace-12451"></a>
<a id="trace-12453"></a>
<a id="trace-12466"></a>
<a id="trace-12468"></a>
<a id="trace-12487"></a>
<a id="trace-12489"></a>
<a id="trace-12582"></a>
<a id="trace-12584"></a>
<a id="trace-12595"></a>
<a id="trace-12597"></a>
<a id="trace-12617"></a>
<a id="trace-12619"></a>
<a id="trace-12661"></a>
<a id="trace-12663"></a>
<a id="trace-12674"></a>
<a id="trace-12676"></a>
<a id="trace-12695"></a>
<a id="trace-12697"></a>
- 107.75s–118.25s (×34), actor 5, squad 0 (trace 12137): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11785. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2925178968072358, 'next_transition': 12178}.
<a id="trace-1261"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (events line 1261): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 139.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1809}.
<a id="trace-12246"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 12246): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.505264 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 12246. Next observer evidence: {'until': 139.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1809}.
<a id="trace-12247"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 12247): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.505264 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 12247. Next observer evidence: {'until': 139.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1809}.
<a id="trace-12718"></a>
- 119.05s–119.05s (×1), actor 1, squad 0 (trace 12718): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 12508. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1943940480528327, 'next_transition': 12749}.
<a id="trace-12749"></a>
<a id="trace-12751"></a>
- 119.75s–119.75s (×2), actor 5, squad 0 (trace 12749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12512. Next observer evidence: {'until': 120, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06943168129425516, 'next_transition': 12786}.
<a id="trace-12786"></a>
- 120.05s–120.05s (×1), actor 1, squad 0 (trace 12786): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 12762. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12946}.
<a id="trace-12946"></a>
<a id="trace-12948"></a>
<a id="trace-12960"></a>
<a id="trace-12962"></a>
<a id="trace-12988"></a>
<a id="trace-12990"></a>
<a id="trace-13010"></a>
<a id="trace-13012"></a>
<a id="trace-13028"></a>
<a id="trace-13030"></a>
<a id="trace-13068"></a>
<a id="trace-13070"></a>
- 120.25s–123.25s (×12), actor 5, squad 0 (trace 12946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 12766. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12960}.
<a id="trace-1346"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (events line 1346): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32569704472252337, 'next_transition': 13084}.
<a id="trace-13075"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 13075): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577445 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 123.30s, trace 13075. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32569704472252337, 'next_transition': 13084}.
<a id="trace-13076"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 13076): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577445 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 123.30s, trace 13076. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32569704472252337, 'next_transition': 13084}.
<a id="trace-13084"></a>
<a id="trace-13086"></a>
<a id="trace-13105"></a>
<a id="trace-13107"></a>
<a id="trace-13120"></a>
<a id="trace-13122"></a>
<a id="trace-13217"></a>
<a id="trace-13219"></a>
<a id="trace-13243"></a>
<a id="trace-13245"></a>
<a id="trace-13260"></a>
<a id="trace-13262"></a>
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13326"></a>
<a id="trace-13328"></a>
<a id="trace-13352"></a>
<a id="trace-13354"></a>
- 123.75s–129.30s (×20), actor 5, squad 0 (trace 13084): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.30s, trace 13076. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4885829947485328, 'next_transition': 13105}.
<a id="trace-13360"></a>
- 129.45s–129.45s (×1), actor 1, squad 0 (trace 13360): received platoon directive. Knowledge: actor memory at 125.00s, trace 13134. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4896083668257816, 'next_transition': 13475}.
<a id="trace-13475"></a>
<a id="trace-13477"></a>
<a id="trace-13563"></a>
<a id="trace-13565"></a>
<a id="trace-13601"></a>
<a id="trace-13603"></a>
<a id="trace-13613"></a>
<a id="trace-13615"></a>
<a id="trace-13639"></a>
<a id="trace-13641"></a>
<a id="trace-13679"></a>
<a id="trace-13681"></a>
<a id="trace-13688"></a>
<a id="trace-13690"></a>
- 129.80s–133.80s (×14), actor 5, squad 0 (trace 13475): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 13138. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3689855086979981, 'next_transition': 13563}.
<a id="trace-13727"></a>
- 134.70s–134.70s (×1), actor 1, squad 0 (trace 13727): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 13484. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13733}.
<a id="trace-13733"></a>
<a id="trace-13735"></a>
- 134.80s–134.80s (×2), actor 5, squad 0 (trace 13733): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 13488. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13807}.
<a id="trace-13807"></a>
- 135.25s–135.25s (×1), actor 1, squad 0 (trace 13807): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 13741. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13988}.
<a id="trace-13988"></a>
<a id="trace-13990"></a>
<a id="trace-14025"></a>
<a id="trace-14027"></a>
<a id="trace-14044"></a>
<a id="trace-14046"></a>
<a id="trace-14086"></a>
<a id="trace-14088"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14124"></a>
<a id="trace-14126"></a>
<a id="trace-14149"></a>
<a id="trace-14151"></a>
<a id="trace-14161"></a>
<a id="trace-14163"></a>
<a id="trace-14244"></a>
<a id="trace-14246"></a>
<a id="trace-14264"></a>
<a id="trace-14266"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
<a id="trace-14303"></a>
<a id="trace-14305"></a>
<a id="trace-14327"></a>
<a id="trace-14329"></a>
<a id="trace-14362"></a>
<a id="trace-14364"></a>
<a id="trace-14379"></a>
<a id="trace-14381"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14504"></a>
<a id="trace-14506"></a>
- 135.80s–145.30s (×34), actor 5, squad 0 (trace 13988): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 13745. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11249479806567393, 'next_transition': 14025}.
<a id="trace-14514"></a>
- 145.45s–145.45s (×1), actor 1, squad 0 (trace 14514): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 14434. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6191857984638663, 'next_transition': 14547}.
<a id="trace-14547"></a>
- 146.20s–146.20s (×1), actor 1, squad 0 (trace 14547): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 14434. Next observer evidence: None.
<a id="trace-14644"></a>
<a id="trace-14646"></a>
<a id="trace-14662"></a>
<a id="trace-14664"></a>
<a id="trace-14684"></a>
<a id="trace-14686"></a>
<a id="trace-14727"></a>
<a id="trace-14729"></a>
<a id="trace-14744"></a>
<a id="trace-14746"></a>
<a id="trace-14784"></a>
<a id="trace-14786"></a>
<a id="trace-14862"></a>
<a id="trace-14864"></a>
<a id="trace-14874"></a>
<a id="trace-14876"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-14958"></a>
<a id="trace-14960"></a>
<a id="trace-14974"></a>
<a id="trace-14976"></a>
<a id="trace-14996"></a>
<a id="trace-14998"></a>
<a id="trace-15012"></a>
<a id="trace-15014"></a>
<a id="trace-15095"></a>
<a id="trace-15097"></a>
<a id="trace-15114"></a>
<a id="trace-15116"></a>
<a id="trace-15140"></a>
<a id="trace-15142"></a>
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15174"></a>
<a id="trace-15176"></a>
- 146.30s–157.30s (×38), actor 5, squad 0 (trace 14644): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 14438. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.558534015547191, 'next_transition': 14662}.
<a id="trace-15194"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 15194): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 15025. Next observer evidence: {'until': 158.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.06479501429547678, 'next_transition': 15408}.
<a id="trace-15408"></a>
<a id="trace-15410"></a>
<a id="trace-15426"></a>
<a id="trace-15428"></a>
<a id="trace-15451"></a>
<a id="trace-15453"></a>
<a id="trace-15466"></a>
<a id="trace-15468"></a>
<a id="trace-15542"></a>
<a id="trace-15544"></a>
<a id="trace-15558"></a>
<a id="trace-15560"></a>
<a id="trace-15579"></a>
<a id="trace-15581"></a>
<a id="trace-15611"></a>
<a id="trace-15613"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
<a id="trace-15643"></a>
<a id="trace-15645"></a>
<a id="trace-15677"></a>
<a id="trace-15679"></a>
- 158.30s–164.30s (×22), actor 5, squad 0 (trace 15408): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15029. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.048594719205833914, 'next_transition': 15426}.
<a id="trace-15700"></a>
- 164.90s–164.90s (×1), actor 1, squad 0 (trace 15700): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 15474. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29340336372226294, 'next_transition': 15908}.
<a id="trace-15908"></a>
<a id="trace-15910"></a>
<a id="trace-15932"></a>
<a id="trace-15934"></a>
<a id="trace-15987"></a>
<a id="trace-15989"></a>
<a id="trace-16006"></a>
<a id="trace-16008"></a>
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16090"></a>
<a id="trace-16092"></a>
<a id="trace-16173"></a>
<a id="trace-16175"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
<a id="trace-16226"></a>
<a id="trace-16228"></a>
- 165.30s–171.80s (×20), actor 5, squad 0 (trace 15908): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 15842. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44189478048990133, 'next_transition': 15932}.
<a id="trace-16235"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 16235): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 16099. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399997282815502, 'next_transition': 16608}.
<a id="trace-16236"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 16236): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 16099. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399997282815502, 'next_transition': 16608}.
<a id="trace-16608"></a>
<a id="trace-16610"></a>
<a id="trace-16633"></a>
<a id="trace-16635"></a>
<a id="trace-16665"></a>
<a id="trace-16667"></a>
- 172.30s–173.30s (×6), actor 5, squad 0 (trace 16608): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 16103. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8048771039311475, 'next_transition': 16633}.
<a id="trace-16687"></a>
- 173.85s–173.85s (×1), actor 1, squad 0 (trace 16687): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 16099. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9953001692527987, 'next_transition': 17140}.
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17179"></a>
<a id="trace-17181"></a>
<a id="trace-17273"></a>
<a id="trace-17275"></a>
- 174.30s–175.30s (×6), actor 5, squad 0 (trace 17140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 16103. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.4161728797906594, 'next_transition': 17179}.
<a id="trace-17288"></a>
- 175.50s–175.50s (×1), actor 1, squad 0 (trace 17288): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9441732007365479, 'next_transition': 17302}.
<a id="trace-17290"></a>
- 175.50s–175.50s (×1), actor 1, squad 0 (trace 17290): NeedSupport. Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9441732007365479, 'next_transition': 17302}.
<a id="trace-17302"></a>
<a id="trace-17304"></a>
- 175.80s–175.80s (×2), actor 5, squad 0 (trace 17302): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17192. Next observer evidence: {'until': 176, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47559689842205577, 'next_transition': 17321}.
<a id="trace-17321"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 17321): Reorganise: completed/failed drill. Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47528896847031726, 'next_transition': 17733}.
<a id="trace-17326"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 17326): ReactToContact: cover and return fire. Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47528896847031726, 'next_transition': 17733}.
<a id="trace-17327"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 17327): Reorganise complete: known contact. Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47528896847031726, 'next_transition': 17733}.
<a id="trace-17733"></a>
<a id="trace-17735"></a>
<a id="trace-17767"></a>
<a id="trace-17769"></a>
<a id="trace-17824"></a>
<a id="trace-17826"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
- 176.30s–178.30s (×8), actor 5, squad 0 (trace 17733): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17192. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0823754230103, 'next_transition': 17767}.
<a id="trace-1808"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 1808): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1233706539882897, 'next_transition': 17902}.
<a id="trace-1809"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (events line 1809): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 208.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2235}.
<a id="trace-17865"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 17865): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=16.097633 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 17865. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1233706539882897, 'next_transition': 17902}.
<a id="trace-17866"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 17866): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=16.097633 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 17866. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1233706539882897, 'next_transition': 17902}.
<a id="trace-17867"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (trace 17867): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 17867. Next observer evidence: {'until': 208.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2235}.
<a id="trace-17902"></a>
<a id="trace-17904"></a>
- 179.30s–179.30s (×2), actor 5, squad 0 (trace 17902): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 17867. Next observer evidence: {'until': 179.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0699395192442254, 'next_transition': 17920}.
<a id="trace-17920"></a>
- 179.75s–179.75s (×1), actor 1, squad 0 (trace 17920): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 17189. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5046949247006498, 'next_transition': 17924}.
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-18017"></a>
<a id="trace-18019"></a>
<a id="trace-18042"></a>
<a id="trace-18044"></a>
<a id="trace-18071"></a>
<a id="trace-18073"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18113"></a>
<a id="trace-18115"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18149"></a>
<a id="trace-18151"></a>
- 179.80s–183.30s (×16), actor 5, squad 0 (trace 17924): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 17867. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9140136765110736, 'next_transition': 18017}.
<a id="trace-18161"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 18161): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 180.00s, trace 17936. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03144000000000021, 'next_transition': 18855}.
<a id="trace-18503"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 18503): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 180.00s, trace 17936. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03144000000000021, 'next_transition': 18855}.
<a id="trace-18504"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 18504): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 180.00s, trace 17936. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03144000000000021, 'next_transition': 18855}.
<a id="trace-18838"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 18838): Assaulting. Knowledge: actor memory at 180.00s, trace 17936. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03144000000000021, 'next_transition': 18855}.
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18876"></a>
<a id="trace-18878"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18992"></a>
<a id="trace-18994"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19035"></a>
<a id="trace-19037"></a>
<a id="trace-19051"></a>
<a id="trace-19053"></a>
<a id="trace-19073"></a>
<a id="trace-19075"></a>
<a id="trace-19100"></a>
<a id="trace-19102"></a>
<a id="trace-19115"></a>
<a id="trace-19117"></a>
<a id="trace-19139"></a>
<a id="trace-19141"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
- 183.80s–189.80s (×24), actor 5, squad 0 (trace 18855): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 17939. Next observer evidence: {'until': 184.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08481833333333337, 'next_transition': 18876}.
<a id="trace-19167"></a>
- 189.85s–189.85s (×1), actor 1, squad 0 (trace 19167): support established: element delivered fire on threat area. Knowledge: actor memory at 185.00s, trace 18921. Next observer evidence: {'until': 190.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.15120097328463947, 'next_transition': 19295}.
<a id="trace-19168"></a>
- 189.85s–189.85s (×1), actor 1, squad 0 (trace 19168): support established: next buddy rush, at most five seconds. Knowledge: actor memory at 185.00s, trace 18921. Next observer evidence: {'until': 190.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.15120097328463947, 'next_transition': 19295}.
<a id="trace-19295"></a>
<a id="trace-19297"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19363"></a>
<a id="trace-19365"></a>
- 190.30s–191.80s (×8), actor 5, squad 0 (trace 19295): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 19225. Next observer evidence: {'until': 190.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.3580497170771509, 'next_transition': 19321}.
<a id="trace-19375"></a>
- 191.85s–191.85s (×1), actor 1, squad 0 (trace 19375): NeedSupport. Knowledge: actor memory at 190.00s, trace 19222. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875052516721008, 'next_transition': 19406}.
<a id="trace-19406"></a>
<a id="trace-19408"></a>
<a id="trace-19421"></a>
<a id="trace-19423"></a>
<a id="trace-19438"></a>
<a id="trace-19440"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19470"></a>
<a id="trace-19472"></a>
<a id="trace-19507"></a>
<a id="trace-19509"></a>
<a id="trace-19607"></a>
<a id="trace-19609"></a>
<a id="trace-19628"></a>
<a id="trace-19630"></a>
<a id="trace-19667"></a>
<a id="trace-19669"></a>
<a id="trace-19689"></a>
<a id="trace-19691"></a>
<a id="trace-19742"></a>
<a id="trace-19744"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19790"></a>
<a id="trace-19792"></a>
<a id="trace-19884"></a>
<a id="trace-19886"></a>
<a id="trace-19905"></a>
<a id="trace-19907"></a>
<a id="trace-19915"></a>
<a id="trace-19917"></a>
<a id="trace-19931"></a>
<a id="trace-19933"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19975"></a>
<a id="trace-19977"></a>
<a id="trace-20001"></a>
<a id="trace-20003"></a>
<a id="trace-20081"></a>
<a id="trace-20083"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20115"></a>
<a id="trace-20117"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20154"></a>
<a id="trace-20156"></a>
<a id="trace-20173"></a>
<a id="trace-20175"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20334"></a>
<a id="trace-20336"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20361"></a>
<a id="trace-20363"></a>
<a id="trace-20373"></a>
<a id="trace-20375"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20505"></a>
<a id="trace-20507"></a>
<a id="trace-20551"></a>
<a id="trace-20553"></a>
<a id="trace-20567"></a>
<a id="trace-20569"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20602"></a>
<a id="trace-20604"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20637"></a>
<a id="trace-20639"></a>
<a id="trace-20712"></a>
<a id="trace-20714"></a>
<a id="trace-20723"></a>
<a id="trace-20725"></a>
<a id="trace-20757"></a>
<a id="trace-20759"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20818"></a>
<a id="trace-20820"></a>
<a id="trace-20834"></a>
<a id="trace-20836"></a>
<a id="trace-20854"></a>
<a id="trace-20856"></a>
<a id="trace-20930"></a>
<a id="trace-20932"></a>
<a id="trace-20944"></a>
<a id="trace-20946"></a>
<a id="trace-20962"></a>
<a id="trace-20964"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21002"></a>
<a id="trace-21004"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
<a id="trace-21151"></a>
<a id="trace-21153"></a>
<a id="trace-21178"></a>
<a id="trace-21180"></a>
<a id="trace-21190"></a>
<a id="trace-21192"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21217"></a>
<a id="trace-21219"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21257"></a>
<a id="trace-21259"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21344"></a>
<a id="trace-21346"></a>
<a id="trace-21379"></a>
<a id="trace-21381"></a>
<a id="trace-21395"></a>
<a id="trace-21397"></a>
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21438"></a>
<a id="trace-21440"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21491"></a>
<a id="trace-21493"></a>
<a id="trace-21567"></a>
<a id="trace-21569"></a>
<a id="trace-21581"></a>
<a id="trace-21583"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21682"></a>
<a id="trace-21684"></a>
<a id="trace-21692"></a>
<a id="trace-21694"></a>
<a id="trace-21765"></a>
<a id="trace-21767"></a>
<a id="trace-21778"></a>
<a id="trace-21780"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21821"></a>
<a id="trace-21823"></a>
- 192.30s–247.30s (×180), actor 5, squad 0 (trace 19406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 19225. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19421}.
<a id="trace-2234"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (events line 2234): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2235"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (events line 2235): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21829"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 21829): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.60s, trace 21829. Next observer evidence: {'until': 248.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21850}.
<a id="trace-21830"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (trace 21830): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.60s, trace 21830. Next observer evidence: {'until': 253.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22074}.
<a id="trace-21850"></a>
<a id="trace-21852"></a>
<a id="trace-21861"></a>
<a id="trace-21863"></a>
<a id="trace-21879"></a>
<a id="trace-21881"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-21987"></a>
<a id="trace-21989"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22040"></a>
<a id="trace-22042"></a>
<a id="trace-22051"></a>
<a id="trace-22053"></a>
<a id="trace-22066"></a>
<a id="trace-22068"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
- 248.30s–253.80s (×24), actor 5, squad 0 (trace 21850): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.60s, trace 21830. Next observer evidence: {'until': 248.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21861}.
<a id="trace-22074"></a>
- 253.55s–253.55s (×1), actor 8, squad 1 (trace 22074): MoveTactically. Knowledge: actor memory at 250.00s, trace 21906. Next observer evidence: {'until': 254.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22228}.
<a id="trace-22075"></a>
- 253.55s–253.55s (×1), actor 8, squad 1 (trace 22075): received platoon directive. Knowledge: actor memory at 250.00s, trace 21906. Next observer evidence: {'until': 254.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22228}.
<a id="trace-22095"></a>
- 253.85s–253.85s (×1), actor 1, squad 0 (trace 22095): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22218}.
<a id="trace-22096"></a>
- 253.85s–253.85s (×1), actor 1, squad 0 (trace 22096): MoveTactically. Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22218}.
<a id="trace-22097"></a>
- 253.85s–253.85s (×1), actor 1, squad 0 (trace 22097): . Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22218}.
<a id="trace-22196"></a>
- 253.85s–253.85s (×1), actor 1, squad 0 (trace 22196): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22218}.
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22294"></a>
<a id="trace-22296"></a>
- 254.30s–254.80s (×4), actor 5, squad 0 (trace 22218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 21903. Next observer evidence: {'until': 254.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22294}.
<a id="trace-22228"></a>
- 254.55s–254.55s (×1), actor 8, squad 1 (trace 22228): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 21906. Next observer evidence: {'until': 264.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.999996746040784, 'next_transition': 22910}.
<a id="trace-22301"></a>
- 254.85s–254.85s (×1), actor 1, squad 0 (trace 22301): recovering: retry accepted element corridor in column. Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 255.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22484}.
<a id="trace-22400"></a>
- 254.85s–254.85s (×1), actor 1, squad 0 (trace 22400): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 250.00s, trace 21901. Next observer evidence: {'until': 255.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22484}.
<a id="trace-22484"></a>
<a id="trace-22486"></a>
- 255.30s–255.30s (×2), actor 5, squad 0 (trace 22484): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 22411. Next observer evidence: {'until': 255.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22497}.
<a id="trace-22497"></a>
- 255.55s–255.55s (×1), actor 1, squad 0 (trace 22497): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 255.00s, trace 22409. Next observer evidence: {'until': 255.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22516}.
<a id="trace-22516"></a>
<a id="trace-22518"></a>
<a id="trace-22579"></a>
<a id="trace-22581"></a>
<a id="trace-22609"></a>
<a id="trace-22611"></a>
<a id="trace-22626"></a>
<a id="trace-22628"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22658"></a>
<a id="trace-22660"></a>
<a id="trace-22688"></a>
<a id="trace-22690"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22876"></a>
<a id="trace-22878"></a>
<a id="trace-22900"></a>
<a id="trace-22902"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-23185"></a>
<a id="trace-23187"></a>
<a id="trace-23198"></a>
<a id="trace-23200"></a>
<a id="trace-23241"></a>
<a id="trace-23243"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23325"></a>
<a id="trace-23327"></a>
<a id="trace-23433"></a>
<a id="trace-23435"></a>
<a id="trace-23471"></a>
<a id="trace-23473"></a>
<a id="trace-23494"></a>
<a id="trace-23496"></a>
<a id="trace-23510"></a>
<a id="trace-23512"></a>
<a id="trace-23528"></a>
<a id="trace-23530"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
<a id="trace-23582"></a>
<a id="trace-23584"></a>
- 255.80s–274.80s (×56), actor 5, squad 0 (trace 22516): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 22411. Next observer evidence: {'until': 256.8, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22579}.
<a id="trace-22910"></a>
- 264.70s–264.70s (×1), actor 8, squad 1 (trace 22910): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 260.00s, trace 22703. Next observer evidence: {'until': 265.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23002}.
<a id="trace-23002"></a>
- 265.70s–265.70s (×1), actor 8, squad 1 (trace 23002): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 22928. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.524153526373453, 'next_transition': 2432}.
<a id="trace-2431"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (events line 2431): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2432"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (events line 2432): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23614"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (trace 23614): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607108 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 275.20s, trace 23614. Next observer evidence: None.
<a id="trace-23615"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (trace 23615): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607108 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 275.20s, trace 23615. Next observer evidence: None.
<a id="trace-23616"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (trace 23616): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607108 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 275.20s, trace 23616. Next observer evidence: {'until': 278.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.927784318362663, 'next_transition': 23805}.
<a id="trace-23617"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (trace 23617): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607108 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 275.20s, trace 23617. Next observer evidence: {'until': 278.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.927784318362663, 'next_transition': 23805}.
<a id="trace-23669"></a>
<a id="trace-23671"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23731"></a>
<a id="trace-23733"></a>
<a id="trace-23755"></a>
<a id="trace-23757"></a>
<a id="trace-23770"></a>
<a id="trace-23772"></a>
<a id="trace-23790"></a>
<a id="trace-23792"></a>
<a id="trace-23814"></a>
<a id="trace-23816"></a>
<a id="trace-23833"></a>
<a id="trace-23835"></a>
<a id="trace-23903"></a>
<a id="trace-23905"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
- 275.30s–280.30s (×20), actor 5, squad 0 (trace 23669): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.20s, trace 23617. Next observer evidence: {'until': 276.2, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23715}.
<a id="trace-23805"></a>
- 278.60s–278.60s (×1), actor 8, squad 1 (trace 23805): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 275.00s, trace 23598. Next observer evidence: {'until': 279.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05671671380642625, 'next_transition': 23845}.
<a id="trace-23845"></a>
- 279.60s–279.60s (×1), actor 8, squad 1 (trace 23845): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 23598. Next observer evidence: {'until': 280.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20320032697883383, 'next_transition': 24007}.
<a id="trace-24007"></a>
- 280.50s–280.50s (×1), actor 8, squad 1 (trace 24007): ReactToContact: cover and return fire. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24313}.
<a id="trace-24008"></a>
- 280.50s–280.50s (×1), actor 8, squad 1 (trace 24008): new contact inside 100 m. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24313}.
<a id="trace-24036"></a>
- 280.90s–280.90s (×1), actor 1, squad 0 (trace 24036): received platoon directive. Knowledge: actor memory at 280.00s, trace 23919. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24165}.
<a id="trace-24135"></a>
- 280.90s–280.90s (×1), actor 1, squad 0 (trace 24135): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 280.00s, trace 23919. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24165}.
<a id="trace-24165"></a>
<a id="trace-24167"></a>
- 281.30s–281.30s (×2), actor 5, squad 0 (trace 24165): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 23921. Next observer evidence: None.
<a id="trace-24176"></a>
- 281.40s–281.40s (×1), actor 1, squad 0 (trace 24176): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 280.00s, trace 23919. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24225}.
<a id="trace-24225"></a>
<a id="trace-24227"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24285"></a>
<a id="trace-24287"></a>
<a id="trace-24295"></a>
<a id="trace-24297"></a>
<a id="trace-24684"></a>
<a id="trace-24686"></a>
<a id="trace-24708"></a>
<a id="trace-24710"></a>
<a id="trace-24802"></a>
<a id="trace-24804"></a>
<a id="trace-24834"></a>
<a id="trace-24836"></a>
<a id="trace-24911"></a>
<a id="trace-24913"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-24974"></a>
<a id="trace-24976"></a>
<a id="trace-24995"></a>
<a id="trace-24997"></a>
<a id="trace-25018"></a>
<a id="trace-25020"></a>
<a id="trace-25028"></a>
<a id="trace-25030"></a>
- 282.30s–288.80s (×28), actor 5, squad 0 (trace 24225): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 23921. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24246}.
<a id="trace-24313"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24313): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24315"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24315): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24657"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24657): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24658"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24658): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24659"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24659): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24660"></a>
- 283.90s–283.90s (×1), actor 8, squad 1 (trace 24660): Assaulting. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24715}.
<a id="trace-24715"></a>
- 284.90s–284.90s (×1), actor 8, squad 1 (trace 24715): Reorganise: completed/failed drill. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 285.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24841}.
<a id="trace-24720"></a>
- 284.90s–284.90s (×1), actor 8, squad 1 (trace 24720): MoveTactically. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 285.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24841}.
<a id="trace-24721"></a>
- 284.90s–284.90s (×1), actor 8, squad 1 (trace 24721): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 280.00s, trace 23924. Next observer evidence: {'until': 285.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24841}.
<a id="trace-24841"></a>
- 285.80s–285.80s (×1), actor 8, squad 1 (trace 24841): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 285.00s, trace 24736. Next observer evidence: {'until': 289, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6931177559830266, 'next_transition': 2585}.
<a id="trace-2584"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (events line 2584): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25060}.
<a id="trace-2585"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (events line 2585): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3074976169681505, 'next_transition': 25274}.
<a id="trace-25041"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 25041): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.037408 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 25041. Next observer evidence: {'until': 289.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25060}.
<a id="trace-25042"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 25042): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.037408 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 25042. Next observer evidence: {'until': 289.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25060}.
<a id="trace-25043"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 25043): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.037408 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 25043. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3074976169681505, 'next_transition': 25274}.
<a id="trace-25044"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 25044): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.037408 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 25044. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3074976169681505, 'next_transition': 25274}.
<a id="trace-25060"></a>
<a id="trace-25062"></a>
<a id="trace-25075"></a>
<a id="trace-25077"></a>
<a id="trace-25157"></a>
<a id="trace-25159"></a>
<a id="trace-25212"></a>
<a id="trace-25214"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25253"></a>
<a id="trace-25255"></a>
<a id="trace-25262"></a>
<a id="trace-25264"></a>
<a id="trace-25562"></a>
<a id="trace-25564"></a>
- 289.30s–294.80s (×16), actor 5, squad 0 (trace 25060): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.00s, trace 25044. Next observer evidence: {'until': 289.8, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25075}.
<a id="trace-25274"></a>
- 293.20s–293.20s (×1), actor 8, squad 1 (trace 25274): traveling. Knowledge: actor memory at 290.00s, trace 25092. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0426379573378914, 'next_transition': 25505}.
<a id="trace-25275"></a>
- 293.20s–293.20s (×1), actor 8, squad 1 (trace 25275): current contact unknown for 10 s. Knowledge: actor memory at 290.00s, trace 25092. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0426379573378914, 'next_transition': 25505}.
<a id="trace-25505"></a>
- 294.20s–294.20s (×1), actor 8, squad 1 (trace 25505): ReactToContact: cover and return fire. Knowledge: actor memory at 290.00s, trace 25092. Next observer evidence: {'until': 297.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4233148776637035, 'next_transition': 25914}.
<a id="trace-25506"></a>
- 294.20s–294.20s (×1), actor 8, squad 1 (trace 25506): bounding overwatch. Knowledge: actor memory at 290.00s, trace 25092. Next observer evidence: {'until': 297.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4233148776637035, 'next_transition': 25914}.
<a id="trace-25507"></a>
- 294.20s–294.20s (×1), actor 8, squad 1 (trace 25507): new contact inside 100 m. Knowledge: actor memory at 290.00s, trace 25092. Next observer evidence: {'until': 297.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4233148776637035, 'next_transition': 25914}.
<a id="trace-25649"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 25649): received platoon directive. Knowledge: actor memory at 295.00s, trace 25577. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25795}.
<a id="trace-25748"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 25748): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 295.00s, trace 25577. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25795}.
<a id="trace-25795"></a>
<a id="trace-25797"></a>
- 295.80s–295.80s (×2), actor 5, squad 0 (trace 25795): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 25579. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25828}.
<a id="trace-25828"></a>
- 296.25s–296.25s (×1), actor 1, squad 0 (trace 25828): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 295.00s, trace 25577. Next observer evidence: None.
<a id="trace-25836"></a>
<a id="trace-25838"></a>
<a id="trace-25865"></a>
<a id="trace-25867"></a>
<a id="trace-25897"></a>
<a id="trace-25899"></a>
<a id="trace-25930"></a>
<a id="trace-25932"></a>
<a id="trace-25941"></a>
<a id="trace-25943"></a>
<a id="trace-25955"></a>
<a id="trace-25957"></a>
<a id="trace-26038"></a>
<a id="trace-26040"></a>
<a id="trace-26056"></a>
<a id="trace-26058"></a>
<a id="trace-26080"></a>
<a id="trace-26082"></a>
<a id="trace-26118"></a>
<a id="trace-26120"></a>
<a id="trace-28710"></a>
<a id="trace-28712"></a>
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28795"></a>
<a id="trace-28797"></a>
<a id="trace-28884"></a>
<a id="trace-28886"></a>
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28950"></a>
<a id="trace-28952"></a>
<a id="trace-29101"></a>
<a id="trace-29103"></a>
<a id="trace-29187"></a>
<a id="trace-29189"></a>
<a id="trace-29199"></a>
<a id="trace-29201"></a>
<a id="trace-29224"></a>
<a id="trace-29226"></a>
<a id="trace-29240"></a>
<a id="trace-29242"></a>
<a id="trace-29262"></a>
<a id="trace-29264"></a>
<a id="trace-29298"></a>
<a id="trace-29300"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
<a id="trace-29337"></a>
<a id="trace-29339"></a>
<a id="trace-29433"></a>
<a id="trace-29435"></a>
<a id="trace-29456"></a>
<a id="trace-29458"></a>
- 296.30s–316.30s (×54), actor 5, squad 0 (trace 25836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 25579. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25865}.
<a id="trace-25914"></a>
- 297.70s–297.70s (×1), actor 8, squad 1 (trace 25914): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 295.00s, trace 25582. Next observer evidence: {'until': 302.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7684092897874133, 'next_transition': 26130}.
<a id="trace-26130"></a>
- 302.55s–302.55s (×1), actor 8, squad 1 (trace 26130): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 300.00s, trace 25977. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.387608451301075, 'next_transition': 29009}.
<a id="trace-28646"></a>
- 302.55s–302.55s (×1), actor 8, squad 1 (trace 28646): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 300.00s, trace 25977. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.387608451301075, 'next_transition': 29009}.
<a id="trace-28647"></a>
- 302.55s–302.55s (×1), actor 8, squad 1 (trace 28647): MoveTactically. Knowledge: actor memory at 300.00s, trace 25977. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.387608451301075, 'next_transition': 29009}.
<a id="trace-28648"></a>
- 302.55s–302.55s (×1), actor 8, squad 1 (trace 28648): contact cover complete: assessment resumes closure. Knowledge: actor memory at 300.00s, trace 25977. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.387608451301075, 'next_transition': 29009}.
<a id="trace-29009"></a>
- 309.10s–309.10s (×1), actor 8, squad 1 (trace 29009): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 305.00s, trace 28811. Next observer evidence: {'until': 316.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.837314368869823, 'next_transition': 2820}.
<a id="trace-2819"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (events line 2819): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2820"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (events line 2820): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29466"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 29466): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 29466. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29473}.
<a id="trace-29467"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 29467): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 29467. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29473}.
<a id="trace-29468"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 29468): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 29468. Next observer evidence: {'until': 318.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8930826568946317, 'next_transition': 29547}.
<a id="trace-29469"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 29469): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 29469. Next observer evidence: {'until': 318.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8930826568946317, 'next_transition': 29547}.
<a id="trace-29473"></a>
<a id="trace-29475"></a>
<a id="trace-29502"></a>
<a id="trace-29504"></a>
<a id="trace-29875"></a>
<a id="trace-29877"></a>
<a id="trace-29893"></a>
<a id="trace-29895"></a>
<a id="trace-30363"></a>
<a id="trace-30365"></a>
<a id="trace-30412"></a>
<a id="trace-30414"></a>
<a id="trace-30782"></a>
<a id="trace-30784"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
- 316.80s–322.30s (×16), actor 5, squad 0 (trace 29473): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.60s, trace 29469. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29502}.
<a id="trace-29547"></a>
- 318.35s–318.35s (×1), actor 8, squad 1 (trace 29547): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 318.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21740271998355926, 'next_transition': 29683}.
<a id="trace-29683"></a>
- 318.60s–318.60s (×1), actor 8, squad 1 (trace 29683): traveling overwatch. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8476355268052209, 'next_transition': 29908}.
<a id="trace-29684"></a>
- 318.60s–318.60s (×1), actor 8, squad 1 (trace 29684): current contact unknown for 10 s. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8476355268052209, 'next_transition': 29908}.
<a id="trace-29908"></a>
- 319.90s–319.90s (×1), actor 8, squad 1 (trace 29908): ReactToContact: cover and return fire. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 321.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.4136320800245277, 'next_transition': 30428}.
<a id="trace-29909"></a>
- 319.90s–319.90s (×1), actor 8, squad 1 (trace 29909): bounding overwatch. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 321.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.4136320800245277, 'next_transition': 30428}.
<a id="trace-29910"></a>
<a id="trace-30428"></a>
- 319.90s–321.50s (×2), actor 8, squad 1 (trace 29910): new contact inside 100 m. Knowledge: actor memory at 315.00s, trace 29350. Next observer evidence: {'until': 321.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.4136320800245277, 'next_transition': 30428}.
<a id="trace-30789"></a>
- 321.80s–321.80s (×1), actor 8, squad 1 (trace 30789): received platoon directive; retain contact cover stage. Knowledge: actor memory at 320.00s, trace 30267. Next observer evidence: {'until': 325.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.148894759517865, 'next_transition': 31100}.
<a id="trace-30836"></a>
- 322.50s–322.50s (×1), actor 1, squad 0 (trace 30836): traveling overwatch. Knowledge: actor memory at 320.00s, trace 30262. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30891}.
<a id="trace-30837"></a>
- 322.50s–322.50s (×1), actor 1, squad 0 (trace 30837): received platoon directive. Knowledge: actor memory at 320.00s, trace 30262. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30891}.
<a id="trace-30891"></a>
<a id="trace-30893"></a>
<a id="trace-30922"></a>
<a id="trace-30924"></a>
<a id="trace-30948"></a>
<a id="trace-30950"></a>
<a id="trace-30987"></a>
<a id="trace-30989"></a>
<a id="trace-31002"></a>
<a id="trace-31004"></a>
<a id="trace-31090"></a>
<a id="trace-31092"></a>
<a id="trace-31108"></a>
<a id="trace-31110"></a>
<a id="trace-31563"></a>
<a id="trace-31565"></a>
<a id="trace-31596"></a>
<a id="trace-31598"></a>
- 322.80s–327.30s (×18), actor 5, squad 0 (trace 30891): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 30264. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30922}.
<a id="trace-31100"></a>
- 325.35s–325.35s (×1), actor 8, squad 1 (trace 31100): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 325.00s, trace 31024. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749831775558558, 'next_transition': 31143}.
<a id="trace-31143"></a>
<a id="trace-31970"></a>
- 326.35s–327.70s (×2), actor 8, squad 1 (trace 31143): new contact inside 100 m. Knowledge: actor memory at 325.00s, trace 31024. Next observer evidence: {'until': 327.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3793356448175564, 'next_transition': 31970}.
<a id="trace-31609"></a>
- 327.50s–327.50s (×1), actor 1, squad 0 (trace 31609): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 31019. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199370150858963, 'next_transition': 32435}.
<a id="trace-31610"></a>
- 327.50s–327.50s (×1), actor 1, squad 0 (trace 31610): bounding overwatch. Knowledge: actor memory at 325.00s, trace 31019. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199370150858963, 'next_transition': 32435}.
<a id="trace-31611"></a>
- 327.50s–327.50s (×1), actor 1, squad 0 (trace 31611): new contact inside 100 m. Knowledge: actor memory at 325.00s, trace 31019. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199370150858963, 'next_transition': 32435}.
<a id="trace-32435"></a>
<a id="trace-32437"></a>
<a id="trace-32477"></a>
<a id="trace-32479"></a>
- 327.80s–328.30s (×4), actor 5, squad 0 (trace 32435): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 31021. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519937713595318, 'next_transition': 32477}.
<a id="trace-32498"></a>
- 328.50s–328.50s (×1), actor 1, squad 0 (trace 32498): new contact inside 100 m. Knowledge: actor memory at 325.00s, trace 31019. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5118665897640047, 'next_transition': 32931}.
<a id="trace-32931"></a>
<a id="trace-32933"></a>
- 329.30s–329.30s (×2), actor 5, squad 0 (trace 32931): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 31021. Next observer evidence: {'until': 329.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5642767009015656, 'next_transition': 32946}.
<a id="trace-32946"></a>
- 329.50s–329.50s (×1), actor 1, squad 0 (trace 32946): new contact inside 100 m. Knowledge: actor memory at 325.00s, trace 31019. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.122592990695497, 'next_transition': 33429}.
<a id="trace-33429"></a>
<a id="trace-33431"></a>
- 330.30s–330.30s (×2), actor 5, squad 0 (trace 33429): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33348. Next observer evidence: {'until': 330.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.118679673924103, 'next_transition': 33472}.
<a id="trace-33472"></a>
- 330.70s–330.70s (×1), actor 1, squad 0 (trace 33472): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 33346. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4708456087700286, 'next_transition': 33844}.
<a id="trace-33844"></a>
<a id="trace-33846"></a>
- 330.80s–330.80s (×2), actor 5, squad 0 (trace 33844): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33348. Next observer evidence: {'until': 331, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4692893378728118, 'next_transition': 33856}.
<a id="trace-33856"></a>
- 331.05s–331.05s (×1), actor 1, squad 0 (trace 33856): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 33346. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4268124410741991, 'next_transition': 34239}.
<a id="trace-34239"></a>
<a id="trace-34241"></a>
<a id="trace-34700"></a>
<a id="trace-34702"></a>
<a id="trace-34728"></a>
<a id="trace-34730"></a>
<a id="trace-34796"></a>
<a id="trace-34798"></a>
<a id="trace-34823"></a>
<a id="trace-34825"></a>
<a id="trace-34844"></a>
<a id="trace-34846"></a>
<a id="trace-34927"></a>
<a id="trace-34929"></a>
<a id="trace-34947"></a>
<a id="trace-34949"></a>
<a id="trace-34976"></a>
<a id="trace-34978"></a>
- 331.30s–336.30s (×18), actor 5, squad 0 (trace 34239): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33348. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1206144368053343, 'next_transition': 34700}.
<a id="trace-34248"></a>
- 331.30s–331.30s (×1), actor 8, squad 1 (trace 34248): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 330.00s, trace 33351. Next observer evidence: {'until': 331.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21836064574951697, 'next_transition': 34261}.
<a id="trace-34261"></a>
- 331.55s–331.55s (×1), actor 8, squad 1 (trace 34261): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 330.00s, trace 33351. Next observer evidence: {'until': 344.2, 'shots': 2, 'casualties': 1, 'mean_displacement': 11.989025290498214, 'next_transition': 35894}.
<a id="trace-34262"></a>
- 331.55s–331.55s (×1), actor 8, squad 1 (trace 34262): rearward bound: one stationary suppressing element. Knowledge: actor memory at 330.00s, trace 33351. Next observer evidence: {'until': 344.2, 'shots': 2, 'casualties': 1, 'mean_displacement': 11.989025290498214, 'next_transition': 35894}.
<a id="trace-34995"></a>
- 336.75s–336.75s (×1), actor 3, squad 0 (trace 34995): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 335.00s, trace 34861. Next observer evidence: {'until': 336.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4297690287653565, 'next_transition': 35366}.
<a id="trace-35366"></a>
<a id="trace-35368"></a>
<a id="trace-35449"></a>
<a id="trace-35451"></a>
<a id="trace-35566"></a>
<a id="trace-35568"></a>
<a id="trace-35655"></a>
<a id="trace-35742"></a>
- 336.80s–340.30s (×8), actor 5, squad 0 (trace 35366): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 34862. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.269266883724799, 'next_transition': 35449}.
<a id="trace-35752"></a>
- 340.35s–340.35s (×1), actor 3, squad 0 (trace 35752): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 340.00s, trace 35670. Next observer evidence: {'until': 340.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43149387050543503, 'next_transition': 35768}.
<a id="trace-35768"></a>
<a id="trace-35797"></a>
<a id="trace-35809"></a>
<a id="trace-35845"></a>
<a id="trace-35847"></a>
<a id="trace-35876"></a>
<a id="trace-35878"></a>
<a id="trace-35904"></a>
<a id="trace-35906"></a>
<a id="trace-36132"></a>
<a id="trace-36134"></a>
<a id="trace-36177"></a>
<a id="trace-36179"></a>
<a id="trace-36190"></a>
<a id="trace-36192"></a>
<a id="trace-36216"></a>
<a id="trace-36250"></a>
<a id="trace-36286"></a>
<a id="trace-36288"></a>
<a id="trace-36375"></a>
<a id="trace-36411"></a>
- 340.80s–351.30s (×21), actor 5, squad 0 (trace 35768): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 35671. Next observer evidence: {'until': 341.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6661007037068398, 'next_transition': 35797}.
<a id="trace-35894"></a>
- 344.25s–344.25s (×1), actor 9, squad 1 (trace 35894): NeedSupport. Knowledge: actor memory at 340.00s, trace 35675. Next observer evidence: {'until': 344.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10482270395715276, 'next_transition': 35920}.
<a id="trace-35920"></a>
- 344.50s–344.50s (×1), actor 9, squad 1 (trace 35920): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 340.00s, trace 35675. Next observer evidence: {'until': 360, 'shots': 1, 'casualties': 0, 'mean_displacement': 17.716895568534312, 'next_transition': None}.
<a id="trace-35942"></a>
- 344.50s–344.50s (×1), actor 9, squad 1 (trace 35942): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 340.00s, trace 35675. Next observer evidence: {'until': 360, 'shots': 1, 'casualties': 0, 'mean_displacement': 17.716895568534312, 'next_transition': None}.
<a id="trace-36425"></a>
- 351.75s–351.75s (×1), actor 3, squad 0 (trace 36425): NeedSupport. Knowledge: actor memory at 350.00s, trace 36315. Next observer evidence: {'until': 352.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45359938381792375, 'next_transition': 36445}.
<a id="trace-36445"></a>
<a id="trace-36447"></a>
<a id="trace-36498"></a>
- 352.30s–354.30s (×3), actor 5, squad 0 (trace 36445): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 36316. Next observer evidence: {'until': 354.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.12535020187902043, 'next_transition': 36498}.
<a id="trace-36604"></a>
- 356.15s–356.15s (×1), actor 7, squad 0 (trace 36604): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: {'until': 356.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36608}.
<a id="trace-36608"></a>
- 356.20s–356.20s (×1), actor 7, squad 0 (trace 36608): Reorganise: completed/failed drill. Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: None.
<a id="trace-36610"></a>
- 356.20s–356.20s (×1), actor 7, squad 0 (trace 36610): ReactToContact: cover and return fire. Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: None.
<a id="trace-36611"></a>
- 356.20s–356.20s (×1), actor 7, squad 0 (trace 36611): Reorganise complete: known contact. Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: None.
<a id="trace-36718"></a>
<a id="trace-36720"></a>
<a id="trace-36754"></a>
<a id="trace-36756"></a>
- 356.30s–357.30s (×4), actor 5, squad 0 (trace 36718): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 36522. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1689511951700151, 'next_transition': 36754}.
<a id="trace-3489"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (events line 3489): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46165475307402504, 'next_transition': 36801}.
<a id="trace-36790"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (trace 36790): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.846084 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 36790. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46165475307402504, 'next_transition': 36801}.
<a id="trace-36791"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (trace 36791): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.846084 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 36791. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46165475307402504, 'next_transition': 36801}.
<a id="trace-36801"></a>
<a id="trace-36803"></a>
<a id="trace-36829"></a>
- 358.30s–359.30s (×3), actor 5, squad 0 (trace 36801): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.00s, trace 36791. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.408999560232389, 'next_transition': 36829}.
<a id="trace-36846"></a>
- 359.55s–359.55s (×1), actor 7, squad 0 (trace 36846): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2524167520213348, 'next_transition': None}.
<a id="trace-36848"></a>
- 359.55s–359.55s (×1), actor 7, squad 0 (trace 36848): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 355.00s, trace 36523. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2524167520213348, 'next_transition': None}.

## Net delivery

401 matched order/radio deliveries; 488 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.586s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4207: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4215: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 4217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 4218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4219: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4220: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4222: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4224: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4225: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4228: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 4229: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 4230: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5064: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5070: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5072: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5076: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5077: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5079: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5081: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5082: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5083: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5084: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5085: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5086: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5087: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6021: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6022: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6026: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6027: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6029: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6030: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6031: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6033: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6034: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6035: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6036: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6037: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6038: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6039: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6040: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6041: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6042: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6043: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6044: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6654: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6658: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6659: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6661: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6662: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 6663: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 6664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6665: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6666: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6667: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6668: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6669: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6670: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6671: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6672: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6673: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6674: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 6675: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 6676: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7094: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7095: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7098: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7099: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7101: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7102: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 7103: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 7104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7105: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7106: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7107: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7108: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7109: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7110: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7111: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7112: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7113: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7114: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 7115: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 7116: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7497: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7498: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7501: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7502: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7503: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7504: estimate 15.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7505: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 7506: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 7507: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7508: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7509: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7510: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7511: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7512: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7513: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7514: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7515: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7516: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7517: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 7518: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 7519: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7972: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7973: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7976: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7977: estimate 15.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7978: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 7979: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7980: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 7981: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 7982: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7983: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7984: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7985: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7986: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7987: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7988: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7989: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7990: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7991: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7992: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 7993: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 7994: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8259: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8260: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8263: estimate 15.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8264: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8265: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8266: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8267: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8268: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8269: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8270: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8271: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8272: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8273: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8274: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8275: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8276: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8277: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8278: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8279: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8280: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8281: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8606: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8607: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8610: estimate 15.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8611: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8612: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 8613: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8614: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8615: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8616: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8617: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8618: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8619: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8620: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8621: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8622: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8623: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8624: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8625: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8626: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8627: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8628: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9070: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9071: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9074: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9075: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9076: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 9077: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9078: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 9079: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 9080: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9081: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9082: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9083: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9084: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9085: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9086: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9087: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9088: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9089: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9090: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 9091: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 9092: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9501: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9502: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9505: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9506: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9507: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 9508: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9509: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 9510: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 9511: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9512: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9513: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9514: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9515: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9516: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9517: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9518: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9519: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9520: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9521: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 9522: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 9523: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9824: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9825: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9828: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9829: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9830: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 9831: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9832: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9833: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9834: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9835: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9836: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9837: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9838: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9839: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9840: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9841: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9842: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9843: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9844: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9845: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9846: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10267: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 10268: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10271: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10272: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10273: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 10274: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10275: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 10276: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 10277: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10278: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10279: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10280: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10281: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10282: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10283: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10284: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10285: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10286: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10287: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 10288: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 10289: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 10419: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10624: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 10625: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 10626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10628: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10629: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10630: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 10631: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 10632: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 10633: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 10634: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10635: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10636: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10637: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10638: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10639: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10640: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10641: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10642: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10643: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10644: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 10645: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 10646: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10889: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10890: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 10891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10893: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10894: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10895: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 10896: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10897: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 10898: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 10899: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10900: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10901: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10902: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10903: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10904: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10905: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10906: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10907: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10908: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10909: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 10910: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 10911: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11322: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 11323: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11326: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11327: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11328: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 11329: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 11330: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 11331: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 11332: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11333: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11334: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11335: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11336: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11337: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11338: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11339: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11340: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11341: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11342: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 11343: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 11344: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 11405: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11561: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 11562: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 11563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11565: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 11566: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 11567: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 11568: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 11569: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 11570: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 11571: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11572: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11573: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11574: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11575: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 11576: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11577: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 11578: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11579: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 11580: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 11581: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 11582: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 11583: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11781: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 11782: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 11783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11785: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11786: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11787: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 11788: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 11789: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 11790: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 11791: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11792: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11793: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11794: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11795: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11796: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11797: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11798: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11799: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11800: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11801: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 11802: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 11803: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 12246: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 12247: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12267: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 12268: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 12269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12271: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12272: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12273: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 12274: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 12275: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 12276: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 12277: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12278: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12279: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12280: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12281: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12282: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12283: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12284: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12285: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 12286: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 12287: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 12288: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 12289: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12508: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 12509: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 12510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12512: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12513: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12514: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 12515: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 12516: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 12517: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 12518: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12519: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12520: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12521: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12522: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12523: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12524: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12525: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12526: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12527: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 12528: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 12529: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 12530: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12762: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 12763: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 12764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12766: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12767: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12768: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 12769: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 12770: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 12771: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 12772: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12773: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12774: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12775: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12776: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12777: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12778: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12779: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12780: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 12781: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 12782: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 12783: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 12784: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 13075: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 13076: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13134: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 13135: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 13136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13138: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13139: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13140: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 13141: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13142: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 13143: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 13144: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13145: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13146: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13147: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13148: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13149: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13150: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13151: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13152: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13153: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13154: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 13155: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 13156: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13484: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 13485: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 13486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13488: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13489: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13490: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 13491: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13492: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 13493: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 13494: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13495: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13496: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13497: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13498: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13499: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13500: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13501: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13502: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13503: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13504: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 13505: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 13506: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 13741: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 13742: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 13743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 13745: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 13746: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 13747: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 13748: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 13749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 13750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 13751: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 13752: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 13753: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 13754: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 13755: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 13756: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 13757: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 13758: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 13760: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 13761: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 13762: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 13763: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14170: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 14171: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 14172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14174: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14175: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 14176: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 14177: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 14180: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14181: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14182: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14183: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14184: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14185: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14186: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14187: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14189: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14190: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 14191: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 14192: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 14434: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 14435: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 14436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 14437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14438: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 14439: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 14440: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 14441: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 14442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 14443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 14444: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14445: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14446: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 14447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14450: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14451: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 14453: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 14454: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 14455: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 14456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 14791: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 14792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 14793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 14795: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 14796: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 14797: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 14798: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 14799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 14800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 14801: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14802: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14803: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 14804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 14806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14807: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14808: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 14810: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 14811: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 14812: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 14813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 15025: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 15026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 15027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15029: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15030: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 15031: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 15032: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 15034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 15035: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15036: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15041: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15042: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15044: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15045: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 15046: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 15047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 15474: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 15476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15478: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15479: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 15480: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 15481: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 15483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 15484: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15485: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15490: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15491: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15493: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15494: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 15495: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 15496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 15838: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 15839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 15840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 15841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 15842: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 15843: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 15844: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 15845: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 15846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 15847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 15848: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 15849: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 15850: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 15851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 15852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 15853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 15854: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 15855: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 15857: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 15858: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 15859: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 15860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 16099: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 16100: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 16101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16103: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16104: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 16105: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 16106: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 16107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 16108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 16109: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16110: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16111: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 16112: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16113: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16115: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16116: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16117: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 16118: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 16119: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 16120: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 16121: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17189: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 17190: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17192: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17193: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17194: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 17195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 17197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 17198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17199: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17200: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17201: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17202: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17204: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17205: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17206: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17207: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17208: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 17209: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 17210: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 17865: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 17866: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 17867: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17936: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 17937: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17938: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17939: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17940: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17941: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 17942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 10, trace 17944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 17945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17946: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17947: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17948: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17949: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17951: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17952: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17953: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17954: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17955: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 17956: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 17957: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18921: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 18922: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18923: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18924: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18925: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 18926: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 18927: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 10, trace 18929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 18930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18931: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18932: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18933: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18934: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18936: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18937: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18938: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18939: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18940: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 18941: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 18942: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19222: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 19223: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 19224: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19225: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 19226: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 19227: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 19228: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 10, trace 19230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 19231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19232: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19233: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19234: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19235: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19237: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19238: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19239: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19240: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19241: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19242: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19243: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19527: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 19528: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19529: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19530: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19531: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 19532: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 19533: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 10, trace 19535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 19536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19537: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19538: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19539: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19540: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19542: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19543: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19544: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19545: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19546: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19547: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19548: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19802: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 19803: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19804: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19805: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19806: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 19807: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 10, trace 19809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 19810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19811: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19812: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19813: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19814: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19816: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19817: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19818: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19819: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19820: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19821: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19822: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 20013: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 20014: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20015: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20016: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20017: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 20018: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 10, trace 20020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 20021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20022: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20023: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20024: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20025: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20027: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20028: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20029: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20030: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20031: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 20032: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 20033: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 20232: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 20233: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20234: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20235: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 20236: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 20237: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 10, trace 20239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 20240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20241: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20242: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20243: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20245: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20246: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20247: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20248: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20249: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 20250: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 20251: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 20438: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 20439: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 20440: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 20441: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 20442: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 20443: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 10, trace 20445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 20446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20447: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20448: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20449: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20451: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20452: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20453: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20454: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20455: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 20456: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 20457: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 20644: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 20645: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20646: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 20647: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 20648: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 20649: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 10, trace 20651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 20652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20653: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20654: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20655: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20657: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20658: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20659: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20660: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20661: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 20662: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 20663: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20861: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 20862: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20863: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 20864: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 20865: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 20866: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 10, trace 20868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 20869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20870: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20871: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20872: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20874: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20875: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20876: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20877: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20878: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 20879: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 20880: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 21067: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 21068: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 21069: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 21070: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 21071: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 21072: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 10, trace 21074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 21075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 21076: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 21077: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21078: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21080: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21081: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21082: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21083: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21084: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 21085: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 21086: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 21275: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 21276: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 21277: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 21278: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 21279: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 21280: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 10, trace 21282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 21283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21284: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21285: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21286: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21288: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21289: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21290: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21291: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21292: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 21293: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 21294: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 21499: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 21500: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21501: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 21502: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 21503: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 21504: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 10, trace 21506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 21507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21508: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21509: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21510: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21512: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21513: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21514: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21515: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21516: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 21517: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 21518: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 21699: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 21700: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21701: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 21702: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 21703: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 21704: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 10, trace 21706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 21707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21708: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21709: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21710: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21712: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21713: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21714: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21715: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21716: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 21717: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 21718: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 21829: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 21830: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21901: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 21902: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21903: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 21904: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 21905: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 21906: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 10, trace 21908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 21909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21910: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21911: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21912: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21914: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21915: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21916: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21917: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21918: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 21919: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 21920: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 22409: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 22410: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 22411: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 22412: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 22413: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 22414: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 22415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 10, trace 22416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 11, trace 22417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 22418: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 22419: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 22420: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 22421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 22422: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 22423: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 22424: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 22425: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 22426: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 22427: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 22428: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 22698: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 22699: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 22700: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 22701: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 22702: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 22703: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 22704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 10, trace 22705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 11, trace 22706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 22707: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 22708: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 22709: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 22710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 22711: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 22712: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 22713: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 22714: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 22715: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 22716: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 22717: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 22923: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 22924: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 22925: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 22926: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 22927: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 22928: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 22929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 10, trace 22930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 11, trace 22931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 22932: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 22933: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 22934: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 22935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 22936: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 22937: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 22938: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 22939: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 22940: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 22941: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 22942: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 23333: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 23334: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 23335: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 23336: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 23337: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 23338: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 23339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 10, trace 23340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 11, trace 23341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 23342: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 23343: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 23344: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 23345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 23346: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 23347: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 23348: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 23349: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 23350: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 23351: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 23352: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 23593: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 23594: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 23595: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 23596: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 23597: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 23598: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 23599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 10, trace 23600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 11, trace 23601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 23602: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 23603: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 23604: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 23605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 23606: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 23607: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 23608: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 23609: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 23610: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 23611: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 23612: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 23614: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 23615: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 23616: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 23617: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 23919: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 23920: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 23921: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 23922: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 23923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 23924: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 23925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 10, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 11, trace 23927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 23928: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 23929: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 23930: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 23931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 23932: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 23933: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 23934: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 23935: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 23936: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 23937: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 23938: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 24731: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 24732: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 24733: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24734: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 24735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 24736: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 24737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 10, trace 24738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 11, trace 24739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24740: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 24741: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24742: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24744: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24745: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24746: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24747: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24748: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 24749: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 24750: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 25041: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 25042: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 25043: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 25044: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 25087: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 25088: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25089: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25090: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 25091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 25092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 10, trace 25094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 11, trace 25095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25096: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25097: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25098: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25100: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25101: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25102: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25103: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25104: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25105: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 25577: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 25578: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25579: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25580: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 25581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 25582: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 10, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 11, trace 25585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25586: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25587: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25588: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25590: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25591: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25592: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25593: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25594: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25595: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 25972: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 25973: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25974: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25975: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 25977: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 10, trace 25979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 11, trace 25980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25981: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25985: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25986: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25988: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25989: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 25990: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 25991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28806: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 28807: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28808: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 28809: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 28810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 28811: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 10, trace 28813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 11, trace 28814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28815: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 28818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28819: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28820: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28822: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28823: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28824: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 29109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 29110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 29111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 29112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 29113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 29114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 29115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 10, trace 29116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 11, trace 29117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29118: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 29119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29122: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29123: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29125: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29126: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 29127: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 29128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 29345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 29346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 29347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 29348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 29349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 29350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 10, trace 29352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 11, trace 29353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29358: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29359: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29361: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29362: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 29363: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 29466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 29467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 29468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 29469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 30262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 30263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 30264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 30265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 30266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 30267: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 30268: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 10, trace 30269: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 11, trace 30270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 30271: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 30272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 30273: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 30274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 30275: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 30276: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 30277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 30278: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 30279: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 30280: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 30281: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 31019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 31020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 31021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 31022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 31023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 31024: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 31025: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 10, trace 31026: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 11, trace 31027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 31028: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 31029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 31030: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 31031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 31032: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 31033: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 31034: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 31035: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 31036: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 31037: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 31038: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 33346: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 33347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 33348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 33349: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 33350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 8, trace 33351: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 33352: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 10, trace 33353: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 11, trace 33354: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 33355: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 33356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 33357: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 33358: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 33359: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 33360: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 33361: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 33362: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 33363: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 33364: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 33365: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 34861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34862: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 34863: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 34864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 8, trace 34865: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 34866: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 10, trace 34867: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 11, trace 34868: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34869: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34870: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34871: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34872: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34873: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34874: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34875: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34876: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34877: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34878: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 34879: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 35670: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 35671: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 35672: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 35673: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 8, trace 35674: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 35675: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 10, trace 35676: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 11, trace 35677: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 35678: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 35679: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 35680: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 35681: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 35682: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 35683: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 35684: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 35685: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 35686: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 35687: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 36066: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 36067: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 36068: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 36069: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 36070: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 10, trace 36071: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 11, trace 36072: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 36073: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 36074: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 36075: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 36076: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 36077: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 36078: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 36079: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 36080: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 36081: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 36082: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 36315: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 36316: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 36317: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 36318: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 10, trace 36319: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 11, trace 36320: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 36321: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 36322: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 36323: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 36324: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 36325: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 36326: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 36327: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 36328: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 36329: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 36330: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 36522: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 36523: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 36524: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 10, trace 36525: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 11, trace 36526: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 36527: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 36528: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 36529: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 36530: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 36531: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 36532: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 36533: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 36534: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 36535: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 36536: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 36790: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 36791: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 36860: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 36861: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 36862: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 10, trace 36863: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 11, trace 36864: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 36865: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 36866: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 36867: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 36868: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 36869: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 36870: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 36871: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 36872: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 36873: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 36874: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Soren incapacitated
- 1: Tern killed in action
- 1: Voss killed in action
- 1: Rook killed in action
- 1: Orin killed in action
- 1: Bren killed in action
- 1: Moss incapacitated
- 1: Ash incapacitated

## Outcome attribution

- 255.55s, evidence 22497: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 255.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22516}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 281.40s, evidence 24176: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24225}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 296.25s, evidence 25828: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
