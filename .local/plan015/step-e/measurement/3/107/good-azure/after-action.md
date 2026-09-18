# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/107/good-azure/battle-107-1789673681648150821`

## Battle summary

**Ember** · 360 s · 264 shots.

### Turning points

- 14.7s, squad 0: contact (events line 151). First recorded contact.
- 19.6s, squad 0: help call ([trace 2100](#trace-2100)). No completion observed before termination.
- 29.1s, squad 0: withdrawal ([trace 3374](#trace-3374)). 31.6s, squad 0: took cover and returned fire.
- 31.4s, squad 0: help call ([trace 3754](#trace-3754)). No completion observed before termination.
- 35.6s, squad 0: withdrawal ([trace 4179](#trace-4179)). 70.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.7s, squad 0: help call ([trace 4699](#trace-4699)). No completion observed before termination.
- 76.3s, squad 0: withdrawal ([trace 5631](#trace-5631)). 122.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 222.6s, squad 0: withdrawal ([trace 11446](#trace-11446)). 261.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 268.6s, squad 0: withdrawal ([trace 13008](#trace-13008)). 321.0s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 24 shots, 4/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 240 shots, 2/6 lost.

### Decisions and attribution

At 15.1s, squad 0 chose took cover and returned fire ([trace 1221](#trace-1221)), followed by 1 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 35.6s, squad 0 chose broke contact ([trace 4179](#trace-4179)), followed by 1 shots and 0 own casualties; estimate 6.2 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 388](#trace-388)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
- 18.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.696116 retreat threshold=0.500000 initiative=delegated ([trace 2074](#trace-2074)). Following evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47636213496858576, 'next_transition': 2079}.

### Communication

177 matched deliveries (mean 0.30s, max 2.10s); 240 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.65s, squad 0, contact, evidence events line 151: First recorded contact; .
- 19.60s, squad 0, help call, evidence 2100: NeedSupport; No completion observed before termination.
- 29.15s, squad 0, withdrawal, evidence 3374: BreakContact: believed ratio at least two without superiority; 31.6s, squad 0: took cover and returned fire.
- 31.35s, squad 0, help call, evidence 3754: NeedSupport; No completion observed before termination.
- 35.60s, squad 0, withdrawal, evidence 4179: BreakContact: believed ratio at least two without superiority; 70.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.70s, squad 0, help call, evidence 4699: NeedSupport; No completion observed before termination.
- 76.35s, squad 0, withdrawal, evidence 5631: Withdraw to received rally; 122.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 222.60s, squad 0, withdrawal, evidence 11446: BreakContact: believed ratio at least two without superiority; 261.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 268.55s, squad 0, withdrawal, evidence 13008: Withdraw to received rally; 321.0s, squad 0: contact broken or rally reached: Occupy and report strength.

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
<a id="trace-529"></a>
<a id="trace-547"></a>
<a id="trace-560"></a>
<a id="trace-576"></a>
<a id="trace-597"></a>
<a id="trace-618"></a>
<a id="trace-630"></a>
<a id="trace-638"></a>
<a id="trace-720"></a>
<a id="trace-729"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 389. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.799996465134876, 'next_transition': 421}.
<a id="trace-549"></a>
<a id="trace-599"></a>
<a id="trace-620"></a>
<a id="trace-640"></a>
<a id="trace-722"></a>
<a id="trace-731"></a>
<a id="trace-1003"></a>
<a id="trace-1047"></a>
<a id="trace-1130"></a>
<a id="trace-1148"></a>
<a id="trace-1935"></a>
<a id="trace-2026"></a>
<a id="trace-2044"></a>
<a id="trace-2067"></a>
<a id="trace-2081"></a>
<a id="trace-2110"></a>
<a id="trace-2189"></a>
<a id="trace-2486"></a>
<a id="trace-2518"></a>
<a id="trace-2538"></a>
<a id="trace-2545"></a>
<a id="trace-2564"></a>
<a id="trace-2842"></a>
<a id="trace-2855"></a>
<a id="trace-2879"></a>
<a id="trace-2954"></a>
<a id="trace-3262"></a>
<a id="trace-3320"></a>
<a id="trace-3334"></a>
<a id="trace-3350"></a>
<a id="trace-3368"></a>
<a id="trace-3632"></a>
<a id="trace-3641"></a>
<a id="trace-3725"></a>
<a id="trace-3734"></a>
<a id="trace-3749"></a>
<a id="trace-4011"></a>
<a id="trace-4028"></a>
<a id="trace-4049"></a>
<a id="trace-4067"></a>
<a id="trace-4075"></a>
<a id="trace-4090"></a>
<a id="trace-4372"></a>
<a id="trace-4385"></a>
<a id="trace-4404"></a>
<a id="trace-4414"></a>
<a id="trace-4429"></a>
<a id="trace-4437"></a>
<a id="trace-4446"></a>
<a id="trace-4517"></a>
<a id="trace-4535"></a>
<a id="trace-4541"></a>
<a id="trace-4558"></a>
<a id="trace-4566"></a>
<a id="trace-4576"></a>
<a id="trace-4586"></a>
<a id="trace-4595"></a>
<a id="trace-4672"></a>
<a id="trace-4683"></a>
<a id="trace-4869"></a>
<a id="trace-4876"></a>
<a id="trace-4886"></a>
<a id="trace-4891"></a>
<a id="trace-4898"></a>
<a id="trace-4903"></a>
<a id="trace-4910"></a>
<a id="trace-4922"></a>
<a id="trace-4938"></a>
<a id="trace-5004"></a>
<a id="trace-5008"></a>
<a id="trace-5022"></a>
<a id="trace-5031"></a>
<a id="trace-5035"></a>
<a id="trace-5052"></a>
<a id="trace-5059"></a>
<a id="trace-5064"></a>
<a id="trace-5134"></a>
<a id="trace-5144"></a>
<a id="trace-5149"></a>
<a id="trace-5163"></a>
<a id="trace-5170"></a>
<a id="trace-5247"></a>
<a id="trace-5260"></a>
<a id="trace-5335"></a>
<a id="trace-5342"></a>
<a id="trace-5353"></a>
<a id="trace-5361"></a>
<a id="trace-5368"></a>
<a id="trace-5372"></a>
<a id="trace-5392"></a>
<a id="trace-5404"></a>
<a id="trace-5413"></a>
<a id="trace-5479"></a>
<a id="trace-5492"></a>
<a id="trace-5505"></a>
<a id="trace-5512"></a>
<a id="trace-5625"></a>
<a id="trace-5704"></a>
<a id="trace-5716"></a>
<a id="trace-5728"></a>
<a id="trace-5736"></a>
<a id="trace-5750"></a>
<a id="trace-5836"></a>
<a id="trace-5843"></a>
<a id="trace-5850"></a>
<a id="trace-5856"></a>
<a id="trace-5861"></a>
<a id="trace-5873"></a>
<a id="trace-5944"></a>
<a id="trace-5950"></a>
<a id="trace-5959"></a>
<a id="trace-5967"></a>
<a id="trace-5974"></a>
<a id="trace-6052"></a>
<a id="trace-6068"></a>
<a id="trace-6143"></a>
<a id="trace-6162"></a>
<a id="trace-6167"></a>
<a id="trace-6177"></a>
<a id="trace-6185"></a>
<a id="trace-6196"></a>
<a id="trace-6204"></a>
<a id="trace-6213"></a>
<a id="trace-6220"></a>
<a id="trace-6293"></a>
<a id="trace-6305"></a>
<a id="trace-6310"></a>
<a id="trace-6322"></a>
<a id="trace-6327"></a>
<a id="trace-6334"></a>
<a id="trace-6346"></a>
<a id="trace-6357"></a>
<a id="trace-6363"></a>
<a id="trace-6437"></a>
<a id="trace-6470"></a>
<a id="trace-6477"></a>
<a id="trace-6483"></a>
<a id="trace-6549"></a>
<a id="trace-6641"></a>
<a id="trace-6652"></a>
<a id="trace-6659"></a>
<a id="trace-6671"></a>
<a id="trace-6674"></a>
<a id="trace-6686"></a>
<a id="trace-6690"></a>
<a id="trace-6704"></a>
<a id="trace-6707"></a>
<a id="trace-6856"></a>
<a id="trace-6870"></a>
<a id="trace-6878"></a>
<a id="trace-6889"></a>
<a id="trace-6897"></a>
<a id="trace-6909"></a>
<a id="trace-6985"></a>
<a id="trace-7007"></a>
<a id="trace-7018"></a>
<a id="trace-7026"></a>
<a id="trace-7035"></a>
<a id="trace-7042"></a>
<a id="trace-7054"></a>
<a id="trace-7059"></a>
<a id="trace-7131"></a>
<a id="trace-7136"></a>
<a id="trace-7152"></a>
<a id="trace-7160"></a>
<a id="trace-7174"></a>
<a id="trace-7187"></a>
<a id="trace-7198"></a>
<a id="trace-7210"></a>
<a id="trace-7217"></a>
<a id="trace-7293"></a>
<a id="trace-7300"></a>
<a id="trace-7313"></a>
<a id="trace-7319"></a>
<a id="trace-7327"></a>
<a id="trace-7339"></a>
<a id="trace-7354"></a>
<a id="trace-7359"></a>
<a id="trace-7426"></a>
<a id="trace-7433"></a>
<a id="trace-7442"></a>
<a id="trace-7447"></a>
<a id="trace-7457"></a>
<a id="trace-7460"></a>
<a id="trace-7468"></a>
<a id="trace-7472"></a>
<a id="trace-7482"></a>
<a id="trace-7553"></a>
<a id="trace-7576"></a>
<a id="trace-7579"></a>
<a id="trace-7602"></a>
<a id="trace-7605"></a>
<a id="trace-7677"></a>
<a id="trace-7690"></a>
<a id="trace-7696"></a>
<a id="trace-7699"></a>
<a id="trace-7707"></a>
<a id="trace-7721"></a>
<a id="trace-7728"></a>
<a id="trace-7798"></a>
<a id="trace-7802"></a>
<a id="trace-7813"></a>
<a id="trace-7927"></a>
<a id="trace-7938"></a>
<a id="trace-7955"></a>
<a id="trace-8023"></a>
<a id="trace-8042"></a>
<a id="trace-8051"></a>
<a id="trace-8130"></a>
<a id="trace-8151"></a>
<a id="trace-8160"></a>
<a id="trace-8171"></a>
<a id="trace-8177"></a>
<a id="trace-8193"></a>
<a id="trace-8206"></a>
<a id="trace-8279"></a>
<a id="trace-8284"></a>
<a id="trace-8297"></a>
<a id="trace-8302"></a>
<a id="trace-8314"></a>
<a id="trace-8318"></a>
<a id="trace-8326"></a>
<a id="trace-8337"></a>
<a id="trace-8347"></a>
<a id="trace-8424"></a>
<a id="trace-8430"></a>
<a id="trace-8442"></a>
<a id="trace-8447"></a>
<a id="trace-8456"></a>
<a id="trace-8464"></a>
<a id="trace-8472"></a>
<a id="trace-8478"></a>
<a id="trace-8489"></a>
<a id="trace-8496"></a>
<a id="trace-8571"></a>
<a id="trace-8587"></a>
<a id="trace-8594"></a>
<a id="trace-8613"></a>
<a id="trace-8678"></a>
<a id="trace-8683"></a>
<a id="trace-8810"></a>
<a id="trace-8813"></a>
<a id="trace-8887"></a>
<a id="trace-8906"></a>
<a id="trace-8915"></a>
<a id="trace-8927"></a>
<a id="trace-8940"></a>
<a id="trace-8944"></a>
<a id="trace-8957"></a>
<a id="trace-8963"></a>
<a id="trace-8973"></a>
<a id="trace-8979"></a>
<a id="trace-9054"></a>
<a id="trace-9065"></a>
<a id="trace-9180"></a>
<a id="trace-9190"></a>
<a id="trace-9202"></a>
<a id="trace-9221"></a>
<a id="trace-9240"></a>
<a id="trace-9313"></a>
<a id="trace-9319"></a>
<a id="trace-9333"></a>
<a id="trace-9346"></a>
<a id="trace-9356"></a>
<a id="trace-9366"></a>
<a id="trace-9375"></a>
<a id="trace-9387"></a>
<a id="trace-9392"></a>
<a id="trace-9469"></a>
<a id="trace-9474"></a>
<a id="trace-9485"></a>
<a id="trace-9492"></a>
<a id="trace-9500"></a>
<a id="trace-9505"></a>
<a id="trace-9516"></a>
<a id="trace-9591"></a>
<a id="trace-9598"></a>
<a id="trace-9666"></a>
<a id="trace-9676"></a>
<a id="trace-9685"></a>
<a id="trace-9693"></a>
<a id="trace-9704"></a>
<a id="trace-9710"></a>
<a id="trace-9720"></a>
<a id="trace-9727"></a>
<a id="trace-9735"></a>
<a id="trace-9746"></a>
<a id="trace-9814"></a>
<a id="trace-9822"></a>
<a id="trace-9832"></a>
<a id="trace-9848"></a>
<a id="trace-9852"></a>
<a id="trace-9880"></a>
<a id="trace-9885"></a>
<a id="trace-9956"></a>
<a id="trace-9963"></a>
<a id="trace-9974"></a>
<a id="trace-9982"></a>
<a id="trace-9988"></a>
<a id="trace-10099"></a>
<a id="trace-10108"></a>
<a id="trace-10117"></a>
<a id="trace-10131"></a>
<a id="trace-10210"></a>
<a id="trace-10216"></a>
<a id="trace-10225"></a>
<a id="trace-10236"></a>
<a id="trace-10258"></a>
<a id="trace-10263"></a>
<a id="trace-10278"></a>
<a id="trace-10282"></a>
<a id="trace-10352"></a>
<a id="trace-10359"></a>
<a id="trace-10371"></a>
<a id="trace-10375"></a>
<a id="trace-10386"></a>
<a id="trace-10399"></a>
<a id="trace-10607"></a>
<a id="trace-10615"></a>
<a id="trace-10623"></a>
<a id="trace-10694"></a>
<a id="trace-10714"></a>
<a id="trace-10722"></a>
<a id="trace-10738"></a>
<a id="trace-10755"></a>
<a id="trace-11274"></a>
<a id="trace-11291"></a>
<a id="trace-11307"></a>
<a id="trace-11379"></a>
<a id="trace-11417"></a>
<a id="trace-11442"></a>
<a id="trace-11580"></a>
<a id="trace-11602"></a>
<a id="trace-11621"></a>
<a id="trace-11696"></a>
<a id="trace-11705"></a>
<a id="trace-11727"></a>
<a id="trace-11732"></a>
<a id="trace-11744"></a>
<a id="trace-11751"></a>
<a id="trace-11767"></a>
<a id="trace-11775"></a>
<a id="trace-11854"></a>
<a id="trace-11866"></a>
<a id="trace-11873"></a>
<a id="trace-11883"></a>
<a id="trace-11889"></a>
<a id="trace-11900"></a>
<a id="trace-11914"></a>
<a id="trace-11919"></a>
<a id="trace-12047"></a>
<a id="trace-12055"></a>
<a id="trace-12068"></a>
<a id="trace-12073"></a>
<a id="trace-12082"></a>
<a id="trace-12092"></a>
<a id="trace-12099"></a>
<a id="trace-12103"></a>
<a id="trace-12115"></a>
<a id="trace-12185"></a>
<a id="trace-12193"></a>
<a id="trace-12200"></a>
<a id="trace-12205"></a>
<a id="trace-12219"></a>
<a id="trace-12223"></a>
<a id="trace-12230"></a>
<a id="trace-12233"></a>
<a id="trace-12297"></a>
<a id="trace-12304"></a>
<a id="trace-12315"></a>
<a id="trace-12323"></a>
<a id="trace-12329"></a>
<a id="trace-12332"></a>
<a id="trace-12338"></a>
<a id="trace-12342"></a>
<a id="trace-12353"></a>
<a id="trace-12416"></a>
<a id="trace-12424"></a>
<a id="trace-12493"></a>
<a id="trace-12503"></a>
<a id="trace-12510"></a>
<a id="trace-12527"></a>
<a id="trace-12537"></a>
<a id="trace-12606"></a>
<a id="trace-12613"></a>
<a id="trace-12623"></a>
<a id="trace-12628"></a>
<a id="trace-12639"></a>
<a id="trace-12655"></a>
<a id="trace-12667"></a>
<a id="trace-12734"></a>
<a id="trace-12740"></a>
<a id="trace-12758"></a>
<a id="trace-12779"></a>
<a id="trace-12854"></a>
<a id="trace-12865"></a>
<a id="trace-12888"></a>
<a id="trace-12960"></a>
<a id="trace-12985"></a>
<a id="trace-12994"></a>
<a id="trace-13065"></a>
<a id="trace-13081"></a>
<a id="trace-13088"></a>
<a id="trace-13159"></a>
<a id="trace-13168"></a>
<a id="trace-13185"></a>
<a id="trace-13193"></a>
<a id="trace-13204"></a>
<a id="trace-13218"></a>
<a id="trace-13289"></a>
<a id="trace-13297"></a>
<a id="trace-13314"></a>
<a id="trace-13322"></a>
<a id="trace-13327"></a>
<a id="trace-13340"></a>
<a id="trace-13356"></a>
<a id="trace-13426"></a>
<a id="trace-13491"></a>
<a id="trace-13499"></a>
<a id="trace-13511"></a>
<a id="trace-13529"></a>
<a id="trace-13544"></a>
<a id="trace-13550"></a>
<a id="trace-13614"></a>
<a id="trace-13629"></a>
<a id="trace-13644"></a>
<a id="trace-13651"></a>
<a id="trace-13659"></a>
<a id="trace-13666"></a>
<a id="trace-13676"></a>
<a id="trace-13681"></a>
<a id="trace-13746"></a>
<a id="trace-13754"></a>
<a id="trace-13761"></a>
<a id="trace-13770"></a>
<a id="trace-13778"></a>
<a id="trace-13784"></a>
<a id="trace-13791"></a>
<a id="trace-13797"></a>
<a id="trace-13807"></a>
<a id="trace-13812"></a>
<a id="trace-13878"></a>
<a id="trace-13896"></a>
<a id="trace-13903"></a>
<a id="trace-13967"></a>
<a id="trace-13972"></a>
<a id="trace-13983"></a>
<a id="trace-13991"></a>
<a id="trace-14000"></a>
<a id="trace-14075"></a>
<a id="trace-14105"></a>
<a id="trace-14112"></a>
<a id="trace-14120"></a>
<a id="trace-14135"></a>
<a id="trace-14139"></a>
<a id="trace-14205"></a>
<a id="trace-14220"></a>
<a id="trace-14225"></a>
<a id="trace-14235"></a>
<a id="trace-14240"></a>
<a id="trace-14320"></a>
<a id="trace-14325"></a>
<a id="trace-14402"></a>
<a id="trace-14410"></a>
<a id="trace-14418"></a>
<a id="trace-14434"></a>
<a id="trace-14442"></a>
<a id="trace-14447"></a>
<a id="trace-14457"></a>
<a id="trace-14462"></a>
<a id="trace-14529"></a>
<a id="trace-14540"></a>
<a id="trace-14548"></a>
<a id="trace-14553"></a>
<a id="trace-14563"></a>
<a id="trace-14575"></a>
<a id="trace-14591"></a>
<a id="trace-14658"></a>
<a id="trace-14667"></a>
<a id="trace-14679"></a>
<a id="trace-14692"></a>
<a id="trace-14709"></a>
<a id="trace-14720"></a>
<a id="trace-14728"></a>
<a id="trace-14743"></a>
<a id="trace-14813"></a>
<a id="trace-14835"></a>
<a id="trace-14842"></a>
<a id="trace-14849"></a>
<a id="trace-14853"></a>
<a id="trace-14866"></a>
<a id="trace-14932"></a>
<a id="trace-14937"></a>
<a id="trace-14949"></a>
<a id="trace-14958"></a>
<a id="trace-14962"></a>
<a id="trace-14968"></a>
<a id="trace-14974"></a>
<a id="trace-14982"></a>
<a id="trace-15051"></a>
<a id="trace-15069"></a>
<a id="trace-15074"></a>
<a id="trace-15199"></a>
<a id="trace-15207"></a>
<a id="trace-15219"></a>
<a id="trace-15295"></a>
<a id="trace-15305"></a>
<a id="trace-15315"></a>
<a id="trace-15322"></a>
<a id="trace-15442"></a>
<a id="trace-15463"></a>
<a id="trace-15469"></a>
<a id="trace-15481"></a>
<a id="trace-15489"></a>
<a id="trace-15555"></a>
<a id="trace-15572"></a>
<a id="trace-15578"></a>
<a id="trace-15595"></a>
<a id="trace-15608"></a>
<a id="trace-15625"></a>
<a id="trace-15630"></a>
<a id="trace-15696"></a>
<a id="trace-15703"></a>
<a id="trace-15711"></a>
<a id="trace-15718"></a>
<a id="trace-15727"></a>
<a id="trace-15837"></a>
<a id="trace-15848"></a>
<a id="trace-15868"></a>
<a id="trace-15946"></a>
<a id="trace-15953"></a>
<a id="trace-15963"></a>
<a id="trace-15992"></a>
<a id="trace-15999"></a>
<a id="trace-16010"></a>
<a id="trace-16015"></a>
- 6.70s–359.80s (×536), actor 37, squad 4 (trace 549): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 434. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09448871984637386, 'next_transition': 599}.
<a id="trace-735"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 735): traveling overwatch. Knowledge: actor memory at 10.00s, trace 642. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1001}.
<a id="trace-736"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 736): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 642. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1001}.
<a id="trace-1001"></a>
<a id="trace-1023"></a>
<a id="trace-1045"></a>
<a id="trace-1063"></a>
<a id="trace-1082"></a>
<a id="trace-1100"></a>
<a id="trace-1128"></a>
<a id="trace-1146"></a>
- 11.20s–14.70s (×8), actor 5, squad 0 (trace 1001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 645. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1023}.
<a id="trace-1221"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1221): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1151. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1574}.
<a id="trace-1222"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1222): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1151. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1574}.
<a id="trace-1223"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1223): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1151. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1574}.
<a id="trace-1574"></a>
- 15.20s–15.20s (×1), actor 5, squad 0 (trace 1574): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1154. Next observer evidence: None.
<a id="trace-1577"></a>
- 15.35s–15.35s (×1), actor 0, squad 0 (trace 1577): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1151. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900109210892764, 'next_transition': 1933}.
<a id="trace-1933"></a>
<a id="trace-1973"></a>
<a id="trace-2009"></a>
<a id="trace-2024"></a>
<a id="trace-2042"></a>
<a id="trace-2065"></a>
- 15.70s–18.25s (×6), actor 5, squad 0 (trace 1933): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1154. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.980150293547004, 'next_transition': 1973}.
<a id="trace-208"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 208): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2074"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2074): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.696116 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2074. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47636213496858576, 'next_transition': 2079}.
<a id="trace-2075"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2075): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.696116 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2075. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47636213496858576, 'next_transition': 2079}.
<a id="trace-2079"></a>
<a id="trace-2091"></a>
- 18.75s–19.25s (×2), actor 5, squad 0 (trace 2079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2075. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3801807133536221, 'next_transition': 2091}.
<a id="trace-2098"></a>
- 19.60s–19.60s (×1), actor 1, squad 0 (trace 2098): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: None.
<a id="trace-2100"></a>
- 19.60s–19.60s (×1), actor 1, squad 0 (trace 2100): NeedSupport. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: None.
<a id="trace-2107"></a>
<a id="trace-2186"></a>
- 19.75s–20.25s (×2), actor 5, squad 0 (trace 2107): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2075. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4085240626287223, 'next_transition': 2186}.
<a id="trace-2192"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2192): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2196"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2196): MoveTactically. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2197"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2197): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2198"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2198): Reorganise complete. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2483"></a>
<a id="trace-2496"></a>
<a id="trace-2516"></a>
<a id="trace-2536"></a>
<a id="trace-2543"></a>
<a id="trace-2562"></a>
- 20.75s–23.25s (×6), actor 5, squad 0 (trace 2483): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2115. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0620090678129102, 'next_transition': 2496}.
<a id="trace-2566"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 2566): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2567"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 2567): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2568"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 2568): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2113. Next observer evidence: None.
<a id="trace-2840"></a>
<a id="trace-2853"></a>
<a id="trace-2877"></a>
<a id="trace-2952"></a>
- 23.75s–25.25s (×4), actor 5, squad 0 (trace 2840): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2115. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8107550962569781, 'next_transition': 2853}.
<a id="trace-2957"></a>
- 25.50s–25.50s (×1), actor 1, squad 0 (trace 2957): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2882. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37614301927301286, 'next_transition': 3260}.
<a id="trace-3260"></a>
<a id="trace-3287"></a>
<a id="trace-3301"></a>
<a id="trace-3318"></a>
<a id="trace-3332"></a>
<a id="trace-3348"></a>
<a id="trace-3366"></a>
- 25.75s–28.75s (×7), actor 5, squad 0 (trace 3260): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2884. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45244035850623054, 'next_transition': 3287}.
<a id="trace-3372"></a>
- 29.05s–29.05s (×1), actor 5, squad 0 (trace 3372): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 29.05s, trace 3372. Next observer evidence: None.
<a id="trace-3374"></a>
- 29.15s–29.15s (×1), actor 1, squad 0 (trace 3374): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 2882. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37680178406213594, 'next_transition': 3630}.
<a id="trace-3375"></a>
- 29.15s–29.15s (×1), actor 1, squad 0 (trace 3375): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 2882. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37680178406213594, 'next_transition': 3630}.
<a id="trace-3630"></a>
<a id="trace-3639"></a>
<a id="trace-3723"></a>
<a id="trace-3732"></a>
<a id="trace-3747"></a>
- 29.25s–31.25s (×5), actor 5, squad 0 (trace 3630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 29.05s, trace 3372. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7426983567840069, 'next_transition': 3639}.
<a id="trace-3753"></a>
- 31.35s–31.35s (×1), actor 1, squad 0 (trace 3753): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 30.00s, trace 3649. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299992818044946, 'next_transition': 3761}.
<a id="trace-3754"></a>
- 31.35s–31.35s (×1), actor 1, squad 0 (trace 3754): NeedSupport. Knowledge: actor memory at 30.00s, trace 3649. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299992818044946, 'next_transition': 3761}.
<a id="trace-3761"></a>
- 31.60s–31.60s (×1), actor 1, squad 0 (trace 3761): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3649. Next observer evidence: None.
<a id="trace-3764"></a>
- 31.60s–31.60s (×1), actor 1, squad 0 (trace 3764): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3649. Next observer evidence: None.
<a id="trace-3765"></a>
- 31.60s–31.60s (×1), actor 1, squad 0 (trace 3765): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 3649. Next observer evidence: None.
<a id="trace-4009"></a>
<a id="trace-4026"></a>
<a id="trace-4047"></a>
<a id="trace-4065"></a>
<a id="trace-4087"></a>
<a id="trace-4172"></a>
- 31.75s–35.25s (×6), actor 5, squad 0 (trace 4009): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3651. Next observer evidence: {'until': 32.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1542305212754884, 'next_transition': 4026}.
<a id="trace-4179"></a>
- 35.60s–35.60s (×1), actor 1, squad 0 (trace 4179): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 4107. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2758333333333332, 'next_transition': 4382}.
<a id="trace-4180"></a>
- 35.60s–35.60s (×1), actor 1, squad 0 (trace 4180): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 4107. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2758333333333332, 'next_transition': 4382}.
<a id="trace-4382"></a>
<a id="trace-4411"></a>
<a id="trace-4426"></a>
<a id="trace-4444"></a>
<a id="trace-4515"></a>
<a id="trace-4533"></a>
<a id="trace-4555"></a>
<a id="trace-4573"></a>
<a id="trace-4592"></a>
<a id="trace-4669"></a>
<a id="trace-4691"></a>
- 36.25s–46.25s (×11), actor 5, squad 0 (trace 4382): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4109. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3248555170601282, 'next_transition': 4411}.
<a id="trace-4699"></a>
- 46.70s–46.70s (×1), actor 1, squad 0 (trace 4699): NeedSupport. Knowledge: actor memory at 45.00s, trace 4601. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.324238572042254, 'next_transition': 4709}.
<a id="trace-4709"></a>
- 47.25s–47.25s (×1), actor 5, squad 0 (trace 4709): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4603. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2263652032790278, 'next_transition': 4714}.
<a id="trace-4714"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 4714): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 4601. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3548588362371093, 'next_transition': 4774}.
<a id="trace-4715"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 4715): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 4601. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3548588362371093, 'next_transition': 4774}.
<a id="trace-4774"></a>
<a id="trace-4788"></a>
<a id="trace-4866"></a>
<a id="trace-4883"></a>
<a id="trace-4895"></a>
<a id="trace-4907"></a>
<a id="trace-4926"></a>
<a id="trace-5001"></a>
<a id="trace-5014"></a>
<a id="trace-5028"></a>
<a id="trace-5039"></a>
<a id="trace-5056"></a>
<a id="trace-5128"></a>
<a id="trace-5141"></a>
<a id="trace-5154"></a>
<a id="trace-5167"></a>
- 48.25s–63.25s (×16), actor 5, squad 0 (trace 4774): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4603. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3732257657534139, 'next_transition': 4788}.
<a id="trace-5171"></a>
- 63.25s–63.25s (×1), actor 1, squad 0 (trace 5171): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 5065. Next observer evidence: {'until': 64.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.26248877647963925, 'next_transition': 5257}.
<a id="trace-5188"></a>
- 63.25s–63.25s (×1), actor 1, squad 0 (trace 5188): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 5065. Next observer evidence: {'until': 64.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.26248877647963925, 'next_transition': 5257}.
<a id="trace-5257"></a>
<a id="trace-5332"></a>
<a id="trace-5351"></a>
<a id="trace-5366"></a>
<a id="trace-5382"></a>
<a id="trace-5401"></a>
<a id="trace-5476"></a>
- 64.25s–70.25s (×7), actor 5, squad 0 (trace 5257): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 5067. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500257420124937, 'next_transition': 5332}.
<a id="trace-5483"></a>
- 70.50s–70.50s (×1), actor 1, squad 0 (trace 5483): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 5415. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0290046223417804, 'next_transition': 5502}.
<a id="trace-5502"></a>
<a id="trace-5524"></a>
<a id="trace-5543"></a>
- 71.25s–73.25s (×3), actor 5, squad 0 (trace 5502): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 5417. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9764993425041334, 'next_transition': 5524}.
<a id="trace-534"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (events line 534): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5548"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (trace 5548): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.05s, trace 5548. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5553}.
<a id="trace-5549"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (trace 5549): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.05s, trace 5549. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5553}.
<a id="trace-5553"></a>
<a id="trace-5619"></a>
<a id="trace-5628"></a>
- 74.25s–76.25s (×3), actor 5, squad 0 (trace 5553): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.05s, trace 5549. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5619}.
<a id="trace-5631"></a>
- 76.35s–76.35s (×1), actor 1, squad 0 (trace 5631): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 5559. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399315864679856, 'next_transition': 5713}.
<a id="trace-5632"></a>
- 76.35s–76.35s (×1), actor 1, squad 0 (trace 5632): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 5559. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399315864679856, 'next_transition': 5713}.
<a id="trace-5713"></a>
<a id="trace-5725"></a>
<a id="trace-5744"></a>
<a id="trace-5815"></a>
<a id="trace-5830"></a>
<a id="trace-5840"></a>
<a id="trace-5853"></a>
<a id="trace-5867"></a>
<a id="trace-5941"></a>
<a id="trace-5956"></a>
<a id="trace-5971"></a>
- 77.25s–87.25s (×11), actor 5, squad 0 (trace 5713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 5561. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7833444302350767, 'next_transition': 5725}.
<a id="trace-5982"></a>
- 87.85s–87.85s (×1), actor 1, squad 0 (trace 5982): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 5879. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30238443414155947, 'next_transition': 6041}.
<a id="trace-5983"></a>
- 87.85s–87.85s (×1), actor 1, squad 0 (trace 5983): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 5879. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30238443414155947, 'next_transition': 6041}.
<a id="trace-6041"></a>
<a id="trace-6065"></a>
<a id="trace-6140"></a>
<a id="trace-6159"></a>
<a id="trace-6174"></a>
<a id="trace-6193"></a>
<a id="trace-6210"></a>
<a id="trace-6286"></a>
<a id="trace-6302"></a>
<a id="trace-6319"></a>
<a id="trace-6331"></a>
<a id="trace-6354"></a>
<a id="trace-6430"></a>
<a id="trace-6447"></a>
<a id="trace-6459"></a>
<a id="trace-6474"></a>
- 88.25s–103.25s (×16), actor 5, squad 0 (trace 6041): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5881. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8315288145560649, 'next_transition': 6065}.
<a id="trace-6486"></a>
- 104.05s–104.05s (×1), actor 1, squad 0 (trace 6486): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 6365. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15117595708312878, 'next_transition': 6546}.
<a id="trace-6487"></a>
- 104.05s–104.05s (×1), actor 1, squad 0 (trace 6487): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 6365. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15117595708312878, 'next_transition': 6546}.
<a id="trace-6546"></a>
<a id="trace-6627"></a>
<a id="trace-6649"></a>
<a id="trace-6668"></a>
<a id="trace-6683"></a>
<a id="trace-6701"></a>
<a id="trace-6774"></a>
<a id="trace-6792"></a>
- 104.25s–111.25s (×8), actor 5, squad 0 (trace 6546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 6367. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2284678693825668, 'next_transition': 6627}.
<a id="trace-6795"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 6795): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 6712. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755983957795697, 'next_transition': 6867}.
<a id="trace-6796"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 6796): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 6712. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755983957795697, 'next_transition': 6867}.
<a id="trace-6867"></a>
<a id="trace-6886"></a>
<a id="trace-6906"></a>
<a id="trace-6982"></a>
<a id="trace-6997"></a>
<a id="trace-7015"></a>
<a id="trace-7032"></a>
<a id="trace-7051"></a>
<a id="trace-7128"></a>
<a id="trace-7145"></a>
<a id="trace-7157"></a>
- 112.25s–122.25s (×11), actor 5, squad 0 (trace 6867): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6714. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2850741364585858, 'next_transition': 6886}.
<a id="trace-7164"></a>
- 122.35s–122.35s (×1), actor 1, squad 0 (trace 7164): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 7062. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2474191134117765, 'next_transition': 7184}.
<a id="trace-7184"></a>
<a id="trace-7207"></a>
<a id="trace-7290"></a>
<a id="trace-7310"></a>
<a id="trace-7324"></a>
<a id="trace-7336"></a>
<a id="trace-7351"></a>
<a id="trace-7423"></a>
<a id="trace-7439"></a>
<a id="trace-7454"></a>
<a id="trace-7465"></a>
- 123.25s–133.30s (×11), actor 5, squad 0 (trace 7184): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7064. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118450831865785, 'next_transition': 7207}.
<a id="trace-797"></a>
- 134.05s–134.05s (×1), actor 5, squad 0 (events line 797): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7479}.
<a id="trace-7475"></a>
- 134.05s–134.05s (×1), actor 5, squad 0 (trace 7475): renew committed intent (75 s lifetime). Knowledge: actor memory at 134.05s, trace 7475. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7479}.
<a id="trace-7479"></a>
<a id="trace-7550"></a>
<a id="trace-7563"></a>
<a id="trace-7573"></a>
<a id="trace-7586"></a>
<a id="trace-7599"></a>
<a id="trace-7669"></a>
<a id="trace-7682"></a>
<a id="trace-7693"></a>
<a id="trace-7704"></a>
<a id="trace-7718"></a>
- 134.30s–144.30s (×11), actor 5, squad 0 (trace 7479): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 134.05s, trace 7475. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7550}.
<a id="trace-838"></a>
- 144.60s–144.60s (×1), actor 5, squad 0 (events line 838): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7722"></a>
- 144.60s–144.60s (×1), actor 5, squad 0 (trace 7722): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.511889 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.60s, trace 7722. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7795}.
<a id="trace-7723"></a>
- 144.60s–144.60s (×1), actor 5, squad 0 (trace 7723): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.511889 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.60s, trace 7723. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7795}.
<a id="trace-7795"></a>
- 145.30s–145.30s (×1), actor 5, squad 0 (trace 7795): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 7732. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 847}.
<a id="trace-847"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (events line 847): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7810}.
<a id="trace-7803"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (trace 7803): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.713833 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.80s, trace 7803. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7810}.
<a id="trace-7804"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (trace 7804): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.713833 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.80s, trace 7804. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7810}.
<a id="trace-7810"></a>
- 146.30s–146.30s (×1), actor 5, squad 0 (trace 7810): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.80s, trace 7804. Next observer evidence: None.
<a id="trace-7815"></a>
- 146.35s–146.35s (×1), actor 1, squad 0 (trace 7815): MoveTactically. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574944372915354, 'next_transition': 7935}.
<a id="trace-7816"></a>
- 146.35s–146.35s (×1), actor 1, squad 0 (trace 7816): traveling. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574944372915354, 'next_transition': 7935}.
<a id="trace-7817"></a>
- 146.35s–146.35s (×1), actor 1, squad 0 (trace 7817): received platoon directive. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574944372915354, 'next_transition': 7935}.
<a id="trace-7935"></a>
<a id="trace-7952"></a>
- 147.30s–148.30s (×2), actor 5, squad 0 (trace 7935): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.80s, trace 7804. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5036323441792534, 'next_transition': 7952}.
<a id="trace-7956"></a>
- 148.35s–148.35s (×1), actor 1, squad 0 (trace 7956): traveling overwatch. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224267319860079, 'next_transition': 7967}.
<a id="trace-7957"></a>
- 148.35s–148.35s (×1), actor 1, squad 0 (trace 7957): received platoon directive. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224267319860079, 'next_transition': 7967}.
<a id="trace-7967"></a>
- 148.60s–148.60s (×1), actor 1, squad 0 (trace 7967): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 7730. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0331984915803987, 'next_transition': 8039}.
<a id="trace-8039"></a>
<a id="trace-8127"></a>
<a id="trace-8148"></a>
<a id="trace-8168"></a>
<a id="trace-8184"></a>
<a id="trace-8198"></a>
<a id="trace-8276"></a>
<a id="trace-8294"></a>
<a id="trace-8311"></a>
<a id="trace-8323"></a>
<a id="trace-8344"></a>
<a id="trace-8421"></a>
<a id="trace-8439"></a>
<a id="trace-8453"></a>
<a id="trace-8469"></a>
<a id="trace-8486"></a>
<a id="trace-8568"></a>
<a id="trace-8584"></a>
<a id="trace-8599"></a>
- 149.30s–167.30s (×19), actor 5, squad 0 (trace 8039): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.80s, trace 7804. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5747425182278547, 'next_transition': 8127}.
<a id="trace-969"></a>
- 167.40s–167.40s (×1), actor 5, squad 0 (events line 969): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8603"></a>
- 167.40s–167.40s (×1), actor 5, squad 0 (trace 8603): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.40s, trace 8603. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8609}.
<a id="trace-8604"></a>
- 167.40s–167.40s (×1), actor 5, squad 0 (trace 8604): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.40s, trace 8604. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8609}.
<a id="trace-8609"></a>
- 167.65s–167.65s (×1), actor 1, squad 0 (trace 8609): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 165.00s, trace 8503. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8620}.
<a id="trace-8620"></a>
- 168.25s–168.25s (×1), actor 1, squad 0 (trace 8620): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 165.00s, trace 8503. Next observer evidence: None.
<a id="trace-8675"></a>
- 168.30s–168.30s (×1), actor 5, squad 0 (trace 8675): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 167.40s, trace 8604. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5270863981450036, 'next_transition': 8699}.
<a id="trace-8699"></a>
- 169.25s–169.25s (×1), actor 1, squad 0 (trace 8699): traveling. Knowledge: actor memory at 165.00s, trace 8503. Next observer evidence: None.
<a id="trace-8700"></a>
- 169.25s–169.25s (×1), actor 1, squad 0 (trace 8700): received platoon directive. Knowledge: actor memory at 165.00s, trace 8503. Next observer evidence: None.
<a id="trace-8807"></a>
<a id="trace-8884"></a>
<a id="trace-8912"></a>
<a id="trace-8937"></a>
<a id="trace-8954"></a>
<a id="trace-8970"></a>
<a id="trace-9047"></a>
<a id="trace-9062"></a>
- 169.30s–176.30s (×8), actor 5, squad 0 (trace 8807): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 167.40s, trace 8604. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.462501808115837, 'next_transition': 8884}.
<a id="trace-9071"></a>
- 176.65s–176.65s (×1), actor 1, squad 0 (trace 9071): matching received arrivals: traveling stage complete. Knowledge: actor memory at 175.00s, trace 8981. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8945839299797632, 'next_transition': 9187}.
<a id="trace-9187"></a>
<a id="trace-9211"></a>
<a id="trace-9230"></a>
<a id="trace-9310"></a>
<a id="trace-9330"></a>
<a id="trace-9343"></a>
<a id="trace-9363"></a>
<a id="trace-9384"></a>
<a id="trace-9466"></a>
<a id="trace-9482"></a>
<a id="trace-9497"></a>
<a id="trace-9513"></a>
- 177.30s–188.30s (×12), actor 5, squad 0 (trace 9187): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 8983. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0327520515784268, 'next_transition': 9211}.
<a id="trace-9521"></a>
- 188.55s–188.55s (×1), actor 1, squad 0 (trace 9521): traveling overwatch. Knowledge: actor memory at 185.00s, trace 9404. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047812506279541, 'next_transition': 9588}.
<a id="trace-9522"></a>
- 188.55s–188.55s (×1), actor 1, squad 0 (trace 9522): matching received arrivals: traveling stage complete. Knowledge: actor memory at 185.00s, trace 9404. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047812506279541, 'next_transition': 9588}.
<a id="trace-9588"></a>
<a id="trace-9663"></a>
<a id="trace-9682"></a>
<a id="trace-9701"></a>
<a id="trace-9717"></a>
<a id="trace-9732"></a>
<a id="trace-9811"></a>
<a id="trace-9829"></a>
<a id="trace-9845"></a>
<a id="trace-9860"></a>
<a id="trace-9877"></a>
<a id="trace-9953"></a>
<a id="trace-9971"></a>
<a id="trace-9985"></a>
- 189.30s–202.30s (×14), actor 5, squad 0 (trace 9588): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9406. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.75353645577748, 'next_transition': 9663}.
<a id="trace-9992"></a>
- 202.60s–202.60s (×1), actor 1, squad 0 (trace 9992): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 200.00s, trace 9888. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45569224141835935, 'next_transition': 10105}.
<a id="trace-10105"></a>
<a id="trace-10128"></a>
<a id="trace-10207"></a>
<a id="trace-10222"></a>
<a id="trace-10240"></a>
<a id="trace-10255"></a>
- 203.30s–208.30s (×6), actor 5, squad 0 (trace 10105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 9890. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449879734096562, 'next_transition': 10128}.
<a id="trace-10266"></a>
- 208.85s–208.85s (×1), actor 1, squad 0 (trace 10266): matching received arrivals: deployment leg complete. Knowledge: actor memory at 205.00s, trace 10144. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26459358562813984, 'next_transition': 10275}.
<a id="trace-10275"></a>
<a id="trace-10349"></a>
<a id="trace-10368"></a>
- 209.30s–211.30s (×3), actor 5, squad 0 (trace 10275): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 10146. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6496067571145553, 'next_transition': 10349}.
<a id="trace-1218"></a>
- 211.80s–211.80s (×1), actor 5, squad 0 (events line 1218): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10383}.
<a id="trace-10376"></a>
- 211.80s–211.80s (×1), actor 5, squad 0 (trace 10376): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 211.80s, trace 10376. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10383}.
<a id="trace-10377"></a>
- 211.80s–211.80s (×1), actor 5, squad 0 (trace 10377): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 211.80s, trace 10377. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10383}.
<a id="trace-10383"></a>
<a id="trace-10396"></a>
- 212.30s–213.30s (×2), actor 5, squad 0 (trace 10383): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 211.80s, trace 10377. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10396}.
<a id="trace-10403"></a>
- 213.65s–213.65s (×1), actor 1, squad 0 (trace 10403): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 10285. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10612}.
<a id="trace-10406"></a>
- 213.65s–213.65s (×1), actor 1, squad 0 (trace 10406): MoveTactically. Knowledge: actor memory at 210.00s, trace 10285. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10612}.
<a id="trace-10407"></a>
- 213.65s–213.65s (×1), actor 1, squad 0 (trace 10407): Reorganise complete. Knowledge: actor memory at 210.00s, trace 10285. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10612}.
<a id="trace-10612"></a>
<a id="trace-10691"></a>
<a id="trace-10711"></a>
<a id="trace-10735"></a>
<a id="trace-10752"></a>
- 214.30s–218.30s (×5), actor 5, squad 0 (trace 10612): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 211.80s, trace 10377. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.11929481073843, 'next_transition': 10691}.
<a id="trace-10759"></a>
- 218.35s–218.35s (×1), actor 1, squad 0 (trace 10759): ReactToContact: cover and return fire. Knowledge: actor memory at 215.00s, trace 10630. Next observer evidence: {'until': 218.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32710538648853804, 'next_transition': 11020}.
<a id="trace-10760"></a>
- 218.35s–218.35s (×1), actor 1, squad 0 (trace 10760): bounding overwatch. Knowledge: actor memory at 215.00s, trace 10630. Next observer evidence: {'until': 218.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32710538648853804, 'next_transition': 11020}.
<a id="trace-10761"></a>
<a id="trace-11020"></a>
- 218.35s–218.60s (×2), actor 1, squad 0 (trace 10761): new contact inside 100 m. Knowledge: actor memory at 215.00s, trace 10630. Next observer evidence: {'until': 218.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32710538648853804, 'next_transition': 11020}.
<a id="trace-11288"></a>
<a id="trace-11376"></a>
- 219.30s–220.30s (×2), actor 5, squad 0 (trace 11288): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 10632. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4750353037326474, 'next_transition': 11376}.
<a id="trace-11386"></a>
- 220.75s–220.75s (×1), actor 5, squad 0 (trace 11386): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 220.75s, trace 11386. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8915954866846801, 'next_transition': 11414}.
<a id="trace-11414"></a>
- 221.30s–221.30s (×1), actor 5, squad 0 (trace 11414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.75s, trace 11386. Next observer evidence: {'until': 221.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34252207706809124, 'next_transition': 1300}.
<a id="trace-1300"></a>
- 221.40s–221.40s (×1), actor 5, squad 0 (events line 1300): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11419"></a>
- 221.40s–221.40s (×1), actor 5, squad 0 (trace 11419): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.287795 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 221.40s, trace 11419. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4215587509942862, 'next_transition': 11439}.
<a id="trace-11420"></a>
- 221.40s–221.40s (×1), actor 5, squad 0 (trace 11420): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.287795 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 221.40s, trace 11420. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4215587509942862, 'next_transition': 11439}.
<a id="trace-11439"></a>
- 222.30s–222.30s (×1), actor 5, squad 0 (trace 11439): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 221.40s, trace 11420. Next observer evidence: {'until': 222.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9565131721576196, 'next_transition': 11446}.
<a id="trace-11446"></a>
- 222.60s–222.60s (×1), actor 1, squad 0 (trace 11446): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 220.00s, trace 11312. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4560677225771348, 'next_transition': 11587}.
<a id="trace-11447"></a>
- 222.60s–222.60s (×1), actor 1, squad 0 (trace 11447): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 11312. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4560677225771348, 'next_transition': 11587}.
<a id="trace-11587"></a>
<a id="trace-11615"></a>
<a id="trace-11693"></a>
<a id="trace-11710"></a>
<a id="trace-11724"></a>
<a id="trace-11741"></a>
<a id="trace-11764"></a>
<a id="trace-11841"></a>
<a id="trace-11863"></a>
<a id="trace-11880"></a>
<a id="trace-11897"></a>
<a id="trace-11911"></a>
- 223.30s–234.30s (×12), actor 5, squad 0 (trace 11587): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 221.40s, trace 11420. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.732264780634898, 'next_transition': 11615}.
<a id="trace-11921"></a>
- 234.85s–234.85s (×1), actor 1, squad 0 (trace 11921): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 230.00s, trace 11777. Next observer evidence: {'until': 235.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12044}.
<a id="trace-11928"></a>
- 234.85s–234.85s (×1), actor 1, squad 0 (trace 11928): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 230.00s, trace 11777. Next observer evidence: {'until': 235.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12044}.
<a id="trace-12044"></a>
<a id="trace-12065"></a>
<a id="trace-12079"></a>
<a id="trace-12096"></a>
<a id="trace-12112"></a>
<a id="trace-12182"></a>
- 235.30s–240.30s (×6), actor 5, squad 0 (trace 12044): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 11985. Next observer evidence: {'until': 236.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07560215928721141, 'next_transition': 12065}.
<a id="trace-12227"></a>
<a id="trace-12294"></a>
- 244.30s–245.30s (×2), actor 1, squad 0 (trace 12227): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.00s, trace 12119. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133968162031016, 'next_transition': 12294}.
<a id="trace-1391"></a>
- 246.20s–246.20s (×1), actor 1, squad 0 (events line 1391): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12309"></a>
- 246.20s–246.20s (×1), actor 1, squad 0 (trace 12309): renew committed intent (75 s lifetime). Knowledge: actor memory at 246.20s, trace 12309. Next observer evidence: None.
<a id="trace-12312"></a>
<a id="trace-12326"></a>
<a id="trace-12335"></a>
<a id="trace-12346"></a>
<a id="trace-12413"></a>
- 246.30s–250.30s (×5), actor 1, squad 0 (trace 12312): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 246.20s, trace 12309. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133964578370947, 'next_transition': 12326}.
<a id="trace-12428"></a>
- 251.05s–251.05s (×1), actor 1, squad 0 (trace 12428): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 250.00s, trace 12354. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12484}.
<a id="trace-12429"></a>
- 251.05s–251.05s (×1), actor 1, squad 0 (trace 12429): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 250.00s, trace 12354. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12484}.
<a id="trace-12484"></a>
<a id="trace-12500"></a>
<a id="trace-12518"></a>
<a id="trace-12534"></a>
<a id="trace-12603"></a>
<a id="trace-12620"></a>
<a id="trace-12636"></a>
<a id="trace-12649"></a>
<a id="trace-12662"></a>
<a id="trace-12731"></a>
<a id="trace-12747"></a>
- 251.30s–261.30s (×11), actor 1, squad 0 (trace 12484): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 12354. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087126198961039, 'next_transition': 12500}.
<a id="trace-12759"></a>
- 261.80s–261.80s (×1), actor 1, squad 0 (trace 12759): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12767}.
<a id="trace-12767"></a>
- 262.30s–262.30s (×1), actor 1, squad 0 (trace 12767): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12780}.
<a id="trace-12780"></a>
- 262.80s–262.80s (×1), actor 1, squad 0 (trace 12780): MoveTactically. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 263, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12781"></a>
- 262.80s–262.80s (×1), actor 1, squad 0 (trace 12781): received platoon directive. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 263, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12792"></a>
- 263.05s–263.05s (×1), actor 1, squad 0 (trace 12792): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12851}.
<a id="trace-12851"></a>
<a id="trace-12880"></a>
<a id="trace-12957"></a>
- 263.30s–265.30s (×3), actor 1, squad 0 (trace 12851): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 260.00s, trace 12670. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087509594349775, 'next_transition': 12880}.
<a id="trace-1469"></a>
- 265.75s–265.75s (×1), actor 1, squad 0 (events line 1469): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}.
<a id="trace-12967"></a>
- 265.75s–265.75s (×1), actor 1, squad 0 (trace 12967): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340878 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 265.75s, trace 12967. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}.
<a id="trace-12968"></a>
- 265.75s–265.75s (×1), actor 1, squad 0 (trace 12968): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340878 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 265.75s, trace 12968. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}.
<a id="trace-12977"></a>
<a id="trace-12991"></a>
<a id="trace-13004"></a>
- 266.30s–268.30s (×3), actor 1, squad 0 (trace 12977): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 265.75s, trace 12968. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749721084831962, 'next_transition': 12991}.
<a id="trace-13008"></a>
- 268.55s–268.55s (×1), actor 1, squad 0 (trace 13008): Withdraw to received rally. Knowledge: actor memory at 265.75s, trace 12968. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599742943806427, 'next_transition': 13078}.
<a id="trace-13009"></a>
- 268.55s–268.55s (×1), actor 1, squad 0 (trace 13009): rearward bound: one stationary suppressing element. Knowledge: actor memory at 265.75s, trace 12968. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599742943806427, 'next_transition': 13078}.
<a id="trace-13078"></a>
<a id="trace-13156"></a>
<a id="trace-13176"></a>
<a id="trace-13190"></a>
<a id="trace-13201"></a>
<a id="trace-13215"></a>
<a id="trace-13305"></a>
<a id="trace-13319"></a>
<a id="trace-13331"></a>
<a id="trace-13344"></a>
<a id="trace-13418"></a>
- 269.30s–280.30s (×11), actor 1, squad 0 (trace 13078): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 265.75s, trace 12968. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174021174317466, 'next_transition': 13156}.
<a id="trace-13431"></a>
- 281.05s–281.05s (×1), actor 1, squad 0 (trace 13431): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 13358. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13488}.
<a id="trace-13432"></a>
- 281.05s–281.05s (×1), actor 1, squad 0 (trace 13432): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 13358. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13488}.
<a id="trace-13488"></a>
<a id="trace-13508"></a>
<a id="trace-13526"></a>
<a id="trace-13541"></a>
<a id="trace-13611"></a>
<a id="trace-13626"></a>
<a id="trace-13641"></a>
<a id="trace-13656"></a>
<a id="trace-13673"></a>
<a id="trace-13743"></a>
<a id="trace-13758"></a>
<a id="trace-13775"></a>
<a id="trace-13788"></a>
<a id="trace-13804"></a>
<a id="trace-13875"></a>
<a id="trace-13893"></a>
- 281.30s–296.30s (×16), actor 1, squad 0 (trace 13488): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 13358. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13508}.
<a id="trace-13908"></a>
- 297.25s–297.25s (×1), actor 1, squad 0 (trace 13908): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 295.00s, trace 13813. Next observer evidence: None.
<a id="trace-13909"></a>
- 297.25s–297.25s (×1), actor 1, squad 0 (trace 13909): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 295.00s, trace 13813. Next observer evidence: None.
<a id="trace-13964"></a>
<a id="trace-13980"></a>
<a id="trace-13997"></a>
<a id="trace-14072"></a>
<a id="trace-14088"></a>
<a id="trace-14102"></a>
<a id="trace-14117"></a>
<a id="trace-14132"></a>
<a id="trace-14202"></a>
<a id="trace-14217"></a>
<a id="trace-14232"></a>
<a id="trace-14246"></a>
- 297.30s–308.30s (×12), actor 1, squad 0 (trace 13964): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 13813. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937740722800365, 'next_transition': 13980}.
<a id="trace-14261"></a>
- 309.25s–309.25s (×1), actor 1, squad 0 (trace 14261): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 305.00s, trace 14142. Next observer evidence: None.
<a id="trace-14262"></a>
- 309.25s–309.25s (×1), actor 1, squad 0 (trace 14262): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 305.00s, trace 14142. Next observer evidence: None.
<a id="trace-14317"></a>
<a id="trace-14391"></a>
<a id="trace-14407"></a>
<a id="trace-14428"></a>
<a id="trace-14439"></a>
<a id="trace-14454"></a>
<a id="trace-14526"></a>
<a id="trace-14545"></a>
<a id="trace-14560"></a>
<a id="trace-14572"></a>
<a id="trace-14585"></a>
<a id="trace-14655"></a>
- 309.30s–320.30s (×12), actor 1, squad 0 (trace 14317): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 305.00s, trace 14142. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14391}.
<a id="trace-14669"></a>
- 321.00s–321.00s (×1), actor 1, squad 0 (trace 14669): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 320.00s, trace 14593. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22678752721435222, 'next_transition': 14676}.
<a id="trace-14676"></a>
<a id="trace-14702"></a>
<a id="trace-14717"></a>
<a id="trace-14734"></a>
<a id="trace-14805"></a>
<a id="trace-14819"></a>
<a id="trace-14832"></a>
- 321.30s–327.30s (×7), actor 1, squad 0 (trace 14676): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 320.00s, trace 14593. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.134037222713613, 'next_transition': 14702}.
<a id="trace-1740"></a>
- 327.35s–327.35s (×1), actor 1, squad 0 (events line 1740): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14836"></a>
- 327.35s–327.35s (×1), actor 1, squad 0 (trace 14836): renew committed intent (75 s lifetime). Knowledge: actor memory at 327.35s, trace 14836. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14846}.
<a id="trace-14846"></a>
<a id="trace-14860"></a>
<a id="trace-14929"></a>
<a id="trace-14942"></a>
<a id="trace-14955"></a>
<a id="trace-14965"></a>
<a id="trace-14979"></a>
<a id="trace-15048"></a>
- 328.30s–335.30s (×8), actor 1, squad 0 (trace 14846): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 327.35s, trace 14836. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14860}.
<a id="trace-1778"></a>
- 336.00s–336.00s (×1), actor 1, squad 0 (events line 1778): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15066}.
<a id="trace-15059"></a>
- 336.00s–336.00s (×1), actor 1, squad 0 (trace 15059): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.566095 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.00s, trace 15059. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15066}.
<a id="trace-15060"></a>
- 336.00s–336.00s (×1), actor 1, squad 0 (trace 15060): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.566095 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15066}.
<a id="trace-15066"></a>
<a id="trace-15080"></a>
- 336.30s–337.30s (×2), actor 1, squad 0 (trace 15066): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15080}.
<a id="trace-15086"></a>
- 338.05s–338.05s (×1), actor 1, squad 0 (trace 15086): MoveTactically. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15196}.
<a id="trace-15087"></a>
- 338.05s–338.05s (×1), actor 1, squad 0 (trace 15087): traveling. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15196}.
<a id="trace-15088"></a>
- 338.05s–338.05s (×1), actor 1, squad 0 (trace 15088): received platoon directive. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15196}.
<a id="trace-15196"></a>
- 338.30s–338.30s (×1), actor 1, squad 0 (trace 15196): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 336.00s, trace 15060. Next observer evidence: {'until': 338.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874039623979713, 'next_transition': 1795}.
<a id="trace-1795"></a>
- 338.80s–338.80s (×1), actor 1, squad 0 (events line 1795): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15208"></a>
- 338.80s–338.80s (×1), actor 1, squad 0 (trace 15208): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 338.80s, trace 15208. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299940674323845, 'next_transition': 15216}.
<a id="trace-15209"></a>
- 338.80s–338.80s (×1), actor 1, squad 0 (trace 15209): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 338.80s, trace 15209. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299940674323845, 'next_transition': 15216}.
<a id="trace-15216"></a>
<a id="trace-15292"></a>
<a id="trace-15312"></a>
- 339.30s–341.30s (×3), actor 1, squad 0 (trace 15216): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 338.80s, trace 15209. Next observer evidence: {'until': 340.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5955729909934435, 'next_transition': 15292}.
<a id="trace-15323"></a>
- 341.80s–341.80s (×1), actor 1, squad 0 (trace 15323): received platoon directive. Knowledge: actor memory at 340.00s, trace 15229. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836107833942181, 'next_transition': 15439}.
<a id="trace-15439"></a>
<a id="trace-15460"></a>
<a id="trace-15478"></a>
<a id="trace-15552"></a>
<a id="trace-15569"></a>
<a id="trace-15587"></a>
<a id="trace-15605"></a>
<a id="trace-15622"></a>
<a id="trace-15693"></a>
<a id="trace-15708"></a>
<a id="trace-15724"></a>
- 342.30s–352.30s (×11), actor 1, squad 0 (trace 15439): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 340.00s, trace 15229. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5079832432248645, 'next_transition': 15460}.
<a id="trace-15729"></a>
- 352.55s–352.55s (×1), actor 1, squad 0 (trace 15729): matching received arrivals: traveling stage complete. Knowledge: actor memory at 350.00s, trace 15632. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9072121747419394, 'next_transition': 15845}.
<a id="trace-15845"></a>
<a id="trace-15865"></a>
<a id="trace-15943"></a>
<a id="trace-15960"></a>
<a id="trace-15976"></a>
<a id="trace-15989"></a>
<a id="trace-16007"></a>
- 353.30s–359.30s (×7), actor 1, squad 0 (trace 15845): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 350.00s, trace 15632. Next observer evidence: {'until': 354.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.567740898237367, 'next_transition': 15865}.

## Net delivery

177 matched order/radio deliveries; 240 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.298s; maximum 2.100s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1151: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1160: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2074: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2075: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2115: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2116: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2118: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2119: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2120: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2121: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2122: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2123: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2882: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2884: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2885: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2886: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2887: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2888: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2889: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2890: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2891: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2892: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.05s leader 5, trace 3372: estimate 6.38; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3649: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3650: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3651: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3652: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3653: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3654: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3655: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3656: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3657: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3658: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3659: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4107: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4108: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4109: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4110: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4111: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4112: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4113: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4114: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4115: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4451: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4452: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4453: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4454: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4455: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4456: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4457: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4458: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4601: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4602: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4603: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4604: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4605: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4606: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4607: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4608: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4804: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4805: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4806: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4807: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4808: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4809: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4810: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4811: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4939: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4940: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4941: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4942: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4943: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4944: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4945: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4946: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5065: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5066: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5067: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5068: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5069: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5070: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5071: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5072: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5266: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5267: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5268: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5269: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5270: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5271: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5272: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5273: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5415: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5416: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5417: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5418: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5419: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5420: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5421: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.05s leader 5, trace 5548: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.05s leader 5, trace 5549: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5559: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5560: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5561: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5562: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5563: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5564: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5565: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5752: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5753: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5754: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5755: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5756: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5757: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5758: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5879: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5880: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5881: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5882: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5883: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5884: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5885: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 6073: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 6074: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6075: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6076: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6077: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6078: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6079: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6224: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6225: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6226: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6227: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6228: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6229: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6230: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6365: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6366: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6367: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6368: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6369: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6370: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6371: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6564: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6565: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6566: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6567: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6568: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6569: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6570: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6712: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6713: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6714: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6715: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6716: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6717: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6718: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6917: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6918: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6919: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6920: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6921: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6922: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6923: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7062: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7063: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7064: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7065: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7066: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7067: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7068: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7225: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7226: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7227: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7228: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7229: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7230: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7231: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7361: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7362: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7363: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 7364: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7365: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7366: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7367: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.05s leader 5, trace 7475: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7488: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7489: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7490: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 7491: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7492: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7493: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7494: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7608: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7609: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7610: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 7611: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7612: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7613: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.60s leader 5, trace 7722: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.60s leader 5, trace 7723: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7730: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7731: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7732: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7733: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7734: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7735: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.80s leader 5, trace 7803: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.80s leader 5, trace 7804: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8058: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8060: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8062: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8063: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8214: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8216: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 8217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8218: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8219: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8356: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8358: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 8359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8360: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8361: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8503: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 8504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8505: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 8506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8507: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8508: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.40s leader 5, trace 8603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.40s leader 5, trace 8604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 8818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 8820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8821: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8822: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 8982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 8984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8985: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8986: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 8987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 9248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 9407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 9602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 9604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 9749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 9751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 9754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 9889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 9891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 10147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 10288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 211.80s leader 5, trace 10376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 211.80s leader 5, trace 10377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 10633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11312: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 11313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 11315: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11316: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11317: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11318: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.75s leader 5, trace 11386: estimate 5.46; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 221.40s leader 5, trace 11419: estimate 5.45; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 221.40s leader 5, trace 11420: estimate 5.45; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11629: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11631: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 11632: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11633: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11634: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11635: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11777: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 11778: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11779: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 11780: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11781: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11782: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11783: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11983: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 11984: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11985: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 11986: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11987: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11988: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 11989: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12119: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 12120: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12121: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12122: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12123: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12124: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12125: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12234: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12235: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12236: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12237: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12238: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12239: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.20s leader 1, trace 12309: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12354: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 12355: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 12356: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12357: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12358: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12359: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12542: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 12543: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 12544: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12545: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12546: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12547: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12670: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 12671: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 12672: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12673: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12674: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12675: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12890: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 12891: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 12892: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12893: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12894: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12895: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.75s leader 1, trace 12967: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.75s leader 1, trace 12968: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13094: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 13095: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 13096: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13097: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13098: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13099: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13228: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 13229: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 13230: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13231: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13232: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13233: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 13358: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 13359: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 13360: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13361: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13362: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13363: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 13551: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 13552: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 13553: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13554: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13555: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13556: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 13683: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 13684: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 13685: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13686: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13687: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13688: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13813: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 13814: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 13815: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13816: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13817: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13818: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14007: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 14008: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 14009: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14010: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14011: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 14012: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14142: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 14143: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 14144: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14145: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14146: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14147: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 14326: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 14327: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 14328: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 14329: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 14330: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 14331: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 14463: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 14464: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 14465: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 14466: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 14467: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 14468: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 14593: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 14594: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 14595: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14596: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14597: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14598: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 14744: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 14745: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 14746: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14747: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14748: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14749: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 327.35s leader 1, trace 14836: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14868: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 14869: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 14870: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14871: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14872: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14873: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14989: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 14990: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 14991: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14992: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14993: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14994: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.00s leader 1, trace 15059: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.00s leader 1, trace 15060: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 338.80s leader 1, trace 15208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 338.80s leader 1, trace 15209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 15230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 15231: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15232: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15233: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 15234: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 15490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 15491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 15492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 15493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 15494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 15495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 15632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 15633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 15634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 15635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 15636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 15637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 15877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 15878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 15879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 15882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 16019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 16020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Reed incapacitated
- 1: Moss incapacitated
- 1: Voss killed in action
- 1: Kest incapacitated
- 1: Iven killed in action

## Outcome attribution

- 74.05s, evidence 534: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 74.05s, evidence 5548: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227178 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5553}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 74.05s, evidence 5549: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.227178 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5553}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 134.05s, evidence 797: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7479}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 265.75s, evidence 1469: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 265.75s, evidence 12967: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340878 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 265.75s, evidence 12968: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340878 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450177260242256, 'next_transition': 12977}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 327.35s, evidence 1740: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
