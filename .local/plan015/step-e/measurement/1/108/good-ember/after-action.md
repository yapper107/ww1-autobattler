# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/108/good-ember/battle-108-1789673642759095049`

## Battle summary

**Ember** · 360 s · 473 shots.

### Turning points

- 28.9s, squad 4: contact (events line 326). First recorded contact.
- 40.2s, squad 1: withdrawal ([trace 5694](#trace-5694)). 79.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 53.7s, squad 0: withdrawal ([trace 7857](#trace-7857)). 67.7s, squad 0: took cover and returned fire.
- 58.4s, squad 1: help call ([trace 8646](#trace-8646)). No completion observed before termination.
- 65.1s, squad 0: help call ([trace 9390](#trace-9390)). 101.2s, squad 1: answered a neighbour with support by fire.
- 99.5s, squad 0: help call ([trace 14448](#trace-14448)). 101.2s, squad 1: answered a neighbour with support by fire.
- 101.2s, squad 1: help answer ([trace 14827](#trace-14827)). 141.9s, squad 1: took cover and returned fire.
- 123.2s, squad 0: help call ([trace 19055](#trace-19055)). No completion observed before termination.
- 137.1s, squad 1: help call ([trace 20058](#trace-20058)). No completion observed before termination.
- 191.7s, squad 1: withdrawal ([trace 23639](#trace-23639)). 215.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; no completed objective recorded; 11 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 8 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 275 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 179 shots, 0/4 lost.

### Decisions and attribution

At 101.2s, squad 1 chose answered a neighbour with support by fire ([trace 14827](#trace-14827)), followed by 5 shots and 1 own casualties; estimate 11.9 against 0 distinct squad-reported contacts; At 137.1s, squad 1 chose FightHere: nearest known group ([trace 20057](#trace-20057)), followed by 0 shots and 1 own casualties; estimate 15.1 against 0 distinct squad-reported contacts; At 198.9s, squad 0 chose leader risk threshold crossed without support ([trace 23955](#trace-23955)), followed by 0 shots and 1 own casualties; estimate 13.7 against 9 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1439](#trace-1439)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1808}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 3626](#trace-3626)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6157360380472281, 'next_transition': 3656}.

### Communication

209 matched deliveries (mean 0.53s, max 5.90s); 282 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.90s, squad 4, contact, evidence events line 326: First recorded contact; .
- 40.25s, squad 1, withdrawal, evidence 5694: BreakContact: believed ratio at least two without superiority; 79.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 53.70s, squad 0, withdrawal, evidence 7857: BreakContact: believed ratio at least two without superiority; 67.7s, squad 0: took cover and returned fire.
- 58.35s, squad 1, help call, evidence 8646: NeedSupport; No completion observed before termination.
- 65.05s, squad 0, help call, evidence 9390: NeedSupport; 101.2s, squad 1: answered a neighbour with support by fire.
- 99.50s, squad 0, help call, evidence 14448: NeedSupport; 101.2s, squad 1: answered a neighbour with support by fire.
- 101.20s, squad 1, help answer, evidence 14827: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 141.9s, squad 1: took cover and returned fire.
- 123.25s, squad 0, help call, evidence 19055: NeedSupport; No completion observed before termination.
- 137.10s, squad 1, help call, evidence 20058: NeedSupport; No completion observed before termination.
- 191.70s, squad 1, withdrawal, evidence 23639: BreakContact: believed ratio at least two without superiority; 215.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 248.80s, squad 1, withdrawal, evidence 25568: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47058362217392, 'next_transition': 1103}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47058362217392, 'next_transition': 1103}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47058362217392, 'next_transition': 1103}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329210441525007, 'next_transition': 156}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329210441525007, 'next_transition': 156}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.329210441525007, 'next_transition': 156}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-730"></a>
<a id="trace-732"></a>
<a id="trace-767"></a>
<a id="trace-769"></a>
<a id="trace-794"></a>
<a id="trace-796"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
<a id="trace-843"></a>
<a id="trace-845"></a>
<a id="trace-874"></a>
<a id="trace-876"></a>
<a id="trace-957"></a>
<a id="trace-959"></a>
<a id="trace-984"></a>
<a id="trace-986"></a>
<a id="trace-1013"></a>
<a id="trace-1015"></a>
<a id="trace-1052"></a>
<a id="trace-1054"></a>
<a id="trace-1073"></a>
<a id="trace-1075"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1137"></a>
<a id="trace-1139"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1199"></a>
<a id="trace-1201"></a>
<a id="trace-1218"></a>
<a id="trace-1220"></a>
<a id="trace-1311"></a>
<a id="trace-1313"></a>
<a id="trace-1331"></a>
<a id="trace-1333"></a>
<a id="trace-1353"></a>
<a id="trace-1355"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1412"></a>
<a id="trace-1414"></a>
<a id="trace-1434"></a>
<a id="trace-1436"></a>
<a id="trace-1780"></a>
<a id="trace-1782"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-2051"></a>
<a id="trace-2053"></a>
<a id="trace-2078"></a>
<a id="trace-2080"></a>
<a id="trace-2174"></a>
<a id="trace-2176"></a>
<a id="trace-2214"></a>
<a id="trace-2216"></a>
<a id="trace-2252"></a>
<a id="trace-2254"></a>
<a id="trace-2292"></a>
<a id="trace-2294"></a>
<a id="trace-2316"></a>
<a id="trace-2318"></a>
<a id="trace-2343"></a>
<a id="trace-2345"></a>
<a id="trace-2374"></a>
<a id="trace-2376"></a>
<a id="trace-2405"></a>
<a id="trace-2407"></a>
<a id="trace-2434"></a>
<a id="trace-2436"></a>
<a id="trace-2464"></a>
<a id="trace-2466"></a>
<a id="trace-2564"></a>
<a id="trace-2566"></a>
<a id="trace-2603"></a>
<a id="trace-2605"></a>
<a id="trace-2632"></a>
<a id="trace-2634"></a>
<a id="trace-2673"></a>
<a id="trace-2675"></a>
<a id="trace-2703"></a>
<a id="trace-2705"></a>
<a id="trace-2728"></a>
<a id="trace-2730"></a>
<a id="trace-2757"></a>
<a id="trace-2759"></a>
<a id="trace-3053"></a>
<a id="trace-3055"></a>
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3117"></a>
<a id="trace-3119"></a>
<a id="trace-3209"></a>
<a id="trace-3211"></a>
<a id="trace-3226"></a>
<a id="trace-3228"></a>
<a id="trace-3603"></a>
<a id="trace-3605"></a>
<a id="trace-3634"></a>
<a id="trace-3636"></a>
<a id="trace-3660"></a>
<a id="trace-3662"></a>
<a id="trace-3685"></a>
<a id="trace-3687"></a>
<a id="trace-3718"></a>
<a id="trace-3720"></a>
<a id="trace-3749"></a>
<a id="trace-3751"></a>
<a id="trace-3766"></a>
<a id="trace-3768"></a>
<a id="trace-3794"></a>
<a id="trace-3796"></a>
<a id="trace-3898"></a>
<a id="trace-3900"></a>
<a id="trace-3915"></a>
<a id="trace-3917"></a>
<a id="trace-3942"></a>
<a id="trace-3944"></a>
<a id="trace-3961"></a>
<a id="trace-3963"></a>
<a id="trace-3996"></a>
<a id="trace-3998"></a>
<a id="trace-4021"></a>
<a id="trace-4023"></a>
<a id="trace-4199"></a>
<a id="trace-4201"></a>
<a id="trace-4225"></a>
<a id="trace-4227"></a>
<a id="trace-4255"></a>
<a id="trace-4257"></a>
<a id="trace-4280"></a>
<a id="trace-4282"></a>
<a id="trace-4366"></a>
<a id="trace-4368"></a>
<a id="trace-4868"></a>
<a id="trace-4870"></a>
<a id="trace-4890"></a>
<a id="trace-4892"></a>
<a id="trace-5400"></a>
<a id="trace-5402"></a>
<a id="trace-5431"></a>
<a id="trace-5433"></a>
<a id="trace-5452"></a>
<a id="trace-5454"></a>
<a id="trace-5498"></a>
<a id="trace-5500"></a>
<a id="trace-5526"></a>
<a id="trace-5528"></a>
<a id="trace-5558"></a>
<a id="trace-5560"></a>
<a id="trace-5593"></a>
<a id="trace-5595"></a>
<a id="trace-5689"></a>
<a id="trace-5691"></a>
<a id="trace-6119"></a>
<a id="trace-6121"></a>
<a id="trace-6145"></a>
<a id="trace-6147"></a>
<a id="trace-6168"></a>
<a id="trace-6170"></a>
<a id="trace-6189"></a>
<a id="trace-6191"></a>
<a id="trace-6214"></a>
<a id="trace-6216"></a>
<a id="trace-6243"></a>
<a id="trace-6245"></a>
<a id="trace-6262"></a>
<a id="trace-6264"></a>
<a id="trace-6284"></a>
<a id="trace-6286"></a>
<a id="trace-6310"></a>
<a id="trace-6312"></a>
<a id="trace-6395"></a>
<a id="trace-6397"></a>
<a id="trace-6415"></a>
<a id="trace-6417"></a>
<a id="trace-6436"></a>
<a id="trace-6438"></a>
<a id="trace-6450"></a>
<a id="trace-6452"></a>
<a id="trace-6469"></a>
<a id="trace-6471"></a>
<a id="trace-6481"></a>
<a id="trace-6483"></a>
<a id="trace-6839"></a>
<a id="trace-6841"></a>
<a id="trace-6873"></a>
<a id="trace-6875"></a>
<a id="trace-6946"></a>
<a id="trace-6948"></a>
<a id="trace-6989"></a>
<a id="trace-6991"></a>
<a id="trace-7471"></a>
<a id="trace-7473"></a>
<a id="trace-7519"></a>
<a id="trace-7521"></a>
<a id="trace-7570"></a>
<a id="trace-7572"></a>
<a id="trace-7594"></a>
<a id="trace-7596"></a>
<a id="trace-7624"></a>
<a id="trace-7626"></a>
<a id="trace-7812"></a>
<a id="trace-7814"></a>
<a id="trace-7837"></a>
<a id="trace-7839"></a>
<a id="trace-8253"></a>
<a id="trace-8255"></a>
<a id="trace-8287"></a>
<a id="trace-8289"></a>
<a id="trace-8318"></a>
<a id="trace-8320"></a>
<a id="trace-8418"></a>
<a id="trace-8420"></a>
<a id="trace-8433"></a>
<a id="trace-8435"></a>
<a id="trace-8470"></a>
<a id="trace-8472"></a>
<a id="trace-8502"></a>
<a id="trace-8504"></a>
<a id="trace-8539"></a>
<a id="trace-8541"></a>
<a id="trace-8585"></a>
<a id="trace-8587"></a>
<a id="trace-8632"></a>
<a id="trace-8634"></a>
<a id="trace-8690"></a>
<a id="trace-8692"></a>
<a id="trace-8750"></a>
<a id="trace-8752"></a>
<a id="trace-8797"></a>
<a id="trace-8799"></a>
<a id="trace-8921"></a>
<a id="trace-8923"></a>
<a id="trace-8976"></a>
<a id="trace-8978"></a>
<a id="trace-9032"></a>
<a id="trace-9034"></a>
<a id="trace-9079"></a>
<a id="trace-9081"></a>
<a id="trace-9138"></a>
<a id="trace-9140"></a>
<a id="trace-9185"></a>
<a id="trace-9187"></a>
<a id="trace-9239"></a>
<a id="trace-9241"></a>
<a id="trace-9274"></a>
<a id="trace-9276"></a>
<a id="trace-9314"></a>
<a id="trace-9316"></a>
<a id="trace-9350"></a>
<a id="trace-9352"></a>
<a id="trace-9450"></a>
<a id="trace-9452"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9507"></a>
<a id="trace-9509"></a>
<a id="trace-9527"></a>
<a id="trace-9529"></a>
<a id="trace-9666"></a>
<a id="trace-9668"></a>
<a id="trace-9802"></a>
<a id="trace-9804"></a>
<a id="trace-9826"></a>
<a id="trace-9828"></a>
<a id="trace-9889"></a>
<a id="trace-9891"></a>
<a id="trace-9937"></a>
<a id="trace-9939"></a>
<a id="trace-10039"></a>
<a id="trace-10041"></a>
<a id="trace-10070"></a>
<a id="trace-10072"></a>
<a id="trace-10106"></a>
<a id="trace-10108"></a>
<a id="trace-10120"></a>
<a id="trace-10122"></a>
<a id="trace-10144"></a>
<a id="trace-10146"></a>
<a id="trace-10158"></a>
<a id="trace-10160"></a>
<a id="trace-10180"></a>
<a id="trace-10182"></a>
<a id="trace-10194"></a>
<a id="trace-10196"></a>
<a id="trace-10220"></a>
<a id="trace-10222"></a>
<a id="trace-10236"></a>
<a id="trace-10238"></a>
<a id="trace-10319"></a>
<a id="trace-10321"></a>
<a id="trace-10333"></a>
<a id="trace-10335"></a>
<a id="trace-12921"></a>
<a id="trace-12923"></a>
<a id="trace-12943"></a>
<a id="trace-12945"></a>
<a id="trace-12977"></a>
<a id="trace-12979"></a>
<a id="trace-12993"></a>
<a id="trace-12995"></a>
<a id="trace-13017"></a>
<a id="trace-13019"></a>
<a id="trace-13040"></a>
<a id="trace-13042"></a>
<a id="trace-13066"></a>
<a id="trace-13068"></a>
<a id="trace-13138"></a>
<a id="trace-13140"></a>
<a id="trace-13224"></a>
<a id="trace-13226"></a>
<a id="trace-13247"></a>
<a id="trace-13249"></a>
<a id="trace-13271"></a>
<a id="trace-13273"></a>
<a id="trace-13297"></a>
<a id="trace-13299"></a>
<a id="trace-13326"></a>
<a id="trace-13328"></a>
<a id="trace-13339"></a>
<a id="trace-13341"></a>
<a id="trace-13360"></a>
<a id="trace-13362"></a>
<a id="trace-13376"></a>
<a id="trace-13378"></a>
<a id="trace-13399"></a>
<a id="trace-13401"></a>
<a id="trace-13415"></a>
<a id="trace-13417"></a>
<a id="trace-13501"></a>
<a id="trace-13503"></a>
<a id="trace-13512"></a>
<a id="trace-13514"></a>
<a id="trace-13529"></a>
<a id="trace-13531"></a>
<a id="trace-13542"></a>
<a id="trace-13544"></a>
<a id="trace-13558"></a>
<a id="trace-13560"></a>
<a id="trace-13569"></a>
<a id="trace-13571"></a>
<a id="trace-13660"></a>
<a id="trace-13662"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13704"></a>
<a id="trace-13706"></a>
<a id="trace-13750"></a>
<a id="trace-13752"></a>
<a id="trace-13839"></a>
<a id="trace-13841"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13880"></a>
<a id="trace-13882"></a>
<a id="trace-13895"></a>
<a id="trace-13897"></a>
<a id="trace-13922"></a>
<a id="trace-13924"></a>
<a id="trace-13940"></a>
<a id="trace-13942"></a>
<a id="trace-13960"></a>
<a id="trace-13962"></a>
<a id="trace-13979"></a>
<a id="trace-13981"></a>
<a id="trace-14004"></a>
<a id="trace-14006"></a>
<a id="trace-14020"></a>
<a id="trace-14022"></a>
<a id="trace-14099"></a>
<a id="trace-14101"></a>
<a id="trace-14120"></a>
<a id="trace-14122"></a>
<a id="trace-14145"></a>
<a id="trace-14147"></a>
<a id="trace-14167"></a>
<a id="trace-14169"></a>
<a id="trace-14246"></a>
<a id="trace-14248"></a>
<a id="trace-14371"></a>
<a id="trace-14373"></a>
<a id="trace-14400"></a>
<a id="trace-14402"></a>
<a id="trace-14415"></a>
<a id="trace-14417"></a>
<a id="trace-14439"></a>
<a id="trace-14441"></a>
<a id="trace-14463"></a>
<a id="trace-14465"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14808"></a>
<a id="trace-14810"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17438"></a>
<a id="trace-17440"></a>
<a id="trace-17461"></a>
<a id="trace-17463"></a>
<a id="trace-17492"></a>
<a id="trace-17494"></a>
<a id="trace-17512"></a>
<a id="trace-17514"></a>
<a id="trace-17543"></a>
<a id="trace-17545"></a>
<a id="trace-17557"></a>
<a id="trace-17559"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17654"></a>
<a id="trace-17656"></a>
<a id="trace-17674"></a>
<a id="trace-17676"></a>
<a id="trace-17685"></a>
<a id="trace-17687"></a>
<a id="trace-17713"></a>
<a id="trace-17715"></a>
<a id="trace-17735"></a>
<a id="trace-17737"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18058"></a>
<a id="trace-18060"></a>
<a id="trace-18096"></a>
<a id="trace-18098"></a>
<a id="trace-18140"></a>
<a id="trace-18142"></a>
<a id="trace-18245"></a>
<a id="trace-18247"></a>
<a id="trace-18281"></a>
<a id="trace-18283"></a>
<a id="trace-18306"></a>
<a id="trace-18308"></a>
<a id="trace-18332"></a>
<a id="trace-18334"></a>
<a id="trace-18365"></a>
<a id="trace-18367"></a>
<a id="trace-18378"></a>
<a id="trace-18380"></a>
<a id="trace-18401"></a>
<a id="trace-18403"></a>
<a id="trace-18420"></a>
<a id="trace-18422"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18553"></a>
<a id="trace-18555"></a>
<a id="trace-18576"></a>
<a id="trace-18578"></a>
<a id="trace-18588"></a>
<a id="trace-18590"></a>
<a id="trace-18616"></a>
<a id="trace-18618"></a>
<a id="trace-18633"></a>
<a id="trace-18635"></a>
<a id="trace-18655"></a>
<a id="trace-18657"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18700"></a>
<a id="trace-18702"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18813"></a>
<a id="trace-18815"></a>
<a id="trace-18857"></a>
<a id="trace-18859"></a>
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-19024"></a>
<a id="trace-19026"></a>
<a id="trace-19050"></a>
<a id="trace-19052"></a>
<a id="trace-19107"></a>
<a id="trace-19109"></a>
<a id="trace-19155"></a>
<a id="trace-19157"></a>
<a id="trace-19178"></a>
<a id="trace-19180"></a>
<a id="trace-19287"></a>
<a id="trace-19289"></a>
<a id="trace-19314"></a>
<a id="trace-19316"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19379"></a>
<a id="trace-19381"></a>
<a id="trace-19430"></a>
<a id="trace-19432"></a>
<a id="trace-19485"></a>
<a id="trace-19487"></a>
<a id="trace-19548"></a>
<a id="trace-19550"></a>
<a id="trace-19610"></a>
<a id="trace-19612"></a>
<a id="trace-19647"></a>
<a id="trace-19649"></a>
<a id="trace-19660"></a>
<a id="trace-19662"></a>
<a id="trace-19754"></a>
<a id="trace-19756"></a>
<a id="trace-19787"></a>
<a id="trace-19789"></a>
<a id="trace-19829"></a>
<a id="trace-19831"></a>
<a id="trace-19858"></a>
<a id="trace-19860"></a>
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19907"></a>
<a id="trace-19909"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-19930"></a>
<a id="trace-19932"></a>
<a id="trace-19941"></a>
<a id="trace-19943"></a>
<a id="trace-20009"></a>
<a id="trace-20011"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20038"></a>
<a id="trace-20040"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20120"></a>
<a id="trace-20122"></a>
<a id="trace-20128"></a>
<a id="trace-20130"></a>
<a id="trace-20200"></a>
<a id="trace-20202"></a>
<a id="trace-20214"></a>
<a id="trace-20216"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20388"></a>
<a id="trace-20390"></a>
<a id="trace-20397"></a>
<a id="trace-20399"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20465"></a>
<a id="trace-20467"></a>
<a id="trace-20511"></a>
<a id="trace-20513"></a>
<a id="trace-20549"></a>
<a id="trace-20551"></a>
<a id="trace-20639"></a>
<a id="trace-20641"></a>
<a id="trace-20666"></a>
<a id="trace-20668"></a>
<a id="trace-20685"></a>
<a id="trace-20687"></a>
<a id="trace-20700"></a>
<a id="trace-20702"></a>
<a id="trace-20715"></a>
<a id="trace-20717"></a>
<a id="trace-20726"></a>
<a id="trace-20728"></a>
<a id="trace-20741"></a>
<a id="trace-20743"></a>
<a id="trace-20752"></a>
<a id="trace-20754"></a>
<a id="trace-20765"></a>
<a id="trace-20767"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20843"></a>
<a id="trace-20845"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-20880"></a>
<a id="trace-20882"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-20917"></a>
<a id="trace-20919"></a>
<a id="trace-20936"></a>
<a id="trace-20938"></a>
<a id="trace-20949"></a>
<a id="trace-20951"></a>
<a id="trace-20970"></a>
<a id="trace-20972"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21127"></a>
<a id="trace-21129"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21170"></a>
<a id="trace-21172"></a>
<a id="trace-21193"></a>
<a id="trace-21195"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21290"></a>
<a id="trace-21292"></a>
<a id="trace-21304"></a>
<a id="trace-21306"></a>
<a id="trace-21317"></a>
<a id="trace-21319"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21338"></a>
<a id="trace-21340"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21373"></a>
<a id="trace-21375"></a>
<a id="trace-21387"></a>
<a id="trace-21389"></a>
<a id="trace-21395"></a>
<a id="trace-21397"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21476"></a>
<a id="trace-21478"></a>
<a id="trace-21489"></a>
<a id="trace-21491"></a>
<a id="trace-21496"></a>
<a id="trace-21498"></a>
<a id="trace-21509"></a>
<a id="trace-21511"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21615"></a>
<a id="trace-21617"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21764"></a>
<a id="trace-21766"></a>
<a id="trace-21779"></a>
<a id="trace-21781"></a>
<a id="trace-21786"></a>
<a id="trace-21788"></a>
<a id="trace-21802"></a>
<a id="trace-21804"></a>
<a id="trace-21808"></a>
<a id="trace-21810"></a>
<a id="trace-21822"></a>
<a id="trace-21824"></a>
<a id="trace-21832"></a>
<a id="trace-21834"></a>
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21853"></a>
<a id="trace-21855"></a>
<a id="trace-21921"></a>
<a id="trace-21923"></a>
<a id="trace-21931"></a>
<a id="trace-21933"></a>
<a id="trace-21946"></a>
<a id="trace-21948"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-22026"></a>
<a id="trace-22028"></a>
<a id="trace-22032"></a>
<a id="trace-22034"></a>
<a id="trace-22045"></a>
<a id="trace-22047"></a>
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22068"></a>
<a id="trace-22070"></a>
<a id="trace-22076"></a>
<a id="trace-22078"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22193"></a>
<a id="trace-22195"></a>
<a id="trace-22200"></a>
<a id="trace-22202"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22238"></a>
<a id="trace-22240"></a>
<a id="trace-22251"></a>
<a id="trace-22253"></a>
<a id="trace-22261"></a>
<a id="trace-22263"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22449"></a>
<a id="trace-22451"></a>
<a id="trace-22455"></a>
<a id="trace-22457"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22631"></a>
<a id="trace-22633"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23518"></a>
<a id="trace-23520"></a>
<a id="trace-23535"></a>
<a id="trace-23537"></a>
<a id="trace-23616"></a>
<a id="trace-23618"></a>
<a id="trace-23624"></a>
<a id="trace-23626"></a>
<a id="trace-23636"></a>
<a id="trace-23638"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23713"></a>
<a id="trace-23715"></a>
<a id="trace-23721"></a>
<a id="trace-23723"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23756"></a>
<a id="trace-23758"></a>
<a id="trace-23773"></a>
<a id="trace-23775"></a>
<a id="trace-23787"></a>
<a id="trace-23789"></a>
<a id="trace-23857"></a>
<a id="trace-23859"></a>
<a id="trace-23868"></a>
<a id="trace-23870"></a>
<a id="trace-23883"></a>
<a id="trace-23885"></a>
<a id="trace-23893"></a>
<a id="trace-23895"></a>
<a id="trace-23909"></a>
<a id="trace-23911"></a>
<a id="trace-23917"></a>
<a id="trace-23919"></a>
<a id="trace-23936"></a>
<a id="trace-23938"></a>
<a id="trace-23948"></a>
<a id="trace-23950"></a>
<a id="trace-23965"></a>
<a id="trace-23967"></a>
<a id="trace-23975"></a>
<a id="trace-23977"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24050"></a>
<a id="trace-24052"></a>
<a id="trace-24063"></a>
<a id="trace-24065"></a>
<a id="trace-24071"></a>
<a id="trace-24073"></a>
<a id="trace-24082"></a>
<a id="trace-24084"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24113"></a>
<a id="trace-24115"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24212"></a>
<a id="trace-24214"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24233"></a>
<a id="trace-24235"></a>
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24263"></a>
<a id="trace-24265"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24286"></a>
<a id="trace-24288"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24308"></a>
<a id="trace-24310"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24399"></a>
<a id="trace-24401"></a>
<a id="trace-24410"></a>
<a id="trace-24412"></a>
<a id="trace-24416"></a>
<a id="trace-24418"></a>
<a id="trace-24429"></a>
<a id="trace-24431"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24449"></a>
<a id="trace-24451"></a>
<a id="trace-24455"></a>
<a id="trace-24457"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24537"></a>
<a id="trace-24539"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24556"></a>
<a id="trace-24558"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24597"></a>
<a id="trace-24599"></a>
<a id="trace-24603"></a>
<a id="trace-24605"></a>
<a id="trace-24616"></a>
<a id="trace-24618"></a>
<a id="trace-24622"></a>
<a id="trace-24624"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24700"></a>
<a id="trace-24702"></a>
<a id="trace-24725"></a>
<a id="trace-24727"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24762"></a>
<a id="trace-24764"></a>
<a id="trace-24773"></a>
<a id="trace-24775"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24847"></a>
<a id="trace-24849"></a>
<a id="trace-24852"></a>
<a id="trace-24854"></a>
<a id="trace-24870"></a>
<a id="trace-24872"></a>
<a id="trace-24875"></a>
<a id="trace-24877"></a>
<a id="trace-24895"></a>
<a id="trace-24897"></a>
<a id="trace-24913"></a>
<a id="trace-24915"></a>
<a id="trace-24923"></a>
<a id="trace-24925"></a>
<a id="trace-24929"></a>
<a id="trace-24931"></a>
<a id="trace-24939"></a>
<a id="trace-24941"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25014"></a>
<a id="trace-25016"></a>
<a id="trace-25028"></a>
<a id="trace-25030"></a>
<a id="trace-25033"></a>
<a id="trace-25035"></a>
<a id="trace-25045"></a>
<a id="trace-25047"></a>
<a id="trace-25056"></a>
<a id="trace-25058"></a>
<a id="trace-25067"></a>
<a id="trace-25069"></a>
<a id="trace-25082"></a>
<a id="trace-25084"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25112"></a>
<a id="trace-25114"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25191"></a>
<a id="trace-25193"></a>
<a id="trace-25196"></a>
<a id="trace-25198"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25214"></a>
<a id="trace-25216"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25232"></a>
<a id="trace-25234"></a>
<a id="trace-25251"></a>
<a id="trace-25253"></a>
<a id="trace-25256"></a>
<a id="trace-25258"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25347"></a>
<a id="trace-25349"></a>
<a id="trace-25358"></a>
<a id="trace-25360"></a>
<a id="trace-25363"></a>
<a id="trace-25365"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25379"></a>
<a id="trace-25381"></a>
<a id="trace-25389"></a>
<a id="trace-25391"></a>
<a id="trace-25396"></a>
<a id="trace-25398"></a>
<a id="trace-25412"></a>
<a id="trace-25414"></a>
<a id="trace-25417"></a>
<a id="trace-25419"></a>
<a id="trace-25481"></a>
<a id="trace-25483"></a>
<a id="trace-25495"></a>
<a id="trace-25497"></a>
<a id="trace-25506"></a>
<a id="trace-25508"></a>
<a id="trace-25518"></a>
<a id="trace-25520"></a>
<a id="trace-25542"></a>
<a id="trace-25544"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25565"></a>
<a id="trace-25567"></a>
<a id="trace-25634"></a>
<a id="trace-25636"></a>
<a id="trace-25639"></a>
<a id="trace-25641"></a>
<a id="trace-25707"></a>
<a id="trace-25709"></a>
<a id="trace-25712"></a>
<a id="trace-25714"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25730"></a>
<a id="trace-25732"></a>
<a id="trace-25753"></a>
<a id="trace-25755"></a>
<a id="trace-25757"></a>
<a id="trace-25759"></a>
<a id="trace-25777"></a>
<a id="trace-25779"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25819"></a>
<a id="trace-25821"></a>
<a id="trace-25884"></a>
<a id="trace-25886"></a>
<a id="trace-25888"></a>
<a id="trace-25890"></a>
<a id="trace-25901"></a>
<a id="trace-25903"></a>
<a id="trace-25905"></a>
<a id="trace-25907"></a>
<a id="trace-25920"></a>
<a id="trace-25922"></a>
<a id="trace-25926"></a>
<a id="trace-25928"></a>
<a id="trace-25938"></a>
<a id="trace-25940"></a>
<a id="trace-25949"></a>
<a id="trace-25951"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25980"></a>
<a id="trace-25982"></a>
<a id="trace-26054"></a>
<a id="trace-26056"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26093"></a>
<a id="trace-26095"></a>
<a id="trace-26104"></a>
<a id="trace-26106"></a>
<a id="trace-26109"></a>
<a id="trace-26111"></a>
<a id="trace-26119"></a>
<a id="trace-26121"></a>
<a id="trace-26126"></a>
<a id="trace-26128"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26144"></a>
<a id="trace-26146"></a>
<a id="trace-26208"></a>
<a id="trace-26210"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26232"></a>
<a id="trace-26234"></a>
<a id="trace-26245"></a>
<a id="trace-26247"></a>
<a id="trace-26269"></a>
<a id="trace-26271"></a>
<a id="trace-26274"></a>
<a id="trace-26276"></a>
<a id="trace-26285"></a>
<a id="trace-26287"></a>
<a id="trace-26291"></a>
<a id="trace-26293"></a>
<a id="trace-26303"></a>
<a id="trace-26305"></a>
<a id="trace-26308"></a>
<a id="trace-26310"></a>
<a id="trace-26373"></a>
<a id="trace-26375"></a>
<a id="trace-26379"></a>
<a id="trace-26381"></a>
<a id="trace-26389"></a>
<a id="trace-26391"></a>
<a id="trace-26394"></a>
<a id="trace-26396"></a>
<a id="trace-26412"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26418"></a>
<a id="trace-26436"></a>
<a id="trace-26438"></a>
<a id="trace-26457"></a>
<a id="trace-26459"></a>
<a id="trace-26468"></a>
<a id="trace-26470"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26538"></a>
<a id="trace-26540"></a>
<a id="trace-26546"></a>
<a id="trace-26548"></a>
<a id="trace-26556"></a>
<a id="trace-26558"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26574"></a>
<a id="trace-26576"></a>
<a id="trace-26578"></a>
<a id="trace-26580"></a>
<a id="trace-26587"></a>
<a id="trace-26589"></a>
<a id="trace-26601"></a>
<a id="trace-26603"></a>
<a id="trace-26610"></a>
<a id="trace-26612"></a>
<a id="trace-26626"></a>
<a id="trace-26628"></a>
<a id="trace-26703"></a>
<a id="trace-26705"></a>
<a id="trace-26708"></a>
<a id="trace-26710"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26724"></a>
<a id="trace-26738"></a>
<a id="trace-26740"></a>
<a id="trace-26742"></a>
<a id="trace-26744"></a>
<a id="trace-26753"></a>
<a id="trace-26755"></a>
<a id="trace-26759"></a>
<a id="trace-26761"></a>
<a id="trace-26771"></a>
<a id="trace-26773"></a>
<a id="trace-26777"></a>
<a id="trace-26779"></a>
<a id="trace-26848"></a>
<a id="trace-26850"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26872"></a>
<a id="trace-26874"></a>
<a id="trace-26877"></a>
<a id="trace-26879"></a>
<a id="trace-26905"></a>
<a id="trace-26907"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
<a id="trace-26924"></a>
<a id="trace-26926"></a>
<a id="trace-26936"></a>
<a id="trace-26938"></a>
<a id="trace-26941"></a>
<a id="trace-26943"></a>
<a id="trace-27006"></a>
<a id="trace-27008"></a>
<a id="trace-27012"></a>
<a id="trace-27014"></a>
<a id="trace-27022"></a>
<a id="trace-27024"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27049"></a>
<a id="trace-27051"></a>
<a id="trace-27066"></a>
<a id="trace-27068"></a>
<a id="trace-27088"></a>
<a id="trace-27090"></a>
<a id="trace-27100"></a>
<a id="trace-27102"></a>
<a id="trace-27105"></a>
<a id="trace-27107"></a>
<a id="trace-27168"></a>
<a id="trace-27170"></a>
<a id="trace-27174"></a>
<a id="trace-27176"></a>
<a id="trace-27186"></a>
<a id="trace-27188"></a>
<a id="trace-27192"></a>
<a id="trace-27194"></a>
<a id="trace-27205"></a>
<a id="trace-27207"></a>
<a id="trace-27209"></a>
<a id="trace-27211"></a>
<a id="trace-27218"></a>
<a id="trace-27220"></a>
<a id="trace-27231"></a>
<a id="trace-27233"></a>
<a id="trace-27242"></a>
<a id="trace-27244"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27332"></a>
<a id="trace-27334"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27350"></a>
<a id="trace-27352"></a>
<a id="trace-27355"></a>
<a id="trace-27357"></a>
<a id="trace-27367"></a>
<a id="trace-27369"></a>
<a id="trace-27371"></a>
<a id="trace-27373"></a>
<a id="trace-27384"></a>
<a id="trace-27386"></a>
<a id="trace-27393"></a>
<a id="trace-27395"></a>
<a id="trace-27403"></a>
<a id="trace-27405"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27479"></a>
<a id="trace-27481"></a>
<a id="trace-27483"></a>
<a id="trace-27485"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27519"></a>
<a id="trace-27521"></a>
<a id="trace-27533"></a>
<a id="trace-27535"></a>
<a id="trace-27538"></a>
<a id="trace-27540"></a>
<a id="trace-27547"></a>
<a id="trace-27549"></a>
<a id="trace-27555"></a>
<a id="trace-27557"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27575"></a>
<a id="trace-27577"></a>
<a id="trace-27640"></a>
<a id="trace-27642"></a>
<a id="trace-27644"></a>
<a id="trace-27646"></a>
<a id="trace-27654"></a>
<a id="trace-27656"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27676"></a>
<a id="trace-27678"></a>
<a id="trace-27688"></a>
<a id="trace-27690"></a>
<a id="trace-27712"></a>
<a id="trace-27714"></a>
<a id="trace-27719"></a>
<a id="trace-27721"></a>
<a id="trace-27731"></a>
<a id="trace-27733"></a>
<a id="trace-27737"></a>
<a id="trace-27739"></a>
<a id="trace-27802"></a>
<a id="trace-27804"></a>
<a id="trace-27806"></a>
<a id="trace-27808"></a>
<a id="trace-27819"></a>
<a id="trace-27821"></a>
<a id="trace-27826"></a>
<a id="trace-27828"></a>
<a id="trace-27838"></a>
<a id="trace-27840"></a>
<a id="trace-27842"></a>
<a id="trace-27844"></a>
<a id="trace-27858"></a>
<a id="trace-27860"></a>
<a id="trace-27864"></a>
<a id="trace-27866"></a>
<a id="trace-27882"></a>
<a id="trace-27884"></a>
<a id="trace-27887"></a>
<a id="trace-27889"></a>
<a id="trace-27964"></a>
<a id="trace-27966"></a>
<a id="trace-27969"></a>
<a id="trace-27971"></a>
<a id="trace-27981"></a>
<a id="trace-27983"></a>
<a id="trace-27988"></a>
<a id="trace-27990"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28015"></a>
<a id="trace-28017"></a>
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28036"></a>
<a id="trace-28038"></a>
<a id="trace-28041"></a>
<a id="trace-28043"></a>
<a id="trace-28111"></a>
<a id="trace-28113"></a>
<a id="trace-28115"></a>
<a id="trace-28117"></a>
<a id="trace-28131"></a>
<a id="trace-28133"></a>
<a id="trace-28150"></a>
<a id="trace-28152"></a>
<a id="trace-28160"></a>
<a id="trace-28162"></a>
<a id="trace-28164"></a>
<a id="trace-28166"></a>
<a id="trace-28177"></a>
<a id="trace-28179"></a>
<a id="trace-28185"></a>
<a id="trace-28187"></a>
<a id="trace-28195"></a>
<a id="trace-28197"></a>
<a id="trace-28201"></a>
<a id="trace-28203"></a>
<a id="trace-28267"></a>
<a id="trace-28269"></a>
<a id="trace-28274"></a>
<a id="trace-28276"></a>
<a id="trace-28285"></a>
<a id="trace-28287"></a>
<a id="trace-28296"></a>
<a id="trace-28298"></a>
<a id="trace-28306"></a>
<a id="trace-28308"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28341"></a>
<a id="trace-28343"></a>
<a id="trace-28348"></a>
<a id="trace-28350"></a>
<a id="trace-28358"></a>
<a id="trace-28360"></a>
<a id="trace-28364"></a>
<a id="trace-28366"></a>
<a id="trace-28431"></a>
<a id="trace-28433"></a>
<a id="trace-28435"></a>
<a id="trace-28437"></a>
<a id="trace-28447"></a>
<a id="trace-28449"></a>
<a id="trace-28453"></a>
<a id="trace-28455"></a>
<a id="trace-28467"></a>
<a id="trace-28469"></a>
<a id="trace-28472"></a>
<a id="trace-28474"></a>
<a id="trace-28489"></a>
<a id="trace-28491"></a>
<a id="trace-28495"></a>
<a id="trace-28497"></a>
<a id="trace-28512"></a>
<a id="trace-28514"></a>
<a id="trace-28531"></a>
<a id="trace-28533"></a>
<a id="trace-28596"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
<a id="trace-28602"></a>
<a id="trace-28611"></a>
<a id="trace-28613"></a>
<a id="trace-28618"></a>
<a id="trace-28620"></a>
<a id="trace-28630"></a>
<a id="trace-28632"></a>
<a id="trace-28636"></a>
<a id="trace-28638"></a>
<a id="trace-28648"></a>
<a id="trace-28650"></a>
<a id="trace-28655"></a>
<a id="trace-28657"></a>
<a id="trace-28668"></a>
<a id="trace-28670"></a>
<a id="trace-28680"></a>
<a id="trace-28682"></a>
<a id="trace-28743"></a>
<a id="trace-28745"></a>
<a id="trace-28754"></a>
<a id="trace-28756"></a>
<a id="trace-28778"></a>
<a id="trace-28780"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28793"></a>
<a id="trace-28795"></a>
<a id="trace-28797"></a>
<a id="trace-28799"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28817"></a>
<a id="trace-28819"></a>
<a id="trace-28829"></a>
<a id="trace-28831"></a>
<a id="trace-28835"></a>
<a id="trace-28837"></a>
<a id="trace-28901"></a>
<a id="trace-28903"></a>
<a id="trace-28906"></a>
<a id="trace-28908"></a>
<a id="trace-28925"></a>
<a id="trace-28927"></a>
<a id="trace-28930"></a>
<a id="trace-28932"></a>
<a id="trace-28948"></a>
<a id="trace-28950"></a>
<a id="trace-28952"></a>
<a id="trace-28954"></a>
<a id="trace-28975"></a>
<a id="trace-28977"></a>
<a id="trace-28981"></a>
<a id="trace-28983"></a>
<a id="trace-28991"></a>
<a id="trace-28993"></a>
<a id="trace-28997"></a>
<a id="trace-28999"></a>
<a id="trace-29061"></a>
<a id="trace-29063"></a>
<a id="trace-29066"></a>
<a id="trace-29068"></a>
<a id="trace-29080"></a>
<a id="trace-29082"></a>
<a id="trace-29087"></a>
<a id="trace-29089"></a>
<a id="trace-29098"></a>
<a id="trace-29100"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29122"></a>
<a id="trace-29124"></a>
<a id="trace-29129"></a>
<a id="trace-29131"></a>
<a id="trace-29145"></a>
<a id="trace-29147"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49288929108387786, 'next_transition': 730}.
<a id="trace-1103"></a>
<a id="trace-1135"></a>
<a id="trace-1172"></a>
<a id="trace-1174"></a>
<a id="trace-1195"></a>
<a id="trace-1197"></a>
<a id="trace-1214"></a>
<a id="trace-1216"></a>
<a id="trace-1307"></a>
<a id="trace-1309"></a>
<a id="trace-1327"></a>
<a id="trace-1329"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 1103): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 889. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5204153723413183, 'next_transition': 1135}.
<a id="trace-156"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 156): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1808}.
<a id="trace-1439"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1439): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1439. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1808}.
<a id="trace-1440"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1440): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1808}.
<a id="trace-1441"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1441): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1228. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724836511721874, 'next_transition': 1776}.
<a id="trace-1776"></a>
<a id="trace-1778"></a>
<a id="trace-2047"></a>
<a id="trace-2049"></a>
<a id="trace-2074"></a>
<a id="trace-2076"></a>
<a id="trace-2170"></a>
<a id="trace-2172"></a>
<a id="trace-2210"></a>
<a id="trace-2212"></a>
<a id="trace-2248"></a>
<a id="trace-2250"></a>
<a id="trace-2288"></a>
<a id="trace-2290"></a>
<a id="trace-2312"></a>
<a id="trace-2314"></a>
<a id="trace-2339"></a>
<a id="trace-2341"></a>
<a id="trace-2401"></a>
<a id="trace-2403"></a>
<a id="trace-2430"></a>
<a id="trace-2432"></a>
<a id="trace-2460"></a>
<a id="trace-2462"></a>
<a id="trace-2560"></a>
<a id="trace-2562"></a>
<a id="trace-2599"></a>
<a id="trace-2601"></a>
<a id="trace-2669"></a>
<a id="trace-2671"></a>
<a id="trace-2753"></a>
<a id="trace-2755"></a>
- 13.20s–23.25s (×32), actor 5, squad 0 (trace 1776): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.555317464035704, 'next_transition': 2047}.
<a id="trace-1808"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1808): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1236. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.49998677866527, 'next_transition': 3230}.
<a id="trace-2770"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2770): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2475. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6497023965440508, 'next_transition': 3075}.
<a id="trace-2771"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2771): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2475. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6497023965440508, 'next_transition': 3075}.
<a id="trace-3075"></a>
<a id="trace-3077"></a>
<a id="trace-3113"></a>
<a id="trace-3115"></a>
<a id="trace-3205"></a>
<a id="trace-3207"></a>
<a id="trace-3222"></a>
<a id="trace-3224"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 3075): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2480. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.472482884865854, 'next_transition': 3113}.
<a id="trace-3230"></a>
- 25.80s–25.80s (×1), actor 8, squad 1 (trace 3230): traveling overwatch. Knowledge: actor memory at 25.00s, trace 3134. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.479455866611177, 'next_transition': 4379}.
<a id="trace-3231"></a>
- 25.80s–25.80s (×1), actor 8, squad 1 (trace 3231): matching received arrivals: traveling stage complete. Knowledge: actor memory at 25.00s, trace 3134. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.479455866611177, 'next_transition': 4379}.
<a id="trace-298"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 298): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3626"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3626): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3626. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6157360380472281, 'next_transition': 3656}.
<a id="trace-3627"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3627): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3627. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6157360380472281, 'next_transition': 3656}.
<a id="trace-3656"></a>
<a id="trace-3658"></a>
<a id="trace-3714"></a>
<a id="trace-3716"></a>
<a id="trace-3790"></a>
<a id="trace-3792"></a>
<a id="trace-3894"></a>
<a id="trace-3896"></a>
<a id="trace-3911"></a>
<a id="trace-3913"></a>
<a id="trace-3957"></a>
<a id="trace-3959"></a>
<a id="trace-3992"></a>
<a id="trace-3994"></a>
- 27.25s–32.25s (×14), actor 5, squad 0 (trace 3656): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 3627. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7847959873328159, 'next_transition': 3714}.
<a id="trace-4027"></a>
- 33.00s–33.00s (×1), actor 0, squad 0 (trace 4027): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3803. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362575649141731, 'next_transition': 4195}.
<a id="trace-4195"></a>
<a id="trace-4197"></a>
<a id="trace-4221"></a>
<a id="trace-4223"></a>
<a id="trace-4251"></a>
<a id="trace-4253"></a>
<a id="trace-4276"></a>
<a id="trace-4278"></a>
<a id="trace-4362"></a>
<a id="trace-4364"></a>
<a id="trace-4864"></a>
<a id="trace-4866"></a>
<a id="trace-5396"></a>
<a id="trace-5398"></a>
<a id="trace-5427"></a>
<a id="trace-5429"></a>
<a id="trace-5494"></a>
<a id="trace-5496"></a>
<a id="trace-5522"></a>
<a id="trace-5524"></a>
<a id="trace-5589"></a>
<a id="trace-5591"></a>
<a id="trace-5685"></a>
<a id="trace-5687"></a>
<a id="trace-6115"></a>
<a id="trace-6117"></a>
<a id="trace-6143"></a>
<a id="trace-6166"></a>
<a id="trace-6187"></a>
<a id="trace-6210"></a>
<a id="trace-6212"></a>
<a id="trace-6239"></a>
<a id="trace-6241"></a>
<a id="trace-6258"></a>
<a id="trace-6260"></a>
<a id="trace-6411"></a>
<a id="trace-6413"></a>
<a id="trace-6432"></a>
<a id="trace-6434"></a>
<a id="trace-6446"></a>
<a id="trace-6448"></a>
<a id="trace-6465"></a>
<a id="trace-6467"></a>
<a id="trace-6477"></a>
<a id="trace-6479"></a>
- 33.25s–47.75s (×45), actor 5, squad 0 (trace 4195): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3808. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24685530418450063, 'next_transition': 4221}.
<a id="trace-4379"></a>
- 35.65s–35.65s (×1), actor 8, squad 1 (trace 4379): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4293. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40045176813194344, 'next_transition': 4910}.
<a id="trace-4380"></a>
- 35.65s–35.65s (×1), actor 8, squad 1 (trace 4380): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4293. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40045176813194344, 'next_transition': 4910}.
<a id="trace-4381"></a>
<a id="trace-4910"></a>
- 35.65s–36.70s (×2), actor 8, squad 1 (trace 4381): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4293. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40045176813194344, 'next_transition': 4910}.
<a id="trace-5694"></a>
- 40.25s–40.25s (×1), actor 8, squad 1 (trace 5694): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 5611. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.911810884602335, 'next_transition': 7629}.
<a id="trace-5695"></a>
- 40.25s–40.25s (×1), actor 8, squad 1 (trace 5695): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 5611. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.911810884602335, 'next_transition': 7629}.
<a id="trace-6489"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6489): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 6321. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3708112165492872, 'next_transition': 6869}.
<a id="trace-6490"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6490): bounding overwatch. Knowledge: actor memory at 45.00s, trace 6321. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3708112165492872, 'next_transition': 6869}.
<a id="trace-6491"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6491): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6321. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3708112165492872, 'next_transition': 6869}.
<a id="trace-6869"></a>
<a id="trace-6871"></a>
<a id="trace-6942"></a>
<a id="trace-6944"></a>
<a id="trace-6985"></a>
<a id="trace-6987"></a>
- 48.75s–49.75s (×6), actor 5, squad 0 (trace 6869): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6325. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8500678156121951, 'next_transition': 6942}.
<a id="trace-7039"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 7039): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 7007. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10828394344131163, 'next_transition': 7467}.
<a id="trace-7467"></a>
<a id="trace-7469"></a>
<a id="trace-7515"></a>
<a id="trace-7517"></a>
<a id="trace-7566"></a>
<a id="trace-7568"></a>
<a id="trace-7620"></a>
<a id="trace-7622"></a>
<a id="trace-7808"></a>
<a id="trace-7810"></a>
<a id="trace-7833"></a>
<a id="trace-7835"></a>
- 50.25s–53.25s (×12), actor 5, squad 0 (trace 7467): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7011. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2603489136848959, 'next_transition': 7515}.
<a id="trace-7629"></a>
- 52.25s–52.25s (×1), actor 8, squad 1 (trace 7629): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7014. Next observer evidence: {'until': 58.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 8.674626001797009, 'next_transition': 8646}.
<a id="trace-7630"></a>
- 52.25s–52.25s (×1), actor 8, squad 1 (trace 7630): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7014. Next observer evidence: {'until': 58.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 8.674626001797009, 'next_transition': 8646}.
<a id="trace-7857"></a>
- 53.70s–53.70s (×1), actor 1, squad 0 (trace 7857): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 7007. Next observer evidence: None.
<a id="trace-7858"></a>
- 53.70s–53.70s (×1), actor 1, squad 0 (trace 7858): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 7007. Next observer evidence: None.
<a id="trace-8249"></a>
<a id="trace-8251"></a>
- 53.75s–53.75s (×2), actor 5, squad 0 (trace 8249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7011. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799989247360174, 'next_transition': 761}.
<a id="trace-761"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (events line 761): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8274"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 8274): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.897236 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8274. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999272142903603, 'next_transition': 8283}.
<a id="trace-8275"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 8275): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.897236 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8275. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999272142903603, 'next_transition': 8283}.
<a id="trace-8283"></a>
<a id="trace-8285"></a>
<a id="trace-8314"></a>
<a id="trace-8316"></a>
<a id="trace-8429"></a>
<a id="trace-8431"></a>
<a id="trace-8466"></a>
<a id="trace-8468"></a>
<a id="trace-8498"></a>
<a id="trace-8500"></a>
<a id="trace-8535"></a>
<a id="trace-8537"></a>
<a id="trace-8581"></a>
<a id="trace-8583"></a>
<a id="trace-8628"></a>
<a id="trace-8630"></a>
<a id="trace-8686"></a>
<a id="trace-8688"></a>
<a id="trace-8746"></a>
<a id="trace-8748"></a>
<a id="trace-8793"></a>
<a id="trace-8795"></a>
<a id="trace-8917"></a>
<a id="trace-8919"></a>
<a id="trace-8972"></a>
<a id="trace-8974"></a>
<a id="trace-9028"></a>
<a id="trace-9030"></a>
<a id="trace-9075"></a>
<a id="trace-9077"></a>
<a id="trace-9134"></a>
<a id="trace-9136"></a>
<a id="trace-9181"></a>
<a id="trace-9183"></a>
<a id="trace-9235"></a>
<a id="trace-9237"></a>
<a id="trace-9270"></a>
<a id="trace-9272"></a>
<a id="trace-9310"></a>
<a id="trace-9312"></a>
<a id="trace-9346"></a>
<a id="trace-9348"></a>
- 54.25s–64.75s (×42), actor 5, squad 0 (trace 8283): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.15s, trace 8275. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.269998763114557, 'next_transition': 8314}.
<a id="trace-8646"></a>
- 58.35s–58.35s (×1), actor 8, squad 1 (trace 8646): NeedSupport. Knowledge: actor memory at 55.00s, trace 8349. Next observer evidence: {'until': 68, 'shots': 1, 'casualties': 0, 'mean_displacement': 12.243106392548912, 'next_transition': 9676}.
<a id="trace-9390"></a>
- 65.05s–65.05s (×1), actor 1, squad 0 (trace 9390): NeedSupport. Knowledge: actor memory at 65.00s, trace 9365. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4212779233398401, 'next_transition': 9446}.
<a id="trace-9446"></a>
<a id="trace-9448"></a>
<a id="trace-9461"></a>
<a id="trace-9463"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
- 65.25s–67.25s (×6), actor 5, squad 0 (trace 9446): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9369. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6882392448887733, 'next_transition': 9461}.
<a id="trace-9534"></a>
- 67.40s–67.40s (×1), actor 1, squad 0 (trace 9534): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 65.00s, trace 9365. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050001653437847, 'next_transition': 9539}.
<a id="trace-9539"></a>
- 67.65s–67.65s (×1), actor 1, squad 0 (trace 9539): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 9365. Next observer evidence: None.
<a id="trace-9544"></a>
- 67.65s–67.65s (×1), actor 1, squad 0 (trace 9544): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 9365. Next observer evidence: None.
<a id="trace-9545"></a>
- 67.65s–67.65s (×1), actor 1, squad 0 (trace 9545): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 9365. Next observer evidence: None.
<a id="trace-9662"></a>
<a id="trace-9664"></a>
<a id="trace-9885"></a>
<a id="trace-9887"></a>
<a id="trace-9933"></a>
<a id="trace-9935"></a>
<a id="trace-10035"></a>
<a id="trace-10037"></a>
<a id="trace-10066"></a>
<a id="trace-10068"></a>
<a id="trace-10102"></a>
<a id="trace-10104"></a>
- 67.75s–71.25s (×12), actor 5, squad 0 (trace 9662): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9369. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7430802210906918, 'next_transition': 9885}.
<a id="trace-9676"></a>
- 68.05s–68.05s (×1), actor 8, squad 1 (trace 9676): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 9372. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.755163614290727, 'next_transition': 13051}.
<a id="trace-9734"></a>
- 68.05s–68.05s (×1), actor 8, squad 1 (trace 9734): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 9372. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.755163614290727, 'next_transition': 13051}.
<a id="trace-10114"></a>
- 71.55s–71.55s (×1), actor 1, squad 0 (trace 10114): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 9948. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.055058616804794, 'next_transition': 10140}.
<a id="trace-10140"></a>
<a id="trace-10142"></a>
<a id="trace-10176"></a>
<a id="trace-10178"></a>
<a id="trace-10190"></a>
<a id="trace-10192"></a>
<a id="trace-10216"></a>
<a id="trace-10218"></a>
<a id="trace-10232"></a>
<a id="trace-10234"></a>
<a id="trace-10315"></a>
<a id="trace-10317"></a>
<a id="trace-10329"></a>
<a id="trace-10331"></a>
- 72.25s–75.75s (×14), actor 5, squad 0 (trace 10140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9951. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7809671973298252, 'next_transition': 10176}.
<a id="trace-10340"></a>
- 75.85s–75.85s (×1), actor 1, squad 0 (trace 10340): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778877, 'next_transition': 12917}.
<a id="trace-12876"></a>
- 75.85s–75.85s (×1), actor 1, squad 0 (trace 12876): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778877, 'next_transition': 12917}.
<a id="trace-12877"></a>
- 75.85s–75.85s (×1), actor 1, squad 0 (trace 12877): MoveTactically. Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778877, 'next_transition': 12917}.
<a id="trace-12878"></a>
- 75.85s–75.85s (×1), actor 1, squad 0 (trace 12878): contact cover complete: assessment resumes closure. Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778877, 'next_transition': 12917}.
<a id="trace-12900"></a>
- 75.85s–75.85s (×1), actor 1, squad 0 (trace 12900): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778877, 'next_transition': 12917}.
<a id="trace-12917"></a>
<a id="trace-12919"></a>
<a id="trace-12939"></a>
<a id="trace-12941"></a>
<a id="trace-12973"></a>
<a id="trace-12975"></a>
<a id="trace-12989"></a>
<a id="trace-12991"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
- 76.25s–78.75s (×10), actor 5, squad 0 (trace 12917): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 10246. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120137573778905, 'next_transition': 12939}.
<a id="trace-13051"></a>
- 79.20s–79.20s (×1), actor 8, squad 1 (trace 13051): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 10249. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.160615733673295, 'next_transition': 1207}.
<a id="trace-13076"></a>
- 79.55s–79.55s (×1), actor 1, squad 0 (trace 13076): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 75.00s, trace 10243. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1423875546332571, 'next_transition': 13220}.
<a id="trace-13220"></a>
<a id="trace-13222"></a>
<a id="trace-13267"></a>
<a id="trace-13269"></a>
<a id="trace-13322"></a>
<a id="trace-13324"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13356"></a>
<a id="trace-13358"></a>
<a id="trace-13372"></a>
<a id="trace-13374"></a>
<a id="trace-13395"></a>
<a id="trace-13397"></a>
<a id="trace-13411"></a>
<a id="trace-13413"></a>
<a id="trace-13497"></a>
<a id="trace-13499"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13565"></a>
<a id="trace-13567"></a>
<a id="trace-13656"></a>
<a id="trace-13658"></a>
<a id="trace-13700"></a>
<a id="trace-13702"></a>
- 80.25s–89.25s (×26), actor 5, squad 0 (trace 13220): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13152. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.443466774348707, 'next_transition': 13267}.
<a id="trace-1207"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1207): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13300"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 13300): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.80s, trace 13300. Next observer evidence: {'until': 87.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13572}.
<a id="trace-13572"></a>
- 87.80s–87.80s (×1), actor 8, squad 1 (trace 13572): MoveTactically. Knowledge: actor memory at 85.00s, trace 13429. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.498519951871952, 'next_transition': 1287}.
<a id="trace-13573"></a>
- 87.80s–87.80s (×1), actor 8, squad 1 (trace 13573): received platoon directive. Knowledge: actor memory at 85.00s, trace 13429. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.498519951871952, 'next_transition': 1287}.
<a id="trace-13720"></a>
- 89.65s–89.65s (×1), actor 1, squad 0 (trace 13720): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 13424. Next observer evidence: None.
<a id="trace-13746"></a>
<a id="trace-13748"></a>
<a id="trace-13835"></a>
<a id="trace-13837"></a>
<a id="trace-13860"></a>
<a id="trace-13862"></a>
<a id="trace-13876"></a>
<a id="trace-13878"></a>
<a id="trace-13891"></a>
<a id="trace-13893"></a>
<a id="trace-13918"></a>
<a id="trace-13920"></a>
<a id="trace-13936"></a>
<a id="trace-13938"></a>
<a id="trace-13956"></a>
<a id="trace-13958"></a>
<a id="trace-13975"></a>
<a id="trace-13977"></a>
<a id="trace-14016"></a>
<a id="trace-14018"></a>
<a id="trace-14116"></a>
<a id="trace-14118"></a>
<a id="trace-14141"></a>
<a id="trace-14143"></a>
<a id="trace-14163"></a>
<a id="trace-14165"></a>
<a id="trace-14242"></a>
<a id="trace-14244"></a>
- 89.75s–97.25s (×28), actor 5, squad 0 (trace 13746): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13426. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5119828017324797, 'next_transition': 13835}.
<a id="trace-1287"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (events line 1287): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14111"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (trace 14111): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.178905 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 14111. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6520510966797388, 'next_transition': 14179}.
<a id="trace-14112"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (trace 14112): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.178905 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 14112. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6520510966797388, 'next_transition': 14179}.
<a id="trace-14179"></a>
- 96.90s–96.90s (×1), actor 8, squad 1 (trace 14179): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 14036. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.559395945579737, 'next_transition': 14827}.
<a id="trace-14252"></a>
- 97.45s–97.45s (×1), actor 1, squad 0 (trace 14252): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 14031. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3551190829178056, 'next_transition': 14367}.
<a id="trace-14367"></a>
<a id="trace-14369"></a>
<a id="trace-14396"></a>
<a id="trace-14398"></a>
<a id="trace-14411"></a>
<a id="trace-14413"></a>
<a id="trace-14435"></a>
<a id="trace-14437"></a>
- 97.75s–99.25s (×8), actor 5, squad 0 (trace 14367): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 14112. Next observer evidence: {'until': 98.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.8788179742377003, 'next_transition': 14396}.
<a id="trace-14446"></a>
- 99.50s–99.50s (×1), actor 1, squad 0 (trace 14446): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 95.00s, trace 14031. Next observer evidence: {'until': 100, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6851769142980352, 'next_transition': 14493}.
<a id="trace-14448"></a>
- 99.50s–99.50s (×1), actor 1, squad 0 (trace 14448): NeedSupport. Knowledge: actor memory at 95.00s, trace 14031. Next observer evidence: {'until': 100, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6851769142980352, 'next_transition': 14493}.
<a id="trace-14493"></a>
- 100.05s–100.05s (×1), actor 1, squad 0 (trace 14493): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 14469. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0301703591413665, 'next_transition': 17385}.
<a id="trace-14496"></a>
- 100.05s–100.05s (×1), actor 1, squad 0 (trace 14496): MoveTactically. Knowledge: actor memory at 100.00s, trace 14469. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0301703591413665, 'next_transition': 17385}.
<a id="trace-14497"></a>
- 100.05s–100.05s (×1), actor 1, squad 0 (trace 14497): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 100.00s, trace 14469. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0301703591413665, 'next_transition': 17385}.
<a id="trace-14827"></a>
- 101.20s–101.20s (×1), actor 8, squad 1 (trace 14827): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 14473. Next observer evidence: {'until': 131.2, 'shots': 5, 'casualties': 1, 'mean_displacement': 22.262971532048784, 'next_transition': 2045}.
<a id="trace-14828"></a>
- 101.20s–101.20s (×1), actor 8, squad 1 (trace 14828): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 100.00s, trace 14473. Next observer evidence: {'until': 131.2, 'shots': 5, 'casualties': 1, 'mean_displacement': 22.262971532048784, 'next_transition': 2045}.
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17457"></a>
<a id="trace-17459"></a>
<a id="trace-17508"></a>
<a id="trace-17510"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17670"></a>
<a id="trace-17672"></a>
<a id="trace-17709"></a>
<a id="trace-17711"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
- 101.25s–107.75s (×18), actor 5, squad 0 (trace 17385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14471. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1867412199126188, 'next_transition': 17402}.
<a id="trace-17758"></a>
- 108.10s–108.10s (×1), actor 1, squad 0 (trace 17758): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 17568. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15786244458461718, 'next_transition': 18022}.
<a id="trace-17759"></a>
- 108.10s–108.10s (×1), actor 1, squad 0 (trace 17759): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 17568. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15786244458461718, 'next_transition': 18022}.
<a id="trace-18022"></a>
<a id="trace-18024"></a>
<a id="trace-18092"></a>
<a id="trace-18094"></a>
<a id="trace-18136"></a>
<a id="trace-18138"></a>
<a id="trace-18277"></a>
<a id="trace-18279"></a>
<a id="trace-18302"></a>
<a id="trace-18304"></a>
- 108.25s–111.25s (×10), actor 5, squad 0 (trace 18022): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 17570. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4308160793724858, 'next_transition': 18092}.
<a id="trace-18325"></a>
- 111.70s–111.70s (×1), actor 1, squad 0 (trace 18325): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 110.00s, trace 18162. Next observer evidence: None.
<a id="trace-18328"></a>
<a id="trace-18330"></a>
<a id="trace-18374"></a>
<a id="trace-18376"></a>
<a id="trace-18397"></a>
<a id="trace-18399"></a>
<a id="trace-18416"></a>
<a id="trace-18418"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18572"></a>
<a id="trace-18574"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18629"></a>
<a id="trace-18631"></a>
<a id="trace-18651"></a>
<a id="trace-18653"></a>
<a id="trace-18727"></a>
<a id="trace-18729"></a>
<a id="trace-18809"></a>
<a id="trace-18811"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18923"></a>
<a id="trace-18925"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
<a id="trace-19046"></a>
<a id="trace-19048"></a>
- 111.75s–123.25s (×36), actor 5, squad 0 (trace 18328): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 18164. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7216694148385447, 'next_transition': 18374}.
<a id="trace-19055"></a>
- 123.25s–123.25s (×1), actor 1, squad 0 (trace 19055): NeedSupport. Knowledge: actor memory at 120.00s, trace 18739. Next observer evidence: None.
<a id="trace-1734"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (events line 1734): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5573515213909377, 'next_transition': 19103}.
<a id="trace-19063"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 19063): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.827395 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 123.30s, trace 19063. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5573515213909377, 'next_transition': 19103}.
<a id="trace-19064"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 19064): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.827395 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 123.30s, trace 19064. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5573515213909377, 'next_transition': 19103}.
<a id="trace-19103"></a>
<a id="trace-19105"></a>
<a id="trace-19151"></a>
<a id="trace-19153"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
- 123.75s–124.75s (×6), actor 5, squad 0 (trace 19103): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.30s, trace 19064. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8831550177916225, 'next_transition': 19151}.
<a id="trace-19305"></a>
- 125.45s–125.45s (×1), actor 1, squad 0 (trace 19305): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 125.00s, trace 19199. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150027516150029, 'next_transition': 19310}.
<a id="trace-19310"></a>
<a id="trace-19312"></a>
<a id="trace-19342"></a>
<a id="trace-19344"></a>
<a id="trace-19375"></a>
<a id="trace-19377"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19481"></a>
<a id="trace-19483"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19643"></a>
<a id="trace-19645"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
- 125.75s–129.80s (×16), actor 5, squad 0 (trace 19310): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19201. Next observer evidence: {'until': 126.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.74812208817537, 'next_transition': 19342}.
<a id="trace-19690"></a>
- 130.05s–130.05s (×1), actor 4, squad 0 (trace 19690): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 130.00s, trace 19669. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4202529926675889, 'next_transition': 19750}.
<a id="trace-19691"></a>
- 130.05s–130.05s (×1), actor 4, squad 0 (trace 19691): ; retain held slots. Knowledge: actor memory at 130.00s, trace 19669. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4202529926675889, 'next_transition': 19750}.
<a id="trace-19750"></a>
<a id="trace-19752"></a>
<a id="trace-19825"></a>
<a id="trace-19827"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19881"></a>
<a id="trace-19883"></a>
<a id="trace-19905"></a>
<a id="trace-19917"></a>
<a id="trace-19939"></a>
<a id="trace-20021"></a>
<a id="trace-20036"></a>
<a id="trace-20048"></a>
<a id="trace-20080"></a>
<a id="trace-20093"></a>
<a id="trace-20106"></a>
<a id="trace-20118"></a>
<a id="trace-20126"></a>
<a id="trace-20198"></a>
<a id="trace-20212"></a>
<a id="trace-20228"></a>
<a id="trace-20238"></a>
<a id="trace-20386"></a>
<a id="trace-20432"></a>
<a id="trace-20463"></a>
<a id="trace-20547"></a>
<a id="trace-20637"></a>
<a id="trace-20683"></a>
<a id="trace-20698"></a>
<a id="trace-20713"></a>
<a id="trace-20739"></a>
<a id="trace-20750"></a>
<a id="trace-20771"></a>
<a id="trace-20841"></a>
<a id="trace-20853"></a>
<a id="trace-20869"></a>
<a id="trace-20915"></a>
<a id="trace-20934"></a>
<a id="trace-20947"></a>
<a id="trace-20968"></a>
<a id="trace-20977"></a>
<a id="trace-21047"></a>
<a id="trace-21060"></a>
<a id="trace-21075"></a>
<a id="trace-21091"></a>
<a id="trace-21125"></a>
<a id="trace-21168"></a>
<a id="trace-21191"></a>
<a id="trace-21209"></a>
<a id="trace-21220"></a>
<a id="trace-21288"></a>
<a id="trace-21302"></a>
<a id="trace-21315"></a>
<a id="trace-21336"></a>
<a id="trace-21344"></a>
<a id="trace-21359"></a>
<a id="trace-21385"></a>
<a id="trace-21462"></a>
<a id="trace-21474"></a>
<a id="trace-21599"></a>
<a id="trace-21626"></a>
<a id="trace-21694"></a>
<a id="trace-21762"></a>
<a id="trace-21784"></a>
<a id="trace-21800"></a>
<a id="trace-21806"></a>
<a id="trace-21820"></a>
- 130.30s–173.30s (×68), actor 5, squad 0 (trace 19750): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 19670. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3830163970323348, 'next_transition': 19825}.
<a id="trace-2045"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 2045): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20056"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 20056): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.496275 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20056. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7412501171069797, 'next_transition': 20246}.
<a id="trace-20057"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 20057): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.496275 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20057. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7412501171069797, 'next_transition': 20246}.
<a id="trace-20058"></a>
- 137.10s–137.10s (×1), actor 8, squad 1 (trace 20058): NeedSupport. Knowledge: actor memory at 135.00s, trace 19948. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7412501171069797, 'next_transition': 20246}.
<a id="trace-20246"></a>
- 141.90s–141.90s (×1), actor 8, squad 1 (trace 20246): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 140.00s, trace 20135. Next observer evidence: None.
<a id="trace-20247"></a>
- 141.95s–141.95s (×1), actor 8, squad 1 (trace 20247): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 20135. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9401999999999999, 'next_transition': 20644}.
<a id="trace-20250"></a>
- 141.95s–141.95s (×1), actor 8, squad 1 (trace 20250): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 20135. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9401999999999999, 'next_transition': 20644}.
<a id="trace-20251"></a>
- 141.95s–141.95s (×1), actor 8, squad 1 (trace 20251): Reorganise complete: known contact. Knowledge: actor memory at 140.00s, trace 20135. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9401999999999999, 'next_transition': 20644}.
<a id="trace-20644"></a>
- 145.30s–145.30s (×1), actor 8, squad 1 (trace 20644): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 20562. Next observer evidence: {'until': 146.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05420000000000069, 'next_transition': 20696}.
<a id="trace-20696"></a>
- 146.55s–146.55s (×1), actor 8, squad 1 (trace 20696): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 145.00s, trace 20562. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.35165000000000024, 'next_transition': 21533}.
<a id="trace-21533"></a>
- 168.35s–168.35s (×1), actor 9, squad 1 (trace 21533): MoveTactically. Knowledge: actor memory at 165.00s, trace 21402. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.142519575263883, 'next_transition': 21702}.
<a id="trace-21534"></a>
- 168.35s–168.35s (×1), actor 9, squad 1 (trace 21534): traveling. Knowledge: actor memory at 165.00s, trace 21402. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.142519575263883, 'next_transition': 21702}.
<a id="trace-21535"></a>
- 168.35s–168.35s (×1), actor 9, squad 1 (trace 21535): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 21402. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.142519575263883, 'next_transition': 21702}.
<a id="trace-21702"></a>
- 170.65s–170.65s (×1), actor 9, squad 1 (trace 21702): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 21635. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 21958}.
<a id="trace-21703"></a>
- 170.65s–170.65s (×1), actor 9, squad 1 (trace 21703): MoveTactically. Knowledge: actor memory at 170.00s, trace 21635. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 21958}.
<a id="trace-21704"></a>
- 170.65s–170.65s (×1), actor 9, squad 1 (trace 21704): . Knowledge: actor memory at 170.00s, trace 21635. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 21958}.
<a id="trace-21836"></a>
- 173.85s–173.85s (×1), actor 5, squad 0 (trace 21836): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 173.85s, trace 21836. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21844}.
<a id="trace-21844"></a>
<a id="trace-21851"></a>
<a id="trace-21919"></a>
<a id="trace-21929"></a>
<a id="trace-21944"></a>
<a id="trace-21951"></a>
<a id="trace-22030"></a>
<a id="trace-22043"></a>
<a id="trace-22066"></a>
<a id="trace-22074"></a>
<a id="trace-22141"></a>
<a id="trace-22152"></a>
<a id="trace-22191"></a>
<a id="trace-22198"></a>
<a id="trace-22215"></a>
<a id="trace-22222"></a>
<a id="trace-22236"></a>
<a id="trace-22249"></a>
<a id="trace-22259"></a>
<a id="trace-22378"></a>
<a id="trace-22447"></a>
<a id="trace-22453"></a>
<a id="trace-22475"></a>
<a id="trace-22483"></a>
<a id="trace-22506"></a>
<a id="trace-23222"></a>
<a id="trace-23498"></a>
<a id="trace-23516"></a>
<a id="trace-23533"></a>
<a id="trace-23614"></a>
<a id="trace-23622"></a>
<a id="trace-23634"></a>
<a id="trace-23694"></a>
<a id="trace-23711"></a>
<a id="trace-23719"></a>
<a id="trace-23740"></a>
<a id="trace-23754"></a>
<a id="trace-23771"></a>
<a id="trace-23785"></a>
<a id="trace-23855"></a>
<a id="trace-23866"></a>
<a id="trace-23881"></a>
<a id="trace-23891"></a>
<a id="trace-23934"></a>
<a id="trace-23946"></a>
- 174.30s–198.80s (×45), actor 5, squad 0 (trace 21844): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 173.85s, trace 21836. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21851}.
<a id="trace-21958"></a>
- 176.90s–176.90s (×1), actor 9, squad 1 (trace 21958): traveling overwatch. Knowledge: actor memory at 175.00s, trace 21858. Next observer evidence: {'until': 184.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.99999, 'next_transition': 22267}.
<a id="trace-21959"></a>
- 176.90s–176.90s (×1), actor 9, squad 1 (trace 21959): matching received arrivals: traveling stage complete. Knowledge: actor memory at 175.00s, trace 21858. Next observer evidence: {'until': 184.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.99999, 'next_transition': 22267}.
<a id="trace-22267"></a>
- 184.70s–184.70s (×1), actor 9, squad 1 (trace 22267): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 180.00s, trace 22081. Next observer evidence: {'until': 187.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.894867125227631, 'next_transition': 22515}.
<a id="trace-22515"></a>
- 187.70s–187.70s (×1), actor 9, squad 1 (trace 22515): matching received arrivals: deployment leg complete. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: None.
<a id="trace-22516"></a>
- 187.75s–187.75s (×1), actor 9, squad 1 (trace 22516): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22650}.
<a id="trace-22518"></a>
- 187.75s–187.75s (×1), actor 9, squad 1 (trace 22518): MoveTactically. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22650}.
<a id="trace-22519"></a>
- 187.75s–187.75s (×1), actor 9, squad 1 (trace 22519): Reorganise complete. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22650}.
<a id="trace-22650"></a>
- 187.95s–187.95s (×1), actor 9, squad 1 (trace 22650): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 188, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22762}.
<a id="trace-22651"></a>
- 187.95s–187.95s (×1), actor 9, squad 1 (trace 22651): bounding overwatch. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 188, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22762}.
<a id="trace-22652"></a>
<a id="trace-22762"></a>
<a id="trace-22872"></a>
<a id="trace-22986"></a>
<a id="trace-23101"></a>
<a id="trace-23227"></a>
<a id="trace-23350"></a>
- 187.95s–188.40s (×7), actor 9, squad 1 (trace 22652): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 22385. Next observer evidence: {'until': 188, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22762}.
<a id="trace-23639"></a>
- 191.70s–191.70s (×1), actor 9, squad 1 (trace 23639): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 190.00s, trace 23546. Next observer evidence: {'until': 202.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.12167247861247, 'next_transition': 24090}.
<a id="trace-23640"></a>
- 191.70s–191.70s (×1), actor 9, squad 1 (trace 23640): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 23546. Next observer evidence: {'until': 202.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.12167247861247, 'next_transition': 24090}.
<a id="trace-23955"></a>
- 198.85s–198.85s (×1), actor 5, squad 0 (trace 23955): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 198.85s, trace 23955. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 23961}.
<a id="trace-23961"></a>
<a id="trace-24039"></a>
<a id="trace-24059"></a>
<a id="trace-24078"></a>
<a id="trace-24109"></a>
<a id="trace-24208"></a>
<a id="trace-24229"></a>
<a id="trace-24250"></a>
<a id="trace-24296"></a>
<a id="trace-24370"></a>
<a id="trace-24389"></a>
<a id="trace-24406"></a>
<a id="trace-24425"></a>
<a id="trace-24514"></a>
<a id="trace-24546"></a>
<a id="trace-24570"></a>
<a id="trace-24593"></a>
<a id="trace-24612"></a>
<a id="trace-24685"></a>
<a id="trace-24721"></a>
<a id="trace-24736"></a>
<a id="trace-24752"></a>
<a id="trace-24769"></a>
<a id="trace-24843"></a>
<a id="trace-24866"></a>
<a id="trace-24919"></a>
<a id="trace-24935"></a>
<a id="trace-25041"></a>
<a id="trace-25063"></a>
<a id="trace-25103"></a>
<a id="trace-25171"></a>
<a id="trace-25187"></a>
<a id="trace-25222"></a>
<a id="trace-25247"></a>
<a id="trace-25323"></a>
<a id="trace-25354"></a>
<a id="trace-25370"></a>
<a id="trace-25385"></a>
<a id="trace-25408"></a>
<a id="trace-25477"></a>
<a id="trace-25502"></a>
<a id="trace-25630"></a>
<a id="trace-25703"></a>
<a id="trace-25722"></a>
<a id="trace-25773"></a>
<a id="trace-25806"></a>
<a id="trace-25880"></a>
<a id="trace-25897"></a>
<a id="trace-25916"></a>
<a id="trace-25934"></a>
<a id="trace-25965"></a>
<a id="trace-26050"></a>
<a id="trace-26084"></a>
<a id="trace-26100"></a>
<a id="trace-26115"></a>
<a id="trace-26135"></a>
<a id="trace-26204"></a>
<a id="trace-26228"></a>
<a id="trace-26299"></a>
<a id="trace-26369"></a>
<a id="trace-26385"></a>
<a id="trace-26408"></a>
<a id="trace-26432"></a>
<a id="trace-26464"></a>
<a id="trace-26534"></a>
<a id="trace-26552"></a>
<a id="trace-26570"></a>
<a id="trace-26714"></a>
<a id="trace-26734"></a>
<a id="trace-26749"></a>
<a id="trace-26767"></a>
<a id="trace-26844"></a>
<a id="trace-26868"></a>
<a id="trace-26899"></a>
<a id="trace-26911"></a>
<a id="trace-26932"></a>
<a id="trace-27002"></a>
<a id="trace-27018"></a>
<a id="trace-27041"></a>
<a id="trace-27096"></a>
<a id="trace-27182"></a>
<a id="trace-27201"></a>
<a id="trace-27238"></a>
<a id="trace-27328"></a>
<a id="trace-27346"></a>
<a id="trace-27363"></a>
<a id="trace-27399"></a>
<a id="trace-27475"></a>
<a id="trace-27497"></a>
<a id="trace-27529"></a>
<a id="trace-27561"></a>
<a id="trace-27650"></a>
<a id="trace-27672"></a>
<a id="trace-27708"></a>
<a id="trace-27798"></a>
<a id="trace-27977"></a>
<a id="trace-28011"></a>
<a id="trace-28032"></a>
<a id="trace-28173"></a>
<a id="trace-28263"></a>
<a id="trace-28281"></a>
<a id="trace-28337"></a>
<a id="trace-28354"></a>
<a id="trace-28443"></a>
<a id="trace-28463"></a>
<a id="trace-28485"></a>
<a id="trace-28508"></a>
<a id="trace-28592"></a>
<a id="trace-28607"></a>
<a id="trace-28626"></a>
<a id="trace-28644"></a>
<a id="trace-28664"></a>
<a id="trace-28774"></a>
<a id="trace-28805"></a>
<a id="trace-28825"></a>
<a id="trace-28897"></a>
<a id="trace-28921"></a>
<a id="trace-28944"></a>
<a id="trace-28987"></a>
<a id="trace-29076"></a>
<a id="trace-29094"></a>
<a id="trace-29118"></a>
- 199.30s–358.30s (×122), actor 5, squad 0 (trace 23961): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 198.85s, trace 23955. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24039}.
<a id="trace-24090"></a>
- 202.70s–202.70s (×1), actor 9, squad 1 (trace 24090): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 23981. Next observer evidence: {'until': 206, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2717}.
<a id="trace-24091"></a>
- 202.70s–202.70s (×1), actor 9, squad 1 (trace 24091): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 23981. Next observer evidence: {'until': 206, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2717}.
<a id="trace-2717"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (events line 2717): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24226"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (trace 24226): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.15s, trace 24226. Next observer evidence: {'until': 215.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24521}.
<a id="trace-24521"></a>
- 215.40s–215.40s (×1), actor 9, squad 1 (trace 24521): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 24459. Next observer evidence: None.
<a id="trace-24524"></a>
- 215.45s–215.45s (×1), actor 9, squad 1 (trace 24524): MoveTactically. Knowledge: actor memory at 215.00s, trace 24459. Next observer evidence: None.
<a id="trace-24525"></a>
- 215.45s–215.45s (×1), actor 9, squad 1 (trace 24525): received platoon directive. Knowledge: actor memory at 215.00s, trace 24459. Next observer evidence: None.
<a id="trace-24529"></a>
- 215.50s–215.50s (×1), actor 9, squad 1 (trace 24529): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 215.00s, trace 24459. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2857}.
<a id="trace-2857"></a>
- 243.85s–243.85s (×1), actor 5, squad 1 (events line 2857): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25400"></a>
- 243.85s–243.85s (×1), actor 5, squad 1 (trace 25400): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205656 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 243.85s, trace 25400. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25568}.
<a id="trace-25401"></a>
- 243.85s–243.85s (×1), actor 5, squad 1 (trace 25401): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205656 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 243.85s, trace 25401. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25568}.
<a id="trace-25568"></a>
- 248.80s–248.80s (×1), actor 9, squad 1 (trace 25568): Withdraw to received rally. Knowledge: actor memory at 245.00s, trace 25421. Next observer evidence: {'until': 259.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 25975}.
<a id="trace-25569"></a>
- 248.80s–248.80s (×1), actor 9, squad 1 (trace 25569): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 25421. Next observer evidence: {'until': 259.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 25975}.
<a id="trace-25975"></a>
- 259.70s–259.70s (×1), actor 9, squad 1 (trace 25975): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 255.00s, trace 25823. Next observer evidence: {'until': 289.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3196}.
<a id="trace-25976"></a>
- 259.70s–259.70s (×1), actor 9, squad 1 (trace 25976): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 255.00s, trace 25823. Next observer evidence: {'until': 289.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3196}.
<a id="trace-3196"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (events line 3196): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27822"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 27822): renew committed intent (75 s lifetime). Knowledge: actor memory at 316.60s, trace 27822. Next observer evidence: {'until': 318.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27868}.
<a id="trace-27868"></a>
- 318.85s–318.85s (×1), actor 9, squad 1 (trace 27868): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 315.00s, trace 27741. Next observer evidence: {'until': 321.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27984}.
<a id="trace-27984"></a>
- 321.55s–321.55s (×1), actor 9, squad 1 (trace 27984): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 320.00s, trace 27905. Next observer evidence: {'until': 351.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

209 matched order/radio deliveries; 282 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.535s; maximum 5.900s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 3813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 3814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3815: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3816: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3817: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3818: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3819: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3820: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3821: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3823: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3824: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 3825: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 3826: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4297: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4298: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4299: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4300: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4301: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4302: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4303: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4304: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4305: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4306: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4307: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4308: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5611: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 5613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 5614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5615: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5616: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5617: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5618: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5619: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5620: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5621: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5622: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5623: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5624: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 5625: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 5626: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6326: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 6328: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6329: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 6330: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 6331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6332: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6333: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6334: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6335: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6336: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6337: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6338: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6339: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6340: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6341: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 6342: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 6343: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7007: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7008: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7009: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7011: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7012: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 7014: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7015: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 7016: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 7017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7018: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7019: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7020: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7021: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7022: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7023: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7024: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7025: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7026: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7027: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 7028: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 7029: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8274: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8275: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8342: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8343: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8344: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8346: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8347: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8349: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8350: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8351: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8353: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8354: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8355: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8356: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8357: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8358: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8359: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8360: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8361: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8362: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8363: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8364: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8827: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8828: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8829: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8831: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8832: estimate 16.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 8834: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8835: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8836: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8838: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8839: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8840: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8841: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8842: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8843: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8844: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8845: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8846: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8847: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8848: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8849: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9365: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9366: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9367: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9369: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9370: estimate 16.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 9372: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9373: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 9374: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 9375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9376: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9377: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9378: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9379: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9380: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9381: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9382: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9383: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9384: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9385: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 9386: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 9387: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9948: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9949: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9951: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9952: estimate 16.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 9954: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9955: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 9956: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 9957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9958: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9959: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9960: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9961: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9962: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9963: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9964: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9965: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9966: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9967: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 9968: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 9969: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10243: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 10244: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10246: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10247: estimate 16.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 10249: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 10250: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 10251: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 10252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10253: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10254: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10255: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10256: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10257: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10258: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10259: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10260: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 10261: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 10262: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 10263: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 10264: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13149: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13150: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13152: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13153: estimate 16.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13155: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13156: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13157: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 13158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13159: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13160: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13161: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13162: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13163: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13164: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13165: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13166: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13167: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13168: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13169: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13170: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 13300: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13424: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13426: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13427: estimate 15.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 13429: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13430: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13431: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13433: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13434: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13435: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13436: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13437: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13438: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13439: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13440: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13441: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13442: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13443: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13444: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 13756: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13758: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13759: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 13761: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13762: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 13763: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 13764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13765: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13766: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13767: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13768: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13769: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13770: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13771: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13772: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13773: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13774: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13775: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13776: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14031: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14032: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14033: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14034: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 14036: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14037: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 14038: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 14039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14040: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14041: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14042: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14043: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14044: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14045: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14046: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14047: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14048: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14049: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14050: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14051: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 14111: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 14112: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14469: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14470: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14471: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14472: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 14473: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14474: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 14475: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 14476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14477: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14478: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14479: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14480: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14481: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14482: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14483: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14484: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14485: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14486: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14487: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14488: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 17568: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 17569: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 17570: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 17571: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 17572: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 17573: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 17574: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 17575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 17576: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 17577: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 17578: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 17579: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 17580: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 17581: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 17582: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 17583: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 17584: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 17585: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 17586: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 17587: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18162: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 18163: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18164: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18165: estimate 15.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 18166: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18167: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 18168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18169: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18170: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18171: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18172: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18173: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18174: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18175: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18176: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18177: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18178: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 18179: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 18180: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 18468: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 18469: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 18470: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 18471: estimate 16.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 18472: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 18473: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 18474: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 18475: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 18476: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 18477: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 18478: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 18479: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 18480: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 18481: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 18482: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 18483: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 18484: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 18485: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 18486: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 18739: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 18740: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 18741: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 18742: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 18743: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 18744: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 18745: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 18746: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 18747: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 18748: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 18749: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 18750: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 18751: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 18752: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 18753: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 18754: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 18755: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 18756: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 18757: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 19063: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 19064: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19199: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 19200: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19201: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19202: estimate 16.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 19203: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19204: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 19205: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19206: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19207: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19208: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19209: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19210: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19211: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19212: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19213: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19214: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19215: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 19216: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 19217: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 19669: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19670: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19671: estimate 15.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 19672: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19673: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 19674: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 19675: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19676: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19677: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19678: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19679: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19680: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19681: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19682: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19683: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19684: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 19685: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 19686: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 19946: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 19947: estimate 15.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 19948: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19949: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 19950: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 19951: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19952: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19953: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19954: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19955: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19956: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19957: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19958: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19959: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19960: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 19961: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 19962: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20056: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20057: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20133: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20134: estimate 16.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 20135: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20136: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 20137: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20138: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20139: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20140: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20141: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20142: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20143: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20144: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20145: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20146: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20147: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 20148: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 20149: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20560: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20561: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 20562: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20563: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20564: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20565: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20566: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20567: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20568: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20569: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20570: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20571: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20572: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20573: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 20574: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 20575: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 20778: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 20779: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 20780: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20781: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 20782: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20783: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20784: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20785: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20786: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20787: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20788: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20789: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20790: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20791: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 20792: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 20793: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20984: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 20985: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 20986: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20988: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20989: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20990: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20991: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20992: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20993: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20994: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20995: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20996: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20997: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 20998: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 20999: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 21228: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 21229: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 21230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 21231: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21232: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21233: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21234: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21235: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21236: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21237: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21238: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 21239: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21240: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 21241: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 21242: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 21400: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 21401: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21403: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21404: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21405: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21406: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21407: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21408: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21409: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21410: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21411: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21412: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 21413: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 21414: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21633: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 21634: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21636: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21637: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21638: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21639: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21640: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21641: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21642: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21643: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21644: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21645: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 21646: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 21647: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 173.85s leader 5, trace 21836: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21856: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21857: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21859: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21860: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21861: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21862: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21863: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21864: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21865: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21866: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21867: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21868: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 21869: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 21870: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22079: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22080: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22082: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22083: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22084: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22085: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22086: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22087: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22088: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22089: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22090: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22091: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 22092: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 22093: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22383: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22384: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22386: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22387: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22388: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22389: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22390: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22391: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22392: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22393: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22394: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22395: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 22396: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 22397: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23544: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23545: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23546: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23547: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23548: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23549: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23550: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23551: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23552: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23553: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23554: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23555: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23556: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 23557: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 23558: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23792: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 23793: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 23794: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 23795: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23796: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23797: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23798: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23799: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23800: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23801: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23802: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23803: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23804: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 23805: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 23806: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.85s leader 5, trace 23955: estimate 13.66; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23980: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 23981: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 23982: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23983: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23984: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23985: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23986: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23987: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23988: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23989: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23990: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23991: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 23992: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 23993: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 24151: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 24152: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 24153: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 24154: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 24155: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 24156: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 24157: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 24158: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 24159: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 24160: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 24161: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 24162: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 24163: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 24164: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 24226: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24313: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24314: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 24315: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24316: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24317: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24318: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 24319: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24320: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24321: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24322: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24323: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24324: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 24325: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 24326: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24458: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24459: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24460: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24461: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24462: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24463: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24464: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24465: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24466: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24467: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24468: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24469: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 24470: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 24471: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24625: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24626: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 24627: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24628: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24629: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24630: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24631: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24632: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24633: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24634: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24635: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24636: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 24637: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 24638: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24787: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 24788: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24789: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24790: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24791: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24792: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 24793: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24794: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24795: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24796: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24797: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24798: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 24799: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 24800: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24949: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 24950: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24951: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24952: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24953: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24954: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 24955: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24956: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24957: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24958: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24959: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24960: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 24961: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 24962: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25115: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25116: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 25117: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25118: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25119: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25120: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 25121: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25122: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25123: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25124: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25125: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25126: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 25127: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 25128: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25259: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25260: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25261: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25262: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25263: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25264: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25265: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25266: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25267: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25268: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25269: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25270: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 25271: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 25272: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 243.85s leader 5, trace 25400: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 243.85s leader 5, trace 25401: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25420: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25421: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 25422: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25423: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25424: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25425: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 25426: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25427: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25428: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25429: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25430: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25431: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 25432: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 25433: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25642: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 25643: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 25644: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25645: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25646: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25647: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 25648: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25649: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 25650: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25651: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25652: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25653: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 25654: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 25655: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25822: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 25823: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 25824: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25825: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25826: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25827: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 25828: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25829: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 25830: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25831: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25832: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25833: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 25834: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 25835: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25990: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25991: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25992: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25993: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25994: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25995: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25996: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25997: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25998: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25999: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26000: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26001: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 26002: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 26003: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26147: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 26148: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 26149: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26150: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26151: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26152: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 26153: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26154: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26155: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26156: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26157: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26158: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 26159: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 26160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26311: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26312: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 26313: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26314: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26315: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26316: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 26317: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26318: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26319: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26320: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26321: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26322: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 26323: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 26324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26476: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26477: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 26478: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26479: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26480: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26481: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26482: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26483: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26484: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26485: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26486: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26487: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 26488: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 26489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26629: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26630: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 26631: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26632: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26633: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26634: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26635: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26636: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26637: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26638: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26639: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26640: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 26641: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 26642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26780: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26781: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 26782: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26783: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26784: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26785: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26786: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26787: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26788: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26789: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26790: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26791: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 26792: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 26793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26945: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 26946: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 26947: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26948: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26949: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26950: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 26951: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26952: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26953: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26955: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26956: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 26957: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 26958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 27108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 27109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 27110: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27111: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27112: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 27113: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 27114: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 27115: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27116: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 27118: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27119: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 27120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 27121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27259: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27260: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27261: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27262: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27264: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27265: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27267: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27268: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 27269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 27270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 27423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 27424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 27580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 27590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 27591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 27740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 27741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 27742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 27743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 27744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 27745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 27746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 27747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 27748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 27752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 27753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 27822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 27904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 27905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 27906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 27907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 27908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 27909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 27910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 27911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 27912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 27913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 27914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 27915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 27916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 27917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 28063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 28064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 28204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 28206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 28216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 28217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 28370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 28372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 28373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 28374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 28375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 28376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 28377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 28378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 28382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 28383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 28535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 28536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 28537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 28538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 28539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 28540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 28541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 28542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 28543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 28544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 28545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 28546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 28547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 28548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 28683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 28684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 28685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 28686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 28687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 28688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 28689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 28690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 28691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 28692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 28693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 28694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 28695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 28696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 28840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 28841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 28842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 28844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 28845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 28846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 28847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 28848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 28851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 28852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 28853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 29001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 29002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 29003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 29004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 29005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 29006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 29007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 29008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 29009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 29010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 29011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 29012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 29013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 29014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 29167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 29168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 29169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 29170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 29171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 29172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 29173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 29174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 29175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 29176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 29177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 29178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 29179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 29180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Ash killed in action
- 1: Soren killed in action
- 1: Reed incapacitated
- 1: Dane killed in action
- 1: Rook killed in action
- 1: Tern killed in action
- 1: Ellis killed in action
- 1: Bren incapacitated
- 1: Moss incapacitated

## Outcome attribution

- 243.85s, evidence 2857: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.85s, evidence 25400: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205656 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25568}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.85s, evidence 25401: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205656 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25568}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 316.60s, evidence 3196: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
