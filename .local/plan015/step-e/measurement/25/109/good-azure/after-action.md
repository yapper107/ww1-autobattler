# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/25/109/good-azure/battle-109-1789674232197924394`

## Battle summary

**Ember** · 360 s · 31 shots.

### Turning points

- 23.6s, squad 4: contact (events line 253). First recorded contact.
- 36.2s, squad 0: withdrawal ([trace 2587](#trace-2587)). 58.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.8s, squad 0: help call ([trace 3121](#trace-3121)). No completion observed before termination.
- 80.7s, squad 0: withdrawal ([trace 4260](#trace-4260)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 1 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 30 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 34.0s, squad 0 chose leader risk threshold crossed without support ([trace 2455](#trace-2455)), followed by 0 shots and 0 own casualties; estimate 4.9 against 4 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
- 34.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405831 retreat threshold=0.500000 initiative=delegated ([trace 2488](#trace-2488)). Following evidence: None.

### Communication

64 matched deliveries (mean 0.14s, max 1.35s); 244 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.60s, squad 4, contact, evidence events line 253: First recorded contact; .
- 36.25s, squad 0, withdrawal, evidence 2587: BreakContact: believed ratio at least two without superiority; 58.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.75s, squad 0, help call, evidence 3121: NeedSupport; No completion observed before termination.
- 80.65s, squad 0, withdrawal, evidence 4260: Withdraw to received rally; No completion observed before termination.

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
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300137767541186, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.62999490006354, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-503"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-568"></a>
<a id="trace-597"></a>
<a id="trace-609"></a>
<a id="trace-621"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-757"></a>
<a id="trace-775"></a>
<a id="trace-784"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889045547676827, 'next_transition': 503}.
<a id="trace-479"></a>
<a id="trace-505"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-570"></a>
<a id="trace-599"></a>
<a id="trace-611"></a>
<a id="trace-623"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-777"></a>
<a id="trace-786"></a>
<a id="trace-799"></a>
<a id="trace-903"></a>
<a id="trace-985"></a>
<a id="trace-1001"></a>
<a id="trace-1023"></a>
<a id="trace-1039"></a>
<a id="trace-1054"></a>
<a id="trace-1085"></a>
<a id="trace-1098"></a>
<a id="trace-1118"></a>
<a id="trace-1202"></a>
<a id="trace-1217"></a>
<a id="trace-1230"></a>
<a id="trace-1244"></a>
<a id="trace-1267"></a>
<a id="trace-1277"></a>
<a id="trace-1291"></a>
<a id="trace-1347"></a>
<a id="trace-1378"></a>
<a id="trace-1451"></a>
<a id="trace-1463"></a>
<a id="trace-1487"></a>
<a id="trace-1494"></a>
<a id="trace-1504"></a>
<a id="trace-1637"></a>
<a id="trace-1651"></a>
<a id="trace-1667"></a>
<a id="trace-1684"></a>
<a id="trace-1764"></a>
<a id="trace-1774"></a>
<a id="trace-2213"></a>
<a id="trace-2240"></a>
<a id="trace-2254"></a>
<a id="trace-2279"></a>
<a id="trace-2425"></a>
<a id="trace-2448"></a>
<a id="trace-2467"></a>
<a id="trace-2494"></a>
<a id="trace-2570"></a>
<a id="trace-2580"></a>
<a id="trace-2773"></a>
<a id="trace-2781"></a>
<a id="trace-2789"></a>
<a id="trace-2800"></a>
<a id="trace-2806"></a>
<a id="trace-2819"></a>
<a id="trace-2823"></a>
<a id="trace-2906"></a>
<a id="trace-2918"></a>
<a id="trace-2928"></a>
<a id="trace-2934"></a>
<a id="trace-2957"></a>
<a id="trace-2969"></a>
<a id="trace-2975"></a>
<a id="trace-2989"></a>
<a id="trace-3001"></a>
<a id="trace-3073"></a>
<a id="trace-3078"></a>
<a id="trace-3092"></a>
<a id="trace-3097"></a>
<a id="trace-3113"></a>
<a id="trace-3120"></a>
<a id="trace-3140"></a>
<a id="trace-3298"></a>
<a id="trace-3307"></a>
<a id="trace-3315"></a>
<a id="trace-3320"></a>
<a id="trace-3331"></a>
<a id="trace-3348"></a>
<a id="trace-3353"></a>
<a id="trace-3369"></a>
<a id="trace-3438"></a>
<a id="trace-3442"></a>
<a id="trace-3449"></a>
<a id="trace-3458"></a>
<a id="trace-3465"></a>
<a id="trace-3474"></a>
<a id="trace-3481"></a>
<a id="trace-3492"></a>
<a id="trace-3498"></a>
<a id="trace-3572"></a>
<a id="trace-3587"></a>
<a id="trace-3593"></a>
<a id="trace-3602"></a>
<a id="trace-3613"></a>
<a id="trace-3621"></a>
<a id="trace-3634"></a>
<a id="trace-3726"></a>
<a id="trace-3732"></a>
<a id="trace-3743"></a>
<a id="trace-3750"></a>
<a id="trace-3765"></a>
<a id="trace-3784"></a>
<a id="trace-3794"></a>
<a id="trace-3805"></a>
<a id="trace-3893"></a>
<a id="trace-3903"></a>
<a id="trace-3915"></a>
<a id="trace-3922"></a>
<a id="trace-3932"></a>
<a id="trace-3940"></a>
<a id="trace-3950"></a>
<a id="trace-3960"></a>
<a id="trace-4031"></a>
<a id="trace-4040"></a>
<a id="trace-4049"></a>
<a id="trace-4072"></a>
<a id="trace-4085"></a>
<a id="trace-4168"></a>
<a id="trace-4179"></a>
<a id="trace-4255"></a>
<a id="trace-4321"></a>
<a id="trace-4348"></a>
<a id="trace-4362"></a>
<a id="trace-4369"></a>
<a id="trace-4383"></a>
<a id="trace-4390"></a>
<a id="trace-4498"></a>
<a id="trace-4524"></a>
<a id="trace-4546"></a>
<a id="trace-4556"></a>
<a id="trace-4570"></a>
<a id="trace-4579"></a>
<a id="trace-4594"></a>
<a id="trace-4603"></a>
<a id="trace-4682"></a>
<a id="trace-4702"></a>
<a id="trace-4755"></a>
<a id="trace-4769"></a>
<a id="trace-4788"></a>
<a id="trace-4795"></a>
<a id="trace-4887"></a>
<a id="trace-4897"></a>
<a id="trace-4908"></a>
<a id="trace-4916"></a>
<a id="trace-4927"></a>
<a id="trace-4945"></a>
<a id="trace-5030"></a>
<a id="trace-5036"></a>
<a id="trace-5046"></a>
<a id="trace-5054"></a>
<a id="trace-5065"></a>
<a id="trace-5072"></a>
<a id="trace-5083"></a>
<a id="trace-5089"></a>
<a id="trace-5100"></a>
<a id="trace-5112"></a>
<a id="trace-5192"></a>
<a id="trace-5203"></a>
<a id="trace-5213"></a>
<a id="trace-5228"></a>
<a id="trace-5239"></a>
<a id="trace-5246"></a>
<a id="trace-5257"></a>
<a id="trace-5265"></a>
<a id="trace-5337"></a>
<a id="trace-5347"></a>
<a id="trace-5357"></a>
<a id="trace-5369"></a>
<a id="trace-5378"></a>
<a id="trace-5384"></a>
<a id="trace-5395"></a>
<a id="trace-5403"></a>
<a id="trace-5416"></a>
<a id="trace-5496"></a>
<a id="trace-5502"></a>
<a id="trace-5512"></a>
<a id="trace-5523"></a>
<a id="trace-5532"></a>
<a id="trace-5556"></a>
<a id="trace-5568"></a>
<a id="trace-5575"></a>
<a id="trace-5649"></a>
<a id="trace-5676"></a>
<a id="trace-5701"></a>
<a id="trace-5711"></a>
<a id="trace-5722"></a>
<a id="trace-5826"></a>
<a id="trace-5838"></a>
<a id="trace-5846"></a>
<a id="trace-5855"></a>
<a id="trace-5864"></a>
<a id="trace-5883"></a>
<a id="trace-5956"></a>
<a id="trace-5962"></a>
<a id="trace-5974"></a>
<a id="trace-5983"></a>
<a id="trace-5994"></a>
<a id="trace-6001"></a>
<a id="trace-6011"></a>
<a id="trace-6018"></a>
<a id="trace-6031"></a>
<a id="trace-6041"></a>
<a id="trace-6112"></a>
<a id="trace-6121"></a>
<a id="trace-6131"></a>
<a id="trace-6139"></a>
<a id="trace-6150"></a>
<a id="trace-6169"></a>
<a id="trace-6175"></a>
<a id="trace-6187"></a>
<a id="trace-6194"></a>
<a id="trace-6268"></a>
<a id="trace-6278"></a>
<a id="trace-6299"></a>
<a id="trace-6308"></a>
<a id="trace-6315"></a>
<a id="trace-6325"></a>
<a id="trace-6333"></a>
<a id="trace-6347"></a>
<a id="trace-6354"></a>
<a id="trace-6440"></a>
<a id="trace-6451"></a>
<a id="trace-6459"></a>
<a id="trace-6468"></a>
<a id="trace-6480"></a>
<a id="trace-6487"></a>
<a id="trace-6499"></a>
<a id="trace-6507"></a>
<a id="trace-6582"></a>
<a id="trace-6590"></a>
<a id="trace-6607"></a>
<a id="trace-6624"></a>
<a id="trace-6641"></a>
<a id="trace-6651"></a>
<a id="trace-6734"></a>
<a id="trace-6752"></a>
<a id="trace-6761"></a>
<a id="trace-6773"></a>
<a id="trace-6779"></a>
<a id="trace-6788"></a>
<a id="trace-6797"></a>
<a id="trace-6887"></a>
<a id="trace-6893"></a>
<a id="trace-6914"></a>
<a id="trace-6942"></a>
<a id="trace-6948"></a>
<a id="trace-6960"></a>
<a id="trace-6970"></a>
<a id="trace-7041"></a>
<a id="trace-7058"></a>
<a id="trace-7076"></a>
<a id="trace-7083"></a>
<a id="trace-7095"></a>
<a id="trace-7114"></a>
<a id="trace-7122"></a>
<a id="trace-7195"></a>
<a id="trace-7213"></a>
<a id="trace-7224"></a>
<a id="trace-7238"></a>
<a id="trace-7248"></a>
<a id="trace-7255"></a>
<a id="trace-7267"></a>
<a id="trace-7275"></a>
<a id="trace-7348"></a>
<a id="trace-7356"></a>
<a id="trace-7368"></a>
<a id="trace-7380"></a>
<a id="trace-7390"></a>
<a id="trace-7407"></a>
<a id="trace-7413"></a>
<a id="trace-7424"></a>
<a id="trace-7505"></a>
<a id="trace-7511"></a>
<a id="trace-7522"></a>
<a id="trace-7530"></a>
<a id="trace-7540"></a>
<a id="trace-7553"></a>
<a id="trace-7562"></a>
<a id="trace-7573"></a>
<a id="trace-7583"></a>
<a id="trace-7590"></a>
<a id="trace-7679"></a>
<a id="trace-7687"></a>
<a id="trace-7703"></a>
<a id="trace-7712"></a>
<a id="trace-7733"></a>
<a id="trace-7745"></a>
<a id="trace-7819"></a>
<a id="trace-7834"></a>
<a id="trace-7853"></a>
<a id="trace-7868"></a>
<a id="trace-7883"></a>
<a id="trace-7894"></a>
<a id="trace-7975"></a>
<a id="trace-8006"></a>
<a id="trace-8023"></a>
<a id="trace-8029"></a>
<a id="trace-8040"></a>
<a id="trace-8047"></a>
<a id="trace-8121"></a>
<a id="trace-8130"></a>
<a id="trace-8148"></a>
<a id="trace-8159"></a>
<a id="trace-8187"></a>
<a id="trace-8282"></a>
<a id="trace-8291"></a>
<a id="trace-8302"></a>
<a id="trace-8318"></a>
<a id="trace-8327"></a>
<a id="trace-8335"></a>
<a id="trace-8346"></a>
<a id="trace-8355"></a>
<a id="trace-8435"></a>
<a id="trace-8450"></a>
<a id="trace-8458"></a>
<a id="trace-8467"></a>
<a id="trace-8476"></a>
<a id="trace-8484"></a>
<a id="trace-8493"></a>
<a id="trace-8503"></a>
<a id="trace-8510"></a>
<a id="trace-8585"></a>
<a id="trace-8592"></a>
<a id="trace-8604"></a>
<a id="trace-8617"></a>
<a id="trace-8628"></a>
<a id="trace-8634"></a>
<a id="trace-8643"></a>
<a id="trace-8652"></a>
<a id="trace-8741"></a>
<a id="trace-8747"></a>
<a id="trace-8766"></a>
<a id="trace-8778"></a>
<a id="trace-8785"></a>
<a id="trace-8797"></a>
<a id="trace-8804"></a>
<a id="trace-8816"></a>
<a id="trace-8827"></a>
<a id="trace-8898"></a>
<a id="trace-8915"></a>
<a id="trace-8923"></a>
<a id="trace-8933"></a>
<a id="trace-8940"></a>
<a id="trace-8975"></a>
<a id="trace-9049"></a>
<a id="trace-9058"></a>
<a id="trace-9069"></a>
<a id="trace-9081"></a>
<a id="trace-9090"></a>
<a id="trace-9096"></a>
<a id="trace-9106"></a>
<a id="trace-9113"></a>
<a id="trace-9125"></a>
<a id="trace-9132"></a>
<a id="trace-9219"></a>
<a id="trace-9233"></a>
<a id="trace-9241"></a>
<a id="trace-9254"></a>
<a id="trace-9263"></a>
<a id="trace-9269"></a>
<a id="trace-9280"></a>
<a id="trace-9288"></a>
<a id="trace-9362"></a>
<a id="trace-9368"></a>
<a id="trace-9378"></a>
<a id="trace-9387"></a>
<a id="trace-9406"></a>
<a id="trace-9416"></a>
<a id="trace-9425"></a>
<a id="trace-9438"></a>
<a id="trace-9446"></a>
<a id="trace-9525"></a>
<a id="trace-9536"></a>
<a id="trace-9544"></a>
<a id="trace-9554"></a>
<a id="trace-9560"></a>
<a id="trace-9570"></a>
<a id="trace-9579"></a>
<a id="trace-9589"></a>
<a id="trace-9602"></a>
<a id="trace-9674"></a>
<a id="trace-9680"></a>
<a id="trace-9691"></a>
<a id="trace-9702"></a>
<a id="trace-9719"></a>
<a id="trace-9734"></a>
<a id="trace-9744"></a>
<a id="trace-9755"></a>
<a id="trace-9826"></a>
<a id="trace-9836"></a>
<a id="trace-9854"></a>
<a id="trace-9865"></a>
<a id="trace-9882"></a>
<a id="trace-9891"></a>
<a id="trace-9903"></a>
<a id="trace-9910"></a>
<a id="trace-9984"></a>
<a id="trace-10001"></a>
<a id="trace-10012"></a>
<a id="trace-10022"></a>
<a id="trace-10028"></a>
<a id="trace-10040"></a>
<a id="trace-10047"></a>
<a id="trace-10066"></a>
<a id="trace-10142"></a>
<a id="trace-10157"></a>
<a id="trace-10168"></a>
<a id="trace-10176"></a>
<a id="trace-10194"></a>
<a id="trace-10200"></a>
<a id="trace-10300"></a>
<a id="trace-10318"></a>
<a id="trace-10330"></a>
<a id="trace-10339"></a>
<a id="trace-10355"></a>
<a id="trace-10365"></a>
<a id="trace-10464"></a>
<a id="trace-10472"></a>
<a id="trace-10483"></a>
<a id="trace-10489"></a>
<a id="trace-10499"></a>
<a id="trace-10511"></a>
<a id="trace-10600"></a>
<a id="trace-10606"></a>
<a id="trace-10617"></a>
<a id="trace-10637"></a>
<a id="trace-10645"></a>
<a id="trace-10661"></a>
<a id="trace-10671"></a>
<a id="trace-10681"></a>
<a id="trace-10764"></a>
<a id="trace-10773"></a>
<a id="trace-10781"></a>
<a id="trace-10791"></a>
<a id="trace-10809"></a>
<a id="trace-10816"></a>
<a id="trace-10829"></a>
<a id="trace-10908"></a>
<a id="trace-10917"></a>
<a id="trace-10925"></a>
<a id="trace-10939"></a>
<a id="trace-10954"></a>
<a id="trace-10964"></a>
<a id="trace-10971"></a>
<a id="trace-10984"></a>
<a id="trace-10991"></a>
<a id="trace-11065"></a>
<a id="trace-11071"></a>
<a id="trace-11082"></a>
<a id="trace-11093"></a>
<a id="trace-11102"></a>
<a id="trace-11111"></a>
<a id="trace-11123"></a>
<a id="trace-11130"></a>
<a id="trace-11141"></a>
<a id="trace-11149"></a>
<a id="trace-11223"></a>
<a id="trace-11229"></a>
<a id="trace-11240"></a>
<a id="trace-11248"></a>
<a id="trace-11258"></a>
<a id="trace-11269"></a>
<a id="trace-11286"></a>
<a id="trace-11303"></a>
<a id="trace-11385"></a>
<a id="trace-11396"></a>
<a id="trace-11413"></a>
<a id="trace-11420"></a>
<a id="trace-11429"></a>
<a id="trace-11449"></a>
<a id="trace-11459"></a>
<a id="trace-11547"></a>
<a id="trace-11569"></a>
<a id="trace-11575"></a>
<a id="trace-11585"></a>
<a id="trace-11591"></a>
<a id="trace-11611"></a>
<a id="trace-11683"></a>
<a id="trace-11694"></a>
<a id="trace-11703"></a>
<a id="trace-11721"></a>
<a id="trace-11728"></a>
<a id="trace-11743"></a>
<a id="trace-11749"></a>
<a id="trace-11766"></a>
<a id="trace-11840"></a>
<a id="trace-11850"></a>
<a id="trace-11858"></a>
<a id="trace-11885"></a>
<a id="trace-11896"></a>
<a id="trace-11903"></a>
<a id="trace-11924"></a>
<a id="trace-11998"></a>
<a id="trace-12022"></a>
<a id="trace-12031"></a>
<a id="trace-12049"></a>
<a id="trace-12055"></a>
<a id="trace-12068"></a>
<a id="trace-12076"></a>
<a id="trace-12156"></a>
<a id="trace-12169"></a>
<a id="trace-12178"></a>
<a id="trace-12187"></a>
<a id="trace-12196"></a>
<a id="trace-12204"></a>
<a id="trace-12223"></a>
<a id="trace-12230"></a>
<a id="trace-12322"></a>
<a id="trace-12331"></a>
<a id="trace-12341"></a>
<a id="trace-12348"></a>
<a id="trace-12360"></a>
<a id="trace-12369"></a>
<a id="trace-12378"></a>
<a id="trace-12459"></a>
<a id="trace-12466"></a>
<a id="trace-12476"></a>
<a id="trace-12503"></a>
<a id="trace-12514"></a>
<a id="trace-12520"></a>
<a id="trace-12531"></a>
<a id="trace-12544"></a>
<a id="trace-12615"></a>
<a id="trace-12624"></a>
<a id="trace-12633"></a>
<a id="trace-12641"></a>
<a id="trace-12658"></a>
<a id="trace-12677"></a>
<a id="trace-12695"></a>
<a id="trace-12767"></a>
<a id="trace-12776"></a>
<a id="trace-12788"></a>
<a id="trace-12799"></a>
<a id="trace-12808"></a>
<a id="trace-12814"></a>
<a id="trace-12824"></a>
<a id="trace-12832"></a>
<a id="trace-12844"></a>
<a id="trace-12852"></a>
<a id="trace-12927"></a>
<a id="trace-12933"></a>
<a id="trace-12943"></a>
<a id="trace-12961"></a>
<a id="trace-12973"></a>
<a id="trace-12983"></a>
<a id="trace-12989"></a>
<a id="trace-13000"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512547468775962, 'next_transition': 505}.
<a id="trace-826"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 826): traveling overwatch. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4415794252841465, 'next_transition': 901}.
<a id="trace-827"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 827): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4415794252841465, 'next_transition': 901}.
<a id="trace-901"></a>
<a id="trace-983"></a>
<a id="trace-999"></a>
<a id="trace-1021"></a>
<a id="trace-1037"></a>
<a id="trace-1052"></a>
<a id="trace-1065"></a>
<a id="trace-1083"></a>
<a id="trace-1096"></a>
<a id="trace-1107"></a>
<a id="trace-1116"></a>
<a id="trace-1200"></a>
<a id="trace-1215"></a>
<a id="trace-1228"></a>
<a id="trace-1242"></a>
<a id="trace-1265"></a>
<a id="trace-1275"></a>
<a id="trace-1289"></a>
- 14.70s–23.25s (×18), actor 5, squad 0 (trace 901): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843720901305669, 'next_transition': 983}.
<a id="trace-1297"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 1297): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1122. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1345}.
<a id="trace-1345"></a>
<a id="trace-1364"></a>
<a id="trace-1376"></a>
<a id="trace-1449"></a>
<a id="trace-1461"></a>
<a id="trace-1485"></a>
<a id="trace-1492"></a>
<a id="trace-1502"></a>
- 23.75s–27.25s (×8), actor 5, squad 0 (trace 1345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1124. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937155135691249, 'next_transition': 1364}.
<a id="trace-1509"></a>
- 27.35s–27.35s (×1), actor 0, squad 0 (trace 1509): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 1380. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1635}.
<a id="trace-1635"></a>
<a id="trace-1649"></a>
<a id="trace-1659"></a>
<a id="trace-1665"></a>
<a id="trace-1682"></a>
<a id="trace-1762"></a>
<a id="trace-1772"></a>
- 27.75s–30.75s (×7), actor 5, squad 0 (trace 1635): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1382. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750039843203575, 'next_transition': 1649}.
<a id="trace-1775"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 1775): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1817}.
<a id="trace-1817"></a>
- 30.80s–30.80s (×1), actor 0, squad 0 (trace 1817): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-1818"></a>
- 30.80s–30.80s (×1), actor 0, squad 0 (trace 1818): bounding overwatch. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-1819"></a>
<a id="trace-1950"></a>
<a id="trace-2080"></a>
- 30.80s–31.05s (×3), actor 0, squad 0 (trace 1819): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-2211"></a>
<a id="trace-2238"></a>
<a id="trace-2252"></a>
<a id="trace-2277"></a>
- 31.25s–32.75s (×4), actor 5, squad 0 (trace 2211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1687. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2238}.
<a id="trace-2280"></a>
- 32.75s–32.75s (×1), actor 0, squad 0 (trace 2280): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662163667685852, 'next_transition': 2423}.
<a id="trace-2423"></a>
<a id="trace-2446"></a>
- 33.25s–33.75s (×2), actor 5, squad 0 (trace 2423): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1687. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33160327469417794, 'next_transition': 2446}.
<a id="trace-2455"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 2455): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 2455. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2465}.
<a id="trace-2465"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 2465): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 2455. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 332}.
<a id="trace-332"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (events line 332): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2488"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2488): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405831 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2488. Next observer evidence: None.
<a id="trace-2489"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2489): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405831 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2489. Next observer evidence: None.
<a id="trace-2492"></a>
<a id="trace-2568"></a>
<a id="trace-2578"></a>
<a id="trace-2585"></a>
- 34.75s–36.25s (×4), actor 5, squad 0 (trace 2492): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.65s, trace 2489. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2568}.
<a id="trace-2587"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 2587): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 2499. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2771}.
<a id="trace-2588"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 2588): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 2499. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2771}.
<a id="trace-2771"></a>
<a id="trace-2779"></a>
<a id="trace-2787"></a>
<a id="trace-2798"></a>
<a id="trace-2804"></a>
<a id="trace-2817"></a>
<a id="trace-2821"></a>
<a id="trace-2904"></a>
<a id="trace-2916"></a>
<a id="trace-2926"></a>
<a id="trace-2932"></a>
<a id="trace-2947"></a>
<a id="trace-2955"></a>
<a id="trace-2967"></a>
<a id="trace-2973"></a>
<a id="trace-2987"></a>
<a id="trace-2999"></a>
<a id="trace-3071"></a>
<a id="trace-3076"></a>
<a id="trace-3090"></a>
<a id="trace-3095"></a>
<a id="trace-3111"></a>
<a id="trace-3118"></a>
- 36.75s–47.75s (×23), actor 5, squad 0 (trace 2771): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2501. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2779}.
<a id="trace-3121"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 3121): NeedSupport. Knowledge: actor memory at 45.00s, trace 3003. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3138}.
<a id="trace-3138"></a>
<a id="trace-3148"></a>
<a id="trace-3161"></a>
- 48.25s–49.25s (×3), actor 5, squad 0 (trace 3138): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3005. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3148}.
<a id="trace-3165"></a>
- 49.50s–49.50s (×1), actor 0, squad 0 (trace 3165): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 3003. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3862833994234016, 'next_transition': 3224}.
<a id="trace-3166"></a>
- 49.50s–49.50s (×1), actor 0, squad 0 (trace 3166): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 3003. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3862833994234016, 'next_transition': 3224}.
<a id="trace-3224"></a>
<a id="trace-3296"></a>
<a id="trace-3305"></a>
<a id="trace-3313"></a>
<a id="trace-3318"></a>
<a id="trace-3329"></a>
<a id="trace-3340"></a>
<a id="trace-3346"></a>
<a id="trace-3351"></a>
<a id="trace-3362"></a>
<a id="trace-3367"></a>
<a id="trace-3436"></a>
<a id="trace-3440"></a>
<a id="trace-3447"></a>
<a id="trace-3451"></a>
<a id="trace-3456"></a>
<a id="trace-3463"></a>
- 49.75s–57.75s (×17), actor 5, squad 0 (trace 3224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3005. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599816961721355, 'next_transition': 3296}.
<a id="trace-3466"></a>
- 58.00s–58.00s (×1), actor 1, squad 0 (trace 3466): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 3370. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199820149843693, 'next_transition': 3472}.
<a id="trace-3472"></a>
<a id="trace-3479"></a>
<a id="trace-3490"></a>
<a id="trace-3496"></a>
<a id="trace-3570"></a>
<a id="trace-3576"></a>
<a id="trace-3585"></a>
<a id="trace-3591"></a>
<a id="trace-3600"></a>
<a id="trace-3611"></a>
<a id="trace-3619"></a>
<a id="trace-3632"></a>
<a id="trace-3643"></a>
<a id="trace-3650"></a>
<a id="trace-3724"></a>
<a id="trace-3730"></a>
<a id="trace-3741"></a>
<a id="trace-3748"></a>
<a id="trace-3758"></a>
<a id="trace-3763"></a>
<a id="trace-3772"></a>
<a id="trace-3782"></a>
<a id="trace-3792"></a>
<a id="trace-3803"></a>
<a id="trace-3875"></a>
<a id="trace-3880"></a>
<a id="trace-3891"></a>
<a id="trace-3901"></a>
<a id="trace-3913"></a>
<a id="trace-3920"></a>
<a id="trace-3930"></a>
<a id="trace-3938"></a>
<a id="trace-3948"></a>
<a id="trace-3958"></a>
<a id="trace-4029"></a>
<a id="trace-4038"></a>
<a id="trace-4047"></a>
<a id="trace-4054"></a>
<a id="trace-4064"></a>
<a id="trace-4070"></a>
<a id="trace-4083"></a>
<a id="trace-4095"></a>
- 58.25s–78.75s (×42), actor 5, squad 0 (trace 3472): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3371. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400327290052414, 'next_transition': 3479}.
<a id="trace-4098"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 4098): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 3961. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 533}.
<a id="trace-4099"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 4099): MoveTactically. Knowledge: actor memory at 75.00s, trace 3961. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 533}.
<a id="trace-4100"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 4100): traveling. Knowledge: actor memory at 75.00s, trace 3961. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 533}.
<a id="trace-4101"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 4101): . Knowledge: actor memory at 75.00s, trace 3961. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 533}.
<a id="trace-533"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (events line 533): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4157"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (trace 4157): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.236799 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 79.05s, trace 4157. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4166}.
<a id="trace-4158"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (trace 4158): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.236799 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 79.05s, trace 4158. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4166}.
<a id="trace-4166"></a>
<a id="trace-4177"></a>
<a id="trace-4253"></a>
- 79.25s–80.25s (×3), actor 5, squad 0 (trace 4166): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 79.05s, trace 4158. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4177}.
<a id="trace-4260"></a>
- 80.65s–80.65s (×1), actor 1, squad 0 (trace 4260): Withdraw to received rally. Knowledge: actor memory at 80.00s, trace 4182. Next observer evidence: None.
<a id="trace-4261"></a>
- 80.65s–80.65s (×1), actor 1, squad 0 (trace 4261): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 4182. Next observer evidence: None.
<a id="trace-4319"></a>
<a id="trace-4334"></a>
<a id="trace-4346"></a>
<a id="trace-4360"></a>
<a id="trace-4367"></a>
<a id="trace-4381"></a>
<a id="trace-4388"></a>
<a id="trace-4406"></a>
<a id="trace-4418"></a>
<a id="trace-4496"></a>
<a id="trace-4503"></a>
<a id="trace-4522"></a>
<a id="trace-4534"></a>
<a id="trace-4544"></a>
<a id="trace-4554"></a>
<a id="trace-4568"></a>
<a id="trace-4577"></a>
<a id="trace-4592"></a>
<a id="trace-4601"></a>
<a id="trace-4680"></a>
<a id="trace-4689"></a>
<a id="trace-4700"></a>
<a id="trace-4710"></a>
<a id="trace-4725"></a>
<a id="trace-4737"></a>
<a id="trace-4753"></a>
- 80.75s–93.25s (×26), actor 5, squad 0 (trace 4319): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4183. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300000000000002, 'next_transition': 4334}.
<a id="trace-4756"></a>
- 93.25s–93.25s (×1), actor 1, squad 0 (trace 4756): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 4607. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000013359822, 'next_transition': 4767}.
<a id="trace-4757"></a>
- 93.25s–93.25s (×1), actor 1, squad 0 (trace 4757): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 4607. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000013359822, 'next_transition': 4767}.
<a id="trace-4767"></a>
<a id="trace-4786"></a>
<a id="trace-4793"></a>
<a id="trace-4866"></a>
<a id="trace-4885"></a>
<a id="trace-4895"></a>
<a id="trace-4906"></a>
<a id="trace-4914"></a>
<a id="trace-4925"></a>
<a id="trace-4935"></a>
<a id="trace-4943"></a>
<a id="trace-4956"></a>
<a id="trace-5028"></a>
<a id="trace-5034"></a>
<a id="trace-5044"></a>
<a id="trace-5052"></a>
<a id="trace-5063"></a>
<a id="trace-5070"></a>
<a id="trace-5081"></a>
<a id="trace-5087"></a>
<a id="trace-5098"></a>
<a id="trace-5110"></a>
<a id="trace-5182"></a>
<a id="trace-5190"></a>
<a id="trace-5201"></a>
<a id="trace-5211"></a>
<a id="trace-5221"></a>
<a id="trace-5226"></a>
<a id="trace-5237"></a>
<a id="trace-5244"></a>
<a id="trace-5255"></a>
<a id="trace-5263"></a>
<a id="trace-5335"></a>
<a id="trace-5345"></a>
<a id="trace-5355"></a>
<a id="trace-5367"></a>
<a id="trace-5376"></a>
<a id="trace-5382"></a>
<a id="trace-5393"></a>
<a id="trace-5401"></a>
<a id="trace-5414"></a>
<a id="trace-5422"></a>
<a id="trace-5494"></a>
<a id="trace-5500"></a>
<a id="trace-5510"></a>
<a id="trace-5521"></a>
<a id="trace-5530"></a>
<a id="trace-5541"></a>
<a id="trace-5549"></a>
<a id="trace-5554"></a>
<a id="trace-5566"></a>
<a id="trace-5573"></a>
<a id="trace-5647"></a>
<a id="trace-5657"></a>
<a id="trace-5667"></a>
<a id="trace-5674"></a>
<a id="trace-5683"></a>
<a id="trace-5692"></a>
<a id="trace-5699"></a>
<a id="trace-5709"></a>
<a id="trace-5720"></a>
<a id="trace-5728"></a>
<a id="trace-5800"></a>
<a id="trace-5805"></a>
<a id="trace-5816"></a>
<a id="trace-5824"></a>
<a id="trace-5836"></a>
<a id="trace-5844"></a>
<a id="trace-5853"></a>
<a id="trace-5862"></a>
<a id="trace-5872"></a>
<a id="trace-5881"></a>
<a id="trace-5954"></a>
<a id="trace-5960"></a>
<a id="trace-5972"></a>
<a id="trace-5981"></a>
<a id="trace-5992"></a>
<a id="trace-5999"></a>
<a id="trace-6009"></a>
<a id="trace-6016"></a>
<a id="trace-6029"></a>
<a id="trace-6039"></a>
<a id="trace-6110"></a>
<a id="trace-6119"></a>
<a id="trace-6129"></a>
<a id="trace-6137"></a>
<a id="trace-6148"></a>
<a id="trace-6157"></a>
<a id="trace-6167"></a>
<a id="trace-6173"></a>
<a id="trace-6185"></a>
<a id="trace-6192"></a>
- 93.75s–139.80s (×92), actor 5, squad 0 (trace 4767): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 4608. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000000088187, 'next_transition': 4786}.
<a id="trace-1028"></a>
- 140.00s–140.00s (×1), actor 5, squad 0 (events line 1028): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6266}.
<a id="trace-6204"></a>
- 140.00s–140.00s (×1), actor 5, squad 0 (trace 6204): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.00s, trace 6204. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6266}.
<a id="trace-6266"></a>
<a id="trace-6276"></a>
<a id="trace-6286"></a>
<a id="trace-6297"></a>
<a id="trace-6306"></a>
<a id="trace-6313"></a>
<a id="trace-6323"></a>
<a id="trace-6331"></a>
<a id="trace-6345"></a>
<a id="trace-6352"></a>
<a id="trace-6425"></a>
<a id="trace-6430"></a>
<a id="trace-6438"></a>
<a id="trace-6457"></a>
<a id="trace-6466"></a>
<a id="trace-6478"></a>
<a id="trace-6485"></a>
<a id="trace-6497"></a>
<a id="trace-6505"></a>
<a id="trace-6580"></a>
<a id="trace-6588"></a>
<a id="trace-6598"></a>
<a id="trace-6605"></a>
<a id="trace-6614"></a>
<a id="trace-6622"></a>
<a id="trace-6630"></a>
<a id="trace-6639"></a>
<a id="trace-6649"></a>
<a id="trace-6657"></a>
<a id="trace-6732"></a>
<a id="trace-6740"></a>
<a id="trace-6750"></a>
<a id="trace-6759"></a>
<a id="trace-6771"></a>
<a id="trace-6777"></a>
<a id="trace-6786"></a>
<a id="trace-6795"></a>
<a id="trace-6804"></a>
<a id="trace-6813"></a>
<a id="trace-6885"></a>
<a id="trace-6891"></a>
<a id="trace-6902"></a>
<a id="trace-6912"></a>
<a id="trace-6925"></a>
<a id="trace-6930"></a>
<a id="trace-6940"></a>
<a id="trace-6946"></a>
<a id="trace-6958"></a>
<a id="trace-6968"></a>
<a id="trace-7039"></a>
<a id="trace-7048"></a>
<a id="trace-7056"></a>
<a id="trace-7064"></a>
<a id="trace-7074"></a>
<a id="trace-7081"></a>
<a id="trace-7093"></a>
<a id="trace-7101"></a>
<a id="trace-7112"></a>
<a id="trace-7120"></a>
<a id="trace-7193"></a>
<a id="trace-7204"></a>
<a id="trace-7211"></a>
<a id="trace-7222"></a>
<a id="trace-7231"></a>
<a id="trace-7236"></a>
<a id="trace-7246"></a>
<a id="trace-7253"></a>
<a id="trace-7265"></a>
<a id="trace-7273"></a>
<a id="trace-7346"></a>
<a id="trace-7354"></a>
<a id="trace-7366"></a>
<a id="trace-7378"></a>
<a id="trace-7388"></a>
<a id="trace-7397"></a>
<a id="trace-7405"></a>
<a id="trace-7411"></a>
<a id="trace-7422"></a>
<a id="trace-7430"></a>
<a id="trace-7503"></a>
<a id="trace-7509"></a>
<a id="trace-7520"></a>
<a id="trace-7528"></a>
<a id="trace-7538"></a>
<a id="trace-7551"></a>
<a id="trace-7560"></a>
<a id="trace-7571"></a>
<a id="trace-7581"></a>
<a id="trace-7588"></a>
<a id="trace-7661"></a>
<a id="trace-7667"></a>
<a id="trace-7677"></a>
<a id="trace-7685"></a>
<a id="trace-7695"></a>
<a id="trace-7701"></a>
<a id="trace-7710"></a>
<a id="trace-7721"></a>
<a id="trace-7731"></a>
<a id="trace-7743"></a>
<a id="trace-7817"></a>
<a id="trace-7823"></a>
<a id="trace-7832"></a>
<a id="trace-7841"></a>
<a id="trace-7851"></a>
<a id="trace-7857"></a>
<a id="trace-7866"></a>
<a id="trace-7872"></a>
<a id="trace-7881"></a>
<a id="trace-7892"></a>
<a id="trace-7964"></a>
<a id="trace-7973"></a>
<a id="trace-7985"></a>
<a id="trace-7992"></a>
<a id="trace-8004"></a>
<a id="trace-8011"></a>
<a id="trace-8021"></a>
<a id="trace-8027"></a>
<a id="trace-8038"></a>
<a id="trace-8045"></a>
- 140.30s–199.80s (×119), actor 5, squad 0 (trace 6266): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 6204. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6276}.
<a id="trace-1485"></a>
- 200.00s–200.00s (×1), actor 5, squad 0 (events line 1485): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8119}.
<a id="trace-8057"></a>
- 200.00s–200.00s (×1), actor 5, squad 0 (trace 8057): renew committed intent (75 s lifetime). Knowledge: actor memory at 200.00s, trace 8057. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8119}.
<a id="trace-8119"></a>
<a id="trace-8128"></a>
<a id="trace-8136"></a>
<a id="trace-8146"></a>
<a id="trace-8157"></a>
<a id="trace-8163"></a>
<a id="trace-8174"></a>
<a id="trace-8185"></a>
<a id="trace-8197"></a>
<a id="trace-8203"></a>
<a id="trace-8275"></a>
<a id="trace-8280"></a>
<a id="trace-8289"></a>
<a id="trace-8300"></a>
<a id="trace-8308"></a>
<a id="trace-8316"></a>
<a id="trace-8325"></a>
<a id="trace-8333"></a>
<a id="trace-8344"></a>
<a id="trace-8353"></a>
<a id="trace-8433"></a>
<a id="trace-8439"></a>
<a id="trace-8448"></a>
<a id="trace-8456"></a>
<a id="trace-8465"></a>
<a id="trace-8474"></a>
<a id="trace-8482"></a>
<a id="trace-8491"></a>
<a id="trace-8501"></a>
<a id="trace-8508"></a>
<a id="trace-8583"></a>
<a id="trace-8590"></a>
<a id="trace-8602"></a>
<a id="trace-8615"></a>
<a id="trace-8626"></a>
<a id="trace-8632"></a>
<a id="trace-8641"></a>
<a id="trace-8650"></a>
<a id="trace-8659"></a>
<a id="trace-8668"></a>
<a id="trace-8739"></a>
<a id="trace-8745"></a>
<a id="trace-8755"></a>
<a id="trace-8764"></a>
<a id="trace-8776"></a>
<a id="trace-8783"></a>
<a id="trace-8795"></a>
<a id="trace-8802"></a>
<a id="trace-8814"></a>
<a id="trace-8825"></a>
<a id="trace-8896"></a>
<a id="trace-8905"></a>
<a id="trace-8913"></a>
<a id="trace-8921"></a>
<a id="trace-8931"></a>
<a id="trace-8938"></a>
<a id="trace-8950"></a>
<a id="trace-8955"></a>
<a id="trace-8966"></a>
<a id="trace-8973"></a>
<a id="trace-9047"></a>
<a id="trace-9056"></a>
<a id="trace-9067"></a>
<a id="trace-9079"></a>
<a id="trace-9088"></a>
<a id="trace-9094"></a>
<a id="trace-9104"></a>
<a id="trace-9111"></a>
<a id="trace-9123"></a>
<a id="trace-9130"></a>
<a id="trace-9204"></a>
<a id="trace-9217"></a>
<a id="trace-9231"></a>
<a id="trace-9239"></a>
<a id="trace-9252"></a>
<a id="trace-9261"></a>
<a id="trace-9267"></a>
<a id="trace-9278"></a>
<a id="trace-9286"></a>
<a id="trace-9360"></a>
<a id="trace-9366"></a>
<a id="trace-9376"></a>
<a id="trace-9385"></a>
<a id="trace-9394"></a>
<a id="trace-9404"></a>
<a id="trace-9414"></a>
<a id="trace-9423"></a>
<a id="trace-9436"></a>
<a id="trace-9444"></a>
<a id="trace-9517"></a>
<a id="trace-9523"></a>
<a id="trace-9534"></a>
<a id="trace-9542"></a>
<a id="trace-9552"></a>
<a id="trace-9558"></a>
<a id="trace-9568"></a>
<a id="trace-9577"></a>
<a id="trace-9587"></a>
<a id="trace-9600"></a>
<a id="trace-9672"></a>
<a id="trace-9678"></a>
<a id="trace-9689"></a>
<a id="trace-9700"></a>
<a id="trace-9712"></a>
<a id="trace-9717"></a>
<a id="trace-9727"></a>
<a id="trace-9732"></a>
<a id="trace-9742"></a>
<a id="trace-9753"></a>
<a id="trace-9824"></a>
<a id="trace-9834"></a>
<a id="trace-9845"></a>
<a id="trace-9852"></a>
<a id="trace-9863"></a>
<a id="trace-9870"></a>
<a id="trace-9880"></a>
<a id="trace-9889"></a>
<a id="trace-9901"></a>
<a id="trace-9908"></a>
- 200.30s–259.80s (×119), actor 5, squad 0 (trace 8119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 8057. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8128}.
<a id="trace-1942"></a>
- 260.05s–260.05s (×1), actor 5, squad 0 (events line 1942): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9920"></a>
- 260.05s–260.05s (×1), actor 5, squad 0 (trace 9920): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.05s, trace 9920. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9982}.
<a id="trace-9982"></a>
<a id="trace-9991"></a>
<a id="trace-9999"></a>
<a id="trace-10010"></a>
<a id="trace-10020"></a>
<a id="trace-10026"></a>
<a id="trace-10038"></a>
<a id="trace-10045"></a>
<a id="trace-10058"></a>
<a id="trace-10064"></a>
<a id="trace-10140"></a>
<a id="trace-10147"></a>
<a id="trace-10155"></a>
<a id="trace-10166"></a>
<a id="trace-10174"></a>
<a id="trace-10183"></a>
<a id="trace-10192"></a>
<a id="trace-10198"></a>
<a id="trace-10210"></a>
<a id="trace-10219"></a>
<a id="trace-10292"></a>
<a id="trace-10298"></a>
<a id="trace-10308"></a>
<a id="trace-10316"></a>
<a id="trace-10328"></a>
<a id="trace-10337"></a>
<a id="trace-10345"></a>
<a id="trace-10353"></a>
<a id="trace-10363"></a>
<a id="trace-10371"></a>
<a id="trace-10443"></a>
<a id="trace-10450"></a>
<a id="trace-10462"></a>
<a id="trace-10470"></a>
<a id="trace-10481"></a>
<a id="trace-10487"></a>
<a id="trace-10497"></a>
<a id="trace-10509"></a>
<a id="trace-10518"></a>
<a id="trace-10527"></a>
<a id="trace-10598"></a>
<a id="trace-10604"></a>
<a id="trace-10615"></a>
<a id="trace-10624"></a>
<a id="trace-10635"></a>
<a id="trace-10643"></a>
<a id="trace-10653"></a>
<a id="trace-10659"></a>
<a id="trace-10669"></a>
<a id="trace-10679"></a>
<a id="trace-10754"></a>
<a id="trace-10762"></a>
<a id="trace-10771"></a>
<a id="trace-10779"></a>
<a id="trace-10789"></a>
<a id="trace-10797"></a>
<a id="trace-10807"></a>
<a id="trace-10814"></a>
<a id="trace-10827"></a>
<a id="trace-10834"></a>
<a id="trace-10906"></a>
<a id="trace-10915"></a>
<a id="trace-10923"></a>
<a id="trace-10937"></a>
<a id="trace-10947"></a>
<a id="trace-10952"></a>
<a id="trace-10962"></a>
<a id="trace-10969"></a>
<a id="trace-10982"></a>
<a id="trace-10989"></a>
<a id="trace-11063"></a>
<a id="trace-11069"></a>
<a id="trace-11080"></a>
<a id="trace-11091"></a>
<a id="trace-11100"></a>
<a id="trace-11109"></a>
<a id="trace-11121"></a>
<a id="trace-11128"></a>
<a id="trace-11139"></a>
<a id="trace-11147"></a>
<a id="trace-11221"></a>
<a id="trace-11227"></a>
<a id="trace-11238"></a>
<a id="trace-11246"></a>
<a id="trace-11256"></a>
<a id="trace-11267"></a>
<a id="trace-11275"></a>
<a id="trace-11284"></a>
<a id="trace-11294"></a>
<a id="trace-11301"></a>
<a id="trace-11377"></a>
<a id="trace-11383"></a>
<a id="trace-11394"></a>
<a id="trace-11402"></a>
<a id="trace-11411"></a>
<a id="trace-11418"></a>
<a id="trace-11427"></a>
<a id="trace-11437"></a>
<a id="trace-11447"></a>
<a id="trace-11457"></a>
<a id="trace-11530"></a>
<a id="trace-11535"></a>
<a id="trace-11545"></a>
<a id="trace-11557"></a>
<a id="trace-11567"></a>
<a id="trace-11573"></a>
<a id="trace-11583"></a>
<a id="trace-11589"></a>
<a id="trace-11600"></a>
<a id="trace-11609"></a>
<a id="trace-11681"></a>
<a id="trace-11692"></a>
<a id="trace-11701"></a>
<a id="trace-11710"></a>
<a id="trace-11719"></a>
<a id="trace-11726"></a>
<a id="trace-11741"></a>
<a id="trace-11747"></a>
<a id="trace-11758"></a>
<a id="trace-11764"></a>
- 260.30s–319.80s (×120), actor 5, squad 0 (trace 9982): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.05s, trace 9920. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9991}.
<a id="trace-2399"></a>
- 320.05s–320.05s (×1), actor 5, squad 0 (events line 2399): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11776"></a>
- 320.05s–320.05s (×1), actor 5, squad 0 (trace 11776): renew committed intent (75 s lifetime). Knowledge: actor memory at 320.05s, trace 11776. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11838}.
<a id="trace-11838"></a>
<a id="trace-11848"></a>
<a id="trace-11856"></a>
<a id="trace-11868"></a>
<a id="trace-11878"></a>
<a id="trace-11883"></a>
<a id="trace-11894"></a>
<a id="trace-11901"></a>
<a id="trace-11913"></a>
<a id="trace-11922"></a>
<a id="trace-11996"></a>
<a id="trace-12002"></a>
<a id="trace-12010"></a>
<a id="trace-12020"></a>
<a id="trace-12029"></a>
<a id="trace-12038"></a>
<a id="trace-12047"></a>
<a id="trace-12053"></a>
<a id="trace-12066"></a>
<a id="trace-12074"></a>
<a id="trace-12149"></a>
<a id="trace-12154"></a>
<a id="trace-12167"></a>
<a id="trace-12176"></a>
<a id="trace-12185"></a>
<a id="trace-12194"></a>
<a id="trace-12202"></a>
<a id="trace-12211"></a>
<a id="trace-12221"></a>
<a id="trace-12228"></a>
<a id="trace-12302"></a>
<a id="trace-12310"></a>
<a id="trace-12320"></a>
<a id="trace-12329"></a>
<a id="trace-12339"></a>
<a id="trace-12346"></a>
<a id="trace-12358"></a>
<a id="trace-12367"></a>
<a id="trace-12376"></a>
<a id="trace-12386"></a>
<a id="trace-12457"></a>
<a id="trace-12464"></a>
<a id="trace-12474"></a>
<a id="trace-12484"></a>
<a id="trace-12496"></a>
<a id="trace-12501"></a>
<a id="trace-12512"></a>
<a id="trace-12518"></a>
<a id="trace-12529"></a>
<a id="trace-12542"></a>
<a id="trace-12613"></a>
<a id="trace-12622"></a>
<a id="trace-12631"></a>
<a id="trace-12639"></a>
<a id="trace-12650"></a>
<a id="trace-12656"></a>
<a id="trace-12668"></a>
<a id="trace-12675"></a>
<a id="trace-12686"></a>
<a id="trace-12693"></a>
<a id="trace-12765"></a>
<a id="trace-12774"></a>
<a id="trace-12786"></a>
<a id="trace-12797"></a>
<a id="trace-12806"></a>
<a id="trace-12812"></a>
<a id="trace-12822"></a>
<a id="trace-12830"></a>
<a id="trace-12842"></a>
<a id="trace-12850"></a>
<a id="trace-12925"></a>
<a id="trace-12931"></a>
<a id="trace-12941"></a>
<a id="trace-12952"></a>
<a id="trace-12959"></a>
<a id="trace-12971"></a>
<a id="trace-12981"></a>
<a id="trace-12987"></a>
<a id="trace-12998"></a>
<a id="trace-13006"></a>
- 320.30s–359.80s (×80), actor 5, squad 0 (trace 11838): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 11776. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11848}.

## Net delivery

64 matched order/radio deliveries; 244 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.138s; maximum 1.350s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1386: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1387: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1689: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1690: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1691: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1692: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 2455: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2488: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2489: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2499: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2501: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2502: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2503: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2504: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2505: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2506: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2832: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2834: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2835: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2836: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2837: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2838: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2839: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3003: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3005: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3006: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3007: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3008: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3009: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3010: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3227: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3228: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3229: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3230: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3231: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3232: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3371: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3372: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3373: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3374: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3375: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3376: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3500: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3501: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3502: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3503: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3504: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3505: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3656: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3657: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3658: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3659: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3660: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3661: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3808: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3809: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3810: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3811: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3812: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3813: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3962: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3963: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3964: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3965: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3966: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3967: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 79.05s leader 5, trace 4157: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 79.05s leader 5, trace 4158: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4183: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4184: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4185: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4186: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4187: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4188: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4426: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4427: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4428: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4429: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4430: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4431: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4432: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4607: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4608: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4609: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4610: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4611: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4612: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4613: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4799: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4800: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4801: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4802: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4803: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4804: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4805: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4960: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4961: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4962: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4963: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4964: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4965: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4966: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5114: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5115: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5116: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5117: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5118: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5119: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5120: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5268: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5269: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5270: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5271: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5272: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5273: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5274: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 5425: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5426: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5427: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5428: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5429: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5430: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5431: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 5578: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5579: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 5580: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5581: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5582: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5583: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5584: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 5733: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 5734: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 5735: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 5736: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 5737: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 5738: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 5739: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5885: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5886: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5887: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5888: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5889: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5890: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5891: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6045: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6046: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6047: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6048: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6200: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6201: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6202: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6203: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 6356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6359: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6360: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6361: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6362: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 6509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 6511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 6512: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6513: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6514: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6515: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 6665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 6667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 6668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 7126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 7433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 7594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 7596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 7747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 8050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 8514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 8671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 8673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 9604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 9756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.05s leader 5, trace 9920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 10530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 10683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 11612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.05s leader 5, trace 11776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 12698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

- 79.05s, evidence 533: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 79.05s, evidence 4157: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.236799 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4166}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 79.05s, evidence 4158: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.236799 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4166}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 140.00s, evidence 1028: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6266}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 200.00s, evidence 1485: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8119}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 260.05s, evidence 1942: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 320.05s, evidence 2399: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
