# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/25/107/good-azure/battle-107-1789674217474983493`

## Battle summary

**Ember** · 360 s · 100 shots.

### Turning points

- 25.9s, squad 4: contact (events line 273). First recorded contact.
- 43.0s, squad 0: withdrawal ([trace 2899](#trace-2899)). 70.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 48.0s, squad 0: help call ([trace 3105](#trace-3105)). No completion observed before termination.
- 88.7s, squad 0: withdrawal ([trace 4338](#trace-4338)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 15 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 85 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 33.0s, squad 0 chose took cover and returned fire ([trace 1792](#trace-1792)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
- 42.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.289804 retreat threshold=0.500000 initiative=delegated ([trace 2875](#trace-2875)). Following evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6173688070401143, 'next_transition': 2882}.

### Communication

68 matched deliveries (mean 0.10s, max 1.50s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.95s, squad 4, contact, evidence events line 273: First recorded contact; .
- 42.95s, squad 0, withdrawal, evidence 2899: BreakContact: believed ratio at least two without superiority; 70.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.95s, squad 0, help call, evidence 3105: NeedSupport; No completion observed before termination.
- 88.65s, squad 0, withdrawal, evidence 4338: Withdraw to received rally; No completion observed before termination.

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
<a id="trace-371"></a>
<a id="trace-390"></a>
<a id="trace-398"></a>
<a id="trace-413"></a>
<a id="trace-423"></a>
<a id="trace-444"></a>
<a id="trace-467"></a>
<a id="trace-480"></a>
<a id="trace-487"></a>
<a id="trace-570"></a>
<a id="trace-578"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300137767541186, 'next_transition': 290}.
<a id="trace-400"></a>
<a id="trace-446"></a>
<a id="trace-469"></a>
<a id="trace-489"></a>
<a id="trace-572"></a>
<a id="trace-580"></a>
<a id="trace-698"></a>
<a id="trace-731"></a>
<a id="trace-800"></a>
<a id="trace-813"></a>
<a id="trace-906"></a>
<a id="trace-955"></a>
<a id="trace-965"></a>
<a id="trace-986"></a>
<a id="trace-996"></a>
<a id="trace-1018"></a>
<a id="trace-1103"></a>
<a id="trace-1123"></a>
<a id="trace-1315"></a>
<a id="trace-1340"></a>
<a id="trace-1349"></a>
<a id="trace-1364"></a>
<a id="trace-1372"></a>
<a id="trace-1394"></a>
<a id="trace-1413"></a>
<a id="trace-1493"></a>
<a id="trace-1506"></a>
<a id="trace-1553"></a>
<a id="trace-1562"></a>
<a id="trace-1576"></a>
<a id="trace-1588"></a>
<a id="trace-1653"></a>
<a id="trace-1659"></a>
<a id="trace-1735"></a>
<a id="trace-1739"></a>
<a id="trace-1759"></a>
<a id="trace-1764"></a>
<a id="trace-1776"></a>
<a id="trace-1791"></a>
<a id="trace-2050"></a>
<a id="trace-2063"></a>
<a id="trace-2075"></a>
<a id="trace-2158"></a>
<a id="trace-2170"></a>
<a id="trace-2182"></a>
<a id="trace-2193"></a>
<a id="trace-2210"></a>
<a id="trace-2220"></a>
<a id="trace-2606"></a>
<a id="trace-2839"></a>
<a id="trace-2859"></a>
<a id="trace-2872"></a>
<a id="trace-2884"></a>
<a id="trace-2896"></a>
<a id="trace-2961"></a>
<a id="trace-2970"></a>
<a id="trace-2982"></a>
<a id="trace-3066"></a>
<a id="trace-3072"></a>
<a id="trace-3085"></a>
<a id="trace-3091"></a>
<a id="trace-3099"></a>
<a id="trace-3104"></a>
<a id="trace-3136"></a>
<a id="trace-3144"></a>
<a id="trace-3226"></a>
<a id="trace-3231"></a>
<a id="trace-3239"></a>
<a id="trace-3246"></a>
<a id="trace-3257"></a>
<a id="trace-3269"></a>
<a id="trace-3280"></a>
<a id="trace-3286"></a>
<a id="trace-3305"></a>
<a id="trace-3375"></a>
<a id="trace-3379"></a>
<a id="trace-3424"></a>
<a id="trace-3439"></a>
<a id="trace-3444"></a>
<a id="trace-3468"></a>
<a id="trace-3476"></a>
<a id="trace-3482"></a>
<a id="trace-3555"></a>
<a id="trace-3562"></a>
<a id="trace-3566"></a>
<a id="trace-3582"></a>
<a id="trace-3590"></a>
<a id="trace-3596"></a>
<a id="trace-3603"></a>
<a id="trace-3676"></a>
<a id="trace-3681"></a>
<a id="trace-3691"></a>
<a id="trace-3696"></a>
<a id="trace-3705"></a>
<a id="trace-3712"></a>
<a id="trace-3723"></a>
<a id="trace-3730"></a>
<a id="trace-3734"></a>
<a id="trace-3832"></a>
<a id="trace-3840"></a>
<a id="trace-3853"></a>
<a id="trace-3857"></a>
<a id="trace-3875"></a>
<a id="trace-3880"></a>
<a id="trace-3900"></a>
<a id="trace-3909"></a>
<a id="trace-3920"></a>
<a id="trace-3992"></a>
<a id="trace-3997"></a>
<a id="trace-4015"></a>
<a id="trace-4032"></a>
<a id="trace-4047"></a>
<a id="trace-4059"></a>
<a id="trace-4072"></a>
<a id="trace-4168"></a>
<a id="trace-4178"></a>
<a id="trace-4185"></a>
<a id="trace-4192"></a>
<a id="trace-4201"></a>
<a id="trace-4212"></a>
<a id="trace-4283"></a>
<a id="trace-4288"></a>
<a id="trace-4296"></a>
<a id="trace-4305"></a>
<a id="trace-4316"></a>
<a id="trace-4396"></a>
<a id="trace-4407"></a>
<a id="trace-4490"></a>
<a id="trace-4511"></a>
<a id="trace-4518"></a>
<a id="trace-4532"></a>
<a id="trace-4544"></a>
<a id="trace-4558"></a>
<a id="trace-4569"></a>
<a id="trace-4582"></a>
<a id="trace-4592"></a>
<a id="trace-4676"></a>
<a id="trace-4695"></a>
<a id="trace-4707"></a>
<a id="trace-4724"></a>
<a id="trace-4732"></a>
<a id="trace-4744"></a>
<a id="trace-4756"></a>
<a id="trace-4768"></a>
<a id="trace-4777"></a>
<a id="trace-4866"></a>
<a id="trace-4922"></a>
<a id="trace-4935"></a>
<a id="trace-4942"></a>
<a id="trace-4953"></a>
<a id="trace-5041"></a>
<a id="trace-5054"></a>
<a id="trace-5060"></a>
<a id="trace-5070"></a>
<a id="trace-5077"></a>
<a id="trace-5089"></a>
<a id="trace-5097"></a>
<a id="trace-5111"></a>
<a id="trace-5117"></a>
<a id="trace-5219"></a>
<a id="trace-5228"></a>
<a id="trace-5234"></a>
<a id="trace-5244"></a>
<a id="trace-5250"></a>
<a id="trace-5263"></a>
<a id="trace-5343"></a>
<a id="trace-5371"></a>
<a id="trace-5382"></a>
<a id="trace-5392"></a>
<a id="trace-5401"></a>
<a id="trace-5407"></a>
<a id="trace-5419"></a>
<a id="trace-5425"></a>
<a id="trace-5499"></a>
<a id="trace-5506"></a>
<a id="trace-5524"></a>
<a id="trace-5533"></a>
<a id="trace-5544"></a>
<a id="trace-5554"></a>
<a id="trace-5566"></a>
<a id="trace-5578"></a>
<a id="trace-5584"></a>
<a id="trace-5657"></a>
<a id="trace-5663"></a>
<a id="trace-5676"></a>
<a id="trace-5683"></a>
<a id="trace-5693"></a>
<a id="trace-5708"></a>
<a id="trace-5728"></a>
<a id="trace-5739"></a>
<a id="trace-5814"></a>
<a id="trace-5821"></a>
<a id="trace-5833"></a>
<a id="trace-5840"></a>
<a id="trace-5851"></a>
<a id="trace-5857"></a>
<a id="trace-5867"></a>
<a id="trace-5873"></a>
<a id="trace-5884"></a>
<a id="trace-5964"></a>
<a id="trace-6002"></a>
<a id="trace-6011"></a>
<a id="trace-6039"></a>
<a id="trace-6045"></a>
<a id="trace-6125"></a>
<a id="trace-6144"></a>
<a id="trace-6154"></a>
<a id="trace-6160"></a>
<a id="trace-6173"></a>
<a id="trace-6192"></a>
<a id="trace-6201"></a>
<a id="trace-6275"></a>
<a id="trace-6281"></a>
<a id="trace-6292"></a>
<a id="trace-6301"></a>
<a id="trace-6311"></a>
<a id="trace-6329"></a>
<a id="trace-6335"></a>
<a id="trace-6348"></a>
<a id="trace-6357"></a>
<a id="trace-6432"></a>
<a id="trace-6452"></a>
<a id="trace-6459"></a>
<a id="trace-6468"></a>
<a id="trace-6477"></a>
<a id="trace-6493"></a>
<a id="trace-6510"></a>
<a id="trace-6583"></a>
<a id="trace-6591"></a>
<a id="trace-6606"></a>
<a id="trace-6613"></a>
<a id="trace-6623"></a>
<a id="trace-6630"></a>
<a id="trace-6642"></a>
<a id="trace-6651"></a>
<a id="trace-6661"></a>
<a id="trace-6741"></a>
<a id="trace-6747"></a>
<a id="trace-6760"></a>
<a id="trace-6767"></a>
<a id="trace-6779"></a>
<a id="trace-6787"></a>
<a id="trace-6798"></a>
<a id="trace-6804"></a>
<a id="trace-6815"></a>
<a id="trace-6825"></a>
<a id="trace-6898"></a>
<a id="trace-6918"></a>
<a id="trace-6924"></a>
<a id="trace-6941"></a>
<a id="trace-6952"></a>
<a id="trace-6959"></a>
<a id="trace-6973"></a>
<a id="trace-6979"></a>
<a id="trace-7051"></a>
<a id="trace-7061"></a>
<a id="trace-7071"></a>
<a id="trace-7080"></a>
<a id="trace-7092"></a>
<a id="trace-7099"></a>
<a id="trace-7109"></a>
<a id="trace-7116"></a>
<a id="trace-7130"></a>
<a id="trace-7136"></a>
<a id="trace-7215"></a>
<a id="trace-7228"></a>
<a id="trace-7237"></a>
<a id="trace-7245"></a>
<a id="trace-7255"></a>
<a id="trace-7270"></a>
<a id="trace-7291"></a>
<a id="trace-7365"></a>
<a id="trace-7371"></a>
<a id="trace-7384"></a>
<a id="trace-7399"></a>
<a id="trace-7410"></a>
<a id="trace-7418"></a>
<a id="trace-7427"></a>
<a id="trace-7439"></a>
<a id="trace-7445"></a>
<a id="trace-7519"></a>
<a id="trace-7528"></a>
<a id="trace-7542"></a>
<a id="trace-7548"></a>
<a id="trace-7558"></a>
<a id="trace-7565"></a>
<a id="trace-7574"></a>
<a id="trace-7595"></a>
<a id="trace-7604"></a>
<a id="trace-7676"></a>
<a id="trace-7682"></a>
<a id="trace-7695"></a>
<a id="trace-7702"></a>
<a id="trace-7714"></a>
<a id="trace-7722"></a>
<a id="trace-7732"></a>
<a id="trace-7739"></a>
<a id="trace-7751"></a>
<a id="trace-7760"></a>
<a id="trace-7832"></a>
<a id="trace-7843"></a>
<a id="trace-7854"></a>
<a id="trace-7869"></a>
<a id="trace-7876"></a>
<a id="trace-7904"></a>
<a id="trace-7911"></a>
<a id="trace-7986"></a>
<a id="trace-7996"></a>
<a id="trace-8006"></a>
<a id="trace-8016"></a>
<a id="trace-8027"></a>
<a id="trace-8033"></a>
<a id="trace-8043"></a>
<a id="trace-8050"></a>
<a id="trace-8063"></a>
<a id="trace-8142"></a>
<a id="trace-8148"></a>
<a id="trace-8159"></a>
<a id="trace-8172"></a>
<a id="trace-8200"></a>
<a id="trace-8206"></a>
<a id="trace-8220"></a>
<a id="trace-8227"></a>
<a id="trace-8301"></a>
<a id="trace-8307"></a>
<a id="trace-8319"></a>
<a id="trace-8326"></a>
<a id="trace-8335"></a>
<a id="trace-8354"></a>
<a id="trace-8364"></a>
<a id="trace-8376"></a>
<a id="trace-8382"></a>
<a id="trace-8456"></a>
<a id="trace-8477"></a>
<a id="trace-8483"></a>
<a id="trace-8493"></a>
<a id="trace-8507"></a>
<a id="trace-8517"></a>
<a id="trace-8527"></a>
<a id="trace-8537"></a>
<a id="trace-8611"></a>
<a id="trace-8630"></a>
<a id="trace-8650"></a>
<a id="trace-8656"></a>
<a id="trace-8671"></a>
<a id="trace-8690"></a>
<a id="trace-8761"></a>
<a id="trace-8770"></a>
<a id="trace-8798"></a>
<a id="trace-8808"></a>
<a id="trace-8820"></a>
<a id="trace-8827"></a>
<a id="trace-8839"></a>
<a id="trace-8845"></a>
<a id="trace-8925"></a>
<a id="trace-8935"></a>
<a id="trace-8944"></a>
<a id="trace-8953"></a>
<a id="trace-8960"></a>
<a id="trace-8970"></a>
<a id="trace-8994"></a>
<a id="trace-9001"></a>
<a id="trace-9076"></a>
<a id="trace-9082"></a>
<a id="trace-9093"></a>
<a id="trace-9102"></a>
<a id="trace-9110"></a>
<a id="trace-9119"></a>
<a id="trace-9128"></a>
<a id="trace-9134"></a>
<a id="trace-9147"></a>
<a id="trace-9228"></a>
<a id="trace-9237"></a>
<a id="trace-9251"></a>
<a id="trace-9257"></a>
<a id="trace-9283"></a>
<a id="trace-9292"></a>
<a id="trace-9303"></a>
<a id="trace-9309"></a>
<a id="trace-9382"></a>
<a id="trace-9389"></a>
<a id="trace-9403"></a>
<a id="trace-9409"></a>
<a id="trace-9420"></a>
<a id="trace-9427"></a>
<a id="trace-9439"></a>
<a id="trace-9451"></a>
<a id="trace-9469"></a>
<a id="trace-9541"></a>
<a id="trace-9547"></a>
<a id="trace-9565"></a>
<a id="trace-9576"></a>
<a id="trace-9582"></a>
<a id="trace-9599"></a>
<a id="trace-9610"></a>
<a id="trace-9695"></a>
<a id="trace-9705"></a>
<a id="trace-9716"></a>
<a id="trace-9722"></a>
<a id="trace-9732"></a>
<a id="trace-9754"></a>
<a id="trace-9771"></a>
<a id="trace-9844"></a>
<a id="trace-9854"></a>
<a id="trace-9879"></a>
<a id="trace-9893"></a>
<a id="trace-9903"></a>
<a id="trace-9910"></a>
<a id="trace-9928"></a>
<a id="trace-10001"></a>
<a id="trace-10027"></a>
<a id="trace-10035"></a>
<a id="trace-10066"></a>
<a id="trace-10078"></a>
<a id="trace-10085"></a>
<a id="trace-10159"></a>
<a id="trace-10165"></a>
<a id="trace-10182"></a>
<a id="trace-10191"></a>
<a id="trace-10208"></a>
<a id="trace-10229"></a>
<a id="trace-10310"></a>
<a id="trace-10319"></a>
<a id="trace-10338"></a>
<a id="trace-10348"></a>
<a id="trace-10354"></a>
<a id="trace-10371"></a>
<a id="trace-10389"></a>
<a id="trace-10467"></a>
<a id="trace-10481"></a>
<a id="trace-10490"></a>
<a id="trace-10501"></a>
<a id="trace-10520"></a>
<a id="trace-10536"></a>
<a id="trace-10545"></a>
<a id="trace-10616"></a>
<a id="trace-10635"></a>
<a id="trace-10651"></a>
<a id="trace-10659"></a>
<a id="trace-10673"></a>
<a id="trace-10679"></a>
<a id="trace-10694"></a>
<a id="trace-10701"></a>
<a id="trace-10773"></a>
<a id="trace-10782"></a>
<a id="trace-10792"></a>
<a id="trace-10801"></a>
<a id="trace-10810"></a>
<a id="trace-10816"></a>
<a id="trace-10827"></a>
<a id="trace-10834"></a>
<a id="trace-10847"></a>
<a id="trace-10856"></a>
<a id="trace-10929"></a>
<a id="trace-10949"></a>
<a id="trace-10958"></a>
<a id="trace-10966"></a>
<a id="trace-10975"></a>
<a id="trace-10984"></a>
<a id="trace-10990"></a>
<a id="trace-11002"></a>
<a id="trace-11083"></a>
<a id="trace-11117"></a>
<a id="trace-11127"></a>
<a id="trace-11137"></a>
<a id="trace-11157"></a>
<a id="trace-11163"></a>
<a id="trace-11236"></a>
<a id="trace-11256"></a>
<a id="trace-11262"></a>
<a id="trace-11273"></a>
<a id="trace-11279"></a>
<a id="trace-11308"></a>
<a id="trace-11317"></a>
<a id="trace-11398"></a>
<a id="trace-11410"></a>
<a id="trace-11417"></a>
<a id="trace-11433"></a>
<a id="trace-11444"></a>
<a id="trace-11450"></a>
<a id="trace-11462"></a>
<a id="trace-11473"></a>
<a id="trace-11544"></a>
<a id="trace-11554"></a>
<a id="trace-11565"></a>
<a id="trace-11572"></a>
<a id="trace-11585"></a>
<a id="trace-11602"></a>
<a id="trace-11625"></a>
<a id="trace-11697"></a>
<a id="trace-11707"></a>
<a id="trace-11719"></a>
<a id="trace-11728"></a>
<a id="trace-11743"></a>
<a id="trace-11754"></a>
<a id="trace-11763"></a>
<a id="trace-11782"></a>
<a id="trace-11860"></a>
<a id="trace-11888"></a>
<a id="trace-11899"></a>
<a id="trace-11910"></a>
<a id="trace-11916"></a>
<a id="trace-11935"></a>
<a id="trace-12010"></a>
<a id="trace-12018"></a>
<a id="trace-12036"></a>
<a id="trace-12045"></a>
<a id="trace-12055"></a>
<a id="trace-12063"></a>
<a id="trace-12073"></a>
<a id="trace-12086"></a>
<a id="trace-12164"></a>
<a id="trace-12183"></a>
<a id="trace-12190"></a>
<a id="trace-12217"></a>
<a id="trace-12226"></a>
<a id="trace-12237"></a>
<a id="trace-12318"></a>
<a id="trace-12324"></a>
<a id="trace-12338"></a>
<a id="trace-12345"></a>
<a id="trace-12356"></a>
<a id="trace-12372"></a>
<a id="trace-12378"></a>
<a id="trace-12389"></a>
<a id="trace-12402"></a>
<a id="trace-12473"></a>
<a id="trace-12493"></a>
<a id="trace-12499"></a>
<a id="trace-12518"></a>
<a id="trace-12529"></a>
<a id="trace-12546"></a>
<a id="trace-12553"></a>
<a id="trace-12625"></a>
<a id="trace-12635"></a>
<a id="trace-12647"></a>
<a id="trace-12657"></a>
<a id="trace-12666"></a>
<a id="trace-12673"></a>
<a id="trace-12683"></a>
<a id="trace-12705"></a>
<a id="trace-12783"></a>
<a id="trace-12789"></a>
<a id="trace-12800"></a>
<a id="trace-12836"></a>
<a id="trace-12842"></a>
<a id="trace-12856"></a>
<a id="trace-12863"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 400): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2617854207020475, 'next_transition': 446}.
<a id="trace-585"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 585): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250912527143685, 'next_transition': 696}.
<a id="trace-696"></a>
<a id="trace-711"></a>
<a id="trace-729"></a>
<a id="trace-747"></a>
<a id="trace-762"></a>
<a id="trace-774"></a>
<a id="trace-798"></a>
<a id="trace-811"></a>
<a id="trace-895"></a>
<a id="trace-904"></a>
<a id="trace-926"></a>
<a id="trace-940"></a>
<a id="trace-953"></a>
<a id="trace-963"></a>
<a id="trace-984"></a>
<a id="trace-994"></a>
<a id="trace-1010"></a>
<a id="trace-1016"></a>
<a id="trace-1101"></a>
<a id="trace-1121"></a>
- 11.20s–20.75s (×20), actor 5, squad 0 (trace 696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 494. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6629127622760751, 'next_transition': 711}.
<a id="trace-1131"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1131): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1024. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499794318631724, 'next_transition': 1300}.
<a id="trace-1132"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1132): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1024. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499794318631724, 'next_transition': 1300}.
<a id="trace-1300"></a>
<a id="trace-1313"></a>
<a id="trace-1338"></a>
<a id="trace-1347"></a>
<a id="trace-1362"></a>
<a id="trace-1370"></a>
<a id="trace-1392"></a>
<a id="trace-1411"></a>
<a id="trace-1491"></a>
<a id="trace-1504"></a>
<a id="trace-1527"></a>
<a id="trace-1540"></a>
<a id="trace-1551"></a>
<a id="trace-1560"></a>
<a id="trace-1574"></a>
<a id="trace-1586"></a>
- 21.25s–28.75s (×16), actor 5, squad 0 (trace 1300): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1026. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299955093450086, 'next_transition': 1313}.
<a id="trace-1592"></a>
- 28.95s–28.95s (×1), actor 0, squad 0 (trace 1592): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1418. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449798049988889, 'next_transition': 1651}.
<a id="trace-1651"></a>
<a id="trace-1657"></a>
<a id="trace-1733"></a>
<a id="trace-1737"></a>
<a id="trace-1757"></a>
<a id="trace-1762"></a>
<a id="trace-1774"></a>
<a id="trace-1789"></a>
- 29.25s–32.75s (×8), actor 5, squad 0 (trace 1651): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1420. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449973369934865, 'next_transition': 1657}.
<a id="trace-1792"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1792): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 1660. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630000110303599, 'next_transition': 2048}.
<a id="trace-1793"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1793): bounding overwatch. Knowledge: actor memory at 30.00s, trace 1660. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630000110303599, 'next_transition': 2048}.
<a id="trace-1794"></a>
- 32.95s–32.95s (×1), actor 0, squad 0 (trace 1794): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 1660. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630000110303599, 'next_transition': 2048}.
<a id="trace-2048"></a>
<a id="trace-2061"></a>
<a id="trace-2073"></a>
<a id="trace-2083"></a>
<a id="trace-2150"></a>
<a id="trace-2156"></a>
<a id="trace-2168"></a>
<a id="trace-2180"></a>
- 33.25s–36.75s (×8), actor 5, squad 0 (trace 2048): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1662. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14292000292803608, 'next_transition': 2061}.
<a id="trace-2184"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 2184): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 2085. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046323282453, 'next_transition': 2191}.
<a id="trace-2191"></a>
<a id="trace-2196"></a>
<a id="trace-2208"></a>
<a id="trace-2218"></a>
- 37.25s–38.75s (×4), actor 5, squad 0 (trace 2191): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2086. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600089031079749, 'next_transition': 2196}.
<a id="trace-2223"></a>
<a id="trace-2348"></a>
<a id="trace-2474"></a>
- 38.90s–39.15s (×3), actor 1, squad 0 (trace 2223): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2085. Next observer evidence: None.
<a id="trace-2604"></a>
- 39.25s–39.25s (×1), actor 5, squad 0 (trace 2604): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2086. Next observer evidence: None.
<a id="trace-2607"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 2607): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2085. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199777578898936, 'next_transition': 2754}.
<a id="trace-2754"></a>
<a id="trace-2837"></a>
<a id="trace-2847"></a>
<a id="trace-2857"></a>
<a id="trace-2870"></a>
- 39.75s–41.75s (×5), actor 5, squad 0 (trace 2754): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2086. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.605492501917057, 'next_transition': 2837}.
<a id="trace-2874"></a>
- 42.05s–42.05s (×1), actor 5, squad 0 (trace 2874): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 42.05s, trace 2874. Next observer evidence: None.
<a id="trace-352"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 352): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2875"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 2875): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.289804 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 2875. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6173688070401143, 'next_transition': 2882}.
<a id="trace-2876"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 2876): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.289804 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 2876. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6173688070401143, 'next_transition': 2882}.
<a id="trace-2882"></a>
<a id="trace-2894"></a>
- 42.25s–42.75s (×2), actor 5, squad 0 (trace 2882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 2876. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2393946659821902, 'next_transition': 2894}.
<a id="trace-2899"></a>
- 42.95s–42.95s (×1), actor 1, squad 0 (trace 2899): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 2763. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399872465912642, 'next_transition': 2959}.
<a id="trace-2900"></a>
- 42.95s–42.95s (×1), actor 1, squad 0 (trace 2900): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 2763. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399872465912642, 'next_transition': 2959}.
<a id="trace-2959"></a>
<a id="trace-2968"></a>
<a id="trace-2980"></a>
<a id="trace-2993"></a>
<a id="trace-3064"></a>
<a id="trace-3070"></a>
<a id="trace-3083"></a>
<a id="trace-3089"></a>
<a id="trace-3097"></a>
<a id="trace-3102"></a>
- 43.25s–47.75s (×10), actor 5, squad 0 (trace 2959): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 2876. Next observer evidence: {'until': 43.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8400186908718043, 'next_transition': 2968}.
<a id="trace-3105"></a>
- 47.95s–47.95s (×1), actor 1, squad 0 (trace 3105): NeedSupport. Knowledge: actor memory at 45.00s, trace 2995. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399981974449284, 'next_transition': 3121}.
<a id="trace-3121"></a>
<a id="trace-3134"></a>
<a id="trace-3142"></a>
<a id="trace-3149"></a>
<a id="trace-3224"></a>
<a id="trace-3229"></a>
<a id="trace-3237"></a>
<a id="trace-3244"></a>
<a id="trace-3255"></a>
<a id="trace-3267"></a>
<a id="trace-3278"></a>
<a id="trace-3284"></a>
<a id="trace-3298"></a>
<a id="trace-3303"></a>
<a id="trace-3373"></a>
<a id="trace-3377"></a>
- 48.25s–55.75s (×16), actor 5, squad 0 (trace 3121): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2996. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8189758712454496, 'next_transition': 3134}.
<a id="trace-3381"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3381): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3306. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3413}.
<a id="trace-3403"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3403): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3306. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3413}.
<a id="trace-3413"></a>
<a id="trace-3422"></a>
<a id="trace-3437"></a>
<a id="trace-3442"></a>
<a id="trace-3458"></a>
<a id="trace-3466"></a>
<a id="trace-3474"></a>
<a id="trace-3480"></a>
<a id="trace-3549"></a>
<a id="trace-3553"></a>
<a id="trace-3560"></a>
<a id="trace-3564"></a>
<a id="trace-3574"></a>
<a id="trace-3580"></a>
<a id="trace-3588"></a>
<a id="trace-3594"></a>
<a id="trace-3601"></a>
<a id="trace-3606"></a>
<a id="trace-3674"></a>
<a id="trace-3679"></a>
<a id="trace-3689"></a>
<a id="trace-3694"></a>
<a id="trace-3703"></a>
<a id="trace-3710"></a>
<a id="trace-3717"></a>
<a id="trace-3721"></a>
<a id="trace-3728"></a>
<a id="trace-3732"></a>
- 56.25s–69.75s (×28), actor 5, squad 0 (trace 3413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3307. Next observer evidence: {'until': 56.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3422}.
<a id="trace-3742"></a>
- 70.00s–70.00s (×1), actor 1, squad 0 (trace 3742): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 3735. Next observer evidence: None.
<a id="trace-3745"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 3745): MoveTactically. Knowledge: actor memory at 70.00s, trace 3735. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118541600005922, 'next_transition': 3830}.
<a id="trace-3746"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 3746): received platoon directive. Knowledge: actor memory at 70.00s, trace 3735. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118541600005922, 'next_transition': 3830}.
<a id="trace-3830"></a>
<a id="trace-3838"></a>
<a id="trace-3851"></a>
<a id="trace-3855"></a>
<a id="trace-3873"></a>
<a id="trace-3878"></a>
<a id="trace-3894"></a>
<a id="trace-3898"></a>
<a id="trace-3907"></a>
<a id="trace-3918"></a>
<a id="trace-3990"></a>
<a id="trace-3995"></a>
<a id="trace-4010"></a>
<a id="trace-4013"></a>
<a id="trace-4030"></a>
<a id="trace-4037"></a>
<a id="trace-4045"></a>
<a id="trace-4057"></a>
<a id="trace-4065"></a>
- 70.25s–79.25s (×19), actor 5, squad 0 (trace 3830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 3736. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023955707531305, 'next_transition': 3838}.
<a id="trace-4068"></a>
- 79.65s–79.65s (×1), actor 1, squad 0 (trace 4068): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 3922. Next observer evidence: None.
<a id="trace-4070"></a>
<a id="trace-4145"></a>
<a id="trace-4151"></a>
<a id="trace-4162"></a>
<a id="trace-4166"></a>
<a id="trace-4176"></a>
<a id="trace-4183"></a>
<a id="trace-4190"></a>
<a id="trace-4199"></a>
<a id="trace-4207"></a>
<a id="trace-4210"></a>
<a id="trace-4281"></a>
<a id="trace-4286"></a>
<a id="trace-4294"></a>
<a id="trace-4303"></a>
- 79.75s–86.75s (×15), actor 5, squad 0 (trace 4070): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 3923. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.083587495127019, 'next_transition': 4145}.
<a id="trace-476"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (events line 476): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4308"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (trace 4308): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.225212 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.05s, trace 4308. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4314}.
<a id="trace-4309"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (trace 4309): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.225212 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.05s, trace 4309. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4314}.
<a id="trace-4314"></a>
<a id="trace-4324"></a>
<a id="trace-4332"></a>
- 87.25s–88.25s (×3), actor 5, squad 0 (trace 4314): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.05s, trace 4309. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4324}.
<a id="trace-4338"></a>
- 88.65s–88.65s (×1), actor 1, squad 0 (trace 4338): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 4214. Next observer evidence: None.
<a id="trace-4339"></a>
- 88.65s–88.65s (×1), actor 1, squad 0 (trace 4339): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 4214. Next observer evidence: None.
<a id="trace-4394"></a>
<a id="trace-4405"></a>
<a id="trace-4415"></a>
<a id="trace-4488"></a>
<a id="trace-4496"></a>
<a id="trace-4509"></a>
<a id="trace-4516"></a>
<a id="trace-4530"></a>
<a id="trace-4542"></a>
<a id="trace-4556"></a>
<a id="trace-4567"></a>
<a id="trace-4580"></a>
<a id="trace-4590"></a>
<a id="trace-4674"></a>
<a id="trace-4693"></a>
<a id="trace-4705"></a>
<a id="trace-4722"></a>
<a id="trace-4730"></a>
<a id="trace-4742"></a>
<a id="trace-4754"></a>
<a id="trace-4766"></a>
<a id="trace-4775"></a>
<a id="trace-4852"></a>
- 88.75s–100.25s (×23), actor 5, squad 0 (trace 4394): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.05s, trace 4309. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4405}.
<a id="trace-4855"></a>
- 100.45s–100.45s (×1), actor 1, squad 0 (trace 4855): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 4780. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3612000036743093, 'next_transition': 4864}.
<a id="trace-4856"></a>
- 100.45s–100.45s (×1), actor 1, squad 0 (trace 4856): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 4780. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3612000036743093, 'next_transition': 4864}.
<a id="trace-4864"></a>
<a id="trace-4885"></a>
<a id="trace-4891"></a>
<a id="trace-4904"></a>
<a id="trace-4920"></a>
<a id="trace-4933"></a>
<a id="trace-4940"></a>
<a id="trace-4951"></a>
<a id="trace-4961"></a>
<a id="trace-5031"></a>
<a id="trace-5039"></a>
<a id="trace-5052"></a>
<a id="trace-5058"></a>
<a id="trace-5068"></a>
<a id="trace-5075"></a>
<a id="trace-5087"></a>
<a id="trace-5095"></a>
<a id="trace-5109"></a>
<a id="trace-5115"></a>
<a id="trace-5191"></a>
<a id="trace-5200"></a>
<a id="trace-5209"></a>
<a id="trace-5217"></a>
<a id="trace-5226"></a>
<a id="trace-5232"></a>
<a id="trace-5242"></a>
<a id="trace-5248"></a>
<a id="trace-5261"></a>
<a id="trace-5268"></a>
<a id="trace-5341"></a>
<a id="trace-5348"></a>
<a id="trace-5359"></a>
<a id="trace-5369"></a>
<a id="trace-5380"></a>
<a id="trace-5390"></a>
<a id="trace-5399"></a>
<a id="trace-5405"></a>
<a id="trace-5417"></a>
<a id="trace-5423"></a>
<a id="trace-5497"></a>
<a id="trace-5504"></a>
<a id="trace-5516"></a>
<a id="trace-5522"></a>
<a id="trace-5531"></a>
<a id="trace-5542"></a>
<a id="trace-5552"></a>
<a id="trace-5564"></a>
<a id="trace-5576"></a>
<a id="trace-5582"></a>
<a id="trace-5655"></a>
<a id="trace-5661"></a>
<a id="trace-5674"></a>
<a id="trace-5681"></a>
<a id="trace-5691"></a>
<a id="trace-5697"></a>
<a id="trace-5706"></a>
<a id="trace-5716"></a>
<a id="trace-5726"></a>
<a id="trace-5737"></a>
<a id="trace-5812"></a>
<a id="trace-5819"></a>
<a id="trace-5831"></a>
<a id="trace-5838"></a>
<a id="trace-5849"></a>
<a id="trace-5855"></a>
<a id="trace-5865"></a>
<a id="trace-5871"></a>
<a id="trace-5882"></a>
<a id="trace-5892"></a>
<a id="trace-5962"></a>
<a id="trace-5973"></a>
<a id="trace-5985"></a>
<a id="trace-5990"></a>
<a id="trace-6000"></a>
<a id="trace-6009"></a>
<a id="trace-6021"></a>
<a id="trace-6026"></a>
<a id="trace-6037"></a>
<a id="trace-6043"></a>
<a id="trace-6115"></a>
<a id="trace-6123"></a>
<a id="trace-6134"></a>
<a id="trace-6142"></a>
<a id="trace-6152"></a>
<a id="trace-6158"></a>
<a id="trace-6171"></a>
<a id="trace-6178"></a>
<a id="trace-6190"></a>
<a id="trace-6199"></a>
<a id="trace-6273"></a>
<a id="trace-6279"></a>
<a id="trace-6290"></a>
<a id="trace-6299"></a>
- 100.75s–146.80s (×93), actor 5, squad 0 (trace 4864): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 4781. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0835666666666661, 'next_transition': 4885}.
<a id="trace-954"></a>
- 147.05s–147.05s (×1), actor 5, squad 0 (events line 954): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6309}.
<a id="trace-6304"></a>
- 147.05s–147.05s (×1), actor 5, squad 0 (trace 6304): renew committed intent (75 s lifetime). Knowledge: actor memory at 147.05s, trace 6304. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6309}.
<a id="trace-6309"></a>
<a id="trace-6318"></a>
<a id="trace-6327"></a>
<a id="trace-6333"></a>
<a id="trace-6346"></a>
<a id="trace-6355"></a>
<a id="trace-6430"></a>
<a id="trace-6436"></a>
<a id="trace-6450"></a>
<a id="trace-6457"></a>
<a id="trace-6466"></a>
<a id="trace-6475"></a>
<a id="trace-6483"></a>
<a id="trace-6491"></a>
<a id="trace-6502"></a>
<a id="trace-6508"></a>
<a id="trace-6581"></a>
<a id="trace-6589"></a>
<a id="trace-6604"></a>
<a id="trace-6611"></a>
<a id="trace-6621"></a>
<a id="trace-6628"></a>
<a id="trace-6640"></a>
<a id="trace-6649"></a>
<a id="trace-6659"></a>
<a id="trace-6668"></a>
<a id="trace-6739"></a>
<a id="trace-6745"></a>
<a id="trace-6758"></a>
<a id="trace-6765"></a>
<a id="trace-6777"></a>
<a id="trace-6785"></a>
<a id="trace-6796"></a>
<a id="trace-6802"></a>
<a id="trace-6813"></a>
<a id="trace-6823"></a>
<a id="trace-6896"></a>
<a id="trace-6906"></a>
<a id="trace-6916"></a>
<a id="trace-6922"></a>
<a id="trace-6932"></a>
<a id="trace-6939"></a>
<a id="trace-6950"></a>
<a id="trace-6957"></a>
<a id="trace-6971"></a>
<a id="trace-6977"></a>
<a id="trace-7049"></a>
<a id="trace-7059"></a>
<a id="trace-7069"></a>
<a id="trace-7078"></a>
<a id="trace-7090"></a>
<a id="trace-7097"></a>
<a id="trace-7107"></a>
<a id="trace-7114"></a>
<a id="trace-7128"></a>
<a id="trace-7134"></a>
<a id="trace-7208"></a>
<a id="trace-7213"></a>
<a id="trace-7226"></a>
<a id="trace-7235"></a>
<a id="trace-7243"></a>
<a id="trace-7253"></a>
<a id="trace-7262"></a>
<a id="trace-7268"></a>
<a id="trace-7283"></a>
<a id="trace-7289"></a>
<a id="trace-7363"></a>
<a id="trace-7369"></a>
<a id="trace-7382"></a>
<a id="trace-7388"></a>
<a id="trace-7397"></a>
<a id="trace-7408"></a>
<a id="trace-7416"></a>
<a id="trace-7425"></a>
<a id="trace-7437"></a>
<a id="trace-7443"></a>
<a id="trace-7517"></a>
<a id="trace-7526"></a>
<a id="trace-7540"></a>
<a id="trace-7546"></a>
<a id="trace-7556"></a>
<a id="trace-7563"></a>
<a id="trace-7572"></a>
<a id="trace-7582"></a>
<a id="trace-7593"></a>
<a id="trace-7602"></a>
<a id="trace-7674"></a>
<a id="trace-7680"></a>
<a id="trace-7693"></a>
<a id="trace-7700"></a>
<a id="trace-7712"></a>
<a id="trace-7720"></a>
<a id="trace-7730"></a>
<a id="trace-7737"></a>
<a id="trace-7749"></a>
<a id="trace-7758"></a>
<a id="trace-7830"></a>
<a id="trace-7841"></a>
<a id="trace-7852"></a>
<a id="trace-7858"></a>
<a id="trace-7867"></a>
<a id="trace-7874"></a>
<a id="trace-7885"></a>
<a id="trace-7891"></a>
<a id="trace-7902"></a>
<a id="trace-7909"></a>
<a id="trace-7984"></a>
<a id="trace-7994"></a>
<a id="trace-8004"></a>
<a id="trace-8014"></a>
<a id="trace-8025"></a>
<a id="trace-8031"></a>
<a id="trace-8041"></a>
<a id="trace-8048"></a>
<a id="trace-8061"></a>
<a id="trace-8067"></a>
<a id="trace-8140"></a>
<a id="trace-8146"></a>
<a id="trace-8157"></a>
<a id="trace-8170"></a>
<a id="trace-8179"></a>
- 147.30s–207.30s (×121), actor 5, squad 0 (trace 6309): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 147.05s, trace 6304. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6318}.
<a id="trace-1413"></a>
- 207.60s–207.60s (×1), actor 5, squad 0 (events line 1413): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8183"></a>
- 207.60s–207.60s (×1), actor 5, squad 0 (trace 8183): renew committed intent (75 s lifetime). Knowledge: actor memory at 207.60s, trace 8183. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8189}.
<a id="trace-8189"></a>
<a id="trace-8198"></a>
<a id="trace-8204"></a>
<a id="trace-8218"></a>
<a id="trace-8225"></a>
<a id="trace-8299"></a>
<a id="trace-8305"></a>
<a id="trace-8317"></a>
<a id="trace-8324"></a>
<a id="trace-8333"></a>
<a id="trace-8343"></a>
<a id="trace-8352"></a>
<a id="trace-8362"></a>
<a id="trace-8374"></a>
<a id="trace-8380"></a>
<a id="trace-8454"></a>
<a id="trace-8463"></a>
<a id="trace-8475"></a>
<a id="trace-8481"></a>
<a id="trace-8491"></a>
<a id="trace-8497"></a>
<a id="trace-8505"></a>
<a id="trace-8515"></a>
<a id="trace-8525"></a>
<a id="trace-8535"></a>
<a id="trace-8609"></a>
<a id="trace-8616"></a>
<a id="trace-8628"></a>
<a id="trace-8636"></a>
<a id="trace-8648"></a>
<a id="trace-8654"></a>
<a id="trace-8664"></a>
<a id="trace-8669"></a>
<a id="trace-8680"></a>
<a id="trace-8688"></a>
<a id="trace-8759"></a>
<a id="trace-8768"></a>
<a id="trace-8780"></a>
<a id="trace-8785"></a>
<a id="trace-8796"></a>
<a id="trace-8806"></a>
<a id="trace-8818"></a>
<a id="trace-8837"></a>
<a id="trace-8843"></a>
<a id="trace-8915"></a>
<a id="trace-8923"></a>
<a id="trace-8933"></a>
<a id="trace-8942"></a>
<a id="trace-8951"></a>
<a id="trace-8958"></a>
<a id="trace-8968"></a>
<a id="trace-8976"></a>
<a id="trace-8992"></a>
<a id="trace-8999"></a>
<a id="trace-9074"></a>
<a id="trace-9080"></a>
<a id="trace-9091"></a>
<a id="trace-9100"></a>
<a id="trace-9108"></a>
<a id="trace-9117"></a>
<a id="trace-9126"></a>
<a id="trace-9132"></a>
<a id="trace-9145"></a>
<a id="trace-9152"></a>
<a id="trace-9226"></a>
<a id="trace-9235"></a>
<a id="trace-9249"></a>
<a id="trace-9255"></a>
<a id="trace-9266"></a>
<a id="trace-9274"></a>
<a id="trace-9281"></a>
<a id="trace-9290"></a>
<a id="trace-9301"></a>
<a id="trace-9307"></a>
<a id="trace-9380"></a>
<a id="trace-9387"></a>
<a id="trace-9401"></a>
<a id="trace-9407"></a>
<a id="trace-9418"></a>
<a id="trace-9425"></a>
<a id="trace-9437"></a>
<a id="trace-9449"></a>
<a id="trace-9459"></a>
<a id="trace-9467"></a>
<a id="trace-9539"></a>
<a id="trace-9545"></a>
<a id="trace-9557"></a>
<a id="trace-9563"></a>
<a id="trace-9574"></a>
<a id="trace-9580"></a>
<a id="trace-9590"></a>
<a id="trace-9597"></a>
<a id="trace-9608"></a>
<a id="trace-9618"></a>
<a id="trace-9693"></a>
<a id="trace-9703"></a>
<a id="trace-9714"></a>
<a id="trace-9720"></a>
<a id="trace-9730"></a>
<a id="trace-9737"></a>
<a id="trace-9747"></a>
<a id="trace-9752"></a>
<a id="trace-9764"></a>
<a id="trace-9769"></a>
<a id="trace-9842"></a>
<a id="trace-9852"></a>
<a id="trace-9863"></a>
<a id="trace-9877"></a>
<a id="trace-9886"></a>
<a id="trace-9891"></a>
<a id="trace-9901"></a>
<a id="trace-9908"></a>
<a id="trace-9921"></a>
<a id="trace-9926"></a>
<a id="trace-9999"></a>
<a id="trace-10005"></a>
<a id="trace-10015"></a>
<a id="trace-10025"></a>
<a id="trace-10033"></a>
<a id="trace-10043"></a>
- 207.80s–267.80s (×120), actor 5, squad 0 (trace 8189): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.60s, trace 8183. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8198}.
<a id="trace-1873"></a>
- 268.05s–268.05s (×1), actor 5, squad 0 (events line 1873): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10047"></a>
- 268.05s–268.05s (×1), actor 5, squad 0 (trace 10047): renew committed intent (75 s lifetime). Knowledge: actor memory at 268.05s, trace 10047. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10058}.
<a id="trace-10058"></a>
<a id="trace-10064"></a>
<a id="trace-10076"></a>
<a id="trace-10083"></a>
<a id="trace-10157"></a>
<a id="trace-10163"></a>
<a id="trace-10175"></a>
<a id="trace-10180"></a>
<a id="trace-10189"></a>
<a id="trace-10198"></a>
<a id="trace-10206"></a>
<a id="trace-10216"></a>
<a id="trace-10227"></a>
<a id="trace-10233"></a>
<a id="trace-10308"></a>
<a id="trace-10317"></a>
<a id="trace-10331"></a>
<a id="trace-10336"></a>
<a id="trace-10346"></a>
<a id="trace-10352"></a>
<a id="trace-10361"></a>
<a id="trace-10369"></a>
<a id="trace-10379"></a>
<a id="trace-10387"></a>
<a id="trace-10460"></a>
<a id="trace-10465"></a>
<a id="trace-10479"></a>
<a id="trace-10488"></a>
<a id="trace-10499"></a>
<a id="trace-10508"></a>
<a id="trace-10518"></a>
<a id="trace-10524"></a>
<a id="trace-10534"></a>
<a id="trace-10543"></a>
<a id="trace-10614"></a>
<a id="trace-10623"></a>
<a id="trace-10633"></a>
<a id="trace-10640"></a>
<a id="trace-10649"></a>
<a id="trace-10657"></a>
<a id="trace-10671"></a>
<a id="trace-10677"></a>
<a id="trace-10692"></a>
<a id="trace-10699"></a>
<a id="trace-10771"></a>
<a id="trace-10780"></a>
<a id="trace-10790"></a>
<a id="trace-10799"></a>
<a id="trace-10808"></a>
<a id="trace-10814"></a>
<a id="trace-10825"></a>
<a id="trace-10832"></a>
<a id="trace-10854"></a>
<a id="trace-10927"></a>
<a id="trace-10934"></a>
<a id="trace-10947"></a>
<a id="trace-10956"></a>
<a id="trace-10964"></a>
<a id="trace-10973"></a>
<a id="trace-10982"></a>
<a id="trace-10988"></a>
<a id="trace-11000"></a>
<a id="trace-11008"></a>
<a id="trace-11081"></a>
<a id="trace-11088"></a>
<a id="trace-11102"></a>
<a id="trace-11107"></a>
<a id="trace-11115"></a>
<a id="trace-11125"></a>
<a id="trace-11135"></a>
<a id="trace-11145"></a>
<a id="trace-11155"></a>
<a id="trace-11161"></a>
<a id="trace-11234"></a>
<a id="trace-11241"></a>
<a id="trace-11254"></a>
<a id="trace-11260"></a>
<a id="trace-11271"></a>
<a id="trace-11277"></a>
<a id="trace-11288"></a>
<a id="trace-11297"></a>
<a id="trace-11306"></a>
<a id="trace-11315"></a>
<a id="trace-11390"></a>
<a id="trace-11396"></a>
<a id="trace-11408"></a>
<a id="trace-11415"></a>
<a id="trace-11426"></a>
<a id="trace-11431"></a>
<a id="trace-11442"></a>
<a id="trace-11448"></a>
<a id="trace-11460"></a>
<a id="trace-11471"></a>
<a id="trace-11542"></a>
<a id="trace-11552"></a>
<a id="trace-11563"></a>
<a id="trace-11570"></a>
<a id="trace-11583"></a>
<a id="trace-11590"></a>
<a id="trace-11600"></a>
<a id="trace-11606"></a>
<a id="trace-11617"></a>
<a id="trace-11623"></a>
<a id="trace-11695"></a>
<a id="trace-11705"></a>
<a id="trace-11717"></a>
<a id="trace-11726"></a>
<a id="trace-11736"></a>
<a id="trace-11741"></a>
<a id="trace-11752"></a>
<a id="trace-11761"></a>
<a id="trace-11775"></a>
<a id="trace-11780"></a>
<a id="trace-11853"></a>
<a id="trace-11858"></a>
<a id="trace-11870"></a>
<a id="trace-11878"></a>
<a id="trace-11886"></a>
<a id="trace-11897"></a>
- 268.30s–327.80s (×119), actor 5, squad 0 (trace 10058): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 268.05s, trace 10047. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10064}.
<a id="trace-2331"></a>
- 328.05s–328.05s (×1), actor 5, squad 0 (events line 2331): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11901"></a>
- 328.05s–328.05s (×1), actor 5, squad 0 (trace 11901): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.05s, trace 11901. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11908}.
<a id="trace-11908"></a>
<a id="trace-11914"></a>
<a id="trace-11927"></a>
<a id="trace-11933"></a>
<a id="trace-12008"></a>
<a id="trace-12016"></a>
<a id="trace-12028"></a>
<a id="trace-12034"></a>
<a id="trace-12043"></a>
<a id="trace-12053"></a>
<a id="trace-12061"></a>
<a id="trace-12071"></a>
<a id="trace-12084"></a>
<a id="trace-12090"></a>
<a id="trace-12162"></a>
<a id="trace-12169"></a>
<a id="trace-12181"></a>
<a id="trace-12188"></a>
<a id="trace-12198"></a>
<a id="trace-12204"></a>
<a id="trace-12215"></a>
<a id="trace-12224"></a>
<a id="trace-12235"></a>
<a id="trace-12244"></a>
<a id="trace-12316"></a>
<a id="trace-12322"></a>
<a id="trace-12336"></a>
<a id="trace-12343"></a>
<a id="trace-12354"></a>
<a id="trace-12360"></a>
<a id="trace-12370"></a>
<a id="trace-12376"></a>
<a id="trace-12387"></a>
<a id="trace-12400"></a>
<a id="trace-12471"></a>
<a id="trace-12480"></a>
<a id="trace-12491"></a>
<a id="trace-12497"></a>
<a id="trace-12508"></a>
<a id="trace-12516"></a>
<a id="trace-12527"></a>
<a id="trace-12533"></a>
<a id="trace-12544"></a>
<a id="trace-12551"></a>
<a id="trace-12623"></a>
<a id="trace-12633"></a>
<a id="trace-12645"></a>
<a id="trace-12655"></a>
<a id="trace-12664"></a>
<a id="trace-12671"></a>
<a id="trace-12681"></a>
<a id="trace-12689"></a>
<a id="trace-12703"></a>
<a id="trace-12709"></a>
<a id="trace-12781"></a>
<a id="trace-12787"></a>
<a id="trace-12798"></a>
<a id="trace-12808"></a>
<a id="trace-12815"></a>
<a id="trace-12824"></a>
<a id="trace-12834"></a>
<a id="trace-12840"></a>
<a id="trace-12854"></a>
<a id="trace-12861"></a>
- 328.30s–359.80s (×64), actor 5, squad 0 (trace 11908): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.05s, trace 11901. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11914}.

## Net delivery

68 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.097s; maximum 1.500s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1664: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1665: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1666: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1667: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2088: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2089: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2090: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2091: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2763: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2766: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2767: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2768: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2769: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.05s leader 5, trace 2874: estimate 3.45; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 2875: estimate 3.45; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 2876: estimate 3.45; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2995: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2996: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2997: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2998: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2999: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3000: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3001: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3151: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3152: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3153: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3154: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3155: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3156: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3157: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3306: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3307: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3308: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3309: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3310: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3311: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3312: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3483: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3484: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3485: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3486: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3487: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3488: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3489: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3608: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3609: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3610: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3611: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3612: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3613: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3614: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3735: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3736: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3737: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3738: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3739: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3740: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3741: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3922: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3923: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3924: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3925: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3926: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3927: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3928: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4073: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4074: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4075: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4076: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4077: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4078: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4079: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4214: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4215: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4216: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4217: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4218: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4219: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4220: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.05s leader 5, trace 4308: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.05s leader 5, trace 4309: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4419: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4420: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4421: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4422: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4423: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4424: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4425: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4597: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4598: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4599: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4600: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4601: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4602: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4603: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4780: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4781: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4782: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4783: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4784: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4785: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4786: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 4963: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 4964: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 4965: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 4966: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 4967: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 4968: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 4969: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5124: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5125: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5126: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5127: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5128: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5129: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5130: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 5272: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5273: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5274: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5275: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5276: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5277: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5278: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 5428: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5429: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 5430: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5431: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5432: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5433: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5434: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 5588: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 5589: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 5590: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 5591: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 5592: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 5593: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 5594: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5742: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5743: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5744: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5745: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5746: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5747: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5748: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 5894: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 5895: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 5896: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 5897: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 5898: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 5899: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 5900: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6048: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6049: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6050: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6051: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6052: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6053: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6054: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 6204: estimate 1.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6205: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6206: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6207: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6208: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6209: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6210: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.05s leader 5, trace 6304: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 6360: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6361: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 6362: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 6363: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6364: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6365: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6366: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 6514: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6515: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 6516: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 6517: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6518: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6519: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6520: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6673: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6674: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6675: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6676: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6677: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6828: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6829: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6830: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6831: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6832: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 6982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 6983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 6984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 6985: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 6986: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 6987: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 6988: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7141: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7143: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7144: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 7293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 7449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 7451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 7606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 7916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 7918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.60s leader 5, trace 8183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 8387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 8539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 8541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 9471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 9621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 9930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.05s leader 5, trace 10047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 10392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 10546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 11474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 11628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.05s leader 5, trace 11901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 11937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 12556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 12865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

- 87.05s, evidence 476: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.05s, evidence 4308: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.225212 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4314}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.05s, evidence 4309: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.225212 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4314}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 147.05s, evidence 954: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6309}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 207.60s, evidence 1413: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 268.05s, evidence 1873: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 328.05s, evidence 2331: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
