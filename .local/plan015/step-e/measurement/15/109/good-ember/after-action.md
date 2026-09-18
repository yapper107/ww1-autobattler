# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/109/good-ember/battle-109-1789673983348761458`

## Battle summary

**Ember** · 360 s · 408 shots.

### Turning points

- 22.2s, squad 1: contact (events line 278). First recorded contact.
- 27.4s, squad 1: withdrawal ([trace 4093](#trace-4093)). 68.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.4s, squad 0: help call ([trace 4938](#trace-4938)). No completion observed before termination.
- 46.5s, squad 1: help call ([trace 6173](#trace-6173)). 80.3s, squad 0: answered a neighbour with support by fire.
- 65.9s, squad 0: assault ([trace 7950](#trace-7950)). 73.8s, squad 0: new loss of own base of fire.
- 67.1s, squad 0: help call ([trace 8324](#trace-8324)). No completion observed before termination.
- 80.3s, squad 0: help answer ([trace 10514](#trace-10514)). 141.5s, squad 0: advanced tactically.
- 157.7s, squad 1: help answer ([trace 15642](#trace-15642)). 181.2s, squad 1: took cover and returned fire.
- 175.2s, squad 0: withdrawal ([trace 18169](#trace-18169)). 219.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 180.2s, squad 1: help call ([trace 18517](#trace-18517)). No completion observed before termination.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, broke contact and 5 further drill types; withdrew; 28 shots, 6/8 lost.
- **1** — FightHere; chose broke contact, HelpSquad arrived within support range and 2 further drill types; withdrew; 9 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 220 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 151 shots, 0/4 lost.

### Decisions and attribution

At 157.7s, squad 1 chose HelpSquad arrived within support range ([trace 15642](#trace-15642)), followed by 5 shots and 1 own casualties; estimate 2.5 against 0 distinct squad-reported contacts; At 27.4s, squad 1 chose broke contact ([trace 4093](#trace-4093)), followed by 2 shots and 1 own casualties; estimate 13.4 against 0 distinct squad-reported contacts; At 26.3s, squad 0 chose took cover and returned fire ([trace 3852](#trace-3852)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1378](#trace-1378)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.591700385499969, 'next_transition': 1406}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1380](#trace-1380)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.015636081792257, 'next_transition': 1807}.

### Communication

255 matched deliveries (mean 0.63s, max 5.95s); 392 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.20s, squad 1, contact, evidence events line 278: First recorded contact; .
- 27.35s, squad 1, withdrawal, evidence 4093: BreakContact: believed ratio at least two without superiority; 68.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.40s, squad 0, help call, evidence 4938: NeedSupport; No completion observed before termination.
- 46.50s, squad 1, help call, evidence 6173: NeedSupport; 80.3s, squad 0: answered a neighbour with support by fire.
- 65.90s, squad 0, assault, evidence 7950: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 73.8s, squad 0: new loss of own base of fire.
- 67.05s, squad 0, help call, evidence 8324: NeedSupport; No completion observed before termination.
- 80.30s, squad 0, help answer, evidence 10514: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 141.5s, squad 0: advanced tactically.
- 157.65s, squad 1, help answer, evidence 15642: HelpSquad arrived within support range; area = deployment lane UNION objective disc radius 60 m, clipped to map; 181.2s, squad 1: took cover and returned fire.
- 175.15s, squad 0, withdrawal, evidence 18169: BreakContact: believed ratio at least two without superiority; 219.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 180.20s, squad 1, help call, evidence 18517: NeedSupport; No completion observed before termination.
- 184.50s, squad 1, withdrawal, evidence 18762: BreakContact: believed ratio at least two without superiority; 219.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 186.55s, squad 0, help call, evidence 19021: NeedSupport; No completion observed before termination.
- 195.20s, squad 1, help call, evidence 19470: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.051420612960912, 'next_transition': 958}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.051420612960912, 'next_transition': 958}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.051420612960912, 'next_transition': 958}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.334862959944576, 'next_transition': 143}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.334862959944576, 'next_transition': 143}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.334862959944576, 'next_transition': 143}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-772"></a>
<a id="trace-774"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-877"></a>
<a id="trace-879"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1026"></a>
<a id="trace-1028"></a>
<a id="trace-1070"></a>
<a id="trace-1072"></a>
<a id="trace-1092"></a>
<a id="trace-1094"></a>
<a id="trace-1129"></a>
<a id="trace-1131"></a>
<a id="trace-1162"></a>
<a id="trace-1164"></a>
<a id="trace-1202"></a>
<a id="trace-1204"></a>
<a id="trace-1222"></a>
<a id="trace-1224"></a>
<a id="trace-1242"></a>
<a id="trace-1244"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1410"></a>
<a id="trace-1412"></a>
<a id="trace-1442"></a>
<a id="trace-1444"></a>
<a id="trace-1470"></a>
<a id="trace-1472"></a>
<a id="trace-1777"></a>
<a id="trace-1779"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-1967"></a>
<a id="trace-1969"></a>
<a id="trace-1993"></a>
<a id="trace-1995"></a>
<a id="trace-2088"></a>
<a id="trace-2090"></a>
<a id="trace-2131"></a>
<a id="trace-2133"></a>
<a id="trace-2167"></a>
<a id="trace-2169"></a>
<a id="trace-2201"></a>
<a id="trace-2203"></a>
<a id="trace-2419"></a>
<a id="trace-2421"></a>
<a id="trace-2446"></a>
<a id="trace-2448"></a>
<a id="trace-2488"></a>
<a id="trace-2490"></a>
<a id="trace-2514"></a>
<a id="trace-2516"></a>
<a id="trace-2545"></a>
<a id="trace-2547"></a>
<a id="trace-2581"></a>
<a id="trace-2583"></a>
<a id="trace-2677"></a>
<a id="trace-2679"></a>
<a id="trace-2711"></a>
<a id="trace-2713"></a>
<a id="trace-2748"></a>
<a id="trace-2750"></a>
<a id="trace-2783"></a>
<a id="trace-2785"></a>
<a id="trace-2813"></a>
<a id="trace-2815"></a>
<a id="trace-3016"></a>
<a id="trace-3018"></a>
<a id="trace-3523"></a>
<a id="trace-3525"></a>
<a id="trace-3554"></a>
<a id="trace-3556"></a>
<a id="trace-3614"></a>
<a id="trace-3616"></a>
<a id="trace-3653"></a>
<a id="trace-3655"></a>
<a id="trace-3765"></a>
<a id="trace-3767"></a>
<a id="trace-3811"></a>
<a id="trace-3813"></a>
<a id="trace-3848"></a>
<a id="trace-3850"></a>
<a id="trace-4066"></a>
<a id="trace-4068"></a>
<a id="trace-4089"></a>
<a id="trace-4091"></a>
<a id="trace-4336"></a>
<a id="trace-4338"></a>
<a id="trace-4365"></a>
<a id="trace-4367"></a>
<a id="trace-4399"></a>
<a id="trace-4401"></a>
<a id="trace-4421"></a>
<a id="trace-4423"></a>
<a id="trace-4448"></a>
<a id="trace-4450"></a>
<a id="trace-4549"></a>
<a id="trace-4551"></a>
<a id="trace-4572"></a>
<a id="trace-4574"></a>
<a id="trace-4598"></a>
<a id="trace-4600"></a>
<a id="trace-4615"></a>
<a id="trace-4617"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4666"></a>
<a id="trace-4668"></a>
<a id="trace-4681"></a>
<a id="trace-4683"></a>
<a id="trace-4700"></a>
<a id="trace-4702"></a>
<a id="trace-4728"></a>
<a id="trace-4730"></a>
<a id="trace-4740"></a>
<a id="trace-4742"></a>
<a id="trace-4819"></a>
<a id="trace-4821"></a>
<a id="trace-4837"></a>
<a id="trace-4839"></a>
<a id="trace-4870"></a>
<a id="trace-4872"></a>
<a id="trace-4897"></a>
<a id="trace-4899"></a>
<a id="trace-4921"></a>
<a id="trace-4923"></a>
<a id="trace-4955"></a>
<a id="trace-4957"></a>
<a id="trace-5098"></a>
<a id="trace-5100"></a>
<a id="trace-5121"></a>
<a id="trace-5123"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5333"></a>
<a id="trace-5335"></a>
<a id="trace-5564"></a>
<a id="trace-5566"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-5744"></a>
<a id="trace-5746"></a>
<a id="trace-5776"></a>
<a id="trace-5778"></a>
<a id="trace-5801"></a>
<a id="trace-5803"></a>
<a id="trace-5829"></a>
<a id="trace-5831"></a>
<a id="trace-5850"></a>
<a id="trace-5852"></a>
<a id="trace-5871"></a>
<a id="trace-5873"></a>
<a id="trace-5893"></a>
<a id="trace-5895"></a>
<a id="trace-5920"></a>
<a id="trace-5922"></a>
<a id="trace-5997"></a>
<a id="trace-5999"></a>
<a id="trace-6014"></a>
<a id="trace-6016"></a>
<a id="trace-6159"></a>
<a id="trace-6161"></a>
<a id="trace-6195"></a>
<a id="trace-6197"></a>
<a id="trace-6219"></a>
<a id="trace-6221"></a>
<a id="trace-6239"></a>
<a id="trace-6241"></a>
<a id="trace-6444"></a>
<a id="trace-6446"></a>
<a id="trace-6469"></a>
<a id="trace-6471"></a>
<a id="trace-6504"></a>
<a id="trace-6506"></a>
<a id="trace-6519"></a>
<a id="trace-6521"></a>
<a id="trace-6612"></a>
<a id="trace-6614"></a>
<a id="trace-6636"></a>
<a id="trace-6638"></a>
<a id="trace-6658"></a>
<a id="trace-6660"></a>
<a id="trace-6678"></a>
<a id="trace-6680"></a>
<a id="trace-6870"></a>
<a id="trace-6872"></a>
<a id="trace-6890"></a>
<a id="trace-6892"></a>
<a id="trace-6922"></a>
<a id="trace-6924"></a>
<a id="trace-6933"></a>
<a id="trace-6935"></a>
<a id="trace-6955"></a>
<a id="trace-6957"></a>
<a id="trace-6990"></a>
<a id="trace-6992"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7185"></a>
<a id="trace-7187"></a>
<a id="trace-7217"></a>
<a id="trace-7219"></a>
<a id="trace-7242"></a>
<a id="trace-7244"></a>
<a id="trace-7260"></a>
<a id="trace-7262"></a>
<a id="trace-7280"></a>
<a id="trace-7282"></a>
<a id="trace-7304"></a>
<a id="trace-7306"></a>
<a id="trace-7316"></a>
<a id="trace-7318"></a>
<a id="trace-7334"></a>
<a id="trace-7336"></a>
<a id="trace-7351"></a>
<a id="trace-7353"></a>
<a id="trace-7431"></a>
<a id="trace-7433"></a>
<a id="trace-7452"></a>
<a id="trace-7454"></a>
<a id="trace-7475"></a>
<a id="trace-7477"></a>
<a id="trace-7490"></a>
<a id="trace-7492"></a>
<a id="trace-7512"></a>
<a id="trace-7514"></a>
<a id="trace-7525"></a>
<a id="trace-7527"></a>
<a id="trace-7541"></a>
<a id="trace-7543"></a>
<a id="trace-7553"></a>
<a id="trace-7555"></a>
<a id="trace-7570"></a>
<a id="trace-7572"></a>
<a id="trace-7586"></a>
<a id="trace-7588"></a>
<a id="trace-7666"></a>
<a id="trace-7668"></a>
<a id="trace-7682"></a>
<a id="trace-7684"></a>
<a id="trace-8289"></a>
<a id="trace-8291"></a>
<a id="trace-8313"></a>
<a id="trace-8315"></a>
<a id="trace-8392"></a>
<a id="trace-8394"></a>
<a id="trace-8435"></a>
<a id="trace-8437"></a>
<a id="trace-8480"></a>
<a id="trace-8482"></a>
<a id="trace-8515"></a>
<a id="trace-8517"></a>
<a id="trace-8549"></a>
<a id="trace-8551"></a>
<a id="trace-8641"></a>
<a id="trace-8643"></a>
<a id="trace-8659"></a>
<a id="trace-8661"></a>
<a id="trace-8685"></a>
<a id="trace-8687"></a>
<a id="trace-8710"></a>
<a id="trace-8712"></a>
<a id="trace-8766"></a>
<a id="trace-8768"></a>
<a id="trace-8815"></a>
<a id="trace-8817"></a>
<a id="trace-8878"></a>
<a id="trace-8880"></a>
<a id="trace-8916"></a>
<a id="trace-8918"></a>
<a id="trace-9236"></a>
<a id="trace-9238"></a>
<a id="trace-9292"></a>
<a id="trace-9294"></a>
<a id="trace-9401"></a>
<a id="trace-9403"></a>
<a id="trace-9440"></a>
<a id="trace-9442"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9537"></a>
<a id="trace-9539"></a>
<a id="trace-9566"></a>
<a id="trace-9568"></a>
<a id="trace-9593"></a>
<a id="trace-9595"></a>
<a id="trace-9613"></a>
<a id="trace-9615"></a>
<a id="trace-9629"></a>
<a id="trace-9631"></a>
<a id="trace-9652"></a>
<a id="trace-9654"></a>
<a id="trace-9665"></a>
<a id="trace-9667"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-11288"></a>
<a id="trace-11290"></a>
<a id="trace-11316"></a>
<a id="trace-11318"></a>
<a id="trace-11341"></a>
<a id="trace-11343"></a>
<a id="trace-11361"></a>
<a id="trace-11363"></a>
<a id="trace-11376"></a>
<a id="trace-11378"></a>
<a id="trace-11400"></a>
<a id="trace-11402"></a>
<a id="trace-11413"></a>
<a id="trace-11415"></a>
<a id="trace-11438"></a>
<a id="trace-11440"></a>
<a id="trace-11451"></a>
<a id="trace-11453"></a>
<a id="trace-11531"></a>
<a id="trace-11533"></a>
<a id="trace-11543"></a>
<a id="trace-11545"></a>
<a id="trace-11617"></a>
<a id="trace-11619"></a>
<a id="trace-11637"></a>
<a id="trace-11639"></a>
<a id="trace-11654"></a>
<a id="trace-11656"></a>
<a id="trace-11678"></a>
<a id="trace-11680"></a>
<a id="trace-11701"></a>
<a id="trace-11703"></a>
<a id="trace-11717"></a>
<a id="trace-11719"></a>
<a id="trace-11746"></a>
<a id="trace-11748"></a>
<a id="trace-11756"></a>
<a id="trace-11758"></a>
<a id="trace-11834"></a>
<a id="trace-11836"></a>
<a id="trace-11850"></a>
<a id="trace-11852"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11879"></a>
<a id="trace-11881"></a>
<a id="trace-11902"></a>
<a id="trace-11904"></a>
<a id="trace-11917"></a>
<a id="trace-11919"></a>
<a id="trace-11939"></a>
<a id="trace-11941"></a>
<a id="trace-11948"></a>
<a id="trace-11950"></a>
<a id="trace-11976"></a>
<a id="trace-11978"></a>
<a id="trace-11985"></a>
<a id="trace-11987"></a>
<a id="trace-12061"></a>
<a id="trace-12063"></a>
<a id="trace-12074"></a>
<a id="trace-12076"></a>
<a id="trace-12099"></a>
<a id="trace-12101"></a>
<a id="trace-12114"></a>
<a id="trace-12116"></a>
<a id="trace-12134"></a>
<a id="trace-12136"></a>
<a id="trace-12149"></a>
<a id="trace-12151"></a>
<a id="trace-12173"></a>
<a id="trace-12175"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12206"></a>
<a id="trace-12208"></a>
<a id="trace-12219"></a>
<a id="trace-12221"></a>
<a id="trace-12295"></a>
<a id="trace-12297"></a>
<a id="trace-12412"></a>
<a id="trace-12414"></a>
<a id="trace-12429"></a>
<a id="trace-12431"></a>
<a id="trace-12444"></a>
<a id="trace-12446"></a>
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12480"></a>
<a id="trace-12482"></a>
<a id="trace-12502"></a>
<a id="trace-12504"></a>
<a id="trace-12516"></a>
<a id="trace-12518"></a>
<a id="trace-12538"></a>
<a id="trace-12540"></a>
<a id="trace-12551"></a>
<a id="trace-12553"></a>
<a id="trace-12626"></a>
<a id="trace-12628"></a>
<a id="trace-12641"></a>
<a id="trace-12643"></a>
<a id="trace-12659"></a>
<a id="trace-12661"></a>
<a id="trace-12676"></a>
<a id="trace-12678"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12710"></a>
<a id="trace-12712"></a>
<a id="trace-12730"></a>
<a id="trace-12732"></a>
<a id="trace-12743"></a>
<a id="trace-12745"></a>
<a id="trace-12765"></a>
<a id="trace-12767"></a>
<a id="trace-12777"></a>
<a id="trace-12779"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12865"></a>
<a id="trace-12867"></a>
<a id="trace-12885"></a>
<a id="trace-12887"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12918"></a>
<a id="trace-12920"></a>
<a id="trace-12931"></a>
<a id="trace-12933"></a>
<a id="trace-12949"></a>
<a id="trace-12951"></a>
<a id="trace-12963"></a>
<a id="trace-12965"></a>
<a id="trace-12982"></a>
<a id="trace-12984"></a>
<a id="trace-12993"></a>
<a id="trace-12995"></a>
<a id="trace-13066"></a>
<a id="trace-13068"></a>
<a id="trace-13076"></a>
<a id="trace-13078"></a>
<a id="trace-13095"></a>
<a id="trace-13097"></a>
<a id="trace-13116"></a>
<a id="trace-13118"></a>
<a id="trace-13137"></a>
<a id="trace-13139"></a>
<a id="trace-13226"></a>
<a id="trace-13228"></a>
<a id="trace-13255"></a>
<a id="trace-13257"></a>
<a id="trace-13270"></a>
<a id="trace-13272"></a>
<a id="trace-13298"></a>
<a id="trace-13300"></a>
<a id="trace-13307"></a>
<a id="trace-13309"></a>
<a id="trace-13381"></a>
<a id="trace-13383"></a>
<a id="trace-13392"></a>
<a id="trace-13394"></a>
<a id="trace-13422"></a>
<a id="trace-13424"></a>
<a id="trace-13439"></a>
<a id="trace-13441"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13474"></a>
<a id="trace-13476"></a>
<a id="trace-13490"></a>
<a id="trace-13492"></a>
<a id="trace-13515"></a>
<a id="trace-13517"></a>
<a id="trace-13532"></a>
<a id="trace-13534"></a>
<a id="trace-13617"></a>
<a id="trace-13619"></a>
<a id="trace-13632"></a>
<a id="trace-13634"></a>
<a id="trace-13650"></a>
<a id="trace-13652"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13688"></a>
<a id="trace-13690"></a>
<a id="trace-13803"></a>
<a id="trace-13805"></a>
<a id="trace-13825"></a>
<a id="trace-13827"></a>
<a id="trace-13834"></a>
<a id="trace-13836"></a>
<a id="trace-13863"></a>
<a id="trace-13865"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13961"></a>
<a id="trace-13963"></a>
<a id="trace-13972"></a>
<a id="trace-13974"></a>
<a id="trace-14006"></a>
<a id="trace-14008"></a>
<a id="trace-14026"></a>
<a id="trace-14028"></a>
<a id="trace-14050"></a>
<a id="trace-14052"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14082"></a>
<a id="trace-14084"></a>
<a id="trace-14091"></a>
<a id="trace-14093"></a>
<a id="trace-14112"></a>
<a id="trace-14114"></a>
<a id="trace-14121"></a>
<a id="trace-14123"></a>
<a id="trace-14197"></a>
<a id="trace-14199"></a>
<a id="trace-14207"></a>
<a id="trace-14209"></a>
<a id="trace-14235"></a>
<a id="trace-14237"></a>
<a id="trace-14247"></a>
<a id="trace-14249"></a>
<a id="trace-14273"></a>
<a id="trace-14275"></a>
<a id="trace-14298"></a>
<a id="trace-14300"></a>
<a id="trace-14322"></a>
<a id="trace-14324"></a>
<a id="trace-14332"></a>
<a id="trace-14334"></a>
<a id="trace-14356"></a>
<a id="trace-14358"></a>
<a id="trace-14367"></a>
<a id="trace-14369"></a>
<a id="trace-14497"></a>
<a id="trace-14499"></a>
<a id="trace-14518"></a>
<a id="trace-14520"></a>
<a id="trace-14591"></a>
<a id="trace-14593"></a>
<a id="trace-14669"></a>
<a id="trace-14671"></a>
<a id="trace-14692"></a>
<a id="trace-14694"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14727"></a>
<a id="trace-14729"></a>
<a id="trace-14745"></a>
<a id="trace-14747"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14875"></a>
<a id="trace-14877"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
<a id="trace-14916"></a>
<a id="trace-14918"></a>
<a id="trace-14935"></a>
<a id="trace-14937"></a>
<a id="trace-14953"></a>
<a id="trace-14955"></a>
<a id="trace-14966"></a>
<a id="trace-14968"></a>
<a id="trace-14986"></a>
<a id="trace-14988"></a>
<a id="trace-15002"></a>
<a id="trace-15004"></a>
<a id="trace-15024"></a>
<a id="trace-15026"></a>
<a id="trace-15041"></a>
<a id="trace-15043"></a>
<a id="trace-15129"></a>
<a id="trace-15131"></a>
<a id="trace-15155"></a>
<a id="trace-15157"></a>
<a id="trace-15285"></a>
<a id="trace-15287"></a>
<a id="trace-15302"></a>
<a id="trace-15304"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15353"></a>
<a id="trace-15355"></a>
<a id="trace-15373"></a>
<a id="trace-15375"></a>
<a id="trace-15393"></a>
<a id="trace-15395"></a>
<a id="trace-15414"></a>
<a id="trace-15416"></a>
<a id="trace-15428"></a>
<a id="trace-15430"></a>
<a id="trace-15528"></a>
<a id="trace-15530"></a>
<a id="trace-15546"></a>
<a id="trace-15548"></a>
<a id="trace-15573"></a>
<a id="trace-15575"></a>
<a id="trace-15602"></a>
<a id="trace-15604"></a>
<a id="trace-15633"></a>
<a id="trace-15635"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17194"></a>
<a id="trace-17196"></a>
<a id="trace-17215"></a>
<a id="trace-17217"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17254"></a>
<a id="trace-17256"></a>
<a id="trace-17344"></a>
<a id="trace-17346"></a>
<a id="trace-17366"></a>
<a id="trace-17368"></a>
<a id="trace-17391"></a>
<a id="trace-17393"></a>
<a id="trace-17407"></a>
<a id="trace-17409"></a>
<a id="trace-17430"></a>
<a id="trace-17432"></a>
<a id="trace-17444"></a>
<a id="trace-17446"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17479"></a>
<a id="trace-17481"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17533"></a>
<a id="trace-17535"></a>
<a id="trace-17607"></a>
<a id="trace-17609"></a>
<a id="trace-17620"></a>
<a id="trace-17622"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17680"></a>
<a id="trace-17682"></a>
<a id="trace-17691"></a>
<a id="trace-17693"></a>
<a id="trace-17713"></a>
<a id="trace-17715"></a>
<a id="trace-17729"></a>
<a id="trace-17731"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17903"></a>
<a id="trace-17905"></a>
<a id="trace-17915"></a>
<a id="trace-17917"></a>
<a id="trace-17938"></a>
<a id="trace-17940"></a>
<a id="trace-18023"></a>
<a id="trace-18025"></a>
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18060"></a>
<a id="trace-18062"></a>
<a id="trace-18076"></a>
<a id="trace-18078"></a>
<a id="trace-18095"></a>
<a id="trace-18097"></a>
<a id="trace-18114"></a>
<a id="trace-18116"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18273"></a>
<a id="trace-18275"></a>
<a id="trace-18288"></a>
<a id="trace-18290"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
<a id="trace-18339"></a>
<a id="trace-18341"></a>
<a id="trace-18360"></a>
<a id="trace-18362"></a>
<a id="trace-18372"></a>
<a id="trace-18374"></a>
<a id="trace-18393"></a>
<a id="trace-18395"></a>
<a id="trace-18409"></a>
<a id="trace-18411"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18447"></a>
<a id="trace-18449"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18553"></a>
<a id="trace-18555"></a>
<a id="trace-18649"></a>
<a id="trace-18651"></a>
<a id="trace-18667"></a>
<a id="trace-18669"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18713"></a>
<a id="trace-18715"></a>
<a id="trace-18734"></a>
<a id="trace-18736"></a>
<a id="trace-18754"></a>
<a id="trace-18756"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18982"></a>
<a id="trace-18984"></a>
<a id="trace-19010"></a>
<a id="trace-19012"></a>
<a id="trace-19037"></a>
<a id="trace-19039"></a>
<a id="trace-19061"></a>
<a id="trace-19063"></a>
<a id="trace-19075"></a>
<a id="trace-19077"></a>
<a id="trace-19101"></a>
<a id="trace-19103"></a>
<a id="trace-19112"></a>
<a id="trace-19114"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19253"></a>
<a id="trace-19255"></a>
<a id="trace-19277"></a>
<a id="trace-19279"></a>
<a id="trace-19292"></a>
<a id="trace-19294"></a>
<a id="trace-19317"></a>
<a id="trace-19319"></a>
<a id="trace-19329"></a>
<a id="trace-19331"></a>
<a id="trace-19355"></a>
<a id="trace-19357"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19387"></a>
<a id="trace-19389"></a>
<a id="trace-19404"></a>
<a id="trace-19406"></a>
<a id="trace-19486"></a>
<a id="trace-19488"></a>
<a id="trace-19555"></a>
<a id="trace-19557"></a>
<a id="trace-19584"></a>
<a id="trace-19586"></a>
<a id="trace-19595"></a>
<a id="trace-19597"></a>
<a id="trace-19626"></a>
<a id="trace-19628"></a>
<a id="trace-19658"></a>
<a id="trace-19660"></a>
<a id="trace-19682"></a>
<a id="trace-19684"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19733"></a>
<a id="trace-19735"></a>
<a id="trace-19755"></a>
<a id="trace-19757"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19849"></a>
<a id="trace-19851"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19892"></a>
<a id="trace-19894"></a>
<a id="trace-19908"></a>
<a id="trace-19910"></a>
<a id="trace-19923"></a>
<a id="trace-19925"></a>
<a id="trace-19945"></a>
<a id="trace-19947"></a>
<a id="trace-19958"></a>
<a id="trace-19960"></a>
<a id="trace-19981"></a>
<a id="trace-19983"></a>
<a id="trace-19996"></a>
<a id="trace-19998"></a>
<a id="trace-20081"></a>
<a id="trace-20083"></a>
<a id="trace-20091"></a>
<a id="trace-20093"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20150"></a>
<a id="trace-20152"></a>
<a id="trace-20165"></a>
<a id="trace-20167"></a>
<a id="trace-20179"></a>
<a id="trace-20181"></a>
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20209"></a>
<a id="trace-20211"></a>
<a id="trace-20223"></a>
<a id="trace-20225"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20327"></a>
<a id="trace-20329"></a>
<a id="trace-20339"></a>
<a id="trace-20341"></a>
<a id="trace-20356"></a>
<a id="trace-20358"></a>
<a id="trace-20367"></a>
<a id="trace-20369"></a>
<a id="trace-20386"></a>
<a id="trace-20388"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20429"></a>
<a id="trace-20431"></a>
<a id="trace-20501"></a>
<a id="trace-20503"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20532"></a>
<a id="trace-20534"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20588"></a>
<a id="trace-20590"></a>
<a id="trace-20603"></a>
<a id="trace-20605"></a>
<a id="trace-20625"></a>
<a id="trace-20627"></a>
<a id="trace-20643"></a>
<a id="trace-20645"></a>
<a id="trace-20719"></a>
<a id="trace-20721"></a>
<a id="trace-20733"></a>
<a id="trace-20735"></a>
<a id="trace-20753"></a>
<a id="trace-20755"></a>
<a id="trace-20770"></a>
<a id="trace-20772"></a>
<a id="trace-20788"></a>
<a id="trace-20790"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20815"></a>
<a id="trace-20817"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20851"></a>
<a id="trace-20853"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20950"></a>
<a id="trace-20952"></a>
<a id="trace-20960"></a>
<a id="trace-20962"></a>
<a id="trace-20980"></a>
<a id="trace-20982"></a>
<a id="trace-20997"></a>
<a id="trace-20999"></a>
<a id="trace-21018"></a>
<a id="trace-21020"></a>
<a id="trace-21025"></a>
<a id="trace-21027"></a>
<a id="trace-21038"></a>
<a id="trace-21040"></a>
<a id="trace-21047"></a>
<a id="trace-21049"></a>
<a id="trace-21067"></a>
<a id="trace-21069"></a>
<a id="trace-21073"></a>
<a id="trace-21075"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21148"></a>
<a id="trace-21150"></a>
<a id="trace-21161"></a>
<a id="trace-21163"></a>
<a id="trace-21169"></a>
<a id="trace-21171"></a>
<a id="trace-21183"></a>
<a id="trace-21185"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21227"></a>
<a id="trace-21229"></a>
<a id="trace-21235"></a>
<a id="trace-21237"></a>
<a id="trace-21306"></a>
<a id="trace-21308"></a>
<a id="trace-21313"></a>
<a id="trace-21315"></a>
<a id="trace-21328"></a>
<a id="trace-21330"></a>
<a id="trace-21337"></a>
<a id="trace-21339"></a>
<a id="trace-21352"></a>
<a id="trace-21354"></a>
<a id="trace-21359"></a>
<a id="trace-21361"></a>
<a id="trace-21372"></a>
<a id="trace-21374"></a>
<a id="trace-21377"></a>
<a id="trace-21379"></a>
<a id="trace-21391"></a>
<a id="trace-21393"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21470"></a>
<a id="trace-21472"></a>
<a id="trace-21486"></a>
<a id="trace-21488"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21508"></a>
<a id="trace-21510"></a>
<a id="trace-21522"></a>
<a id="trace-21524"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21541"></a>
<a id="trace-21543"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21560"></a>
<a id="trace-21562"></a>
<a id="trace-21566"></a>
<a id="trace-21568"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21646"></a>
<a id="trace-21648"></a>
<a id="trace-21661"></a>
<a id="trace-21663"></a>
<a id="trace-21676"></a>
<a id="trace-21678"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21701"></a>
<a id="trace-21703"></a>
<a id="trace-21714"></a>
<a id="trace-21716"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21749"></a>
<a id="trace-21751"></a>
<a id="trace-21760"></a>
<a id="trace-21762"></a>
<a id="trace-21828"></a>
<a id="trace-21830"></a>
<a id="trace-21834"></a>
<a id="trace-21836"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-21858"></a>
<a id="trace-21860"></a>
<a id="trace-21873"></a>
<a id="trace-21875"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21898"></a>
<a id="trace-21900"></a>
<a id="trace-21903"></a>
<a id="trace-21905"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21934"></a>
<a id="trace-21936"></a>
<a id="trace-22004"></a>
<a id="trace-22006"></a>
<a id="trace-22022"></a>
<a id="trace-22024"></a>
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22060"></a>
<a id="trace-22062"></a>
<a id="trace-22067"></a>
<a id="trace-22069"></a>
<a id="trace-22080"></a>
<a id="trace-22082"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
<a id="trace-22104"></a>
<a id="trace-22106"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22184"></a>
<a id="trace-22186"></a>
<a id="trace-22199"></a>
<a id="trace-22201"></a>
<a id="trace-22215"></a>
<a id="trace-22217"></a>
<a id="trace-22225"></a>
<a id="trace-22227"></a>
<a id="trace-22249"></a>
<a id="trace-22251"></a>
<a id="trace-22256"></a>
<a id="trace-22258"></a>
<a id="trace-22269"></a>
<a id="trace-22271"></a>
<a id="trace-22278"></a>
<a id="trace-22280"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22368"></a>
<a id="trace-22370"></a>
<a id="trace-22377"></a>
<a id="trace-22379"></a>
<a id="trace-22394"></a>
<a id="trace-22396"></a>
<a id="trace-22408"></a>
<a id="trace-22410"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22437"></a>
<a id="trace-22439"></a>
<a id="trace-22452"></a>
<a id="trace-22454"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22567"></a>
<a id="trace-22569"></a>
<a id="trace-22580"></a>
<a id="trace-22582"></a>
<a id="trace-22591"></a>
<a id="trace-22593"></a>
<a id="trace-22607"></a>
<a id="trace-22609"></a>
<a id="trace-22613"></a>
<a id="trace-22615"></a>
<a id="trace-22632"></a>
<a id="trace-22634"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22659"></a>
<a id="trace-22661"></a>
<a id="trace-22665"></a>
<a id="trace-22667"></a>
<a id="trace-22738"></a>
<a id="trace-22740"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22766"></a>
<a id="trace-22768"></a>
<a id="trace-22781"></a>
<a id="trace-22783"></a>
<a id="trace-22794"></a>
<a id="trace-22796"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22816"></a>
<a id="trace-22818"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22841"></a>
<a id="trace-22843"></a>
<a id="trace-22860"></a>
<a id="trace-22862"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-22964"></a>
<a id="trace-22966"></a>
<a id="trace-22977"></a>
<a id="trace-22979"></a>
<a id="trace-22997"></a>
<a id="trace-22999"></a>
<a id="trace-23005"></a>
<a id="trace-23007"></a>
<a id="trace-23021"></a>
<a id="trace-23023"></a>
<a id="trace-23029"></a>
<a id="trace-23031"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23051"></a>
<a id="trace-23053"></a>
<a id="trace-23124"></a>
<a id="trace-23126"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23152"></a>
<a id="trace-23154"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23187"></a>
<a id="trace-23189"></a>
<a id="trace-23200"></a>
<a id="trace-23202"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23310"></a>
<a id="trace-23312"></a>
<a id="trace-23317"></a>
<a id="trace-23319"></a>
<a id="trace-23333"></a>
<a id="trace-23335"></a>
<a id="trace-23342"></a>
<a id="trace-23344"></a>
<a id="trace-23360"></a>
<a id="trace-23362"></a>
<a id="trace-23366"></a>
<a id="trace-23368"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
<a id="trace-23403"></a>
<a id="trace-23405"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23428"></a>
<a id="trace-23430"></a>
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23510"></a>
<a id="trace-23512"></a>
<a id="trace-23525"></a>
<a id="trace-23527"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23553"></a>
<a id="trace-23555"></a>
<a id="trace-23559"></a>
<a id="trace-23561"></a>
<a id="trace-23573"></a>
<a id="trace-23575"></a>
<a id="trace-23584"></a>
<a id="trace-23586"></a>
<a id="trace-23597"></a>
<a id="trace-23599"></a>
<a id="trace-23613"></a>
<a id="trace-23615"></a>
<a id="trace-23691"></a>
<a id="trace-23693"></a>
<a id="trace-23700"></a>
<a id="trace-23702"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23724"></a>
<a id="trace-23726"></a>
<a id="trace-23744"></a>
<a id="trace-23746"></a>
<a id="trace-23756"></a>
<a id="trace-23758"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23774"></a>
<a id="trace-23776"></a>
<a id="trace-23791"></a>
<a id="trace-23793"></a>
<a id="trace-23799"></a>
<a id="trace-23801"></a>
<a id="trace-23926"></a>
<a id="trace-23928"></a>
<a id="trace-23990"></a>
<a id="trace-23992"></a>
<a id="trace-24017"></a>
<a id="trace-24019"></a>
<a id="trace-24034"></a>
<a id="trace-24036"></a>
<a id="trace-24055"></a>
<a id="trace-24057"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24087"></a>
<a id="trace-24089"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24121"></a>
<a id="trace-24123"></a>
<a id="trace-24128"></a>
<a id="trace-24130"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24208"></a>
<a id="trace-24210"></a>
<a id="trace-24232"></a>
<a id="trace-24234"></a>
<a id="trace-24245"></a>
<a id="trace-24247"></a>
<a id="trace-24319"></a>
<a id="trace-24321"></a>
<a id="trace-24334"></a>
<a id="trace-24336"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24369"></a>
<a id="trace-24371"></a>
<a id="trace-24386"></a>
<a id="trace-24388"></a>
<a id="trace-24398"></a>
<a id="trace-24400"></a>
<a id="trace-24475"></a>
<a id="trace-24477"></a>
<a id="trace-24482"></a>
<a id="trace-24484"></a>
<a id="trace-24499"></a>
<a id="trace-24501"></a>
<a id="trace-24509"></a>
<a id="trace-24511"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24619"></a>
<a id="trace-24621"></a>
<a id="trace-24630"></a>
<a id="trace-24632"></a>
<a id="trace-24650"></a>
<a id="trace-24652"></a>
<a id="trace-24659"></a>
<a id="trace-24661"></a>
<a id="trace-24735"></a>
<a id="trace-24737"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24779"></a>
<a id="trace-24781"></a>
<a id="trace-24792"></a>
<a id="trace-24794"></a>
<a id="trace-24799"></a>
<a id="trace-24801"></a>
<a id="trace-24815"></a>
<a id="trace-24817"></a>
<a id="trace-24824"></a>
<a id="trace-24826"></a>
<a id="trace-24896"></a>
<a id="trace-24898"></a>
<a id="trace-24906"></a>
<a id="trace-24908"></a>
<a id="trace-24977"></a>
<a id="trace-24979"></a>
<a id="trace-24985"></a>
<a id="trace-24987"></a>
<a id="trace-25005"></a>
<a id="trace-25007"></a>
<a id="trace-25023"></a>
<a id="trace-25025"></a>
<a id="trace-25038"></a>
<a id="trace-25040"></a>
<a id="trace-25048"></a>
<a id="trace-25050"></a>
<a id="trace-25071"></a>
<a id="trace-25073"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25104"></a>
<a id="trace-25106"></a>
<a id="trace-25173"></a>
<a id="trace-25175"></a>
<a id="trace-25181"></a>
<a id="trace-25183"></a>
<a id="trace-25195"></a>
<a id="trace-25197"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25224"></a>
<a id="trace-25226"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25258"></a>
<a id="trace-25260"></a>
<a id="trace-25265"></a>
<a id="trace-25267"></a>
<a id="trace-25283"></a>
<a id="trace-25285"></a>
<a id="trace-25291"></a>
<a id="trace-25293"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25387"></a>
<a id="trace-25389"></a>
<a id="trace-25397"></a>
<a id="trace-25399"></a>
<a id="trace-25410"></a>
<a id="trace-25412"></a>
<a id="trace-25416"></a>
<a id="trace-25418"></a>
<a id="trace-25434"></a>
<a id="trace-25436"></a>
<a id="trace-25444"></a>
<a id="trace-25446"></a>
<a id="trace-25464"></a>
<a id="trace-25466"></a>
<a id="trace-25477"></a>
<a id="trace-25479"></a>
<a id="trace-25546"></a>
<a id="trace-25548"></a>
<a id="trace-25551"></a>
<a id="trace-25553"></a>
<a id="trace-25567"></a>
<a id="trace-25569"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25597"></a>
<a id="trace-25599"></a>
<a id="trace-25605"></a>
<a id="trace-25607"></a>
<a id="trace-25620"></a>
<a id="trace-25622"></a>
<a id="trace-25627"></a>
<a id="trace-25629"></a>
<a id="trace-25643"></a>
<a id="trace-25645"></a>
<a id="trace-25654"></a>
<a id="trace-25656"></a>
<a id="trace-25725"></a>
<a id="trace-25727"></a>
<a id="trace-25736"></a>
<a id="trace-25738"></a>
<a id="trace-25756"></a>
<a id="trace-25758"></a>
<a id="trace-25767"></a>
<a id="trace-25769"></a>
<a id="trace-25779"></a>
<a id="trace-25781"></a>
<a id="trace-25788"></a>
<a id="trace-25790"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25818"></a>
<a id="trace-25820"></a>
<a id="trace-25831"></a>
<a id="trace-25833"></a>
<a id="trace-25839"></a>
<a id="trace-25841"></a>
<a id="trace-25910"></a>
<a id="trace-25912"></a>
<a id="trace-25920"></a>
<a id="trace-25922"></a>
<a id="trace-25939"></a>
<a id="trace-25941"></a>
<a id="trace-25949"></a>
<a id="trace-25951"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-25973"></a>
<a id="trace-25975"></a>
<a id="trace-25997"></a>
<a id="trace-25999"></a>
<a id="trace-26004"></a>
<a id="trace-26006"></a>
<a id="trace-26019"></a>
<a id="trace-26021"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26107"></a>
<a id="trace-26109"></a>
<a id="trace-26121"></a>
<a id="trace-26123"></a>
<a id="trace-26130"></a>
<a id="trace-26132"></a>
<a id="trace-26145"></a>
<a id="trace-26147"></a>
<a id="trace-26152"></a>
<a id="trace-26154"></a>
<a id="trace-26172"></a>
<a id="trace-26174"></a>
<a id="trace-26177"></a>
<a id="trace-26179"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26216"></a>
<a id="trace-26218"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4658356075456507, 'next_transition': 731}.
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1066"></a>
<a id="trace-1068"></a>
<a id="trace-1088"></a>
<a id="trace-1090"></a>
<a id="trace-1125"></a>
<a id="trace-1127"></a>
<a id="trace-1158"></a>
<a id="trace-1160"></a>
<a id="trace-1198"></a>
<a id="trace-1200"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1370"></a>
<a id="trace-1372"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600121024610118, 'next_transition': 991}.
<a id="trace-142"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.591700385499969, 'next_transition': 1406}.
<a id="trace-143"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 143): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.015636081792257, 'next_transition': 1807}.
<a id="trace-1378"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1378): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1378. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.591700385499969, 'next_transition': 1406}.
<a id="trace-1379"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1379): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1379. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.591700385499969, 'next_transition': 1406}.
<a id="trace-1380"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1380): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1380. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.015636081792257, 'next_transition': 1807}.
<a id="trace-1381"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1381): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.015636081792257, 'next_transition': 1807}.
<a id="trace-1406"></a>
<a id="trace-1408"></a>
<a id="trace-1438"></a>
<a id="trace-1440"></a>
<a id="trace-1466"></a>
<a id="trace-1468"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3014116925584817, 'next_transition': 1438}.
<a id="trace-1475"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1475): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725094271653183, 'next_transition': 1773}.
<a id="trace-1773"></a>
<a id="trace-1775"></a>
<a id="trace-1963"></a>
<a id="trace-1965"></a>
<a id="trace-2084"></a>
<a id="trace-2086"></a>
<a id="trace-2127"></a>
<a id="trace-2129"></a>
<a id="trace-2163"></a>
<a id="trace-2165"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6340450851985573, 'next_transition': 1963}.
<a id="trace-1807"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1807): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1257. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.849142302377012, 'next_transition': 2839}.
<a id="trace-1808"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1808): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1257. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.849142302377012, 'next_transition': 2839}.
<a id="trace-2204"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2204): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2007. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.890022873761918, 'next_transition': 2415}.
<a id="trace-2205"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2205): received platoon directive. Knowledge: actor memory at 15.00s, trace 2007. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.890022873761918, 'next_transition': 2415}.
<a id="trace-2415"></a>
<a id="trace-2417"></a>
<a id="trace-2510"></a>
<a id="trace-2512"></a>
<a id="trace-2541"></a>
<a id="trace-2543"></a>
<a id="trace-2673"></a>
<a id="trace-2675"></a>
<a id="trace-2707"></a>
<a id="trace-2709"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
<a id="trace-2779"></a>
<a id="trace-2781"></a>
<a id="trace-2809"></a>
<a id="trace-2811"></a>
- 17.25s–22.25s (×16), actor 5, squad 0 (trace 2415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2012. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.04748699172673, 'next_transition': 2510}.
<a id="trace-2839"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 2839): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2600. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3019}.
<a id="trace-2840"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 2840): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2600. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3019}.
<a id="trace-2841"></a>
<a id="trace-3019"></a>
<a id="trace-3341"></a>
- 22.50s–23.15s (×3), actor 8, squad 1 (trace 2841): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2600. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3019}.
<a id="trace-3191"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 3191): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 2592. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015191986425826596, 'next_transition': 3550}.
<a id="trace-3550"></a>
<a id="trace-3552"></a>
<a id="trace-3610"></a>
<a id="trace-3612"></a>
<a id="trace-3649"></a>
<a id="trace-3651"></a>
<a id="trace-3807"></a>
<a id="trace-3809"></a>
<a id="trace-3844"></a>
<a id="trace-3846"></a>
- 23.75s–26.25s (×10), actor 5, squad 0 (trace 3550): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2597. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17676310505432857, 'next_transition': 3610}.
<a id="trace-3852"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 3852): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3668. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8063021894381202, 'next_transition': 4085}.
<a id="trace-3853"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 3853): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3668. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8063021894381202, 'next_transition': 4085}.
<a id="trace-3854"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 3854): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3668. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8063021894381202, 'next_transition': 4085}.
<a id="trace-4085"></a>
<a id="trace-4087"></a>
<a id="trace-4332"></a>
<a id="trace-4334"></a>
<a id="trace-4361"></a>
<a id="trace-4363"></a>
<a id="trace-4395"></a>
<a id="trace-4397"></a>
<a id="trace-4417"></a>
<a id="trace-4419"></a>
<a id="trace-4444"></a>
<a id="trace-4446"></a>
- 27.25s–29.75s (×12), actor 5, squad 0 (trace 4085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3673. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599963647724436, 'next_transition': 4332}.
<a id="trace-4093"></a>
- 27.35s–27.35s (×1), actor 8, squad 1 (trace 4093): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3676. Next observer evidence: {'until': 41, 'shots': 2, 'casualties': 1, 'mean_displacement': 11.441433828031448, 'next_transition': 5624}.
<a id="trace-4094"></a>
- 27.35s–27.35s (×1), actor 8, squad 1 (trace 4094): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3676. Next observer evidence: {'until': 41, 'shots': 2, 'casualties': 1, 'mean_displacement': 11.441433828031448, 'next_transition': 5624}.
<a id="trace-4530"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 4530): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4460. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000212737793878, 'next_transition': 4545}.
<a id="trace-4545"></a>
<a id="trace-4547"></a>
<a id="trace-4568"></a>
<a id="trace-4570"></a>
<a id="trace-4594"></a>
<a id="trace-4596"></a>
<a id="trace-4611"></a>
<a id="trace-4613"></a>
<a id="trace-4662"></a>
<a id="trace-4664"></a>
<a id="trace-4698"></a>
<a id="trace-4726"></a>
<a id="trace-4835"></a>
<a id="trace-4868"></a>
<a id="trace-4917"></a>
<a id="trace-4919"></a>
- 30.25s–37.25s (×16), actor 5, squad 0 (trace 4545): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4464. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359996608460893, 'next_transition': 4568}.
<a id="trace-4936"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 4936): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008650787712, 'next_transition': 4971}.
<a id="trace-4938"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 4938): NeedSupport. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008650787712, 'next_transition': 4971}.
<a id="trace-4971"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4971): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000028835958962, 'next_transition': 5094}.
<a id="trace-4976"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4976): MoveTactically. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000028835958962, 'next_transition': 5094}.
<a id="trace-4977"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4977): traveling overwatch. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000028835958962, 'next_transition': 5094}.
<a id="trace-4978"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4978): Reorganise complete. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000028835958962, 'next_transition': 5094}.
<a id="trace-5094"></a>
<a id="trace-5096"></a>
<a id="trace-5117"></a>
<a id="trace-5119"></a>
- 38.25s–38.75s (×4), actor 5, squad 0 (trace 5094): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4752. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200067323730834, 'next_transition': 5117}.
<a id="trace-5153"></a>
- 39.15s–39.15s (×1), actor 1, squad 0 (trace 5153): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5303}.
<a id="trace-5303"></a>
<a id="trace-5305"></a>
<a id="trace-5329"></a>
<a id="trace-5331"></a>
- 39.25s–39.75s (×4), actor 5, squad 0 (trace 5303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4752. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5329}.
<a id="trace-5340"></a>
- 39.85s–39.85s (×1), actor 1, squad 0 (trace 5340): current contact unknown for 10 s. Knowledge: actor memory at 35.00s, trace 4748. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512580677621449, 'next_transition': 5606}.
<a id="trace-5606"></a>
<a id="trace-5608"></a>
<a id="trace-5772"></a>
<a id="trace-5774"></a>
<a id="trace-5797"></a>
<a id="trace-5799"></a>
<a id="trace-5825"></a>
<a id="trace-5827"></a>
<a id="trace-5846"></a>
<a id="trace-5848"></a>
<a id="trace-5867"></a>
<a id="trace-5869"></a>
<a id="trace-5891"></a>
<a id="trace-5918"></a>
- 40.75s–44.75s (×14), actor 5, squad 0 (trace 5606): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5490. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749958274379863, 'next_transition': 5772}.
<a id="trace-5624"></a>
- 41.00s–41.00s (×1), actor 9, squad 1 (trace 5624): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 5493. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.196249908637875, 'next_transition': 6173}.
<a id="trace-5625"></a>
- 41.00s–41.00s (×1), actor 9, squad 1 (trace 5625): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 5493. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.196249908637875, 'next_transition': 6173}.
<a id="trace-6021"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 6021): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 5925. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9394834973829247, 'next_transition': 6157}.
<a id="trace-6022"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 6022): bounding overwatch. Knowledge: actor memory at 45.00s, trace 5925. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9394834973829247, 'next_transition': 6157}.
<a id="trace-6023"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 6023): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5925. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9394834973829247, 'next_transition': 6157}.
<a id="trace-6157"></a>
<a id="trace-6191"></a>
<a id="trace-6193"></a>
<a id="trace-6235"></a>
<a id="trace-6237"></a>
- 46.25s–47.75s (×5), actor 5, squad 0 (trace 6157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5928. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.925327687936888, 'next_transition': 6191}.
<a id="trace-6173"></a>
- 46.50s–46.50s (×1), actor 9, squad 1 (trace 6173): NeedSupport. Knowledge: actor memory at 45.00s, trace 5931. Next observer evidence: {'until': 54.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.839486517953615, 'next_transition': 7000}.
<a id="trace-6256"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6256): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5925. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000254026465226, 'next_transition': 6440}.
<a id="trace-6440"></a>
<a id="trace-6442"></a>
<a id="trace-6465"></a>
<a id="trace-6467"></a>
<a id="trace-6608"></a>
<a id="trace-6610"></a>
<a id="trace-6674"></a>
<a id="trace-6676"></a>
- 48.25s–51.75s (×8), actor 5, squad 0 (trace 6440): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5928. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999940753055615, 'next_transition': 6465}.
<a id="trace-6688"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 6688): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 6532. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2621301608192218, 'next_transition': 742}.
<a id="trace-742"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 742): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6882"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.277538 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6882. Next observer evidence: None.
<a id="trace-6883"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.277538 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6883. Next observer evidence: None.
<a id="trace-6886"></a>
<a id="trace-6888"></a>
<a id="trace-6918"></a>
<a id="trace-6920"></a>
<a id="trace-7159"></a>
<a id="trace-7161"></a>
- 52.75s–55.25s (×6), actor 5, squad 0 (trace 6886): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 6883. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2766806564402602, 'next_transition': 6918}.
<a id="trace-7000"></a>
- 54.85s–54.85s (×1), actor 9, squad 1 (trace 7000): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 6538. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.797422807745294, 'next_transition': 8159}.
<a id="trace-7032"></a>
- 54.85s–54.85s (×1), actor 9, squad 1 (trace 7032): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 6538. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.797422807745294, 'next_transition': 8159}.
<a id="trace-7171"></a>
- 55.55s–55.55s (×1), actor 1, squad 0 (trace 7171): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 7087. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500045767096045, 'next_transition': 7181}.
<a id="trace-7181"></a>
<a id="trace-7183"></a>
<a id="trace-7213"></a>
<a id="trace-7215"></a>
<a id="trace-7256"></a>
<a id="trace-7258"></a>
<a id="trace-7300"></a>
<a id="trace-7302"></a>
<a id="trace-7312"></a>
<a id="trace-7314"></a>
<a id="trace-7330"></a>
<a id="trace-7332"></a>
<a id="trace-7347"></a>
<a id="trace-7349"></a>
<a id="trace-7448"></a>
<a id="trace-7450"></a>
<a id="trace-7471"></a>
<a id="trace-7473"></a>
<a id="trace-7508"></a>
<a id="trace-7510"></a>
<a id="trace-7549"></a>
<a id="trace-7551"></a>
<a id="trace-7566"></a>
<a id="trace-7568"></a>
<a id="trace-7582"></a>
<a id="trace-7584"></a>
- 55.75s–64.75s (×26), actor 5, squad 0 (trace 7181): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7090. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31499769884521, 'next_transition': 7213}.
<a id="trace-7596"></a>
- 64.90s–64.90s (×1), actor 1, squad 0 (trace 7596): received platoon directive; retain contact cover stage. Knowledge: actor memory at 60.00s, trace 7356. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15106066537064589, 'next_transition': 7678}.
<a id="trace-7678"></a>
<a id="trace-7680"></a>
- 65.75s–65.75s (×2), actor 5, squad 0 (trace 7678): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7601. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7688}.
<a id="trace-7688"></a>
- 65.90s–65.90s (×1), actor 1, squad 0 (trace 7688): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 7598. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8285}.
<a id="trace-7950"></a>
- 65.90s–65.90s (×1), actor 1, squad 0 (trace 7950): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 65.00s, trace 7598. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8285}.
<a id="trace-7951"></a>
- 65.90s–65.90s (×1), actor 1, squad 0 (trace 7951): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 65.00s, trace 7598. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8285}.
<a id="trace-8155"></a>
- 65.90s–65.90s (×1), actor 1, squad 0 (trace 8155): Assaulting. Knowledge: actor memory at 65.00s, trace 7598. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8285}.
<a id="trace-8159"></a>
- 65.90s–65.90s (×1), actor 9, squad 1 (trace 8159): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 7604. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7949604083079447, 'next_transition': 8448}.
<a id="trace-8160"></a>
- 65.90s–65.90s (×1), actor 9, squad 1 (trace 8160): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 7604. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7949604083079447, 'next_transition': 8448}.
<a id="trace-8285"></a>
<a id="trace-8287"></a>
- 66.25s–66.25s (×2), actor 5, squad 0 (trace 8285): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7601. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021236114417556642, 'next_transition': 869}.
<a id="trace-869"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 869): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8297"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 8297): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.216331 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 8297. Next observer evidence: {'until': 67, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12869558036527728, 'next_transition': 8324}.
<a id="trace-8298"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 8298): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.216331 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 8298. Next observer evidence: {'until': 67, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12869558036527728, 'next_transition': 8324}.
<a id="trace-8324"></a>
- 67.05s–67.05s (×1), actor 1, squad 0 (trace 8324): NeedSupport. Knowledge: actor memory at 65.00s, trace 7598. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03195158461196046, 'next_transition': 8348}.
<a id="trace-8348"></a>
<a id="trace-8350"></a>
<a id="trace-8388"></a>
<a id="trace-8390"></a>
<a id="trace-8431"></a>
<a id="trace-8433"></a>
<a id="trace-8511"></a>
<a id="trace-8513"></a>
<a id="trace-8545"></a>
<a id="trace-8547"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
<a id="trace-8655"></a>
<a id="trace-8657"></a>
<a id="trace-8681"></a>
<a id="trace-8683"></a>
<a id="trace-8706"></a>
<a id="trace-8708"></a>
<a id="trace-8762"></a>
<a id="trace-8764"></a>
<a id="trace-8912"></a>
<a id="trace-8914"></a>
- 67.25s–73.75s (×22), actor 5, squad 0 (trace 8348): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 8298. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003666666666669964, 'next_transition': 8388}.
<a id="trace-8448"></a>
- 68.35s–68.35s (×1), actor 9, squad 1 (trace 8448): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 7604. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.243476851658961, 'next_transition': 1118}.
<a id="trace-8921"></a>
- 73.75s–73.75s (×1), actor 1, squad 0 (trace 8921): new loss of own base of fire. Knowledge: actor memory at 70.00s, trace 8562. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21070348703071753, 'next_transition': 9232}.
<a id="trace-8922"></a>
- 73.75s–73.75s (×1), actor 1, squad 0 (trace 8922): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 8562. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21070348703071753, 'next_transition': 9232}.
<a id="trace-9232"></a>
<a id="trace-9234"></a>
<a id="trace-9288"></a>
<a id="trace-9290"></a>
<a id="trace-9397"></a>
<a id="trace-9399"></a>
<a id="trace-9436"></a>
<a id="trace-9438"></a>
<a id="trace-9490"></a>
<a id="trace-9492"></a>
<a id="trace-9533"></a>
<a id="trace-9535"></a>
<a id="trace-9562"></a>
<a id="trace-9564"></a>
<a id="trace-9589"></a>
<a id="trace-9591"></a>
<a id="trace-9625"></a>
<a id="trace-9627"></a>
- 74.25s–78.75s (×18), actor 5, squad 0 (trace 9232): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8565. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07901937951235567, 'next_transition': 9288}.
<a id="trace-9639"></a>
- 79.05s–79.05s (×1), actor 1, squad 0 (trace 9639): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 9315. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751224158775706, 'next_transition': 9648}.
<a id="trace-9648"></a>
<a id="trace-9650"></a>
<a id="trace-9661"></a>
<a id="trace-9663"></a>
- 79.25s–79.75s (×4), actor 5, squad 0 (trace 9648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9318. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150132943623177, 'next_transition': 9661}.
<a id="trace-9692"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 9692): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566172, 'next_transition': 10500}.
<a id="trace-9693"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 9693): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566172, 'next_transition': 10500}.
<a id="trace-10447"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 10447): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566172, 'next_transition': 10500}.
<a id="trace-10500"></a>
<a id="trace-10502"></a>
- 80.25s–80.25s (×2), actor 5, squad 0 (trace 10500): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 9674. Next observer evidence: None.
<a id="trace-1117"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (events line 1117): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1118"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1118): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10509"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 10509): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.210249 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 10509. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566116, 'next_transition': 11278}.
<a id="trace-10510"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 10510): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.210249 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 10510. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566116, 'next_transition': 11278}.
<a id="trace-10511"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 10511): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.210249 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 10511. Next observer evidence: {'until': 86, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11549}.
<a id="trace-10512"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 10512): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.210249 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 10512. Next observer evidence: {'until': 86, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11549}.
<a id="trace-10514"></a>
- 80.30s–80.30s (×1), actor 1, squad 0 (trace 10514): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566116, 'next_transition': 11278}.
<a id="trace-10515"></a>
- 80.30s–80.30s (×1), actor 1, squad 0 (trace 10515): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566116, 'next_transition': 11278}.
<a id="trace-11278"></a>
- 80.55s–80.55s (×1), actor 1, squad 0 (trace 11278): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 80.00s, trace 9672. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749681147566116, 'next_transition': 11284}.
<a id="trace-11284"></a>
<a id="trace-11286"></a>
<a id="trace-11312"></a>
<a id="trace-11314"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11357"></a>
<a id="trace-11359"></a>
<a id="trace-11372"></a>
<a id="trace-11374"></a>
<a id="trace-11396"></a>
<a id="trace-11398"></a>
<a id="trace-11409"></a>
<a id="trace-11411"></a>
<a id="trace-11434"></a>
<a id="trace-11436"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11613"></a>
<a id="trace-11615"></a>
<a id="trace-11633"></a>
<a id="trace-11635"></a>
<a id="trace-11650"></a>
<a id="trace-11652"></a>
<a id="trace-11674"></a>
<a id="trace-11676"></a>
<a id="trace-11697"></a>
<a id="trace-11699"></a>
<a id="trace-11742"></a>
<a id="trace-11744"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11846"></a>
<a id="trace-11848"></a>
<a id="trace-11875"></a>
<a id="trace-11877"></a>
<a id="trace-11898"></a>
<a id="trace-11900"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-11981"></a>
<a id="trace-11983"></a>
<a id="trace-12057"></a>
<a id="trace-12059"></a>
<a id="trace-12095"></a>
<a id="trace-12097"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12130"></a>
<a id="trace-12132"></a>
<a id="trace-12145"></a>
<a id="trace-12147"></a>
<a id="trace-12169"></a>
<a id="trace-12171"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
<a id="trace-12202"></a>
<a id="trace-12204"></a>
<a id="trace-12215"></a>
<a id="trace-12217"></a>
<a id="trace-12291"></a>
<a id="trace-12293"></a>
<a id="trace-12408"></a>
<a id="trace-12410"></a>
<a id="trace-12461"></a>
<a id="trace-12463"></a>
<a id="trace-12476"></a>
<a id="trace-12478"></a>
<a id="trace-12498"></a>
<a id="trace-12500"></a>
<a id="trace-12512"></a>
<a id="trace-12514"></a>
<a id="trace-12534"></a>
<a id="trace-12536"></a>
<a id="trace-12547"></a>
<a id="trace-12549"></a>
<a id="trace-12622"></a>
<a id="trace-12624"></a>
<a id="trace-12637"></a>
<a id="trace-12639"></a>
<a id="trace-12672"></a>
<a id="trace-12674"></a>
<a id="trace-12706"></a>
<a id="trace-12708"></a>
<a id="trace-12726"></a>
<a id="trace-12728"></a>
<a id="trace-12739"></a>
<a id="trace-12741"></a>
<a id="trace-12761"></a>
<a id="trace-12763"></a>
<a id="trace-12773"></a>
<a id="trace-12775"></a>
<a id="trace-12848"></a>
<a id="trace-12850"></a>
<a id="trace-12861"></a>
<a id="trace-12863"></a>
<a id="trace-12927"></a>
<a id="trace-12929"></a>
<a id="trace-12945"></a>
<a id="trace-12947"></a>
<a id="trace-12959"></a>
<a id="trace-12961"></a>
<a id="trace-12978"></a>
<a id="trace-12980"></a>
<a id="trace-13062"></a>
<a id="trace-13064"></a>
<a id="trace-13091"></a>
<a id="trace-13093"></a>
<a id="trace-13112"></a>
<a id="trace-13114"></a>
<a id="trace-13133"></a>
<a id="trace-13135"></a>
<a id="trace-13222"></a>
<a id="trace-13224"></a>
<a id="trace-13251"></a>
<a id="trace-13253"></a>
<a id="trace-13266"></a>
<a id="trace-13268"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13388"></a>
<a id="trace-13390"></a>
<a id="trace-13409"></a>
<a id="trace-13411"></a>
<a id="trace-13418"></a>
<a id="trace-13420"></a>
<a id="trace-13448"></a>
<a id="trace-13450"></a>
<a id="trace-13470"></a>
<a id="trace-13472"></a>
<a id="trace-13486"></a>
<a id="trace-13488"></a>
<a id="trace-13528"></a>
<a id="trace-13530"></a>
<a id="trace-13613"></a>
<a id="trace-13615"></a>
<a id="trace-13628"></a>
<a id="trace-13630"></a>
<a id="trace-13646"></a>
<a id="trace-13648"></a>
<a id="trace-13663"></a>
<a id="trace-13665"></a>
<a id="trace-13684"></a>
<a id="trace-13686"></a>
<a id="trace-13799"></a>
<a id="trace-13801"></a>
<a id="trace-13821"></a>
<a id="trace-13823"></a>
<a id="trace-13830"></a>
<a id="trace-13832"></a>
<a id="trace-13859"></a>
<a id="trace-13861"></a>
<a id="trace-13869"></a>
<a id="trace-13871"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13968"></a>
<a id="trace-13970"></a>
<a id="trace-14002"></a>
<a id="trace-14004"></a>
<a id="trace-14022"></a>
<a id="trace-14024"></a>
<a id="trace-14046"></a>
<a id="trace-14048"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14087"></a>
<a id="trace-14089"></a>
<a id="trace-14117"></a>
<a id="trace-14119"></a>
<a id="trace-14231"></a>
<a id="trace-14233"></a>
<a id="trace-14269"></a>
<a id="trace-14271"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14318"></a>
<a id="trace-14320"></a>
<a id="trace-14363"></a>
<a id="trace-14365"></a>
<a id="trace-14493"></a>
<a id="trace-14495"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
- 80.75s–141.30s (×186), actor 5, squad 0 (trace 11284): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 10512. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2993400361702536, 'next_transition': 11312}.
<a id="trace-11549"></a>
- 86.10s–86.10s (×1), actor 9, squad 1 (trace 11549): HelpSquad outside weapon range: approach neighbour before allocating firing slots. Knowledge: actor memory at 85.00s, trace 11465. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.456772113330898, 'next_transition': 12302}.
<a id="trace-11550"></a>
- 86.10s–86.10s (×1), actor 9, squad 1 (trace 11550): MoveTactically. Knowledge: actor memory at 85.00s, trace 11465. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.456772113330898, 'next_transition': 12302}.
<a id="trace-11551"></a>
- 86.10s–86.10s (×1), actor 9, squad 1 (trace 11551): received platoon directive. Knowledge: actor memory at 85.00s, trace 11465. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.456772113330898, 'next_transition': 12302}.
<a id="trace-12302"></a>
- 100.65s–100.65s (×1), actor 9, squad 1 (trace 12302): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 12229. Next observer evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 21.556872666324182, 'next_transition': 13101}.
<a id="trace-13101"></a>
- 116.40s–116.40s (×1), actor 9, squad 1 (trace 13101): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 13000. Next observer evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560043709478473, 'next_transition': 13143}.
<a id="trace-13143"></a>
- 117.40s–117.40s (×1), actor 9, squad 1 (trace 13143): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 13000. Next observer evidence: {'until': 126.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.096194768168289, 'next_transition': 13657}.
<a id="trace-13657"></a>
- 126.50s–126.50s (×1), actor 9, squad 1 (trace 13657): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 13550. Next observer evidence: {'until': 127.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13691}.
<a id="trace-13691"></a>
- 127.50s–127.50s (×1), actor 9, squad 1 (trace 13691): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 13550. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.054053563817966, 'next_transition': 1458}.
<a id="trace-1458"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (events line 1458): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14200"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 14200): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.890414 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 14200. Next observer evidence: {'until': 139, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.157849220187071, 'next_transition': 14339}.
<a id="trace-14201"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 14201): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.890414 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 14201. Next observer evidence: {'until': 139, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.157849220187071, 'next_transition': 14339}.
<a id="trace-14339"></a>
- 139.10s–139.10s (×1), actor 9, squad 1 (trace 14339): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 14130. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14393}.
<a id="trace-14393"></a>
- 140.10s–140.10s (×1), actor 9, squad 1 (trace 14393): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 14378. Next observer evidence: {'until': 141, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300253037599184, 'next_transition': 14526}.
<a id="trace-14526"></a>
- 141.10s–141.10s (×1), actor 9, squad 1 (trace 14526): received platoon directive. Knowledge: actor memory at 140.00s, trace 14378. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.052023265338029, 'next_transition': 15045}.
<a id="trace-14599"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14599): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 140.00s, trace 14375. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14665}.
<a id="trace-14600"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14600): MoveTactically. Knowledge: actor memory at 140.00s, trace 14375. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14665}.
<a id="trace-14601"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14601): traveling overwatch. Knowledge: actor memory at 140.00s, trace 14375. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14665}.
<a id="trace-14602"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14602): . Knowledge: actor memory at 140.00s, trace 14375. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14665}.
<a id="trace-14665"></a>
<a id="trace-14667"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14741"></a>
<a id="trace-14743"></a>
<a id="trace-14773"></a>
<a id="trace-14775"></a>
<a id="trace-14871"></a>
<a id="trace-14873"></a>
<a id="trace-14886"></a>
<a id="trace-14888"></a>
<a id="trace-14912"></a>
<a id="trace-14914"></a>
<a id="trace-14949"></a>
<a id="trace-14951"></a>
<a id="trace-14962"></a>
<a id="trace-14964"></a>
<a id="trace-15020"></a>
<a id="trace-15022"></a>
- 141.80s–149.30s (×22), actor 5, squad 0 (trace 14665): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14376. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14688}.
<a id="trace-1596"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (events line 1596): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15027"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 15027): renew committed intent (75 s lifetime). Knowledge: actor memory at 149.40s, trace 15027. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000000000027, 'next_transition': 15037}.
<a id="trace-15037"></a>
<a id="trace-15039"></a>
<a id="trace-15125"></a>
<a id="trace-15127"></a>
<a id="trace-15151"></a>
<a id="trace-15153"></a>
<a id="trace-15281"></a>
<a id="trace-15283"></a>
<a id="trace-15298"></a>
<a id="trace-15300"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15349"></a>
<a id="trace-15351"></a>
<a id="trace-15369"></a>
<a id="trace-15371"></a>
<a id="trace-15389"></a>
<a id="trace-15391"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
- 149.80s–154.80s (×20), actor 5, squad 0 (trace 15037): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 149.40s, trace 15027. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259999999999998, 'next_transition': 15125}.
<a id="trace-15045"></a>
- 149.90s–149.90s (×1), actor 9, squad 1 (trace 15045): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 14809. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15159}.
<a id="trace-15159"></a>
- 150.90s–150.90s (×1), actor 9, squad 1 (trace 15159): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 15052. Next observer evidence: {'until': 157.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.525619589185519, 'next_transition': 15642}.
<a id="trace-15451"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 15451): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 15432. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.419999999999997, 'next_transition': 15524}.
<a id="trace-15524"></a>
<a id="trace-15526"></a>
<a id="trace-15542"></a>
<a id="trace-15544"></a>
<a id="trace-15569"></a>
<a id="trace-15571"></a>
<a id="trace-15598"></a>
<a id="trace-15600"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17340"></a>
<a id="trace-17342"></a>
<a id="trace-17362"></a>
<a id="trace-17364"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17403"></a>
<a id="trace-17405"></a>
<a id="trace-17440"></a>
<a id="trace-17442"></a>
<a id="trace-17462"></a>
<a id="trace-17464"></a>
- 155.30s–163.30s (×26), actor 5, squad 0 (trace 15524): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15433. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.312488231485205, 'next_transition': 15542}.
<a id="trace-15642"></a>
- 157.65s–157.65s (×1), actor 9, squad 1 (trace 15642): HelpSquad arrived within support range; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 155.00s, trace 15435. Next observer evidence: {'until': 180.2, 'shots': 5, 'casualties': 1, 'mean_displacement': 28.895812953947807, 'next_transition': 18516}.
<a id="trace-15643"></a>
- 157.65s–157.65s (×1), actor 9, squad 1 (trace 15643): help approach complete: allocate protected slots with a line. Knowledge: actor memory at 155.00s, trace 15435. Next observer evidence: {'until': 180.2, 'shots': 5, 'casualties': 1, 'mean_displacement': 28.895812953947807, 'next_transition': 18516}.
<a id="trace-17470"></a>
- 163.45s–163.45s (×1), actor 1, squad 0 (trace 17470): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 17260. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399872829725202, 'next_transition': 17475}.
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17529"></a>
<a id="trace-17531"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17655"></a>
<a id="trace-17657"></a>
<a id="trace-17676"></a>
<a id="trace-17678"></a>
<a id="trace-17687"></a>
<a id="trace-17689"></a>
<a id="trace-17709"></a>
<a id="trace-17711"></a>
<a id="trace-17725"></a>
<a id="trace-17727"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
- 163.80s–169.80s (×22), actor 5, squad 0 (trace 17475): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 17261. Next observer evidence: {'until': 164.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8400538818697556, 'next_transition': 17507}.
<a id="trace-17768"></a>
- 169.85s–169.85s (×1), actor 1, squad 0 (trace 17768): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 17537. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17911}.
<a id="trace-17769"></a>
- 169.85s–169.85s (×1), actor 1, squad 0 (trace 17769): bounding overwatch. Knowledge: actor memory at 165.00s, trace 17537. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17911}.
<a id="trace-17770"></a>
- 169.85s–169.85s (×1), actor 1, squad 0 (trace 17770): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 17537. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17911}.
<a id="trace-17911"></a>
<a id="trace-17913"></a>
- 170.80s–170.80s (×2), actor 5, squad 0 (trace 17911): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 17836. Next observer evidence: {'until': 171.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29888599751596123, 'next_transition': 17947}.
<a id="trace-17947"></a>
- 171.55s–171.55s (×1), actor 1, squad 0 (trace 17947): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 170.00s, trace 17835. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2569943519699306, 'next_transition': 18019}.
<a id="trace-18019"></a>
<a id="trace-18021"></a>
<a id="trace-18041"></a>
<a id="trace-18043"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18091"></a>
<a id="trace-18093"></a>
<a id="trace-18125"></a>
<a id="trace-18127"></a>
- 171.80s–174.80s (×10), actor 5, squad 0 (trace 18019): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 17836. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23776739289108162, 'next_transition': 18041}.
<a id="trace-18169"></a>
- 175.15s–175.15s (×1), actor 1, squad 0 (trace 18169): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 175.00s, trace 18142. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13292204917001346, 'next_transition': 18269}.
<a id="trace-18170"></a>
- 175.15s–175.15s (×1), actor 1, squad 0 (trace 18170): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 18142. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13292204917001346, 'next_transition': 18269}.
<a id="trace-18269"></a>
<a id="trace-18271"></a>
<a id="trace-18315"></a>
<a id="trace-18317"></a>
<a id="trace-18356"></a>
<a id="trace-18358"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18389"></a>
<a id="trace-18391"></a>
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18432"></a>
<a id="trace-18434"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18531"></a>
<a id="trace-18533"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18645"></a>
<a id="trace-18647"></a>
<a id="trace-18663"></a>
<a id="trace-18665"></a>
<a id="trace-18691"></a>
<a id="trace-18693"></a>
<a id="trace-18709"></a>
<a id="trace-18711"></a>
<a id="trace-18730"></a>
<a id="trace-18732"></a>
<a id="trace-18884"></a>
<a id="trace-18886"></a>
<a id="trace-18967"></a>
<a id="trace-18969"></a>
<a id="trace-18978"></a>
<a id="trace-18980"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
- 175.30s–186.30s (×38), actor 5, squad 0 (trace 18269): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 18143. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6951878759331498, 'next_transition': 18315}.
<a id="trace-18516"></a>
- 180.20s–180.20s (×1), actor 9, squad 1 (trace 18516): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18569}.
<a id="trace-18517"></a>
- 180.20s–180.20s (×1), actor 9, squad 1 (trace 18517): NeedSupport. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18569}.
<a id="trace-18569"></a>
- 181.20s–181.20s (×1), actor 9, squad 1 (trace 18569): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 184.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18762}.
<a id="trace-18572"></a>
- 181.20s–181.20s (×1), actor 9, squad 1 (trace 18572): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 184.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18762}.
<a id="trace-18573"></a>
- 181.20s–181.20s (×1), actor 9, squad 1 (trace 18573): Reorganise complete: known contact. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 184.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18762}.
<a id="trace-18762"></a>
- 184.50s–184.50s (×1), actor 9, squad 1 (trace 18762): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.028661578816061, 'next_transition': 19470}.
<a id="trace-18763"></a>
- 184.50s–184.50s (×1), actor 9, squad 1 (trace 18763): rearward bound: one stationary suppressing element. Knowledge: actor memory at 180.00s, trace 18455. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.028661578816061, 'next_transition': 19470}.
<a id="trace-19021"></a>
- 186.55s–186.55s (×1), actor 1, squad 0 (trace 19021): NeedSupport. Knowledge: actor memory at 185.00s, trace 18901. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5886476647355461, 'next_transition': 19033}.
<a id="trace-19033"></a>
<a id="trace-19035"></a>
<a id="trace-19057"></a>
<a id="trace-19059"></a>
<a id="trace-19097"></a>
<a id="trace-19099"></a>
<a id="trace-19139"></a>
<a id="trace-19141"></a>
<a id="trace-19231"></a>
<a id="trace-19233"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19273"></a>
<a id="trace-19275"></a>
<a id="trace-19288"></a>
<a id="trace-19290"></a>
<a id="trace-19313"></a>
<a id="trace-19315"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19351"></a>
<a id="trace-19353"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19551"></a>
<a id="trace-19553"></a>
<a id="trace-19622"></a>
<a id="trace-19624"></a>
<a id="trace-19654"></a>
<a id="trace-19656"></a>
<a id="trace-19678"></a>
<a id="trace-19680"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19729"></a>
<a id="trace-19731"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19845"></a>
<a id="trace-19847"></a>
<a id="trace-19888"></a>
<a id="trace-19890"></a>
<a id="trace-19904"></a>
<a id="trace-19906"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-19941"></a>
<a id="trace-19943"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
- 186.80s–204.80s (×56), actor 5, squad 0 (trace 19033): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18902. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5967730728555659, 'next_transition': 19057}.
<a id="trace-19470"></a>
- 195.20s–195.20s (×1), actor 9, squad 1 (trace 19470): NeedSupport. Knowledge: actor memory at 195.00s, trace 19413. Next observer evidence: {'until': 195.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19492}.
<a id="trace-19492"></a>
- 195.50s–195.50s (×1), actor 9, squad 1 (trace 19492): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 19413. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3845411485133934, 'next_transition': 2107}.
<a id="trace-19493"></a>
- 195.50s–195.50s (×1), actor 9, squad 1 (trace 19493): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 19413. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3845411485133934, 'next_transition': 2107}.
<a id="trace-2107"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 2107): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19987"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 19987): renew committed intent (75 s lifetime). Knowledge: actor memory at 204.65s, trace 19987. Next observer evidence: {'until': 219.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20631}.
<a id="trace-20024"></a>
- 205.05s–205.05s (×1), actor 1, squad 0 (trace 20024): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 20005. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08669139390837978, 'next_transition': 20077}.
<a id="trace-20025"></a>
- 205.05s–205.05s (×1), actor 1, squad 0 (trace 20025): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 20005. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08669139390837978, 'next_transition': 20077}.
<a id="trace-20077"></a>
<a id="trace-20079"></a>
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20186"></a>
<a id="trace-20188"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20219"></a>
<a id="trace-20221"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20352"></a>
<a id="trace-20354"></a>
<a id="trace-20363"></a>
<a id="trace-20365"></a>
<a id="trace-20382"></a>
<a id="trace-20384"></a>
<a id="trace-20394"></a>
<a id="trace-20396"></a>
<a id="trace-20411"></a>
<a id="trace-20413"></a>
<a id="trace-20425"></a>
<a id="trace-20427"></a>
<a id="trace-20497"></a>
<a id="trace-20499"></a>
<a id="trace-20508"></a>
<a id="trace-20510"></a>
<a id="trace-20528"></a>
<a id="trace-20530"></a>
<a id="trace-20540"></a>
<a id="trace-20542"></a>
<a id="trace-20567"></a>
<a id="trace-20569"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
- 205.30s–218.30s (×46), actor 5, squad 0 (trace 20077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 20006. Next observer evidence: {'until': 206.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8191055969097568, 'next_transition': 20129}.
<a id="trace-2139"></a>
- 218.50s–218.50s (×1), actor 5, squad 0 (events line 2139): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 218.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1857333333333339, 'next_transition': 20599}.
<a id="trace-20594"></a>
- 218.50s–218.50s (×1), actor 5, squad 0 (trace 20594): renew committed intent (75 s lifetime). Knowledge: actor memory at 218.50s, trace 20594. Next observer evidence: {'until': 218.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1857333333333339, 'next_transition': 20599}.
<a id="trace-20599"></a>
<a id="trace-20601"></a>
- 218.80s–218.80s (×2), actor 5, squad 0 (trace 20599): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 218.50s, trace 20594. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21206666666666626, 'next_transition': 20615}.
<a id="trace-20615"></a>
- 219.20s–219.20s (×1), actor 1, squad 0 (trace 20615): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 20434. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3766118735289426, 'next_transition': 20715}.
<a id="trace-20631"></a>
- 219.45s–219.45s (×1), actor 9, squad 1 (trace 20631): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 20437. Next observer evidence: {'until': 249.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22672}.
<a id="trace-20715"></a>
<a id="trace-20717"></a>
<a id="trace-20729"></a>
<a id="trace-20731"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20811"></a>
<a id="trace-20813"></a>
- 220.30s–223.30s (×12), actor 5, squad 0 (trace 20715): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 20651. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2085088460686727, 'next_transition': 20729}.
<a id="trace-20831"></a>
- 224.05s–224.05s (×1), actor 1, squad 0 (trace 20831): MoveTactically. Knowledge: actor memory at 220.00s, trace 20650. Next observer evidence: None.
<a id="trace-20832"></a>
- 224.05s–224.05s (×1), actor 1, squad 0 (trace 20832): received platoon directive. Knowledge: actor memory at 220.00s, trace 20650. Next observer evidence: None.
<a id="trace-20836"></a>
- 224.10s–224.10s (×1), actor 1, squad 0 (trace 20836): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 20650. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20847}.
<a id="trace-20847"></a>
<a id="trace-20849"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20976"></a>
<a id="trace-20978"></a>
<a id="trace-20993"></a>
<a id="trace-20995"></a>
<a id="trace-21034"></a>
- 224.30s–228.30s (×13), actor 5, squad 0 (trace 20847): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 20651. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37136666666666684, 'next_transition': 20861}.
<a id="trace-21059"></a>
- 229.25s–229.25s (×1), actor 5, squad 0 (trace 21059): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 229.25s, trace 21059. Next observer evidence: None.
<a id="trace-21061"></a>
<a id="trace-21063"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21178"></a>
<a id="trace-21197"></a>
<a id="trace-21199"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21322"></a>
<a id="trace-21324"></a>
<a id="trace-21347"></a>
<a id="trace-21368"></a>
<a id="trace-21385"></a>
<a id="trace-21387"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21494"></a>
<a id="trace-21496"></a>
<a id="trace-21517"></a>
<a id="trace-21537"></a>
<a id="trace-21555"></a>
<a id="trace-21630"></a>
<a id="trace-21655"></a>
<a id="trace-21657"></a>
<a id="trace-21690"></a>
<a id="trace-21692"></a>
<a id="trace-21709"></a>
<a id="trace-21745"></a>
<a id="trace-21823"></a>
<a id="trace-21841"></a>
<a id="trace-21843"></a>
<a id="trace-21867"></a>
<a id="trace-21869"></a>
<a id="trace-21892"></a>
<a id="trace-21894"></a>
<a id="trace-21921"></a>
<a id="trace-22032"></a>
<a id="trace-22034"></a>
<a id="trace-22054"></a>
<a id="trace-22056"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22098"></a>
<a id="trace-22100"></a>
<a id="trace-22180"></a>
<a id="trace-22209"></a>
<a id="trace-22211"></a>
<a id="trace-22243"></a>
<a id="trace-22245"></a>
<a id="trace-22263"></a>
<a id="trace-22265"></a>
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22362"></a>
<a id="trace-22364"></a>
<a id="trace-22388"></a>
<a id="trace-22390"></a>
<a id="trace-22424"></a>
<a id="trace-22426"></a>
<a id="trace-22446"></a>
<a id="trace-22448"></a>
<a id="trace-22552"></a>
<a id="trace-22554"></a>
<a id="trace-22576"></a>
<a id="trace-22601"></a>
<a id="trace-22603"></a>
<a id="trace-22626"></a>
<a id="trace-22628"></a>
<a id="trace-22654"></a>
<a id="trace-22733"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22788"></a>
<a id="trace-22790"></a>
- 229.30s–277.30s (×79), actor 5, squad 0 (trace 21061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 229.25s, trace 21059. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14090885351885937, 'next_transition': 21137}.
<a id="trace-22672"></a>
- 274.90s–274.90s (×1), actor 5, squad 1 (trace 22672): renew committed intent (75 s lifetime). Knowledge: actor memory at 274.90s, trace 22672. Next observer evidence: None.
<a id="trace-2462"></a>
- 274.90s–274.90s (×1), actor 5, squad 1 (events line 2462): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 279.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22851}.
<a id="trace-22798"></a>
- 277.50s–277.50s (×1), actor 1, squad 0 (trace 22798): current contact unknown for 10 s. Knowledge: actor memory at 275.00s, trace 22674. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22811}.
<a id="trace-22811"></a>
<a id="trace-22835"></a>
<a id="trace-22837"></a>
<a id="trace-22934"></a>
<a id="trace-22936"></a>
<a id="trace-22960"></a>
<a id="trace-22992"></a>
<a id="trace-23015"></a>
<a id="trace-23017"></a>
<a id="trace-23037"></a>
<a id="trace-23039"></a>
<a id="trace-23120"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23176"></a>
<a id="trace-23196"></a>
- 278.30s–288.30s (×16), actor 5, squad 0 (trace 22811): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 22675. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22835}.
<a id="trace-22851"></a>
- 279.70s–279.70s (×1), actor 9, squad 1 (trace 22851): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: None.
<a id="trace-22852"></a>
- 279.70s–279.70s (×1), actor 9, squad 1 (trace 22852): MoveTactically. Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: None.
<a id="trace-22853"></a>
- 279.70s–279.70s (×1), actor 9, squad 1 (trace 22853): traveling overwatch. Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: None.
<a id="trace-22854"></a>
- 279.70s–279.70s (×1), actor 9, squad 1 (trace 22854): . Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: None.
<a id="trace-22858"></a>
- 279.75s–279.75s (×1), actor 9, squad 1 (trace 22858): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: {'until': 279.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22864}.
<a id="trace-22864"></a>
- 279.85s–279.85s (×1), actor 9, squad 1 (trace 22864): received platoon directive. Knowledge: actor memory at 275.00s, trace 22676. Next observer evidence: {'until': 302.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2696}.
<a id="trace-2581"></a>
- 288.70s–288.70s (×1), actor 5, squad 0 (events line 2581): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23214"></a>
- 288.70s–288.70s (×1), actor 5, squad 0 (trace 23214): renew committed intent (75 s lifetime). Knowledge: actor memory at 288.70s, trace 23214. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23226}.
<a id="trace-23226"></a>
<a id="trace-23304"></a>
<a id="trace-23306"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23354"></a>
<a id="trace-23356"></a>
<a id="trace-23378"></a>
<a id="trace-23380"></a>
- 289.30s–293.30s (×9), actor 5, squad 0 (trace 23226): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.70s, trace 23214. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23304}.
<a id="trace-23395"></a>
- 293.50s–293.50s (×1), actor 1, squad 0 (trace 23395): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 290.00s, trace 23245. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23410}.
<a id="trace-23396"></a>
- 293.50s–293.50s (×1), actor 1, squad 0 (trace 23396): MoveTactically. Knowledge: actor memory at 290.00s, trace 23245. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23410}.
<a id="trace-23397"></a>
- 293.50s–293.50s (×1), actor 1, squad 0 (trace 23397): . Knowledge: actor memory at 290.00s, trace 23245. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23410}.
<a id="trace-23410"></a>
- 294.25s–294.25s (×1), actor 1, squad 0 (trace 23410): received platoon directive. Knowledge: actor memory at 290.00s, trace 23245. Next observer evidence: None.
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23498"></a>
<a id="trace-23520"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23569"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23709"></a>
<a id="trace-23711"></a>
<a id="trace-23739"></a>
- 294.30s–302.30s (×12), actor 5, squad 0 (trace 23412): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 23246. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23498}.
<a id="trace-2695"></a>
- 302.50s–302.50s (×1), actor 5, squad 0 (events line 2695): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23764}.
<a id="trace-2696"></a>
- 302.50s–302.50s (×1), actor 5, squad 1 (events line 2696): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 305.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23933}.
<a id="trace-23748"></a>
- 302.50s–302.50s (×1), actor 5, squad 0 (trace 23748): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.50s, trace 23748. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23764}.
<a id="trace-23749"></a>
- 302.50s–302.50s (×1), actor 5, squad 0 (trace 23749): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.50s, trace 23749. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23764}.
<a id="trace-23750"></a>
- 302.50s–302.50s (×1), actor 5, squad 1 (trace 23750): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.50s, trace 23750. Next observer evidence: {'until': 305.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23933}.
<a id="trace-23751"></a>
- 302.50s–302.50s (×1), actor 5, squad 1 (trace 23751): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.50s, trace 23751. Next observer evidence: {'until': 305.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23933}.
<a id="trace-23764"></a>
<a id="trace-23785"></a>
<a id="trace-23787"></a>
- 303.30s–304.30s (×3), actor 5, squad 0 (trace 23764): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.50s, trace 23751. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23785}.
<a id="trace-23864"></a>
- 305.25s–305.25s (×1), actor 1, squad 0 (trace 23864): traveling. Knowledge: actor memory at 305.00s, trace 23803. Next observer evidence: None.
<a id="trace-23865"></a>
- 305.25s–305.25s (×1), actor 1, squad 0 (trace 23865): current contact unknown for 10 s. Knowledge: actor memory at 305.00s, trace 23803. Next observer evidence: None.
<a id="trace-23920"></a>
<a id="trace-23922"></a>
<a id="trace-24011"></a>
<a id="trace-24013"></a>
<a id="trace-24050"></a>
- 305.30s–307.30s (×5), actor 5, squad 0 (trace 23920): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 23804. Next observer evidence: {'until': 306.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056707781652962315, 'next_transition': 24011}.
<a id="trace-23933"></a>
- 305.50s–305.50s (×1), actor 9, squad 1 (trace 23933): traveling. Knowledge: actor memory at 305.00s, trace 23805. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000012936327748, 'next_transition': 24250}.
<a id="trace-23934"></a>
- 305.50s–305.50s (×1), actor 9, squad 1 (trace 23934): current contact unknown for 10 s. Knowledge: actor memory at 305.00s, trace 23805. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000012936327748, 'next_transition': 24250}.
<a id="trace-24074"></a>
- 308.05s–308.05s (×1), actor 1, squad 0 (trace 24074): traveling overwatch. Knowledge: actor memory at 305.00s, trace 23803. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22677743494448607, 'next_transition': 24081}.
<a id="trace-24075"></a>
- 308.05s–308.05s (×1), actor 1, squad 0 (trace 24075): received platoon directive. Knowledge: actor memory at 305.00s, trace 23803. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22677743494448607, 'next_transition': 24081}.
<a id="trace-24081"></a>
<a id="trace-24083"></a>
<a id="trace-24115"></a>
<a id="trace-24117"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24228"></a>
<a id="trace-24315"></a>
<a id="trace-24352"></a>
<a id="trace-24354"></a>
<a id="trace-24469"></a>
<a id="trace-24471"></a>
<a id="trace-24494"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24614"></a>
<a id="trace-24644"></a>
<a id="trace-24646"></a>
<a id="trace-24730"></a>
<a id="trace-24755"></a>
<a id="trace-24757"></a>
<a id="trace-24810"></a>
<a id="trace-24892"></a>
<a id="trace-24971"></a>
<a id="trace-24973"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25033"></a>
<a id="trace-25067"></a>
<a id="trace-25090"></a>
<a id="trace-25167"></a>
<a id="trace-25169"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25218"></a>
<a id="trace-25220"></a>
<a id="trace-25253"></a>
<a id="trace-25278"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25382"></a>
<a id="trace-25404"></a>
<a id="trace-25406"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25460"></a>
<a id="trace-25541"></a>
<a id="trace-25563"></a>
<a id="trace-25591"></a>
<a id="trace-25593"></a>
<a id="trace-25614"></a>
<a id="trace-25616"></a>
<a id="trace-25637"></a>
<a id="trace-25639"></a>
<a id="trace-25719"></a>
<a id="trace-25721"></a>
<a id="trace-25750"></a>
<a id="trace-25752"></a>
<a id="trace-25773"></a>
<a id="trace-25775"></a>
<a id="trace-25804"></a>
<a id="trace-25806"></a>
<a id="trace-25826"></a>
<a id="trace-25906"></a>
<a id="trace-25933"></a>
<a id="trace-25935"></a>
<a id="trace-25964"></a>
<a id="trace-25991"></a>
<a id="trace-25993"></a>
<a id="trace-26013"></a>
<a id="trace-26015"></a>
<a id="trace-26097"></a>
<a id="trace-26116"></a>
<a id="trace-26140"></a>
<a id="trace-26166"></a>
<a id="trace-26168"></a>
<a id="trace-26190"></a>
<a id="trace-26192"></a>
- 308.30s–359.30s (×78), actor 5, squad 0 (trace 24081): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 23804. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.474238241633845, 'next_transition': 24115}.
<a id="trace-24250"></a>
<a id="trace-24549"></a>
<a id="trace-24828"></a>
- 311.90s–323.90s (×3), actor 9, squad 1 (trace 24250): matching received arrivals: traveling stage complete. Knowledge: actor memory at 310.00s, trace 24136. Next observer evidence: {'until': 317.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000012936327755, 'next_transition': 24549}.
<a id="trace-25108"></a>
- 329.90s–329.90s (×1), actor 9, squad 1 (trace 25108): traveling overwatch. Knowledge: actor memory at 325.00s, trace 24914. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25844}.
<a id="trace-25109"></a>
- 329.90s–329.90s (×1), actor 9, squad 1 (trace 25109): matching received arrivals: traveling stage complete. Knowledge: actor memory at 325.00s, trace 24914. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25844}.
<a id="trace-25844"></a>
- 349.90s–349.90s (×1), actor 9, squad 1 (trace 25844): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 345.00s, trace 25660. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-25845"></a>
- 349.90s–349.90s (×1), actor 9, squad 1 (trace 25845): MoveTactically. Knowledge: actor memory at 345.00s, trace 25660. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-25846"></a>
- 349.90s–349.90s (×1), actor 9, squad 1 (trace 25846): . Knowledge: actor memory at 345.00s, trace 25660. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

255 matched order/radio deliveries; 392 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.629s; maximum 5.950s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3676: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3681: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3682: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3683: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3684: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3685: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3686: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3687: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3690: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3691: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4465: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4467: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4471: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4472: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4473: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4474: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4475: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4476: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4477: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4478: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4479: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4480: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4481: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4482: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4752: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4753: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4755: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4759: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4760: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4761: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4762: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4763: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4764: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4765: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4766: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4767: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4768: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4769: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4770: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5490: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5491: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5493: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 5494: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 5495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5496: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5497: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5498: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5499: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5500: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5501: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5502: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5503: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5504: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5505: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 5506: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 5507: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5926: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5928: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5929: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5931: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 5932: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 5933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5934: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5935: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5936: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5937: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5938: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5939: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5940: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5941: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5942: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5943: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 5944: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 5945: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6532: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6533: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6535: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6536: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6538: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 6539: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 6540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6541: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6542: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6543: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6544: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6545: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6546: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6547: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6548: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6549: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6550: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 6551: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 6552: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6882: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6883: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7087: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7088: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7090: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7091: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7093: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 7094: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 7095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7096: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7097: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7098: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7099: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7100: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7101: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7102: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7103: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7104: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7105: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 7106: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 7107: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7356: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7357: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7359: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7360: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 7362: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 7363: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 7364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7365: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7366: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7367: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7368: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7369: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7370: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7371: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7372: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7373: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 7374: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 7375: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 7376: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7598: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7599: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7601: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7602: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7603: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7604: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 7605: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 7606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7607: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7608: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7609: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7610: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7611: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7612: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7613: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7614: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7615: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7616: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 7617: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 7618: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 8297: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 8298: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8562: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8563: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8565: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8566: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8567: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8568: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 8569: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 8570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8571: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8572: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8573: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8574: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8575: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8576: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8577: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8578: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8579: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8580: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 8581: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 8582: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9315: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9316: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9318: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9319: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9320: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9321: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9322: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9324: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9325: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9326: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9327: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9328: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9329: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9330: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9331: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9332: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9333: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9334: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9335: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9672: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9674: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9675: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9676: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 9677: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 9678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9679: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9680: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9681: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9682: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9683: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9684: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9685: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9686: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9687: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9688: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 9689: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 9690: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 10509: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 10510: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 10511: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 10512: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11461: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11463: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11464: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11465: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 11466: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 11467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11468: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11469: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11470: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11471: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11472: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11473: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11474: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11475: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11476: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11477: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 11478: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 11479: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11763: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11765: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11766: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11767: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 11768: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11770: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11771: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11772: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11773: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11774: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11775: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11776: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11777: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11778: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11779: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 11780: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 11781: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11991: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11993: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11994: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 11995: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 11996: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 11997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11998: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11999: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12000: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12001: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12002: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12003: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12004: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12005: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12006: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12007: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 12008: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 12009: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12226: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12227: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12228: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12229: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 12230: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 12231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12232: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12233: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12234: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12235: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12236: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12237: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12238: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12239: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12240: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12241: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 12242: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 12243: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12556: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12557: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12558: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 12559: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 12560: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 12561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12562: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12563: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12564: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12565: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12566: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12567: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12568: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12569: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 12570: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 12571: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 12572: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 12573: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12782: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12783: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12784: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 12785: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 12786: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 12787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12788: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12789: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12790: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12791: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12792: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12793: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12794: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12795: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 12796: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 12797: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 12798: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 12799: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12997: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12998: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12999: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13000: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 13001: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 13002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13003: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13004: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13005: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13006: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13007: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13008: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13009: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13010: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13011: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 13012: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 13013: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 13014: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13312: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13313: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13314: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 13315: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 13316: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 13317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13318: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13319: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 13320: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13321: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13322: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13323: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13324: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13325: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 13326: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 13327: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 13328: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 13329: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13547: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13548: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13549: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13550: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 13551: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 13552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13553: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13554: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13555: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13556: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13557: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13558: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13559: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13560: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13561: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13562: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 13563: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 13564: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13883: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13884: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13885: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13886: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 13887: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 13888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13889: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13890: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13891: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13892: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13893: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13894: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13895: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13896: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13897: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13898: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 13899: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 13900: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14127: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14128: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14129: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14130: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 14131: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 14132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14133: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14134: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14135: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14136: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14137: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14138: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14139: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14140: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14141: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14142: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 14143: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 14144: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 14200: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 14201: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14375: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14376: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14377: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14378: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 14379: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 14380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14381: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14382: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14383: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14384: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14385: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14386: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14387: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14388: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14389: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14390: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 14391: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 14392: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 14806: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14807: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 14808: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 14809: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 14810: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 14811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14812: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14813: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 14814: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14815: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14816: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14817: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14818: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14819: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 14820: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 14821: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 14822: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 14823: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 15027: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 15049: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15050: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15051: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15052: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 15053: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 15054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15055: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15056: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15057: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15058: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15059: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15060: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15061: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15062: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15063: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15064: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 15065: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 15066: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 15432: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15433: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15434: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15435: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 15436: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 15437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15438: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15439: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15440: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15441: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15442: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15443: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15444: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15445: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15446: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15447: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 15448: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 15449: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17260: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17261: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17262: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17263: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 17264: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 17265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17266: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17267: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17268: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17269: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17270: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17271: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17272: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17273: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17274: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17275: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 17276: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 17277: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 17537: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 17538: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 17539: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 17540: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 17541: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 17542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 17543: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 17544: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 17545: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 17546: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 17547: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 17548: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17549: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 17550: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 17551: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 17552: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 17553: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 17554: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 17835: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17836: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17837: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17838: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 17839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 17840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17841: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17842: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17843: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17844: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17845: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17846: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17847: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17848: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17849: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17850: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 17851: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 17852: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18142: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18143: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 18144: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18145: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 18146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 18147: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18148: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18149: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18150: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18151: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18152: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18153: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18154: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18155: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18156: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18157: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 18158: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 18159: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 18452: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18453: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 18454: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18455: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 18456: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18457: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18458: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18459: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18460: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18461: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18462: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18463: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18464: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18465: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18466: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 18467: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 18468: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18901: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18902: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18903: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18904: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 18905: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18906: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18907: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18908: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18909: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18910: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18911: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18912: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18913: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18914: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18915: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 18916: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 18917: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19165: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19166: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 19167: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19168: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 19169: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19170: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19171: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19172: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19173: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19174: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19175: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19176: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19177: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19178: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19179: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19180: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19181: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19410: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19411: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19412: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19413: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 19414: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19415: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19416: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19417: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19418: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19419: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19420: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19421: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19422: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19423: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19424: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19425: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19426: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19760: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19761: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19762: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19763: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19764: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19765: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19766: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19767: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19768: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19769: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19770: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19771: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19772: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19773: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19774: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19775: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 19987: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 20005: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20006: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20007: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20008: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20009: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20010: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20011: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20012: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20013: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20014: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20015: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20016: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20017: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20018: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 20019: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 20020: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 20228: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20229: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20230: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20231: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20232: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20233: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20234: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20235: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20236: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20237: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20238: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20239: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20240: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20241: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 20242: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 20243: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 20434: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 20435: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 20436: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20437: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20438: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20439: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20440: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20441: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20442: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20443: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20444: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20445: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20446: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20447: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 20448: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 20449: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 20594: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 20650: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20651: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 20652: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20653: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20654: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20655: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20656: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20657: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20658: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20659: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20660: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20661: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20662: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20663: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 20664: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 20665: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20874: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20875: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 20876: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20877: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20878: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20879: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20880: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20881: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20882: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20883: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20884: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20885: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20886: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20887: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 20888: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 20889: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.25s leader 5, trace 21059: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 21078: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 21079: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21080: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 21081: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 21082: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 21083: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21084: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21085: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21086: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21087: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21088: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21089: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21090: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 21091: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 21092: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 21241: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 21242: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21243: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21244: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21245: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21246: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21247: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21248: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21249: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21250: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21251: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21252: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21253: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 21254: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 21255: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 21402: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21403: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21404: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21405: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21406: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21407: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21408: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21409: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21410: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21411: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21412: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21413: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21414: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 21415: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 21416: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 21571: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21572: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21573: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21574: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21575: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21576: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21577: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21578: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21579: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21580: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21581: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21582: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21583: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 21584: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 21585: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21764: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21765: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21766: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21767: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21768: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21769: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21770: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21771: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21772: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21773: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21774: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21775: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21776: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 21777: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 21778: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 21939: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 21940: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21941: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21942: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21943: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21944: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21945: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21946: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21947: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21948: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21949: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21950: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21951: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 21952: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 21953: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 22122: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 22123: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 22124: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 22125: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 22126: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 22127: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 22128: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 22129: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 22130: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 22131: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 22132: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 22133: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 22134: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 22135: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 22136: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 22304: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 22305: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 22306: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 22307: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 22308: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 22309: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 22310: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 22311: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 22312: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 22313: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 22314: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 22315: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 22316: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 22317: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 22318: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 22492: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22493: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 22494: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22495: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22496: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22497: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22498: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22499: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22500: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22501: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22502: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22503: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22504: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 22505: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 22506: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.90s leader 5, trace 22672: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 22674: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22675: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22676: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22677: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22678: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22679: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22680: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22681: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22682: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22683: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22684: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22685: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22686: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 22687: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 22688: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 22865: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 22866: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22867: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22868: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22869: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22870: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22871: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22872: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22873: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22874: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22875: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22876: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22877: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 22878: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 22879: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 23055: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 23056: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 23057: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 23058: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 23059: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 23060: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 23061: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 23062: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 23063: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 23064: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 23065: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 23066: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 23067: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 23068: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 23069: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.70s leader 5, trace 23214: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 23245: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 23246: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 23247: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 23248: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 23249: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 23250: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 23251: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 23252: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 23253: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 23254: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 23255: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 23256: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 23257: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 23258: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 23259: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 23431: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 23432: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 23433: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23434: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23435: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23436: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23437: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23438: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23439: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23440: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23441: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23442: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23443: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 23444: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 23445: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 23616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23619: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23620: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23621: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23622: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23623: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23624: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23625: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23626: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23627: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23628: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 23629: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 23630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 5, trace 23748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 5, trace 23749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 5, trace 23750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 5, trace 23751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 23803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 23804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 23805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23806: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23807: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23808: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23809: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23810: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23811: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23812: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23813: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23814: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23815: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 23816: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 23817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 24134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 24135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 24136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 24137: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 24138: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 24139: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 24140: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 24141: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 24142: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 24143: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 24144: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 24145: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 24146: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 24147: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 24148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 24403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 24404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 24406: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 24407: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 24408: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 24409: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 24410: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 24411: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 24412: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 24413: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 24414: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 24415: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 24416: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 24417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 24670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 24671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24673: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24674: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24675: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24676: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24677: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24678: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24679: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24680: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24681: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24682: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 24683: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 24684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 24912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 24913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 24914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24915: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24916: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24918: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24919: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24920: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24921: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24922: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24923: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 24925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 24926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 25110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 25111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 25112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 25113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 25114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 25115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 25116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 25117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 25118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 25119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 25120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 25121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 25122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 25123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 25124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 25302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 25303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 25304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 25305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 25306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 25307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 25308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 25309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 25310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 25311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 25312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 25313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 25314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 25315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 25316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 25482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 25483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 25484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 25485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 25486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 25487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 25488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 25489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 25490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 25492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 25495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 25496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 25658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 25659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 25660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 25661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 25662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 25663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 25664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 25665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 25666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 25668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 25671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 25672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 25848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 25849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 25850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 25851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 25852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 25853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 25855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 25861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 25862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 26039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 26040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 26041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 26042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 26043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 26044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 26045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 26046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 26047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 26048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 26049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 26050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 26051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 26052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 26053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 26220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 26221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 26222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 26223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 26224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 26225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 26226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 26227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 26228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 26229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 26230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 26231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 26232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 26233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 26234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Ash incapacitated
- 1: Bren killed in action
- 1: Soren incapacitated
- 1: Reed incapacitated
- 1: Tern incapacitated
- 1: Dane incapacitated
- 1: Ellis killed in action
- 1: Moss killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
