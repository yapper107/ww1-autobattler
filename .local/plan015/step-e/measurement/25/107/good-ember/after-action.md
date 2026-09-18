# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/25/107/good-ember/battle-107-1789674222680139087`

## Battle summary

**Ember** · 360 s · 48 shots.

### Turning points

- 25.9s, squad 4: contact (events line 273). First recorded contact.
- 43.0s, squad 0: withdrawal ([trace 2885](#trace-2885)). 70.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 48.0s, squad 0: help call ([trace 3095](#trace-3095)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 1 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 47 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 734](#trace-734)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 33.0s, squad 0 chose took cover and returned fire ([trace 1792](#trace-1792)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 733](#trace-733)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331098766869002, 'next_transition': 751}.
- 53.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.473631 retreat threshold=0.220000 initiative=requires intent ([trace 3270](#trace-3270)). Following evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599612982716966, 'next_transition': 3288}.

### Communication

59 matched deliveries (mean 0.15s, max 5.25s); 229 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.95s, squad 4, contact, evidence events line 273: First recorded contact; .
- 42.95s, squad 0, withdrawal, evidence 2885: BreakContact: believed ratio at least two without superiority; 70.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.95s, squad 0, help call, evidence 3095: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.469718259545955, 'next_transition': 367}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.469718259545955, 'next_transition': 367}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.469718259545955, 'next_transition': 367}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-369"></a>
<a id="trace-389"></a>
<a id="trace-398"></a>
<a id="trace-413"></a>
<a id="trace-424"></a>
<a id="trace-446"></a>
<a id="trace-469"></a>
<a id="trace-481"></a>
<a id="trace-489"></a>
<a id="trace-572"></a>
<a id="trace-580"></a>
<a id="trace-698"></a>
<a id="trace-713"></a>
<a id="trace-732"></a>
<a id="trace-753"></a>
<a id="trace-769"></a>
<a id="trace-782"></a>
<a id="trace-806"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-911"></a>
<a id="trace-933"></a>
<a id="trace-947"></a>
<a id="trace-960"></a>
<a id="trace-970"></a>
<a id="trace-990"></a>
<a id="trace-1000"></a>
<a id="trace-1016"></a>
<a id="trace-1023"></a>
<a id="trace-1108"></a>
<a id="trace-1128"></a>
<a id="trace-1306"></a>
<a id="trace-1320"></a>
<a id="trace-1345"></a>
<a id="trace-1354"></a>
<a id="trace-1369"></a>
<a id="trace-1377"></a>
<a id="trace-1399"></a>
<a id="trace-1417"></a>
<a id="trace-1497"></a>
<a id="trace-1510"></a>
<a id="trace-1533"></a>
<a id="trace-1547"></a>
<a id="trace-1559"></a>
<a id="trace-1568"></a>
<a id="trace-1582"></a>
<a id="trace-1594"></a>
<a id="trace-1658"></a>
<a id="trace-1663"></a>
<a id="trace-1739"></a>
<a id="trace-1742"></a>
<a id="trace-1761"></a>
<a id="trace-1765"></a>
<a id="trace-1776"></a>
<a id="trace-1791"></a>
<a id="trace-2049"></a>
<a id="trace-2062"></a>
<a id="trace-2073"></a>
<a id="trace-2082"></a>
<a id="trace-2150"></a>
<a id="trace-2157"></a>
<a id="trace-2169"></a>
<a id="trace-2181"></a>
<a id="trace-2192"></a>
<a id="trace-2197"></a>
<a id="trace-2209"></a>
<a id="trace-2219"></a>
<a id="trace-2605"></a>
<a id="trace-2755"></a>
<a id="trace-2837"></a>
<a id="trace-2845"></a>
<a id="trace-2854"></a>
<a id="trace-2865"></a>
<a id="trace-2871"></a>
<a id="trace-2882"></a>
<a id="trace-2948"></a>
<a id="trace-2956"></a>
<a id="trace-2969"></a>
<a id="trace-2983"></a>
<a id="trace-3056"></a>
<a id="trace-3062"></a>
<a id="trace-3074"></a>
<a id="trace-3081"></a>
<a id="trace-3090"></a>
<a id="trace-3094"></a>
<a id="trace-3111"></a>
<a id="trace-3123"></a>
<a id="trace-3133"></a>
<a id="trace-3138"></a>
<a id="trace-3212"></a>
<a id="trace-3218"></a>
<a id="trace-3225"></a>
<a id="trace-3231"></a>
<a id="trace-3244"></a>
<a id="trace-3256"></a>
<a id="trace-3267"></a>
<a id="trace-3277"></a>
<a id="trace-3290"></a>
<a id="trace-3298"></a>
<a id="trace-3368"></a>
<a id="trace-3372"></a>
<a id="trace-3408"></a>
<a id="trace-3419"></a>
<a id="trace-3431"></a>
<a id="trace-3435"></a>
<a id="trace-3454"></a>
<a id="trace-3458"></a>
<a id="trace-3464"></a>
<a id="trace-3470"></a>
<a id="trace-3539"></a>
<a id="trace-3542"></a>
<a id="trace-3549"></a>
<a id="trace-3554"></a>
<a id="trace-3563"></a>
<a id="trace-3567"></a>
<a id="trace-3575"></a>
<a id="trace-3579"></a>
<a id="trace-3586"></a>
<a id="trace-3591"></a>
<a id="trace-3660"></a>
<a id="trace-3664"></a>
<a id="trace-3672"></a>
<a id="trace-3676"></a>
<a id="trace-3686"></a>
<a id="trace-3691"></a>
<a id="trace-3701"></a>
<a id="trace-3712"></a>
<a id="trace-3721"></a>
<a id="trace-3731"></a>
<a id="trace-3833"></a>
<a id="trace-3841"></a>
<a id="trace-3857"></a>
<a id="trace-3863"></a>
<a id="trace-3886"></a>
<a id="trace-3894"></a>
<a id="trace-3911"></a>
<a id="trace-3916"></a>
<a id="trace-3934"></a>
<a id="trace-3944"></a>
<a id="trace-4019"></a>
<a id="trace-4027"></a>
<a id="trace-4043"></a>
<a id="trace-4051"></a>
<a id="trace-4068"></a>
<a id="trace-4075"></a>
<a id="trace-4095"></a>
<a id="trace-4107"></a>
<a id="trace-4119"></a>
<a id="trace-4128"></a>
<a id="trace-4204"></a>
<a id="trace-4217"></a>
<a id="trace-4228"></a>
<a id="trace-4237"></a>
<a id="trace-4253"></a>
<a id="trace-4259"></a>
<a id="trace-4271"></a>
<a id="trace-4279"></a>
<a id="trace-4292"></a>
<a id="trace-4301"></a>
<a id="trace-4375"></a>
<a id="trace-4383"></a>
<a id="trace-4395"></a>
<a id="trace-4403"></a>
<a id="trace-4411"></a>
<a id="trace-4420"></a>
<a id="trace-4431"></a>
<a id="trace-4438"></a>
<a id="trace-4449"></a>
<a id="trace-4455"></a>
<a id="trace-4529"></a>
<a id="trace-4537"></a>
<a id="trace-4549"></a>
<a id="trace-4555"></a>
<a id="trace-4566"></a>
<a id="trace-4579"></a>
<a id="trace-4589"></a>
<a id="trace-4598"></a>
<a id="trace-4607"></a>
<a id="trace-4613"></a>
<a id="trace-4685"></a>
<a id="trace-4691"></a>
<a id="trace-4702"></a>
<a id="trace-4709"></a>
<a id="trace-4720"></a>
<a id="trace-4726"></a>
<a id="trace-4738"></a>
<a id="trace-4750"></a>
<a id="trace-4761"></a>
<a id="trace-4771"></a>
<a id="trace-4843"></a>
<a id="trace-4848"></a>
<a id="trace-4858"></a>
<a id="trace-4863"></a>
<a id="trace-4874"></a>
<a id="trace-4881"></a>
<a id="trace-4893"></a>
<a id="trace-4901"></a>
<a id="trace-4911"></a>
<a id="trace-4922"></a>
<a id="trace-4995"></a>
<a id="trace-5005"></a>
<a id="trace-5015"></a>
<a id="trace-5022"></a>
<a id="trace-5033"></a>
<a id="trace-5039"></a>
<a id="trace-5052"></a>
<a id="trace-5060"></a>
<a id="trace-5071"></a>
<a id="trace-5077"></a>
<a id="trace-5150"></a>
<a id="trace-5159"></a>
<a id="trace-5168"></a>
<a id="trace-5179"></a>
<a id="trace-5189"></a>
<a id="trace-5195"></a>
<a id="trace-5208"></a>
<a id="trace-5218"></a>
<a id="trace-5230"></a>
<a id="trace-5237"></a>
<a id="trace-5310"></a>
<a id="trace-5316"></a>
<a id="trace-5325"></a>
<a id="trace-5334"></a>
<a id="trace-5342"></a>
<a id="trace-5351"></a>
<a id="trace-5363"></a>
<a id="trace-5372"></a>
<a id="trace-5383"></a>
<a id="trace-5389"></a>
<a id="trace-5467"></a>
<a id="trace-5474"></a>
<a id="trace-5484"></a>
<a id="trace-5490"></a>
<a id="trace-5499"></a>
<a id="trace-5508"></a>
<a id="trace-5519"></a>
<a id="trace-5530"></a>
<a id="trace-5541"></a>
<a id="trace-5546"></a>
<a id="trace-5622"></a>
<a id="trace-5628"></a>
<a id="trace-5639"></a>
<a id="trace-5648"></a>
<a id="trace-5659"></a>
<a id="trace-5665"></a>
<a id="trace-5676"></a>
<a id="trace-5686"></a>
<a id="trace-5695"></a>
<a id="trace-5704"></a>
<a id="trace-5777"></a>
<a id="trace-5783"></a>
<a id="trace-5793"></a>
<a id="trace-5802"></a>
<a id="trace-5814"></a>
<a id="trace-5820"></a>
<a id="trace-5832"></a>
<a id="trace-5839"></a>
<a id="trace-5850"></a>
<a id="trace-5859"></a>
<a id="trace-5930"></a>
<a id="trace-5939"></a>
<a id="trace-5948"></a>
<a id="trace-5955"></a>
<a id="trace-5965"></a>
<a id="trace-5973"></a>
<a id="trace-5987"></a>
<a id="trace-5994"></a>
<a id="trace-6004"></a>
<a id="trace-6011"></a>
<a id="trace-6082"></a>
<a id="trace-6091"></a>
<a id="trace-6102"></a>
<a id="trace-6111"></a>
<a id="trace-6120"></a>
<a id="trace-6125"></a>
<a id="trace-6138"></a>
<a id="trace-6145"></a>
<a id="trace-6158"></a>
<a id="trace-6165"></a>
<a id="trace-6237"></a>
<a id="trace-6243"></a>
<a id="trace-6251"></a>
<a id="trace-6261"></a>
<a id="trace-6269"></a>
<a id="trace-6282"></a>
<a id="trace-6293"></a>
<a id="trace-6300"></a>
<a id="trace-6311"></a>
<a id="trace-6319"></a>
<a id="trace-6393"></a>
<a id="trace-6402"></a>
<a id="trace-6413"></a>
<a id="trace-6419"></a>
<a id="trace-6428"></a>
<a id="trace-6438"></a>
<a id="trace-6448"></a>
<a id="trace-6458"></a>
<a id="trace-6470"></a>
<a id="trace-6477"></a>
<a id="trace-6550"></a>
<a id="trace-6559"></a>
<a id="trace-6571"></a>
<a id="trace-6577"></a>
<a id="trace-6588"></a>
<a id="trace-6594"></a>
<a id="trace-6607"></a>
<a id="trace-6617"></a>
<a id="trace-6625"></a>
<a id="trace-6635"></a>
<a id="trace-6707"></a>
<a id="trace-6713"></a>
<a id="trace-6724"></a>
<a id="trace-6733"></a>
<a id="trace-6745"></a>
<a id="trace-6751"></a>
<a id="trace-6764"></a>
<a id="trace-6771"></a>
<a id="trace-6782"></a>
<a id="trace-6793"></a>
<a id="trace-6864"></a>
<a id="trace-6873"></a>
<a id="trace-6882"></a>
<a id="trace-6888"></a>
<a id="trace-6899"></a>
<a id="trace-6905"></a>
<a id="trace-6918"></a>
<a id="trace-6928"></a>
<a id="trace-6940"></a>
<a id="trace-6946"></a>
<a id="trace-7018"></a>
<a id="trace-7028"></a>
<a id="trace-7038"></a>
<a id="trace-7047"></a>
<a id="trace-7056"></a>
<a id="trace-7062"></a>
<a id="trace-7074"></a>
<a id="trace-7082"></a>
<a id="trace-7094"></a>
<a id="trace-7100"></a>
<a id="trace-7176"></a>
<a id="trace-7183"></a>
<a id="trace-7193"></a>
<a id="trace-7202"></a>
<a id="trace-7211"></a>
<a id="trace-7221"></a>
<a id="trace-7232"></a>
<a id="trace-7239"></a>
<a id="trace-7250"></a>
<a id="trace-7257"></a>
<a id="trace-7331"></a>
<a id="trace-7338"></a>
<a id="trace-7348"></a>
<a id="trace-7355"></a>
<a id="trace-7366"></a>
<a id="trace-7376"></a>
<a id="trace-7386"></a>
<a id="trace-7397"></a>
<a id="trace-7409"></a>
<a id="trace-7414"></a>
<a id="trace-7487"></a>
<a id="trace-7494"></a>
<a id="trace-7505"></a>
<a id="trace-7511"></a>
<a id="trace-7522"></a>
<a id="trace-7527"></a>
<a id="trace-7537"></a>
<a id="trace-7548"></a>
<a id="trace-7560"></a>
<a id="trace-7570"></a>
<a id="trace-7643"></a>
<a id="trace-7649"></a>
<a id="trace-7661"></a>
<a id="trace-7667"></a>
<a id="trace-7678"></a>
<a id="trace-7684"></a>
<a id="trace-7696"></a>
<a id="trace-7703"></a>
<a id="trace-7712"></a>
<a id="trace-7721"></a>
<a id="trace-7792"></a>
<a id="trace-7801"></a>
<a id="trace-7814"></a>
<a id="trace-7821"></a>
<a id="trace-7831"></a>
<a id="trace-7840"></a>
<a id="trace-7852"></a>
<a id="trace-7859"></a>
<a id="trace-7870"></a>
<a id="trace-7875"></a>
<a id="trace-7947"></a>
<a id="trace-7956"></a>
<a id="trace-7963"></a>
<a id="trace-7973"></a>
<a id="trace-7982"></a>
<a id="trace-7990"></a>
<a id="trace-8005"></a>
<a id="trace-8014"></a>
<a id="trace-8028"></a>
<a id="trace-8034"></a>
<a id="trace-8107"></a>
<a id="trace-8112"></a>
<a id="trace-8121"></a>
<a id="trace-8130"></a>
<a id="trace-8138"></a>
<a id="trace-8147"></a>
<a id="trace-8159"></a>
<a id="trace-8166"></a>
<a id="trace-8178"></a>
<a id="trace-8187"></a>
<a id="trace-8263"></a>
<a id="trace-8270"></a>
<a id="trace-8280"></a>
<a id="trace-8286"></a>
<a id="trace-8295"></a>
<a id="trace-8304"></a>
<a id="trace-8314"></a>
<a id="trace-8324"></a>
<a id="trace-8334"></a>
<a id="trace-8340"></a>
<a id="trace-8414"></a>
<a id="trace-8421"></a>
<a id="trace-8433"></a>
<a id="trace-8441"></a>
<a id="trace-8453"></a>
<a id="trace-8459"></a>
<a id="trace-8470"></a>
<a id="trace-8479"></a>
<a id="trace-8488"></a>
<a id="trace-8499"></a>
<a id="trace-8571"></a>
<a id="trace-8576"></a>
<a id="trace-8586"></a>
<a id="trace-8593"></a>
<a id="trace-8604"></a>
<a id="trace-8611"></a>
<a id="trace-8624"></a>
<a id="trace-8631"></a>
<a id="trace-8646"></a>
<a id="trace-8655"></a>
<a id="trace-8726"></a>
<a id="trace-8735"></a>
<a id="trace-8744"></a>
<a id="trace-8749"></a>
<a id="trace-8759"></a>
<a id="trace-8766"></a>
<a id="trace-8779"></a>
<a id="trace-8785"></a>
<a id="trace-8798"></a>
<a id="trace-8804"></a>
<a id="trace-8877"></a>
<a id="trace-8892"></a>
<a id="trace-8900"></a>
<a id="trace-8909"></a>
<a id="trace-8918"></a>
<a id="trace-8924"></a>
<a id="trace-8936"></a>
<a id="trace-8944"></a>
<a id="trace-8956"></a>
<a id="trace-8962"></a>
<a id="trace-9035"></a>
<a id="trace-9042"></a>
<a id="trace-9051"></a>
<a id="trace-9062"></a>
<a id="trace-9074"></a>
<a id="trace-9083"></a>
<a id="trace-9094"></a>
<a id="trace-9101"></a>
<a id="trace-9112"></a>
<a id="trace-9119"></a>
<a id="trace-9193"></a>
<a id="trace-9199"></a>
<a id="trace-9209"></a>
<a id="trace-9214"></a>
<a id="trace-9224"></a>
<a id="trace-9234"></a>
<a id="trace-9245"></a>
<a id="trace-9258"></a>
<a id="trace-9270"></a>
<a id="trace-9276"></a>
<a id="trace-9349"></a>
<a id="trace-9355"></a>
<a id="trace-9366"></a>
<a id="trace-9372"></a>
<a id="trace-9381"></a>
<a id="trace-9387"></a>
<a id="trace-9398"></a>
<a id="trace-9409"></a>
<a id="trace-9417"></a>
<a id="trace-9427"></a>
<a id="trace-9502"></a>
<a id="trace-9507"></a>
<a id="trace-9517"></a>
<a id="trace-9527"></a>
<a id="trace-9537"></a>
<a id="trace-9543"></a>
<a id="trace-9555"></a>
<a id="trace-9562"></a>
<a id="trace-9572"></a>
<a id="trace-9581"></a>
<a id="trace-9652"></a>
<a id="trace-9661"></a>
<a id="trace-9671"></a>
<a id="trace-9677"></a>
<a id="trace-9689"></a>
<a id="trace-9695"></a>
<a id="trace-9712"></a>
<a id="trace-9719"></a>
<a id="trace-9730"></a>
<a id="trace-9735"></a>
<a id="trace-9806"></a>
<a id="trace-9815"></a>
<a id="trace-9823"></a>
<a id="trace-9831"></a>
<a id="trace-9841"></a>
<a id="trace-9846"></a>
<a id="trace-9860"></a>
<a id="trace-9870"></a>
<a id="trace-9882"></a>
<a id="trace-9891"></a>
<a id="trace-9965"></a>
<a id="trace-9971"></a>
<a id="trace-9979"></a>
<a id="trace-9988"></a>
<a id="trace-9995"></a>
<a id="trace-10004"></a>
<a id="trace-10015"></a>
<a id="trace-10022"></a>
<a id="trace-10033"></a>
<a id="trace-10041"></a>
<a id="trace-10118"></a>
<a id="trace-10124"></a>
<a id="trace-10133"></a>
<a id="trace-10140"></a>
<a id="trace-10151"></a>
<a id="trace-10161"></a>
<a id="trace-10171"></a>
<a id="trace-10181"></a>
<a id="trace-10191"></a>
<a id="trace-10197"></a>
<a id="trace-10271"></a>
<a id="trace-10278"></a>
<a id="trace-10290"></a>
<a id="trace-10298"></a>
<a id="trace-10308"></a>
<a id="trace-10315"></a>
<a id="trace-10326"></a>
<a id="trace-10336"></a>
<a id="trace-10348"></a>
<a id="trace-10357"></a>
<a id="trace-10429"></a>
<a id="trace-10435"></a>
<a id="trace-10445"></a>
<a id="trace-10453"></a>
<a id="trace-10464"></a>
<a id="trace-10471"></a>
<a id="trace-10485"></a>
<a id="trace-10492"></a>
<a id="trace-10502"></a>
<a id="trace-10512"></a>
<a id="trace-10583"></a>
<a id="trace-10596"></a>
<a id="trace-10604"></a>
<a id="trace-10610"></a>
<a id="trace-10620"></a>
<a id="trace-10627"></a>
<a id="trace-10641"></a>
<a id="trace-10649"></a>
<a id="trace-10661"></a>
<a id="trace-10666"></a>
<a id="trace-10740"></a>
<a id="trace-10750"></a>
<a id="trace-10758"></a>
<a id="trace-10767"></a>
<a id="trace-10778"></a>
<a id="trace-10785"></a>
<a id="trace-10797"></a>
<a id="trace-10805"></a>
<a id="trace-10816"></a>
<a id="trace-10822"></a>
<a id="trace-10895"></a>
<a id="trace-10901"></a>
<a id="trace-10911"></a>
<a id="trace-10922"></a>
<a id="trace-10930"></a>
<a id="trace-10940"></a>
<a id="trace-10951"></a>
<a id="trace-10957"></a>
<a id="trace-10969"></a>
<a id="trace-10977"></a>
<a id="trace-11051"></a>
<a id="trace-11057"></a>
<a id="trace-11067"></a>
<a id="trace-11074"></a>
<a id="trace-11083"></a>
<a id="trace-11093"></a>
<a id="trace-11104"></a>
<a id="trace-11114"></a>
<a id="trace-11124"></a>
<a id="trace-11130"></a>
<a id="trace-11204"></a>
<a id="trace-11210"></a>
<a id="trace-11221"></a>
<a id="trace-11230"></a>
<a id="trace-11241"></a>
<a id="trace-11247"></a>
<a id="trace-11258"></a>
<a id="trace-11268"></a>
<a id="trace-11278"></a>
<a id="trace-11288"></a>
<a id="trace-11360"></a>
<a id="trace-11365"></a>
<a id="trace-11375"></a>
<a id="trace-11382"></a>
<a id="trace-11394"></a>
<a id="trace-11400"></a>
<a id="trace-11415"></a>
<a id="trace-11423"></a>
<a id="trace-11433"></a>
<a id="trace-11443"></a>
<a id="trace-11513"></a>
<a id="trace-11523"></a>
<a id="trace-11534"></a>
<a id="trace-11540"></a>
<a id="trace-11550"></a>
<a id="trace-11557"></a>
<a id="trace-11570"></a>
<a id="trace-11578"></a>
<a id="trace-11589"></a>
<a id="trace-11596"></a>
<a id="trace-11671"></a>
<a id="trace-11679"></a>
<a id="trace-11688"></a>
<a id="trace-11697"></a>
<a id="trace-11707"></a>
<a id="trace-11713"></a>
<a id="trace-11727"></a>
<a id="trace-11735"></a>
<a id="trace-11752"></a>
<a id="trace-11825"></a>
<a id="trace-11830"></a>
<a id="trace-11839"></a>
<a id="trace-11849"></a>
<a id="trace-11859"></a>
<a id="trace-11868"></a>
<a id="trace-11880"></a>
<a id="trace-11887"></a>
<a id="trace-11898"></a>
<a id="trace-11906"></a>
<a id="trace-11980"></a>
<a id="trace-11986"></a>
<a id="trace-11995"></a>
<a id="trace-12001"></a>
<a id="trace-12010"></a>
<a id="trace-12020"></a>
<a id="trace-12030"></a>
<a id="trace-12040"></a>
<a id="trace-12053"></a>
<a id="trace-12060"></a>
<a id="trace-12133"></a>
<a id="trace-12152"></a>
<a id="trace-12158"></a>
<a id="trace-12168"></a>
<a id="trace-12173"></a>
<a id="trace-12184"></a>
<a id="trace-12194"></a>
<a id="trace-12202"></a>
<a id="trace-12211"></a>
<a id="trace-12283"></a>
<a id="trace-12290"></a>
<a id="trace-12304"></a>
<a id="trace-12311"></a>
<a id="trace-12323"></a>
<a id="trace-12331"></a>
<a id="trace-12343"></a>
<a id="trace-12350"></a>
<a id="trace-12360"></a>
<a id="trace-12369"></a>
<a id="trace-12439"></a>
<a id="trace-12457"></a>
<a id="trace-12462"></a>
<a id="trace-12473"></a>
<a id="trace-12483"></a>
<a id="trace-12496"></a>
<a id="trace-12504"></a>
<a id="trace-12516"></a>
<a id="trace-12522"></a>
<a id="trace-12593"></a>
<a id="trace-12602"></a>
<a id="trace-12610"></a>
<a id="trace-12619"></a>
<a id="trace-12628"></a>
<a id="trace-12634"></a>
<a id="trace-12647"></a>
<a id="trace-12655"></a>
<a id="trace-12668"></a>
<a id="trace-12676"></a>
<a id="trace-12750"></a>
<a id="trace-12757"></a>
<a id="trace-12768"></a>
<a id="trace-12777"></a>
<a id="trace-12794"></a>
<a id="trace-12805"></a>
<a id="trace-12812"></a>
<a id="trace-12823"></a>
<a id="trace-12830"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6015889861122742, 'next_transition': 232}.
<a id="trace-367"></a>
<a id="trace-411"></a>
<a id="trace-422"></a>
<a id="trace-444"></a>
<a id="trace-467"></a>
<a id="trace-487"></a>
<a id="trace-570"></a>
<a id="trace-578"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 367): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.279402219073262, 'next_transition': 411}.
<a id="trace-585"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 585): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250912527143685, 'next_transition': 696}.
<a id="trace-696"></a>
<a id="trace-711"></a>
<a id="trace-730"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 696): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 494. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6629127622760751, 'next_transition': 711}.
<a id="trace-126"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 126): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331098766869002, 'next_transition': 751}.
<a id="trace-733"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 733): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 733. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331098766869002, 'next_transition': 751}.
<a id="trace-734"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 734): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 734. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331098766869002, 'next_transition': 751}.
<a id="trace-751"></a>
<a id="trace-767"></a>
<a id="trace-780"></a>
<a id="trace-900"></a>
<a id="trace-931"></a>
<a id="trace-968"></a>
<a id="trace-998"></a>
<a id="trace-1014"></a>
<a id="trace-1021"></a>
<a id="trace-1106"></a>
<a id="trace-1126"></a>
- 12.70s–20.75s (×11), actor 5, squad 0 (trace 751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 734. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.890004404987105, 'next_transition': 767}.
<a id="trace-1136"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1136): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1029. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449934525181733, 'next_transition': 1318}.
<a id="trace-1137"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1137): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1029. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449934525181733, 'next_transition': 1318}.
<a id="trace-1318"></a>
<a id="trace-1343"></a>
<a id="trace-1352"></a>
<a id="trace-1367"></a>
<a id="trace-1375"></a>
<a id="trace-1397"></a>
<a id="trace-1495"></a>
<a id="trace-1508"></a>
<a id="trace-1531"></a>
<a id="trace-1545"></a>
<a id="trace-1557"></a>
<a id="trace-1566"></a>
<a id="trace-1580"></a>
<a id="trace-1592"></a>
- 21.75s–28.75s (×14), actor 5, squad 0 (trace 1318): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1031. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2993676657942843, 'next_transition': 1343}.
<a id="trace-1598"></a>
- 28.95s–28.95s (×1), actor 0, squad 0 (trace 1598): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1422. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8349857950889943, 'next_transition': 1737}.
<a id="trace-1737"></a>
<a id="trace-1789"></a>
- 30.25s–32.75s (×2), actor 5, squad 0 (trace 1737): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1666. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4962569872761204, 'next_transition': 1789}.
<a id="trace-1792"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1792): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 1664. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7729201130439022, 'next_transition': 2060}.
<a id="trace-1793"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1793): bounding overwatch. Knowledge: actor memory at 30.00s, trace 1664. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7729201130439022, 'next_transition': 2060}.
<a id="trace-1794"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1794): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 1664. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7729201130439022, 'next_transition': 2060}.
<a id="trace-2060"></a>
<a id="trace-2148"></a>
<a id="trace-2155"></a>
<a id="trace-2167"></a>
<a id="trace-2179"></a>
- 33.75s–36.75s (×5), actor 5, squad 0 (trace 2060): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1666. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6299894914202934, 'next_transition': 2148}.
<a id="trace-2183"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 2183): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 2083. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046323282453, 'next_transition': 2190}.
<a id="trace-2190"></a>
<a id="trace-2195"></a>
<a id="trace-2217"></a>
- 37.25s–38.75s (×3), actor 5, squad 0 (trace 2190): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2084. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600089031079749, 'next_transition': 2195}.
<a id="trace-2222"></a>
<a id="trace-2347"></a>
<a id="trace-2473"></a>
- 38.90s–39.15s (×3), actor 1, squad 0 (trace 2222): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2083. Next observer evidence: None.
<a id="trace-2603"></a>
- 39.25s–39.25s (×1), actor 5, squad 0 (trace 2603): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2084. Next observer evidence: None.
<a id="trace-2606"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 2606): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2083. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199777578898936, 'next_transition': 2753}.
<a id="trace-2753"></a>
<a id="trace-2880"></a>
- 39.75s–42.75s (×2), actor 5, squad 0 (trace 2753): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2084. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.850294996252032, 'next_transition': 2880}.
<a id="trace-2885"></a>
- 42.95s–42.95s (×1), actor 1, squad 0 (trace 2885): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 2763. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400190348795674, 'next_transition': 2946}.
<a id="trace-2886"></a>
- 42.95s–42.95s (×1), actor 1, squad 0 (trace 2886): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 2763. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400190348795674, 'next_transition': 2946}.
<a id="trace-2946"></a>
<a id="trace-2981"></a>
<a id="trace-3054"></a>
<a id="trace-3060"></a>
<a id="trace-3072"></a>
<a id="trace-3079"></a>
<a id="trace-3088"></a>
- 43.25s–47.25s (×7), actor 5, squad 0 (trace 2946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2764. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4411038760170234, 'next_transition': 2981}.
<a id="trace-3095"></a>
- 47.95s–47.95s (×1), actor 1, squad 0 (trace 3095): NeedSupport. Knowledge: actor memory at 45.00s, trace 2984. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6800045409656725, 'next_transition': 3121}.
<a id="trace-3121"></a>
<a id="trace-3131"></a>
<a id="trace-3136"></a>
<a id="trace-3210"></a>
<a id="trace-3216"></a>
<a id="trace-3223"></a>
<a id="trace-3229"></a>
<a id="trace-3242"></a>
<a id="trace-3254"></a>
<a id="trace-3265"></a>
- 48.75s–53.25s (×10), actor 5, squad 0 (trace 3121): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2985. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.711618124307578, 'next_transition': 3131}.
<a id="trace-392"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (events line 392): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3270"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 3270): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.473631 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 3270. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599612982716966, 'next_transition': 3288}.
<a id="trace-3271"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 3271): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.473631 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 3271. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599612982716966, 'next_transition': 3288}.
<a id="trace-3288"></a>
<a id="trace-3296"></a>
<a id="trace-3366"></a>
<a id="trace-3370"></a>
- 54.25s–55.75s (×4), actor 5, squad 0 (trace 3288): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.65s, trace 3271. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7016940930758523, 'next_transition': 3296}.
<a id="trace-3374"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3374): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3299. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001607610424064, 'next_transition': 3406}.
<a id="trace-3396"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3396): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3299. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001607610424064, 'next_transition': 3406}.
<a id="trace-3406"></a>
<a id="trace-3429"></a>
<a id="trace-3433"></a>
<a id="trace-3452"></a>
<a id="trace-3456"></a>
<a id="trace-3468"></a>
<a id="trace-3537"></a>
<a id="trace-3547"></a>
<a id="trace-3552"></a>
<a id="trace-3561"></a>
<a id="trace-3565"></a>
<a id="trace-3573"></a>
<a id="trace-3577"></a>
<a id="trace-3584"></a>
<a id="trace-3589"></a>
<a id="trace-3658"></a>
<a id="trace-3662"></a>
<a id="trace-3670"></a>
<a id="trace-3674"></a>
<a id="trace-3684"></a>
<a id="trace-3689"></a>
<a id="trace-3699"></a>
<a id="trace-3710"></a>
<a id="trace-3719"></a>
<a id="trace-3729"></a>
- 56.25s–69.75s (×25), actor 5, squad 0 (trace 3406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3300. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7123114281329237, 'next_transition': 3429}.
<a id="trace-3741"></a>
- 70.00s–70.00s (×1), actor 1, squad 0 (trace 3741): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 3734. Next observer evidence: None.
<a id="trace-3744"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 3744): MoveTactically. Knowledge: actor memory at 70.00s, trace 3734. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3831}.
<a id="trace-3745"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 3745): received platoon directive. Knowledge: actor memory at 70.00s, trace 3734. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3831}.
<a id="trace-3831"></a>
<a id="trace-3839"></a>
<a id="trace-3855"></a>
<a id="trace-3861"></a>
<a id="trace-3884"></a>
<a id="trace-3909"></a>
<a id="trace-3942"></a>
<a id="trace-4017"></a>
<a id="trace-4041"></a>
<a id="trace-4049"></a>
<a id="trace-4066"></a>
<a id="trace-4073"></a>
<a id="trace-4093"></a>
<a id="trace-4105"></a>
<a id="trace-4117"></a>
- 70.25s–79.25s (×15), actor 5, squad 0 (trace 3831): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 3735. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3839}.
<a id="trace-4124"></a>
- 79.65s–79.65s (×1), actor 1, squad 0 (trace 4124): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 3946. Next observer evidence: None.
<a id="trace-4126"></a>
<a id="trace-4202"></a>
<a id="trace-4215"></a>
<a id="trace-4235"></a>
<a id="trace-4251"></a>
<a id="trace-4257"></a>
<a id="trace-4290"></a>
<a id="trace-4299"></a>
<a id="trace-4373"></a>
<a id="trace-4381"></a>
<a id="trace-4393"></a>
<a id="trace-4409"></a>
<a id="trace-4418"></a>
<a id="trace-4429"></a>
<a id="trace-4436"></a>
<a id="trace-4447"></a>
<a id="trace-4453"></a>
<a id="trace-4527"></a>
<a id="trace-4535"></a>
<a id="trace-4547"></a>
<a id="trace-4553"></a>
<a id="trace-4564"></a>
<a id="trace-4577"></a>
<a id="trace-4587"></a>
<a id="trace-4611"></a>
<a id="trace-4689"></a>
<a id="trace-4700"></a>
<a id="trace-4707"></a>
<a id="trace-4718"></a>
<a id="trace-4736"></a>
<a id="trace-4759"></a>
<a id="trace-4769"></a>
<a id="trace-4841"></a>
<a id="trace-4856"></a>
<a id="trace-4872"></a>
<a id="trace-4879"></a>
<a id="trace-4891"></a>
<a id="trace-4899"></a>
<a id="trace-4909"></a>
<a id="trace-4920"></a>
<a id="trace-4993"></a>
<a id="trace-5003"></a>
<a id="trace-5013"></a>
<a id="trace-5020"></a>
<a id="trace-5031"></a>
<a id="trace-5037"></a>
<a id="trace-5050"></a>
<a id="trace-5058"></a>
<a id="trace-5069"></a>
<a id="trace-5075"></a>
<a id="trace-5148"></a>
<a id="trace-5157"></a>
<a id="trace-5166"></a>
<a id="trace-5177"></a>
<a id="trace-5187"></a>
<a id="trace-5193"></a>
<a id="trace-5206"></a>
<a id="trace-5216"></a>
<a id="trace-5228"></a>
<a id="trace-5235"></a>
<a id="trace-5308"></a>
<a id="trace-5314"></a>
<a id="trace-5323"></a>
<a id="trace-5340"></a>
<a id="trace-5361"></a>
<a id="trace-5370"></a>
<a id="trace-5381"></a>
<a id="trace-5387"></a>
<a id="trace-5465"></a>
<a id="trace-5472"></a>
<a id="trace-5482"></a>
<a id="trace-5488"></a>
<a id="trace-5497"></a>
<a id="trace-5506"></a>
- 79.75s–122.75s (×74), actor 5, squad 0 (trace 4126): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 3947. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600132035192826, 'next_transition': 4202}.
<a id="trace-849"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 849): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5528}.
<a id="trace-5509"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 5509): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.80s, trace 5509. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5528}.
<a id="trace-5528"></a>
<a id="trace-5539"></a>
<a id="trace-5620"></a>
<a id="trace-5626"></a>
<a id="trace-5637"></a>
<a id="trace-5657"></a>
<a id="trace-5663"></a>
<a id="trace-5674"></a>
<a id="trace-5684"></a>
<a id="trace-5693"></a>
<a id="trace-5702"></a>
<a id="trace-5775"></a>
<a id="trace-5781"></a>
<a id="trace-5800"></a>
<a id="trace-5812"></a>
<a id="trace-5818"></a>
<a id="trace-5830"></a>
<a id="trace-5928"></a>
<a id="trace-5937"></a>
<a id="trace-5946"></a>
<a id="trace-5953"></a>
<a id="trace-5963"></a>
<a id="trace-5971"></a>
<a id="trace-5992"></a>
<a id="trace-6009"></a>
<a id="trace-6089"></a>
<a id="trace-6100"></a>
<a id="trace-6118"></a>
<a id="trace-6136"></a>
<a id="trace-6156"></a>
<a id="trace-6241"></a>
<a id="trace-6259"></a>
<a id="trace-6267"></a>
<a id="trace-6280"></a>
<a id="trace-6291"></a>
<a id="trace-6298"></a>
<a id="trace-6309"></a>
<a id="trace-6317"></a>
<a id="trace-6391"></a>
- 123.75s–150.30s (×39), actor 5, squad 0 (trace 5528): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 5509. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5539}.
<a id="trace-1060"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (events line 1060): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6394"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (trace 6394): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 6394. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6417}.
<a id="trace-6395"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (trace 6395): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 6395. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6417}.
<a id="trace-6417"></a>
<a id="trace-6426"></a>
<a id="trace-6436"></a>
<a id="trace-6446"></a>
<a id="trace-6456"></a>
<a id="trace-6475"></a>
<a id="trace-6548"></a>
- 151.80s–155.30s (×7), actor 5, squad 0 (trace 6417): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.40s, trace 6395. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6426}.
<a id="trace-6553"></a>
- 155.75s–155.75s (×1), actor 1, squad 0 (trace 6553): traveling overwatch. Knowledge: actor memory at 155.00s, trace 6481. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6557}.
<a id="trace-6554"></a>
- 155.75s–155.75s (×1), actor 1, squad 0 (trace 6554): received platoon directive. Knowledge: actor memory at 155.00s, trace 6481. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6557}.
<a id="trace-6557"></a>
<a id="trace-6569"></a>
<a id="trace-6575"></a>
<a id="trace-6586"></a>
<a id="trace-6592"></a>
<a id="trace-6605"></a>
<a id="trace-6615"></a>
<a id="trace-6633"></a>
<a id="trace-6705"></a>
<a id="trace-6711"></a>
<a id="trace-6722"></a>
<a id="trace-6731"></a>
<a id="trace-6743"></a>
<a id="trace-6749"></a>
<a id="trace-6762"></a>
<a id="trace-6769"></a>
<a id="trace-6780"></a>
<a id="trace-6791"></a>
<a id="trace-6862"></a>
<a id="trace-6871"></a>
<a id="trace-6880"></a>
<a id="trace-6886"></a>
<a id="trace-6897"></a>
<a id="trace-6916"></a>
<a id="trace-6926"></a>
<a id="trace-6938"></a>
<a id="trace-7016"></a>
<a id="trace-7026"></a>
<a id="trace-7036"></a>
<a id="trace-7045"></a>
<a id="trace-7054"></a>
<a id="trace-7060"></a>
<a id="trace-7072"></a>
<a id="trace-7080"></a>
<a id="trace-7098"></a>
<a id="trace-7174"></a>
<a id="trace-7181"></a>
<a id="trace-7191"></a>
<a id="trace-7200"></a>
<a id="trace-7209"></a>
<a id="trace-7230"></a>
<a id="trace-7237"></a>
<a id="trace-7248"></a>
<a id="trace-7255"></a>
<a id="trace-7329"></a>
<a id="trace-7336"></a>
<a id="trace-7346"></a>
<a id="trace-7353"></a>
<a id="trace-7374"></a>
<a id="trace-7384"></a>
<a id="trace-7395"></a>
<a id="trace-7407"></a>
<a id="trace-7485"></a>
<a id="trace-7492"></a>
<a id="trace-7503"></a>
<a id="trace-7509"></a>
<a id="trace-7520"></a>
<a id="trace-7546"></a>
<a id="trace-7558"></a>
<a id="trace-7568"></a>
<a id="trace-7641"></a>
<a id="trace-7647"></a>
<a id="trace-7659"></a>
<a id="trace-7676"></a>
<a id="trace-7682"></a>
<a id="trace-7694"></a>
<a id="trace-7701"></a>
<a id="trace-7790"></a>
<a id="trace-7799"></a>
<a id="trace-7812"></a>
<a id="trace-7819"></a>
<a id="trace-7838"></a>
<a id="trace-7857"></a>
<a id="trace-7868"></a>
<a id="trace-7945"></a>
<a id="trace-7954"></a>
<a id="trace-7971"></a>
<a id="trace-7980"></a>
<a id="trace-7988"></a>
<a id="trace-8003"></a>
<a id="trace-8012"></a>
<a id="trace-8026"></a>
<a id="trace-8032"></a>
<a id="trace-8105"></a>
<a id="trace-8119"></a>
<a id="trace-8128"></a>
<a id="trace-8136"></a>
<a id="trace-8145"></a>
<a id="trace-8157"></a>
<a id="trace-8164"></a>
<a id="trace-8185"></a>
<a id="trace-8261"></a>
<a id="trace-8278"></a>
<a id="trace-8284"></a>
<a id="trace-8293"></a>
<a id="trace-8302"></a>
<a id="trace-8312"></a>
<a id="trace-8322"></a>
<a id="trace-8332"></a>
<a id="trace-8338"></a>
<a id="trace-8412"></a>
<a id="trace-8431"></a>
<a id="trace-8451"></a>
<a id="trace-8468"></a>
<a id="trace-8486"></a>
- 155.80s–219.30s (×105), actor 5, squad 0 (trace 6557): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 6482. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6569}.
<a id="trace-1585"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (events line 1585): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8497}.
<a id="trace-8490"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (trace 8490): renew committed intent (75 s lifetime). Knowledge: actor memory at 219.50s, trace 8490. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8497}.
<a id="trace-8497"></a>
<a id="trace-8569"></a>
<a id="trace-8584"></a>
<a id="trace-8591"></a>
<a id="trace-8609"></a>
<a id="trace-8622"></a>
<a id="trace-8644"></a>
<a id="trace-8653"></a>
<a id="trace-8724"></a>
<a id="trace-8733"></a>
<a id="trace-8742"></a>
<a id="trace-8757"></a>
<a id="trace-8764"></a>
<a id="trace-8777"></a>
<a id="trace-8796"></a>
<a id="trace-8802"></a>
<a id="trace-8875"></a>
<a id="trace-8890"></a>
<a id="trace-8898"></a>
<a id="trace-8907"></a>
<a id="trace-8916"></a>
<a id="trace-8922"></a>
<a id="trace-8934"></a>
<a id="trace-8942"></a>
<a id="trace-8954"></a>
<a id="trace-8960"></a>
<a id="trace-9033"></a>
<a id="trace-9049"></a>
<a id="trace-9060"></a>
<a id="trace-9072"></a>
<a id="trace-9092"></a>
<a id="trace-9099"></a>
<a id="trace-9110"></a>
<a id="trace-9117"></a>
<a id="trace-9191"></a>
<a id="trace-9197"></a>
<a id="trace-9207"></a>
<a id="trace-9222"></a>
<a id="trace-9232"></a>
<a id="trace-9243"></a>
<a id="trace-9256"></a>
<a id="trace-9268"></a>
<a id="trace-9274"></a>
<a id="trace-9364"></a>
<a id="trace-9370"></a>
<a id="trace-9385"></a>
<a id="trace-9396"></a>
<a id="trace-9407"></a>
<a id="trace-9425"></a>
<a id="trace-9500"></a>
<a id="trace-9525"></a>
<a id="trace-9541"></a>
<a id="trace-9553"></a>
<a id="trace-9560"></a>
<a id="trace-9570"></a>
<a id="trace-9579"></a>
<a id="trace-9659"></a>
<a id="trace-9669"></a>
<a id="trace-9687"></a>
<a id="trace-9710"></a>
<a id="trace-9717"></a>
<a id="trace-9728"></a>
<a id="trace-9813"></a>
<a id="trace-9821"></a>
<a id="trace-9839"></a>
<a id="trace-9858"></a>
<a id="trace-9868"></a>
<a id="trace-9880"></a>
<a id="trace-9889"></a>
<a id="trace-9963"></a>
<a id="trace-9969"></a>
<a id="trace-9986"></a>
<a id="trace-10002"></a>
<a id="trace-10013"></a>
<a id="trace-10031"></a>
<a id="trace-10039"></a>
<a id="trace-10116"></a>
<a id="trace-10122"></a>
<a id="trace-10138"></a>
<a id="trace-10149"></a>
<a id="trace-10159"></a>
<a id="trace-10169"></a>
<a id="trace-10179"></a>
<a id="trace-10189"></a>
<a id="trace-10195"></a>
<a id="trace-10269"></a>
<a id="trace-10276"></a>
<a id="trace-10288"></a>
<a id="trace-10296"></a>
<a id="trace-10306"></a>
<a id="trace-10313"></a>
<a id="trace-10324"></a>
<a id="trace-10334"></a>
<a id="trace-10346"></a>
<a id="trace-10427"></a>
<a id="trace-10433"></a>
<a id="trace-10443"></a>
<a id="trace-10451"></a>
<a id="trace-10462"></a>
<a id="trace-10469"></a>
<a id="trace-10483"></a>
<a id="trace-10490"></a>
<a id="trace-10500"></a>
<a id="trace-10510"></a>
<a id="trace-10581"></a>
<a id="trace-10594"></a>
<a id="trace-10608"></a>
<a id="trace-10618"></a>
<a id="trace-10625"></a>
<a id="trace-10639"></a>
- 219.80s–288.30s (×110), actor 5, squad 0 (trace 8497): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 219.50s, trace 8490. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8569}.
<a id="trace-2109"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (events line 2109): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10659}.
<a id="trace-10643"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 10643): renew committed intent (75 s lifetime). Knowledge: actor memory at 288.50s, trace 10643. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10659}.
<a id="trace-10659"></a>
<a id="trace-10738"></a>
<a id="trace-10748"></a>
<a id="trace-10756"></a>
<a id="trace-10765"></a>
<a id="trace-10783"></a>
<a id="trace-10795"></a>
<a id="trace-10803"></a>
<a id="trace-10820"></a>
<a id="trace-10899"></a>
<a id="trace-10909"></a>
<a id="trace-10920"></a>
<a id="trace-10928"></a>
<a id="trace-10938"></a>
<a id="trace-10949"></a>
<a id="trace-10967"></a>
<a id="trace-11055"></a>
<a id="trace-11065"></a>
<a id="trace-11072"></a>
<a id="trace-11081"></a>
<a id="trace-11091"></a>
<a id="trace-11112"></a>
<a id="trace-11122"></a>
<a id="trace-11128"></a>
<a id="trace-11202"></a>
<a id="trace-11219"></a>
<a id="trace-11228"></a>
<a id="trace-11239"></a>
<a id="trace-11245"></a>
<a id="trace-11266"></a>
<a id="trace-11276"></a>
<a id="trace-11358"></a>
<a id="trace-11373"></a>
<a id="trace-11380"></a>
<a id="trace-11392"></a>
<a id="trace-11398"></a>
<a id="trace-11413"></a>
<a id="trace-11421"></a>
<a id="trace-11431"></a>
<a id="trace-11441"></a>
<a id="trace-11521"></a>
<a id="trace-11532"></a>
<a id="trace-11538"></a>
<a id="trace-11548"></a>
<a id="trace-11555"></a>
<a id="trace-11568"></a>
<a id="trace-11576"></a>
<a id="trace-11587"></a>
<a id="trace-11594"></a>
<a id="trace-11669"></a>
<a id="trace-11686"></a>
<a id="trace-11695"></a>
<a id="trace-11705"></a>
<a id="trace-11711"></a>
<a id="trace-11725"></a>
<a id="trace-11733"></a>
<a id="trace-11745"></a>
<a id="trace-11750"></a>
<a id="trace-11837"></a>
<a id="trace-11847"></a>
<a id="trace-11857"></a>
<a id="trace-11878"></a>
<a id="trace-11885"></a>
<a id="trace-11978"></a>
<a id="trace-11984"></a>
<a id="trace-11999"></a>
<a id="trace-12008"></a>
<a id="trace-12018"></a>
<a id="trace-12028"></a>
<a id="trace-12038"></a>
<a id="trace-12051"></a>
<a id="trace-12131"></a>
<a id="trace-12150"></a>
<a id="trace-12156"></a>
<a id="trace-12166"></a>
<a id="trace-12182"></a>
<a id="trace-12192"></a>
<a id="trace-12281"></a>
<a id="trace-12288"></a>
<a id="trace-12302"></a>
<a id="trace-12309"></a>
<a id="trace-12321"></a>
<a id="trace-12329"></a>
<a id="trace-12341"></a>
<a id="trace-12348"></a>
<a id="trace-12358"></a>
<a id="trace-12367"></a>
<a id="trace-12446"></a>
<a id="trace-12455"></a>
<a id="trace-12471"></a>
<a id="trace-12481"></a>
<a id="trace-12502"></a>
<a id="trace-12520"></a>
<a id="trace-12600"></a>
<a id="trace-12608"></a>
<a id="trace-12617"></a>
<a id="trace-12626"></a>
<a id="trace-12632"></a>
<a id="trace-12645"></a>
<a id="trace-12653"></a>
<a id="trace-12674"></a>
<a id="trace-12748"></a>
<a id="trace-12755"></a>
<a id="trace-12766"></a>
<a id="trace-12775"></a>
- 289.30s–356.80s (×105), actor 5, squad 0 (trace 10659): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.50s, trace 10643. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10738}.
<a id="trace-2634"></a>
- 357.50s–357.50s (×1), actor 5, squad 0 (events line 2634): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12785"></a>
- 357.50s–357.50s (×1), actor 5, squad 0 (trace 12785): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.50s, trace 12785. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12792"></a>
<a id="trace-12803"></a>
<a id="trace-12810"></a>
<a id="trace-12821"></a>
<a id="trace-12828"></a>
- 357.80s–359.80s (×5), actor 5, squad 0 (trace 12792): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 357.50s, trace 12785. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12803}.

## Net delivery

59 matched order/radio deliveries; 229 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.153s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1668: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1669: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1670: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1671: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2086: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2087: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2088: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2089: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2763: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2766: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2767: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2768: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2769: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2984: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2986: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2987: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2988: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2989: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2990: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3139: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3140: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3141: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3142: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3143: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3144: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3145: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 3270: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 3271: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3299: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3300: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3301: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3302: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3303: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3304: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3305: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3471: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3472: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3473: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3474: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3475: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3476: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3477: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3592: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3593: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3594: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3595: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3596: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3597: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3598: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3734: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3735: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3736: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3737: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3738: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3739: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3740: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3946: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3947: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3948: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3949: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3950: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3951: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3952: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4131: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4132: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4133: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4134: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4135: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4136: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4137: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4303: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4304: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4305: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4306: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4307: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4308: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4309: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4458: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4459: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4460: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4461: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4462: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4463: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4464: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4617: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4618: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4619: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4620: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4621: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4622: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4623: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4773: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4774: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4775: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4776: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4777: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4778: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4779: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 4923: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 4924: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 4925: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 4926: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 4927: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 4928: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 4929: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5080: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5081: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5082: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5083: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5084: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5085: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5086: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 5239: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5240: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5241: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5242: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5243: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5244: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5245: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 5393: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5394: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 5395: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5396: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5397: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5398: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5399: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 5509: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 5552: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 5553: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 5554: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 5555: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 5556: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 5557: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 5558: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5707: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5708: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5709: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5710: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5711: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5712: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5713: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 5860: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 5861: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 5862: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 5863: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 5864: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 5865: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 5866: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6014: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6015: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6016: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6017: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6018: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6019: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6020: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 6167: estimate 1.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6168: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6169: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6170: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6171: estimate 1.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6172: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6173: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 6321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 6323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 6324: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6325: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6326: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6327: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 6394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 6395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 6481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 6483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 6484: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6485: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6486: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6487: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 6949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 6950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 6951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 6952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 6953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 6954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 6955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 7259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 7418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 7420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 7572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 7878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 7880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 8345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 8490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 8501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 8503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 8964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 8966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 9430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 9582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 9893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 10359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 10513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 10643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 10979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 10981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 11444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 11601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 11908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 12525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.50s leader 5, trace 12785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 12832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
