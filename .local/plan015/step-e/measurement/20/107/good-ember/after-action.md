# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/107/good-ember/battle-107-1789674095864014537`

## Battle summary

**Ember** · 360 s · 440 shots.

### Turning points

- 16.7s, squad 1: contact (events line 185). First recorded contact.
- 20.3s, squad 1: withdrawal ([trace 4010](#trace-4010)). 56.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.6s, squad 1: help call ([trace 9105](#trace-9105)). No completion observed before termination.
- 39.2s, squad 0: help call ([trace 9146](#trace-9146)). No completion observed before termination.
- 48.5s, squad 0: withdrawal ([trace 10799](#trace-10799)). 63.9s, squad 0: took cover and returned fire.
- 67.6s, squad 0: withdrawal ([trace 13318](#trace-13318)). 115.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 125.0s, squad 1: withdrawal ([trace 17776](#trace-17776)). 149.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 150.1s, squad 0: assault ([trace 19715](#trace-19715)). 150.3s, squad 0: advanced tactically.
- 158.7s, squad 1: withdrawal ([trace 20547](#trace-20547)). 178.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 162.6s, squad 0: assault ([trace 21143](#trace-21143)). 164.2s, squad 0: advanced tactically.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 47 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 344 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 44 shots, 0/2 lost.

### Decisions and attribution

At 20.3s, squad 1 chose broke contact ([trace 4010](#trace-4010)), followed by 1 shots and 0 own casualties; estimate 9.0 against 0 distinct squad-reported contacts; At 67.6s, squad 0 chose broke contact ([trace 13318](#trace-13318)), followed by 1 shots and 0 own casualties; estimate 10.7 against 0 distinct squad-reported contacts; At 150.3s, squad 0 chose advanced tactically ([trace 19894](#trace-19894)), followed by 1 shots and 0 own casualties; estimate 11.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1367](#trace-1367)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1387}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1369](#trace-1369)). Following evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.082993486587927, 'next_transition': 1942}.

### Communication

294 matched deliveries (mean 0.53s, max 6.40s); 341 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.70s, squad 1, contact, evidence events line 185: First recorded contact; .
- 20.30s, squad 1, withdrawal, evidence 4010: BreakContact: believed ratio at least two without superiority; 56.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.60s, squad 1, help call, evidence 9105: NeedSupport; No completion observed before termination.
- 39.15s, squad 0, help call, evidence 9146: NeedSupport; No completion observed before termination.
- 48.50s, squad 0, withdrawal, evidence 10799: BreakContact: believed ratio at least two without superiority; 63.9s, squad 0: took cover and returned fire.
- 67.55s, squad 0, withdrawal, evidence 13318: BreakContact: believed ratio at least two without superiority; 115.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 125.05s, squad 1, withdrawal, evidence 17776: BreakContact: believed ratio at least two without superiority; 149.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 150.05s, squad 0, assault, evidence 19715: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 150.3s, squad 0: advanced tactically.
- 158.65s, squad 1, withdrawal, evidence 20547: BreakContact: believed ratio at least two without superiority; 178.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 162.60s, squad 0, assault, evidence 21143: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 164.2s, squad 0: advanced tactically.
- 163.15s, squad 0, help call, evidence 21272: NeedSupport; No completion observed before termination.
- 202.25s, squad 0, help call, evidence 23612: NeedSupport; No completion observed before termination.
- 296.75s, squad 1, withdrawal, evidence 27049: BreakContact: believed ratio at least two without superiority; 316.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 345.85s, squad 1, withdrawal, evidence 29157: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945609665504577, 'next_transition': 832}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945609665504577, 'next_transition': 832}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945609665504577, 'next_transition': 832}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1145}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1145}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1145}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-638"></a>
<a id="trace-640"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-682"></a>
<a id="trace-684"></a>
<a id="trace-706"></a>
<a id="trace-708"></a>
<a id="trace-732"></a>
<a id="trace-734"></a>
<a id="trace-836"></a>
<a id="trace-838"></a>
<a id="trace-867"></a>
<a id="trace-869"></a>
<a id="trace-898"></a>
<a id="trace-900"></a>
<a id="trace-921"></a>
<a id="trace-923"></a>
<a id="trace-949"></a>
<a id="trace-951"></a>
<a id="trace-980"></a>
<a id="trace-982"></a>
<a id="trace-1007"></a>
<a id="trace-1009"></a>
<a id="trace-1034"></a>
<a id="trace-1036"></a>
<a id="trace-1051"></a>
<a id="trace-1053"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1302"></a>
<a id="trace-1304"></a>
<a id="trace-1326"></a>
<a id="trace-1328"></a>
<a id="trace-1364"></a>
<a id="trace-1366"></a>
<a id="trace-1391"></a>
<a id="trace-1393"></a>
<a id="trace-1680"></a>
<a id="trace-1682"></a>
<a id="trace-1707"></a>
<a id="trace-1709"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1763"></a>
<a id="trace-1765"></a>
<a id="trace-1846"></a>
<a id="trace-1848"></a>
<a id="trace-1886"></a>
<a id="trace-1888"></a>
<a id="trace-1917"></a>
<a id="trace-1919"></a>
<a id="trace-2137"></a>
<a id="trace-2139"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2769"></a>
<a id="trace-2771"></a>
<a id="trace-3121"></a>
<a id="trace-3123"></a>
<a id="trace-3774"></a>
<a id="trace-3776"></a>
<a id="trace-3849"></a>
<a id="trace-3851"></a>
<a id="trace-3907"></a>
<a id="trace-3909"></a>
<a id="trace-4007"></a>
<a id="trace-4009"></a>
<a id="trace-4201"></a>
<a id="trace-4203"></a>
<a id="trace-4576"></a>
<a id="trace-4578"></a>
<a id="trace-4627"></a>
<a id="trace-4629"></a>
<a id="trace-4676"></a>
<a id="trace-4678"></a>
<a id="trace-4732"></a>
<a id="trace-4734"></a>
<a id="trace-4760"></a>
<a id="trace-4762"></a>
<a id="trace-4780"></a>
<a id="trace-4782"></a>
<a id="trace-5126"></a>
<a id="trace-5128"></a>
<a id="trace-5160"></a>
<a id="trace-5162"></a>
<a id="trace-5268"></a>
<a id="trace-5270"></a>
<a id="trace-5311"></a>
<a id="trace-5313"></a>
<a id="trace-5339"></a>
<a id="trace-5341"></a>
<a id="trace-5366"></a>
<a id="trace-5368"></a>
<a id="trace-5405"></a>
<a id="trace-5407"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5470"></a>
<a id="trace-5472"></a>
<a id="trace-5496"></a>
<a id="trace-5498"></a>
<a id="trace-5515"></a>
<a id="trace-5517"></a>
<a id="trace-8366"></a>
<a id="trace-8368"></a>
<a id="trace-8459"></a>
<a id="trace-8461"></a>
<a id="trace-8482"></a>
<a id="trace-8484"></a>
<a id="trace-8514"></a>
<a id="trace-8516"></a>
<a id="trace-8534"></a>
<a id="trace-8536"></a>
<a id="trace-8564"></a>
<a id="trace-8566"></a>
<a id="trace-8602"></a>
<a id="trace-8604"></a>
<a id="trace-8629"></a>
<a id="trace-8631"></a>
<a id="trace-8657"></a>
<a id="trace-8659"></a>
<a id="trace-8688"></a>
<a id="trace-8690"></a>
<a id="trace-8714"></a>
<a id="trace-8716"></a>
<a id="trace-8803"></a>
<a id="trace-8805"></a>
<a id="trace-8899"></a>
<a id="trace-8901"></a>
<a id="trace-8947"></a>
<a id="trace-8949"></a>
<a id="trace-8975"></a>
<a id="trace-8977"></a>
<a id="trace-9015"></a>
<a id="trace-9017"></a>
<a id="trace-9043"></a>
<a id="trace-9045"></a>
<a id="trace-9089"></a>
<a id="trace-9091"></a>
<a id="trace-9124"></a>
<a id="trace-9126"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9195"></a>
<a id="trace-9197"></a>
<a id="trace-9303"></a>
<a id="trace-9305"></a>
<a id="trace-9354"></a>
<a id="trace-9356"></a>
<a id="trace-9399"></a>
<a id="trace-9401"></a>
<a id="trace-9431"></a>
<a id="trace-9433"></a>
<a id="trace-9753"></a>
<a id="trace-9755"></a>
<a id="trace-9785"></a>
<a id="trace-9787"></a>
<a id="trace-9818"></a>
<a id="trace-9820"></a>
<a id="trace-9858"></a>
<a id="trace-9860"></a>
<a id="trace-9878"></a>
<a id="trace-9880"></a>
<a id="trace-9903"></a>
<a id="trace-9905"></a>
<a id="trace-10528"></a>
<a id="trace-10530"></a>
<a id="trace-10553"></a>
<a id="trace-10555"></a>
<a id="trace-10590"></a>
<a id="trace-10592"></a>
<a id="trace-10619"></a>
<a id="trace-10621"></a>
<a id="trace-10703"></a>
<a id="trace-10705"></a>
<a id="trace-10735"></a>
<a id="trace-10737"></a>
<a id="trace-10777"></a>
<a id="trace-10779"></a>
<a id="trace-11254"></a>
<a id="trace-11256"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
<a id="trace-11366"></a>
<a id="trace-11368"></a>
<a id="trace-11490"></a>
<a id="trace-11492"></a>
<a id="trace-11551"></a>
<a id="trace-11553"></a>
<a id="trace-11623"></a>
<a id="trace-11625"></a>
<a id="trace-11677"></a>
<a id="trace-11679"></a>
<a id="trace-11732"></a>
<a id="trace-11734"></a>
<a id="trace-11775"></a>
<a id="trace-11777"></a>
<a id="trace-11797"></a>
<a id="trace-11799"></a>
<a id="trace-11823"></a>
<a id="trace-11825"></a>
<a id="trace-11848"></a>
<a id="trace-11850"></a>
<a id="trace-11878"></a>
<a id="trace-11880"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-11990"></a>
<a id="trace-11992"></a>
<a id="trace-12032"></a>
<a id="trace-12034"></a>
<a id="trace-12147"></a>
<a id="trace-12149"></a>
<a id="trace-12222"></a>
<a id="trace-12224"></a>
<a id="trace-12294"></a>
<a id="trace-12296"></a>
<a id="trace-12402"></a>
<a id="trace-12404"></a>
<a id="trace-12511"></a>
<a id="trace-12513"></a>
<a id="trace-12601"></a>
<a id="trace-12603"></a>
<a id="trace-12669"></a>
<a id="trace-12671"></a>
<a id="trace-12790"></a>
<a id="trace-12792"></a>
<a id="trace-12834"></a>
<a id="trace-12836"></a>
<a id="trace-12854"></a>
<a id="trace-12856"></a>
<a id="trace-12872"></a>
<a id="trace-12874"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12920"></a>
<a id="trace-12922"></a>
<a id="trace-12935"></a>
<a id="trace-12937"></a>
<a id="trace-12953"></a>
<a id="trace-12955"></a>
<a id="trace-13111"></a>
<a id="trace-13113"></a>
<a id="trace-13136"></a>
<a id="trace-13138"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13239"></a>
<a id="trace-13241"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
<a id="trace-13284"></a>
<a id="trace-13286"></a>
<a id="trace-13305"></a>
<a id="trace-13307"></a>
<a id="trace-13440"></a>
<a id="trace-13442"></a>
<a id="trace-13460"></a>
<a id="trace-13462"></a>
<a id="trace-13545"></a>
<a id="trace-13547"></a>
<a id="trace-13569"></a>
<a id="trace-13571"></a>
<a id="trace-13591"></a>
<a id="trace-13593"></a>
<a id="trace-13685"></a>
<a id="trace-13687"></a>
<a id="trace-13705"></a>
<a id="trace-13707"></a>
<a id="trace-13728"></a>
<a id="trace-13730"></a>
<a id="trace-13744"></a>
<a id="trace-13746"></a>
<a id="trace-13767"></a>
<a id="trace-13769"></a>
<a id="trace-13785"></a>
<a id="trace-13787"></a>
<a id="trace-13805"></a>
<a id="trace-13807"></a>
<a id="trace-13819"></a>
<a id="trace-13821"></a>
<a id="trace-13843"></a>
<a id="trace-13845"></a>
<a id="trace-13857"></a>
<a id="trace-13859"></a>
<a id="trace-13939"></a>
<a id="trace-13941"></a>
<a id="trace-13953"></a>
<a id="trace-13955"></a>
<a id="trace-13974"></a>
<a id="trace-13976"></a>
<a id="trace-13990"></a>
<a id="trace-13992"></a>
<a id="trace-14015"></a>
<a id="trace-14017"></a>
<a id="trace-14032"></a>
<a id="trace-14034"></a>
<a id="trace-14058"></a>
<a id="trace-14060"></a>
<a id="trace-14069"></a>
<a id="trace-14071"></a>
<a id="trace-14086"></a>
<a id="trace-14088"></a>
<a id="trace-14204"></a>
<a id="trace-14206"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14396"></a>
<a id="trace-14398"></a>
<a id="trace-14419"></a>
<a id="trace-14421"></a>
<a id="trace-14437"></a>
<a id="trace-14439"></a>
<a id="trace-14470"></a>
<a id="trace-14472"></a>
<a id="trace-14487"></a>
<a id="trace-14489"></a>
<a id="trace-14502"></a>
<a id="trace-14504"></a>
<a id="trace-14510"></a>
<a id="trace-14512"></a>
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14628"></a>
<a id="trace-14630"></a>
<a id="trace-14641"></a>
<a id="trace-14643"></a>
<a id="trace-14666"></a>
<a id="trace-14668"></a>
<a id="trace-14681"></a>
<a id="trace-14683"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
<a id="trace-14803"></a>
<a id="trace-14805"></a>
<a id="trace-14814"></a>
<a id="trace-14816"></a>
<a id="trace-14846"></a>
<a id="trace-14848"></a>
<a id="trace-14867"></a>
<a id="trace-14869"></a>
<a id="trace-14954"></a>
<a id="trace-14956"></a>
<a id="trace-14967"></a>
<a id="trace-14969"></a>
<a id="trace-14986"></a>
<a id="trace-14988"></a>
<a id="trace-14995"></a>
<a id="trace-14997"></a>
<a id="trace-15020"></a>
<a id="trace-15022"></a>
<a id="trace-15032"></a>
<a id="trace-15034"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15118"></a>
<a id="trace-15120"></a>
<a id="trace-15147"></a>
<a id="trace-15149"></a>
<a id="trace-15168"></a>
<a id="trace-15170"></a>
<a id="trace-15250"></a>
<a id="trace-15252"></a>
<a id="trace-15266"></a>
<a id="trace-15268"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15401"></a>
<a id="trace-15403"></a>
<a id="trace-15418"></a>
<a id="trace-15420"></a>
<a id="trace-15426"></a>
<a id="trace-15428"></a>
<a id="trace-15445"></a>
<a id="trace-15447"></a>
<a id="trace-15452"></a>
<a id="trace-15454"></a>
<a id="trace-15469"></a>
<a id="trace-15471"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15565"></a>
<a id="trace-15567"></a>
<a id="trace-15584"></a>
<a id="trace-15586"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15618"></a>
<a id="trace-15620"></a>
<a id="trace-15635"></a>
<a id="trace-15637"></a>
<a id="trace-15651"></a>
<a id="trace-15653"></a>
<a id="trace-15660"></a>
<a id="trace-15662"></a>
<a id="trace-15685"></a>
<a id="trace-15687"></a>
<a id="trace-15700"></a>
<a id="trace-15702"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15844"></a>
<a id="trace-15846"></a>
<a id="trace-15862"></a>
<a id="trace-15864"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15893"></a>
<a id="trace-15895"></a>
<a id="trace-15905"></a>
<a id="trace-15907"></a>
<a id="trace-15920"></a>
<a id="trace-15922"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-15950"></a>
<a id="trace-15952"></a>
<a id="trace-15965"></a>
<a id="trace-15967"></a>
<a id="trace-16040"></a>
<a id="trace-16042"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16074"></a>
<a id="trace-16076"></a>
<a id="trace-16086"></a>
<a id="trace-16088"></a>
<a id="trace-16106"></a>
<a id="trace-16108"></a>
<a id="trace-16118"></a>
<a id="trace-16120"></a>
<a id="trace-16134"></a>
<a id="trace-16136"></a>
<a id="trace-16145"></a>
<a id="trace-16147"></a>
<a id="trace-16162"></a>
<a id="trace-16164"></a>
<a id="trace-16260"></a>
<a id="trace-16262"></a>
<a id="trace-16343"></a>
<a id="trace-16345"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16403"></a>
<a id="trace-16405"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16511"></a>
<a id="trace-16513"></a>
<a id="trace-16529"></a>
<a id="trace-16531"></a>
<a id="trace-16560"></a>
<a id="trace-16562"></a>
<a id="trace-16572"></a>
<a id="trace-16574"></a>
<a id="trace-16594"></a>
<a id="trace-16596"></a>
<a id="trace-16603"></a>
<a id="trace-16605"></a>
<a id="trace-16740"></a>
<a id="trace-16742"></a>
<a id="trace-16757"></a>
<a id="trace-16759"></a>
<a id="trace-17219"></a>
<a id="trace-17221"></a>
<a id="trace-17464"></a>
<a id="trace-17466"></a>
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17632"></a>
<a id="trace-17634"></a>
<a id="trace-17673"></a>
<a id="trace-17675"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17725"></a>
<a id="trace-17727"></a>
<a id="trace-17744"></a>
<a id="trace-17746"></a>
<a id="trace-17885"></a>
<a id="trace-17887"></a>
<a id="trace-17904"></a>
<a id="trace-17906"></a>
<a id="trace-17929"></a>
<a id="trace-17931"></a>
<a id="trace-17941"></a>
<a id="trace-17943"></a>
<a id="trace-17970"></a>
<a id="trace-17972"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18119"></a>
<a id="trace-18121"></a>
<a id="trace-18145"></a>
<a id="trace-18147"></a>
<a id="trace-18168"></a>
<a id="trace-18170"></a>
<a id="trace-18183"></a>
<a id="trace-18185"></a>
<a id="trace-18268"></a>
<a id="trace-18270"></a>
<a id="trace-18283"></a>
<a id="trace-18285"></a>
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18314"></a>
<a id="trace-18316"></a>
<a id="trace-18340"></a>
<a id="trace-18342"></a>
<a id="trace-18365"></a>
<a id="trace-18367"></a>
<a id="trace-18384"></a>
<a id="trace-18386"></a>
<a id="trace-18394"></a>
<a id="trace-18396"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18426"></a>
<a id="trace-18428"></a>
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18558"></a>
<a id="trace-18560"></a>
<a id="trace-18577"></a>
<a id="trace-18579"></a>
<a id="trace-18590"></a>
<a id="trace-18592"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18651"></a>
<a id="trace-18653"></a>
<a id="trace-18734"></a>
<a id="trace-18736"></a>
<a id="trace-18748"></a>
<a id="trace-18750"></a>
<a id="trace-18833"></a>
<a id="trace-18835"></a>
<a id="trace-18858"></a>
<a id="trace-18860"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-19007"></a>
<a id="trace-19009"></a>
<a id="trace-19037"></a>
<a id="trace-19039"></a>
<a id="trace-19059"></a>
<a id="trace-19061"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19148"></a>
<a id="trace-19150"></a>
<a id="trace-19276"></a>
<a id="trace-19278"></a>
<a id="trace-19297"></a>
<a id="trace-19299"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19338"></a>
<a id="trace-19340"></a>
<a id="trace-19361"></a>
<a id="trace-19363"></a>
<a id="trace-19382"></a>
<a id="trace-19384"></a>
<a id="trace-19401"></a>
<a id="trace-19403"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19886"></a>
<a id="trace-19888"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20093"></a>
<a id="trace-20095"></a>
<a id="trace-20118"></a>
<a id="trace-20120"></a>
<a id="trace-20138"></a>
<a id="trace-20140"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20287"></a>
<a id="trace-20289"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20433"></a>
<a id="trace-20435"></a>
<a id="trace-20458"></a>
<a id="trace-20460"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20502"></a>
<a id="trace-20504"></a>
<a id="trace-20520"></a>
<a id="trace-20522"></a>
<a id="trace-20540"></a>
<a id="trace-20542"></a>
<a id="trace-20607"></a>
<a id="trace-20609"></a>
<a id="trace-20631"></a>
<a id="trace-20633"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20794"></a>
<a id="trace-20796"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-21262"></a>
<a id="trace-21264"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21373"></a>
<a id="trace-21375"></a>
<a id="trace-21460"></a>
<a id="trace-21462"></a>
<a id="trace-21542"></a>
<a id="trace-21544"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21576"></a>
<a id="trace-21578"></a>
<a id="trace-21591"></a>
<a id="trace-21593"></a>
<a id="trace-21614"></a>
<a id="trace-21616"></a>
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21653"></a>
<a id="trace-21655"></a>
<a id="trace-21671"></a>
<a id="trace-21673"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21839"></a>
<a id="trace-21841"></a>
<a id="trace-21854"></a>
<a id="trace-21856"></a>
<a id="trace-21872"></a>
<a id="trace-21874"></a>
<a id="trace-21885"></a>
<a id="trace-21887"></a>
<a id="trace-21909"></a>
<a id="trace-21911"></a>
<a id="trace-21932"></a>
<a id="trace-21934"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-21957"></a>
<a id="trace-21959"></a>
<a id="trace-21972"></a>
<a id="trace-21974"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22094"></a>
<a id="trace-22096"></a>
<a id="trace-22109"></a>
<a id="trace-22111"></a>
<a id="trace-22124"></a>
<a id="trace-22126"></a>
<a id="trace-22137"></a>
<a id="trace-22139"></a>
<a id="trace-22157"></a>
<a id="trace-22159"></a>
<a id="trace-22170"></a>
<a id="trace-22172"></a>
<a id="trace-22195"></a>
<a id="trace-22197"></a>
<a id="trace-22208"></a>
<a id="trace-22210"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22310"></a>
<a id="trace-22312"></a>
<a id="trace-22323"></a>
<a id="trace-22325"></a>
<a id="trace-22333"></a>
<a id="trace-22335"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22431"></a>
<a id="trace-22433"></a>
<a id="trace-22447"></a>
<a id="trace-22449"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22535"></a>
<a id="trace-22537"></a>
<a id="trace-22610"></a>
<a id="trace-22612"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22719"></a>
<a id="trace-22721"></a>
<a id="trace-22734"></a>
<a id="trace-22736"></a>
<a id="trace-22906"></a>
<a id="trace-22908"></a>
<a id="trace-22920"></a>
<a id="trace-22922"></a>
<a id="trace-22939"></a>
<a id="trace-22941"></a>
<a id="trace-22966"></a>
<a id="trace-22968"></a>
<a id="trace-22986"></a>
<a id="trace-22988"></a>
<a id="trace-22999"></a>
<a id="trace-23001"></a>
<a id="trace-23075"></a>
<a id="trace-23077"></a>
<a id="trace-23091"></a>
<a id="trace-23093"></a>
<a id="trace-23116"></a>
<a id="trace-23118"></a>
<a id="trace-23127"></a>
<a id="trace-23129"></a>
<a id="trace-23149"></a>
<a id="trace-23151"></a>
<a id="trace-23175"></a>
<a id="trace-23177"></a>
<a id="trace-23193"></a>
<a id="trace-23195"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23246"></a>
<a id="trace-23248"></a>
<a id="trace-23326"></a>
<a id="trace-23328"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23407"></a>
<a id="trace-23409"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23474"></a>
<a id="trace-23476"></a>
<a id="trace-23485"></a>
<a id="trace-23487"></a>
<a id="trace-23559"></a>
<a id="trace-23561"></a>
<a id="trace-23576"></a>
<a id="trace-23578"></a>
<a id="trace-23590"></a>
<a id="trace-23592"></a>
<a id="trace-23603"></a>
<a id="trace-23605"></a>
<a id="trace-23625"></a>
<a id="trace-23627"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23680"></a>
<a id="trace-23682"></a>
<a id="trace-23705"></a>
<a id="trace-23707"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23800"></a>
<a id="trace-23802"></a>
<a id="trace-23813"></a>
<a id="trace-23815"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23883"></a>
<a id="trace-23885"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23981"></a>
<a id="trace-23983"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24027"></a>
<a id="trace-24029"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24111"></a>
<a id="trace-24113"></a>
<a id="trace-24120"></a>
<a id="trace-24122"></a>
<a id="trace-24137"></a>
<a id="trace-24139"></a>
<a id="trace-24148"></a>
<a id="trace-24150"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24203"></a>
<a id="trace-24205"></a>
<a id="trace-24220"></a>
<a id="trace-24222"></a>
<a id="trace-24230"></a>
<a id="trace-24232"></a>
<a id="trace-24299"></a>
<a id="trace-24301"></a>
<a id="trace-24307"></a>
<a id="trace-24309"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24328"></a>
<a id="trace-24330"></a>
<a id="trace-24341"></a>
<a id="trace-24343"></a>
<a id="trace-24354"></a>
<a id="trace-24356"></a>
<a id="trace-24370"></a>
<a id="trace-24372"></a>
<a id="trace-24378"></a>
<a id="trace-24380"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24405"></a>
<a id="trace-24407"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24482"></a>
<a id="trace-24484"></a>
<a id="trace-24494"></a>
<a id="trace-24496"></a>
<a id="trace-24504"></a>
<a id="trace-24506"></a>
<a id="trace-24516"></a>
<a id="trace-24518"></a>
<a id="trace-24528"></a>
<a id="trace-24530"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24553"></a>
<a id="trace-24555"></a>
<a id="trace-24568"></a>
<a id="trace-24570"></a>
<a id="trace-24578"></a>
<a id="trace-24580"></a>
<a id="trace-24648"></a>
<a id="trace-24650"></a>
<a id="trace-24658"></a>
<a id="trace-24660"></a>
<a id="trace-24670"></a>
<a id="trace-24672"></a>
<a id="trace-24677"></a>
<a id="trace-24679"></a>
<a id="trace-24694"></a>
<a id="trace-24696"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24723"></a>
<a id="trace-24725"></a>
<a id="trace-24730"></a>
<a id="trace-24732"></a>
<a id="trace-24743"></a>
<a id="trace-24745"></a>
<a id="trace-24754"></a>
<a id="trace-24756"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-24833"></a>
<a id="trace-24835"></a>
<a id="trace-24846"></a>
<a id="trace-24848"></a>
<a id="trace-24857"></a>
<a id="trace-24859"></a>
<a id="trace-24871"></a>
<a id="trace-24873"></a>
<a id="trace-24884"></a>
<a id="trace-24886"></a>
<a id="trace-24900"></a>
<a id="trace-24902"></a>
<a id="trace-24909"></a>
<a id="trace-24911"></a>
<a id="trace-24923"></a>
<a id="trace-24925"></a>
<a id="trace-24932"></a>
<a id="trace-24934"></a>
<a id="trace-25000"></a>
<a id="trace-25002"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25023"></a>
<a id="trace-25025"></a>
<a id="trace-25032"></a>
<a id="trace-25034"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25057"></a>
<a id="trace-25059"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25083"></a>
<a id="trace-25085"></a>
<a id="trace-25097"></a>
<a id="trace-25099"></a>
<a id="trace-25108"></a>
<a id="trace-25110"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25198"></a>
<a id="trace-25200"></a>
<a id="trace-25206"></a>
<a id="trace-25208"></a>
<a id="trace-25221"></a>
<a id="trace-25223"></a>
<a id="trace-25229"></a>
<a id="trace-25231"></a>
<a id="trace-25242"></a>
<a id="trace-25244"></a>
<a id="trace-25253"></a>
<a id="trace-25255"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25344"></a>
<a id="trace-25346"></a>
<a id="trace-25352"></a>
<a id="trace-25354"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25373"></a>
<a id="trace-25375"></a>
<a id="trace-25387"></a>
<a id="trace-25389"></a>
<a id="trace-25397"></a>
<a id="trace-25399"></a>
<a id="trace-25412"></a>
<a id="trace-25414"></a>
<a id="trace-25422"></a>
<a id="trace-25424"></a>
<a id="trace-25438"></a>
<a id="trace-25440"></a>
<a id="trace-25448"></a>
<a id="trace-25450"></a>
<a id="trace-25516"></a>
<a id="trace-25518"></a>
<a id="trace-25524"></a>
<a id="trace-25526"></a>
<a id="trace-25539"></a>
<a id="trace-25541"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25561"></a>
<a id="trace-25563"></a>
<a id="trace-25572"></a>
<a id="trace-25574"></a>
<a id="trace-25588"></a>
<a id="trace-25590"></a>
<a id="trace-25600"></a>
<a id="trace-25602"></a>
<a id="trace-25615"></a>
<a id="trace-25617"></a>
<a id="trace-25623"></a>
<a id="trace-25625"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25718"></a>
<a id="trace-25720"></a>
<a id="trace-25733"></a>
<a id="trace-25735"></a>
<a id="trace-25742"></a>
<a id="trace-25744"></a>
<a id="trace-25754"></a>
<a id="trace-25756"></a>
<a id="trace-25762"></a>
<a id="trace-25764"></a>
<a id="trace-25775"></a>
<a id="trace-25777"></a>
<a id="trace-25782"></a>
<a id="trace-25784"></a>
<a id="trace-25856"></a>
<a id="trace-25858"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25887"></a>
<a id="trace-25889"></a>
<a id="trace-25900"></a>
<a id="trace-25902"></a>
<a id="trace-25916"></a>
<a id="trace-25918"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25935"></a>
<a id="trace-25937"></a>
<a id="trace-25944"></a>
<a id="trace-25946"></a>
<a id="trace-25956"></a>
<a id="trace-25958"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-26033"></a>
<a id="trace-26035"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26063"></a>
<a id="trace-26065"></a>
<a id="trace-26075"></a>
<a id="trace-26077"></a>
<a id="trace-26084"></a>
<a id="trace-26086"></a>
<a id="trace-26097"></a>
<a id="trace-26099"></a>
<a id="trace-26104"></a>
<a id="trace-26106"></a>
<a id="trace-26116"></a>
<a id="trace-26118"></a>
<a id="trace-26123"></a>
<a id="trace-26125"></a>
<a id="trace-26189"></a>
<a id="trace-26191"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26209"></a>
<a id="trace-26211"></a>
<a id="trace-26217"></a>
<a id="trace-26219"></a>
<a id="trace-26230"></a>
<a id="trace-26232"></a>
<a id="trace-26239"></a>
<a id="trace-26241"></a>
<a id="trace-26252"></a>
<a id="trace-26254"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26342"></a>
<a id="trace-26344"></a>
<a id="trace-26351"></a>
<a id="trace-26353"></a>
<a id="trace-26363"></a>
<a id="trace-26365"></a>
<a id="trace-26370"></a>
<a id="trace-26372"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26390"></a>
<a id="trace-26392"></a>
<a id="trace-26400"></a>
<a id="trace-26402"></a>
<a id="trace-26405"></a>
<a id="trace-26407"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26420"></a>
<a id="trace-26422"></a>
<a id="trace-26482"></a>
<a id="trace-26484"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26498"></a>
<a id="trace-26500"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26514"></a>
<a id="trace-26516"></a>
<a id="trace-26521"></a>
<a id="trace-26523"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26539"></a>
<a id="trace-26541"></a>
<a id="trace-26551"></a>
<a id="trace-26553"></a>
<a id="trace-26558"></a>
<a id="trace-26560"></a>
<a id="trace-26623"></a>
<a id="trace-26625"></a>
<a id="trace-26629"></a>
<a id="trace-26631"></a>
<a id="trace-26642"></a>
<a id="trace-26644"></a>
<a id="trace-26648"></a>
<a id="trace-26650"></a>
<a id="trace-26660"></a>
<a id="trace-26662"></a>
<a id="trace-26673"></a>
<a id="trace-26675"></a>
<a id="trace-26694"></a>
<a id="trace-26696"></a>
<a id="trace-26706"></a>
<a id="trace-26708"></a>
<a id="trace-26717"></a>
<a id="trace-26719"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26787"></a>
<a id="trace-26789"></a>
<a id="trace-26793"></a>
<a id="trace-26795"></a>
<a id="trace-26806"></a>
<a id="trace-26808"></a>
<a id="trace-26811"></a>
<a id="trace-26813"></a>
<a id="trace-26824"></a>
<a id="trace-26826"></a>
<a id="trace-26830"></a>
<a id="trace-26832"></a>
<a id="trace-26845"></a>
<a id="trace-26847"></a>
<a id="trace-26922"></a>
<a id="trace-26924"></a>
<a id="trace-26938"></a>
<a id="trace-26940"></a>
<a id="trace-26955"></a>
<a id="trace-26957"></a>
<a id="trace-27025"></a>
<a id="trace-27027"></a>
<a id="trace-27032"></a>
<a id="trace-27034"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27104"></a>
<a id="trace-27106"></a>
<a id="trace-27125"></a>
<a id="trace-27127"></a>
<a id="trace-27131"></a>
<a id="trace-27133"></a>
<a id="trace-27148"></a>
<a id="trace-27150"></a>
<a id="trace-27154"></a>
<a id="trace-27156"></a>
<a id="trace-27165"></a>
<a id="trace-27167"></a>
<a id="trace-27178"></a>
<a id="trace-27180"></a>
<a id="trace-27243"></a>
<a id="trace-27245"></a>
<a id="trace-27256"></a>
<a id="trace-27258"></a>
<a id="trace-27277"></a>
<a id="trace-27279"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27310"></a>
<a id="trace-27312"></a>
<a id="trace-27326"></a>
<a id="trace-27328"></a>
<a id="trace-27332"></a>
<a id="trace-27334"></a>
<a id="trace-27345"></a>
<a id="trace-27347"></a>
<a id="trace-27352"></a>
<a id="trace-27354"></a>
<a id="trace-27417"></a>
<a id="trace-27419"></a>
<a id="trace-27425"></a>
<a id="trace-27427"></a>
<a id="trace-27441"></a>
<a id="trace-27443"></a>
<a id="trace-27450"></a>
<a id="trace-27452"></a>
<a id="trace-27467"></a>
<a id="trace-27469"></a>
<a id="trace-27478"></a>
<a id="trace-27480"></a>
<a id="trace-27503"></a>
<a id="trace-27505"></a>
<a id="trace-27509"></a>
<a id="trace-27511"></a>
<a id="trace-27523"></a>
<a id="trace-27525"></a>
<a id="trace-27534"></a>
<a id="trace-27536"></a>
<a id="trace-27598"></a>
<a id="trace-27600"></a>
<a id="trace-27604"></a>
<a id="trace-27606"></a>
<a id="trace-27615"></a>
<a id="trace-27617"></a>
<a id="trace-27622"></a>
<a id="trace-27624"></a>
<a id="trace-27634"></a>
<a id="trace-27636"></a>
<a id="trace-27642"></a>
<a id="trace-27644"></a>
<a id="trace-27658"></a>
<a id="trace-27660"></a>
<a id="trace-27664"></a>
<a id="trace-27666"></a>
<a id="trace-27679"></a>
<a id="trace-27681"></a>
<a id="trace-27695"></a>
<a id="trace-27697"></a>
<a id="trace-27760"></a>
<a id="trace-27762"></a>
<a id="trace-27766"></a>
<a id="trace-27768"></a>
<a id="trace-27781"></a>
<a id="trace-27783"></a>
<a id="trace-27787"></a>
<a id="trace-27789"></a>
<a id="trace-27866"></a>
<a id="trace-27868"></a>
<a id="trace-27874"></a>
<a id="trace-27876"></a>
<a id="trace-27892"></a>
<a id="trace-27894"></a>
<a id="trace-27900"></a>
<a id="trace-27902"></a>
<a id="trace-27912"></a>
<a id="trace-27914"></a>
<a id="trace-27923"></a>
<a id="trace-27925"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28043"></a>
<a id="trace-28045"></a>
<a id="trace-28049"></a>
<a id="trace-28051"></a>
<a id="trace-28061"></a>
<a id="trace-28063"></a>
<a id="trace-28120"></a>
<a id="trace-28122"></a>
<a id="trace-28141"></a>
<a id="trace-28143"></a>
<a id="trace-28203"></a>
<a id="trace-28205"></a>
<a id="trace-28211"></a>
<a id="trace-28213"></a>
<a id="trace-28227"></a>
<a id="trace-28229"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28252"></a>
<a id="trace-28254"></a>
<a id="trace-28268"></a>
<a id="trace-28270"></a>
<a id="trace-28281"></a>
<a id="trace-28283"></a>
<a id="trace-28289"></a>
<a id="trace-28291"></a>
<a id="trace-28303"></a>
<a id="trace-28305"></a>
<a id="trace-28315"></a>
<a id="trace-28317"></a>
<a id="trace-28380"></a>
<a id="trace-28382"></a>
<a id="trace-28389"></a>
<a id="trace-28391"></a>
<a id="trace-28400"></a>
<a id="trace-28402"></a>
<a id="trace-28405"></a>
<a id="trace-28407"></a>
<a id="trace-28416"></a>
<a id="trace-28418"></a>
<a id="trace-28425"></a>
<a id="trace-28427"></a>
<a id="trace-28435"></a>
<a id="trace-28437"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28459"></a>
<a id="trace-28461"></a>
<a id="trace-28522"></a>
<a id="trace-28524"></a>
<a id="trace-28536"></a>
<a id="trace-28538"></a>
<a id="trace-28542"></a>
<a id="trace-28544"></a>
<a id="trace-28557"></a>
<a id="trace-28559"></a>
<a id="trace-28568"></a>
<a id="trace-28570"></a>
<a id="trace-28647"></a>
<a id="trace-28649"></a>
<a id="trace-28659"></a>
<a id="trace-28661"></a>
<a id="trace-28674"></a>
<a id="trace-28676"></a>
<a id="trace-28687"></a>
<a id="trace-28689"></a>
<a id="trace-28753"></a>
<a id="trace-28755"></a>
<a id="trace-28823"></a>
<a id="trace-28825"></a>
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28913"></a>
<a id="trace-28915"></a>
<a id="trace-28929"></a>
<a id="trace-28931"></a>
<a id="trace-29007"></a>
<a id="trace-29009"></a>
<a id="trace-29026"></a>
<a id="trace-29028"></a>
<a id="trace-29041"></a>
<a id="trace-29043"></a>
<a id="trace-29053"></a>
<a id="trace-29055"></a>
<a id="trace-29070"></a>
<a id="trace-29072"></a>
<a id="trace-29140"></a>
<a id="trace-29142"></a>
<a id="trace-29224"></a>
<a id="trace-29226"></a>
<a id="trace-29242"></a>
<a id="trace-29244"></a>
<a id="trace-29256"></a>
<a id="trace-29258"></a>
<a id="trace-29271"></a>
<a id="trace-29273"></a>
<a id="trace-29283"></a>
<a id="trace-29285"></a>
<a id="trace-29292"></a>
<a id="trace-29294"></a>
<a id="trace-29305"></a>
<a id="trace-29307"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29376"></a>
<a id="trace-29378"></a>
<a id="trace-29386"></a>
<a id="trace-29388"></a>
<a id="trace-29397"></a>
<a id="trace-29399"></a>
<a id="trace-29406"></a>
<a id="trace-29408"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29427"></a>
<a id="trace-29429"></a>
<a id="trace-29437"></a>
<a id="trace-29439"></a>
<a id="trace-29442"></a>
<a id="trace-29444"></a>
<a id="trace-29451"></a>
<a id="trace-29453"></a>
<a id="trace-29458"></a>
<a id="trace-29460"></a>
<a id="trace-29522"></a>
<a id="trace-29524"></a>
<a id="trace-29531"></a>
<a id="trace-29533"></a>
<a id="trace-29543"></a>
<a id="trace-29545"></a>
<a id="trace-29552"></a>
<a id="trace-29554"></a>
<a id="trace-29572"></a>
<a id="trace-29574"></a>
<a id="trace-29584"></a>
<a id="trace-29586"></a>
<a id="trace-29591"></a>
<a id="trace-29593"></a>
<a id="trace-29603"></a>
<a id="trace-29605"></a>
<a id="trace-29611"></a>
<a id="trace-29613"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000670810525734, 'next_transition': 607}.
<a id="trace-832"></a>
<a id="trace-834"></a>
<a id="trace-917"></a>
<a id="trace-919"></a>
<a id="trace-945"></a>
<a id="trace-947"></a>
<a id="trace-976"></a>
<a id="trace-978"></a>
<a id="trace-1003"></a>
<a id="trace-1005"></a>
<a id="trace-1047"></a>
<a id="trace-1049"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1274"></a>
<a id="trace-1276"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1322"></a>
<a id="trace-1324"></a>
<a id="trace-1360"></a>
<a id="trace-1362"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 832): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.632903088754955, 'next_transition': 917}.
<a id="trace-1145"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1145): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.417904072407469, 'next_transition': 134}.
<a id="trace-1146"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1146): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.417904072407469, 'next_transition': 134}.
<a id="trace-133"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 133): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1387}.
<a id="trace-134"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 134): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.082993486587927, 'next_transition': 1942}.
<a id="trace-1367"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1367): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1367. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1387}.
<a id="trace-1368"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1368): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1368. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1387}.
<a id="trace-1369"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1369): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1369. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.082993486587927, 'next_transition': 1942}.
<a id="trace-1370"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1370): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1370. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.082993486587927, 'next_transition': 1942}.
<a id="trace-1387"></a>
<a id="trace-1389"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1387): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1370. Next observer evidence: None.
<a id="trace-1396"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1396): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1676}.
<a id="trace-1397"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1397): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1676}.
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1703"></a>
<a id="trace-1705"></a>
<a id="trace-1842"></a>
<a id="trace-1844"></a>
<a id="trace-1913"></a>
<a id="trace-1915"></a>
<a id="trace-2765"></a>
<a id="trace-2767"></a>
- 13.20s–17.75s (×10), actor 5, squad 0 (trace 1676): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1370. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41343213369868553, 'next_transition': 1703}.
<a id="trace-1942"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1942): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: None.
<a id="trace-1943"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1943): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: None.
<a id="trace-1944"></a>
<a id="trace-2140"></a>
<a id="trace-2333"></a>
<a id="trace-2521"></a>
- 16.70s–16.95s (×4), actor 8, squad 1 (trace 1944): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: None.
<a id="trace-2785"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 2785): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1773. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3124}.
<a id="trace-2786"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 2786): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1773. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3124}.
<a id="trace-2787"></a>
<a id="trace-3124"></a>
<a id="trace-3445"></a>
- 18.00s–18.50s (×3), actor 0, squad 0 (trace 2787): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1773. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3124}.
<a id="trace-3770"></a>
<a id="trace-3772"></a>
<a id="trace-3845"></a>
<a id="trace-3847"></a>
<a id="trace-3903"></a>
<a id="trace-3905"></a>
<a id="trace-4003"></a>
<a id="trace-4005"></a>
<a id="trace-4197"></a>
<a id="trace-4199"></a>
- 18.75s–20.75s (×10), actor 5, squad 0 (trace 3770): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1778. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31157287932208744, 'next_transition': 3845}.
<a id="trace-4010"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4010): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 3928. Next observer evidence: {'until': 35.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 20.89904360214819, 'next_transition': 8816}.
<a id="trace-4011"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4011): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 3928. Next observer evidence: {'until': 35.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 20.89904360214819, 'next_transition': 8816}.
<a id="trace-4254"></a>
- 21.20s–21.20s (×1), actor 0, squad 0 (trace 4254): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3920. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3660092478209474, 'next_transition': 4623}.
<a id="trace-4623"></a>
<a id="trace-4625"></a>
<a id="trace-4672"></a>
<a id="trace-4674"></a>
<a id="trace-4728"></a>
<a id="trace-4730"></a>
<a id="trace-4756"></a>
<a id="trace-4758"></a>
<a id="trace-4776"></a>
<a id="trace-4778"></a>
- 21.75s–23.75s (×10), actor 5, squad 0 (trace 4623): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3925. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624523638054593, 'next_transition': 4672}.
<a id="trace-4808"></a>
- 24.10s–24.10s (×1), actor 0, squad 0 (trace 4808): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3920. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749726072701864, 'next_transition': 5122}.
<a id="trace-5122"></a>
<a id="trace-5124"></a>
<a id="trace-5264"></a>
<a id="trace-5266"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5335"></a>
<a id="trace-5337"></a>
<a id="trace-5362"></a>
<a id="trace-5364"></a>
<a id="trace-5401"></a>
<a id="trace-5403"></a>
- 24.25s–27.25s (×12), actor 5, squad 0 (trace 5122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3925. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.119597027022336, 'next_transition': 5264}.
<a id="trace-5417"></a>
- 27.60s–27.60s (×1), actor 0, squad 0 (trace 5417): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5179. Next observer evidence: None.
<a id="trace-5431"></a>
<a id="trace-5433"></a>
<a id="trace-5466"></a>
<a id="trace-5468"></a>
<a id="trace-5492"></a>
<a id="trace-5494"></a>
- 27.75s–28.75s (×6), actor 5, squad 0 (trace 5431): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5184. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1190749999999996, 'next_transition': 5466}.
<a id="trace-5524"></a>
- 29.45s–29.45s (×1), actor 0, squad 0 (trace 5524): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 5179. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07487499999999958, 'next_transition': 8455}.
<a id="trace-8093"></a>
- 29.45s–29.45s (×1), actor 0, squad 0 (trace 8093): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 5179. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07487499999999958, 'next_transition': 8455}.
<a id="trace-8094"></a>
- 29.45s–29.45s (×1), actor 0, squad 0 (trace 8094): MoveTactically. Knowledge: actor memory at 25.00s, trace 5179. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07487499999999958, 'next_transition': 8455}.
<a id="trace-8095"></a>
- 29.45s–29.45s (×1), actor 0, squad 0 (trace 8095): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 5179. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07487499999999958, 'next_transition': 8455}.
<a id="trace-8455"></a>
<a id="trace-8457"></a>
<a id="trace-8598"></a>
<a id="trace-8600"></a>
<a id="trace-8653"></a>
<a id="trace-8655"></a>
<a id="trace-8799"></a>
<a id="trace-8801"></a>
<a id="trace-8895"></a>
<a id="trace-8897"></a>
<a id="trace-8943"></a>
<a id="trace-8945"></a>
<a id="trace-8971"></a>
<a id="trace-8973"></a>
<a id="trace-9011"></a>
<a id="trace-9013"></a>
<a id="trace-9039"></a>
<a id="trace-9041"></a>
<a id="trace-9120"></a>
<a id="trace-9122"></a>
- 30.25s–38.75s (×20), actor 5, squad 0 (trace 8455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 8379. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1542941477005524, 'next_transition': 8598}.
<a id="trace-8816"></a>
- 35.50s–35.50s (×1), actor 8, squad 1 (trace 8816): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 8733. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.075873453782637, 'next_transition': 9105}.
<a id="trace-8817"></a>
- 35.50s–35.50s (×1), actor 8, squad 1 (trace 8817): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 8733. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.075873453782637, 'next_transition': 9105}.
<a id="trace-9105"></a>
- 38.60s–38.60s (×1), actor 8, squad 1 (trace 9105): NeedSupport. Knowledge: actor memory at 35.00s, trace 8733. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.924522739732158, 'next_transition': 10625}.
<a id="trace-9146"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 9146): NeedSupport. Knowledge: actor memory at 35.00s, trace 8725. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23624829093464284, 'next_transition': 9161}.
<a id="trace-9161"></a>
<a id="trace-9163"></a>
<a id="trace-9191"></a>
<a id="trace-9193"></a>
- 39.25s–39.75s (×4), actor 5, squad 0 (trace 9161): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8730. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39446106311489176, 'next_transition': 9191}.
<a id="trace-627"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 627): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9201"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 9201): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741306 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 9201. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4755201155831752, 'next_transition': 9299}.
<a id="trace-9202"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 9202): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741306 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 9202. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4755201155831752, 'next_transition': 9299}.
<a id="trace-9299"></a>
<a id="trace-9301"></a>
<a id="trace-9350"></a>
<a id="trace-9352"></a>
<a id="trace-9395"></a>
<a id="trace-9397"></a>
- 40.25s–41.25s (×6), actor 5, squad 0 (trace 9299): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 9216. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38286893884696976, 'next_transition': 9350}.
<a id="trace-9475"></a>
- 42.15s–42.15s (×1), actor 0, squad 0 (trace 9475): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 9211. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.999999999998899e-05, 'next_transition': 9749}.
<a id="trace-9749"></a>
<a id="trace-9751"></a>
<a id="trace-9781"></a>
<a id="trace-9783"></a>
<a id="trace-9814"></a>
<a id="trace-9816"></a>
<a id="trace-9899"></a>
<a id="trace-9901"></a>
- 42.25s–44.75s (×8), actor 5, squad 0 (trace 9749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 9216. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.008287500000000003, 'next_transition': 9781}.
<a id="trace-9909"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 9909): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 9211. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10524}.
<a id="trace-9910"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 9910): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 9211. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10524}.
<a id="trace-10524"></a>
<a id="trace-10526"></a>
<a id="trace-10549"></a>
<a id="trace-10551"></a>
<a id="trace-10586"></a>
<a id="trace-10588"></a>
<a id="trace-10615"></a>
<a id="trace-10617"></a>
<a id="trace-10699"></a>
<a id="trace-10701"></a>
- 45.25s–47.25s (×10), actor 5, squad 0 (trace 10524): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10451. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10549}.
<a id="trace-10625"></a>
- 46.80s–46.80s (×1), actor 8, squad 1 (trace 10625): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 10454. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.151117809833694, 'next_transition': 12017}.
<a id="trace-10626"></a>
- 46.80s–46.80s (×1), actor 8, squad 1 (trace 10626): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 10454. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.151117809833694, 'next_transition': 12017}.
<a id="trace-10799"></a>
- 48.50s–48.50s (×1), actor 0, squad 0 (trace 10799): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 45.00s, trace 10446. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15334902787606333, 'next_transition': 11250}.
<a id="trace-10800"></a>
- 48.50s–48.50s (×1), actor 0, squad 0 (trace 10800): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 10446. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15334902787606333, 'next_transition': 11250}.
<a id="trace-11250"></a>
<a id="trace-11252"></a>
<a id="trace-11313"></a>
<a id="trace-11315"></a>
<a id="trace-11362"></a>
<a id="trace-11364"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11547"></a>
<a id="trace-11549"></a>
<a id="trace-11619"></a>
<a id="trace-11621"></a>
<a id="trace-11673"></a>
<a id="trace-11675"></a>
<a id="trace-11728"></a>
<a id="trace-11730"></a>
<a id="trace-11771"></a>
<a id="trace-11773"></a>
<a id="trace-11793"></a>
<a id="trace-11795"></a>
<a id="trace-11844"></a>
<a id="trace-11846"></a>
<a id="trace-11874"></a>
<a id="trace-11876"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11986"></a>
<a id="trace-11988"></a>
<a id="trace-12028"></a>
<a id="trace-12030"></a>
<a id="trace-12218"></a>
<a id="trace-12220"></a>
<a id="trace-12290"></a>
<a id="trace-12292"></a>
<a id="trace-12398"></a>
<a id="trace-12400"></a>
<a id="trace-12507"></a>
<a id="trace-12509"></a>
<a id="trace-12665"></a>
<a id="trace-12667"></a>
<a id="trace-12786"></a>
<a id="trace-12788"></a>
<a id="trace-12850"></a>
<a id="trace-12852"></a>
<a id="trace-12868"></a>
<a id="trace-12870"></a>
<a id="trace-12895"></a>
<a id="trace-12897"></a>
<a id="trace-12916"></a>
<a id="trace-12918"></a>
<a id="trace-12931"></a>
<a id="trace-12933"></a>
- 48.75s–63.25s (×52), actor 5, squad 0 (trace 11250): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10451. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19746466185991146, 'next_transition': 11313}.
<a id="trace-12017"></a>
- 56.20s–56.20s (×1), actor 8, squad 1 (trace 12017): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 11895. Next observer evidence: None.
<a id="trace-12037"></a>
- 56.25s–56.25s (×1), actor 8, squad 1 (trace 12037): MoveTactically. Knowledge: actor memory at 55.00s, trace 11895. Next observer evidence: None.
<a id="trace-12038"></a>
- 56.25s–56.25s (×1), actor 8, squad 1 (trace 12038): received platoon directive. Knowledge: actor memory at 55.00s, trace 11895. Next observer evidence: None.
<a id="trace-12046"></a>
- 56.30s–56.30s (×1), actor 8, squad 1 (trace 12046): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 11895. Next observer evidence: {'until': 68.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.032888438112982, 'next_transition': 13476}.
<a id="trace-12942"></a>
- 63.45s–63.45s (×1), actor 1, squad 0 (trace 12942): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 12691. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12351305454649696, 'next_transition': 12949}.
<a id="trace-12949"></a>
<a id="trace-12951"></a>
- 63.75s–63.75s (×2), actor 5, squad 0 (trace 12949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 12695. Next observer evidence: {'until': 63.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17993866449997334, 'next_transition': 12959}.
<a id="trace-12959"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 12959): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 12691. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24416728101976803, 'next_transition': 13107}.
<a id="trace-12964"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 12964): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 12691. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24416728101976803, 'next_transition': 13107}.
<a id="trace-12965"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 12965): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 12691. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24416728101976803, 'next_transition': 13107}.
<a id="trace-13107"></a>
<a id="trace-13109"></a>
<a id="trace-13132"></a>
<a id="trace-13134"></a>
<a id="trace-13219"></a>
<a id="trace-13237"></a>
<a id="trace-13263"></a>
<a id="trace-13282"></a>
<a id="trace-13303"></a>
- 64.25s–67.25s (×9), actor 5, squad 0 (trace 13107): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 12695. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26474482074765754, 'next_transition': 13132}.
<a id="trace-13318"></a>
- 67.55s–67.55s (×1), actor 1, squad 0 (trace 13318): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 13145. Next observer evidence: {'until': 67.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25199748407509215, 'next_transition': 13438}.
<a id="trace-13319"></a>
- 67.55s–67.55s (×1), actor 1, squad 0 (trace 13319): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 13145. Next observer evidence: {'until': 67.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25199748407509215, 'next_transition': 13438}.
<a id="trace-13438"></a>
<a id="trace-13458"></a>
<a id="trace-13543"></a>
<a id="trace-13567"></a>
<a id="trace-13587"></a>
<a id="trace-13589"></a>
<a id="trace-13681"></a>
<a id="trace-13683"></a>
<a id="trace-13701"></a>
<a id="trace-13703"></a>
<a id="trace-13724"></a>
<a id="trace-13726"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13763"></a>
<a id="trace-13765"></a>
<a id="trace-13801"></a>
<a id="trace-13803"></a>
<a id="trace-13853"></a>
<a id="trace-13855"></a>
<a id="trace-13935"></a>
<a id="trace-13937"></a>
<a id="trace-13970"></a>
<a id="trace-13972"></a>
<a id="trace-13986"></a>
<a id="trace-13988"></a>
<a id="trace-14011"></a>
<a id="trace-14013"></a>
<a id="trace-14028"></a>
<a id="trace-14030"></a>
<a id="trace-14054"></a>
<a id="trace-14056"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14082"></a>
<a id="trace-14084"></a>
- 67.75s–79.25s (×36), actor 5, squad 0 (trace 13438): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13148. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560048088969643, 'next_transition': 13458}.
<a id="trace-13476"></a>
- 68.50s–68.50s (×1), actor 8, squad 1 (trace 13476): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 13151. Next observer evidence: None.
<a id="trace-13479"></a>
- 68.55s–68.55s (×1), actor 8, squad 1 (trace 13479): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 13151. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.683121005946942, 'next_transition': 14298}.
<a id="trace-14093"></a>
- 79.45s–79.45s (×1), actor 1, squad 0 (trace 14093): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 13862. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14200}.
<a id="trace-14094"></a>
- 79.45s–79.45s (×1), actor 1, squad 0 (trace 14094): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 13862. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14200}.
<a id="trace-14200"></a>
<a id="trace-14202"></a>
<a id="trace-14286"></a>
<a id="trace-14288"></a>
<a id="trace-14392"></a>
<a id="trace-14394"></a>
<a id="trace-14433"></a>
<a id="trace-14435"></a>
<a id="trace-14466"></a>
<a id="trace-14468"></a>
<a id="trace-14483"></a>
<a id="trace-14485"></a>
<a id="trace-14528"></a>
<a id="trace-14530"></a>
<a id="trace-14540"></a>
<a id="trace-14542"></a>
<a id="trace-14624"></a>
<a id="trace-14626"></a>
<a id="trace-14637"></a>
<a id="trace-14639"></a>
<a id="trace-14662"></a>
<a id="trace-14664"></a>
<a id="trace-14700"></a>
<a id="trace-14702"></a>
<a id="trace-14771"></a>
<a id="trace-14773"></a>
<a id="trace-14799"></a>
<a id="trace-14801"></a>
<a id="trace-14810"></a>
<a id="trace-14812"></a>
<a id="trace-14842"></a>
<a id="trace-14844"></a>
<a id="trace-14863"></a>
<a id="trace-14865"></a>
<a id="trace-14950"></a>
<a id="trace-14952"></a>
<a id="trace-14963"></a>
<a id="trace-14965"></a>
<a id="trace-14982"></a>
<a id="trace-14984"></a>
<a id="trace-14991"></a>
<a id="trace-14993"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15028"></a>
<a id="trace-15030"></a>
- 79.75s–92.75s (×46), actor 5, squad 0 (trace 14200): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 13864. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14286}.
<a id="trace-14298"></a>
- 80.50s–80.50s (×1), actor 8, squad 1 (trace 14298): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 14213. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1701018360424133, 'next_transition': 1252}.
<a id="trace-1252"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (events line 1252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14422"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 14422): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.959346 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 14422. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.803993957384515, 'next_transition': 14707}.
<a id="trace-14423"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 14423): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.959346 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 14423. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.803993957384515, 'next_transition': 14707}.
<a id="trace-14707"></a>
- 87.25s–87.25s (×1), actor 8, squad 1 (trace 14707): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 14557. Next observer evidence: {'until': 96, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.526288132147214, 'next_transition': 15284}.
<a id="trace-14708"></a>
- 87.25s–87.25s (×1), actor 8, squad 1 (trace 14708): MoveTactically. Knowledge: actor memory at 85.00s, trace 14557. Next observer evidence: {'until': 96, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.526288132147214, 'next_transition': 15284}.
<a id="trace-14709"></a>
- 87.25s–87.25s (×1), actor 8, squad 1 (trace 14709): . Knowledge: actor memory at 85.00s, trace 14557. Next observer evidence: {'until': 96, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.526288132147214, 'next_transition': 15284}.
<a id="trace-15045"></a>
- 93.20s–93.20s (×1), actor 1, squad 0 (trace 15045): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 14873. Next observer evidence: None.
<a id="trace-15046"></a>
- 93.20s–93.20s (×1), actor 1, squad 0 (trace 15046): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 14873. Next observer evidence: None.
<a id="trace-15106"></a>
<a id="trace-15108"></a>
<a id="trace-15164"></a>
<a id="trace-15166"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15374"></a>
<a id="trace-15376"></a>
<a id="trace-15397"></a>
<a id="trace-15399"></a>
<a id="trace-15414"></a>
<a id="trace-15416"></a>
<a id="trace-15441"></a>
<a id="trace-15443"></a>
<a id="trace-15465"></a>
<a id="trace-15467"></a>
<a id="trace-15476"></a>
<a id="trace-15478"></a>
<a id="trace-15553"></a>
<a id="trace-15555"></a>
<a id="trace-15580"></a>
<a id="trace-15582"></a>
<a id="trace-15614"></a>
<a id="trace-15616"></a>
<a id="trace-15631"></a>
<a id="trace-15633"></a>
<a id="trace-15649"></a>
<a id="trace-15656"></a>
<a id="trace-15658"></a>
<a id="trace-15681"></a>
<a id="trace-15683"></a>
<a id="trace-15696"></a>
<a id="trace-15698"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15840"></a>
<a id="trace-15842"></a>
<a id="trace-15858"></a>
<a id="trace-15860"></a>
<a id="trace-15867"></a>
<a id="trace-15869"></a>
<a id="trace-15889"></a>
<a id="trace-15891"></a>
<a id="trace-15901"></a>
<a id="trace-15903"></a>
<a id="trace-15916"></a>
<a id="trace-15918"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
- 93.25s–108.75s (×49), actor 5, squad 0 (trace 15106): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14875. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4237582198469871, 'next_transition': 15164}.
<a id="trace-15284"></a>
- 96.10s–96.10s (×1), actor 8, squad 1 (trace 15284): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 15178. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.915816127988508, 'next_transition': 15704}.
<a id="trace-15704"></a>
- 104.80s–104.80s (×1), actor 8, squad 1 (trace 15704): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 15489. Next observer evidence: {'until': 114.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 12.000016234044228, 'next_transition': 16171}.
<a id="trace-1402"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1402): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15946}.
<a id="trace-15934"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 15934): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 15934. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15946}.
<a id="trace-15946"></a>
<a id="trace-15948"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-16036"></a>
<a id="trace-16038"></a>
<a id="trace-16048"></a>
<a id="trace-16050"></a>
<a id="trace-16070"></a>
<a id="trace-16072"></a>
<a id="trace-16082"></a>
<a id="trace-16084"></a>
<a id="trace-16102"></a>
<a id="trace-16104"></a>
<a id="trace-16114"></a>
<a id="trace-16116"></a>
<a id="trace-16130"></a>
<a id="trace-16132"></a>
<a id="trace-16141"></a>
<a id="trace-16143"></a>
<a id="trace-16160"></a>
<a id="trace-16258"></a>
- 109.25s–114.75s (×22), actor 5, squad 0 (trace 15946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 15934. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15961}.
<a id="trace-16171"></a>
- 114.50s–114.50s (×1), actor 9, squad 1 (trace 16171): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 15975. Next observer evidence: {'until': 119.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.750005176849944, 'next_transition': 16610}.
<a id="trace-16285"></a>
- 115.05s–115.05s (×1), actor 1, squad 0 (trace 16285): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 115.00s, trace 16269. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16341}.
<a id="trace-16341"></a>
<a id="trace-16351"></a>
<a id="trace-16353"></a>
- 115.25s–115.75s (×3), actor 5, squad 0 (trace 16341): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16271. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16351}.
<a id="trace-16376"></a>
- 116.05s–116.05s (×1), actor 1, squad 0 (trace 16376): MoveTactically. Knowledge: actor memory at 115.00s, trace 16269. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16399}.
<a id="trace-16377"></a>
- 116.05s–116.05s (×1), actor 1, squad 0 (trace 16377): received platoon directive. Knowledge: actor memory at 115.00s, trace 16269. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16399}.
<a id="trace-16399"></a>
<a id="trace-16401"></a>
- 116.25s–116.25s (×2), actor 5, squad 0 (trace 16399): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16271. Next observer evidence: {'until': 117, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16440}.
<a id="trace-16440"></a>
- 117.05s–117.05s (×1), actor 1, squad 0 (trace 16440): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 16269. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16507}.
<a id="trace-16507"></a>
<a id="trace-16509"></a>
<a id="trace-16556"></a>
<a id="trace-16558"></a>
<a id="trace-16568"></a>
<a id="trace-16570"></a>
<a id="trace-16590"></a>
<a id="trace-16592"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16736"></a>
<a id="trace-16738"></a>
<a id="trace-16753"></a>
<a id="trace-16755"></a>
<a id="trace-17215"></a>
<a id="trace-17217"></a>
<a id="trace-17460"></a>
<a id="trace-17462"></a>
<a id="trace-17596"></a>
<a id="trace-17598"></a>
<a id="trace-17628"></a>
<a id="trace-17630"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17721"></a>
<a id="trace-17723"></a>
<a id="trace-17881"></a>
<a id="trace-17883"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17925"></a>
<a id="trace-17927"></a>
- 117.25s–126.25s (×32), actor 5, squad 0 (trace 16507): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16271. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2835023731823059, 'next_transition': 16556}.
<a id="trace-16610"></a>
- 119.95s–119.95s (×1), actor 9, squad 1 (trace 16610): current contact unknown for 10 s. Knowledge: actor memory at 115.00s, trace 16274. Next observer evidence: {'until': 120.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8606449958706865, 'next_transition': 16765}.
<a id="trace-16765"></a>
- 120.85s–120.85s (×1), actor 9, squad 1 (trace 16765): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 16669. Next observer evidence: None.
<a id="trace-16766"></a>
<a id="trace-16874"></a>
<a id="trace-16980"></a>
<a id="trace-17091"></a>
<a id="trace-17222"></a>
<a id="trace-17344"></a>
<a id="trace-17467"></a>
- 120.85s–121.75s (×7), actor 9, squad 1 (trace 16766): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 16669. Next observer evidence: None.
<a id="trace-17776"></a>
- 125.05s–125.05s (×1), actor 9, squad 1 (trace 17776): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 17763. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.17350712307315, 'next_transition': 18595}.
<a id="trace-17777"></a>
- 125.05s–125.05s (×1), actor 9, squad 1 (trace 17777): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 17763. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.17350712307315, 'next_transition': 18595}.
<a id="trace-17948"></a>
- 126.85s–126.85s (×1), actor 1, squad 0 (trace 17948): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 17758. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17966}.
<a id="trace-17966"></a>
<a id="trace-17968"></a>
- 127.25s–127.25s (×2), actor 5, squad 0 (trace 17966): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17760. Next observer evidence: {'until': 127.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17982}.
<a id="trace-17982"></a>
- 127.45s–127.45s (×1), actor 1, squad 0 (trace 17982): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 17758. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18094}.
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18115"></a>
<a id="trace-18117"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18164"></a>
<a id="trace-18166"></a>
<a id="trace-18179"></a>
<a id="trace-18181"></a>
<a id="trace-18264"></a>
<a id="trace-18266"></a>
<a id="trace-18279"></a>
<a id="trace-18281"></a>
<a id="trace-18310"></a>
<a id="trace-18312"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
<a id="trace-18361"></a>
<a id="trace-18363"></a>
<a id="trace-18380"></a>
<a id="trace-18382"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18537"></a>
<a id="trace-18539"></a>
<a id="trace-18554"></a>
<a id="trace-18556"></a>
<a id="trace-18573"></a>
<a id="trace-18575"></a>
<a id="trace-18586"></a>
<a id="trace-18588"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
- 127.75s–138.80s (×36), actor 5, squad 0 (trace 18094): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17760. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18115}.
<a id="trace-18595"></a>
- 137.90s–137.90s (×1), actor 9, squad 1 (trace 18595): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 18434. Next observer evidence: {'until': 149, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19388}.
<a id="trace-18617"></a>
- 137.90s–137.90s (×1), actor 9, squad 1 (trace 18617): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 18434. Next observer evidence: {'until': 149, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19388}.
<a id="trace-18655"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 18655): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 18429. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3464997785222958, 'next_transition': 18744}.
<a id="trace-18744"></a>
<a id="trace-18746"></a>
<a id="trace-18854"></a>
<a id="trace-18856"></a>
<a id="trace-18871"></a>
<a id="trace-18873"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-18942"></a>
<a id="trace-18944"></a>
- 139.80s–143.30s (×10), actor 5, squad 0 (trace 18744): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 18431. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44103505148417865, 'next_transition': 18854}.
<a id="trace-18950"></a>
- 143.65s–143.65s (×1), actor 1, squad 0 (trace 18950): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 18757. Next observer evidence: {'until': 144.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19033}.
<a id="trace-19033"></a>
<a id="trace-19035"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
- 144.30s–145.80s (×4), actor 5, squad 0 (trace 19033): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 18759. Next observer evidence: {'until': 145.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4805300184397012, 'next_transition': 19144}.
<a id="trace-19154"></a>
- 145.85s–145.85s (×1), actor 1, squad 0 (trace 19154): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 19062. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3220425587856938, 'next_transition': 19293}.
<a id="trace-19155"></a>
- 145.85s–145.85s (×1), actor 1, squad 0 (trace 19155): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 19062. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3220425587856938, 'next_transition': 19293}.
<a id="trace-19293"></a>
<a id="trace-19295"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19334"></a>
<a id="trace-19336"></a>
<a id="trace-19357"></a>
<a id="trace-19359"></a>
<a id="trace-19378"></a>
<a id="trace-19380"></a>
<a id="trace-19397"></a>
<a id="trace-19399"></a>
<a id="trace-19416"></a>
<a id="trace-19418"></a>
- 146.80s–149.80s (×14), actor 5, squad 0 (trace 19293): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 19064. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199280148448644, 'next_transition': 19321}.
<a id="trace-19388"></a>
- 149.00s–149.00s (×1), actor 9, squad 1 (trace 19388): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 19067. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1722}.
<a id="trace-19441"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19441): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19443"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19443): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19715"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19715): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19716"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19716): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19814"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19814): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19815"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 19815): Assaulting. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06474000049428529, 'next_transition': 19882}.
<a id="trace-19882"></a>
<a id="trace-19884"></a>
- 150.30s–150.30s (×2), actor 5, squad 0 (trace 19882): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19425. Next observer evidence: {'until': 151.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24148000119264532, 'next_transition': 20058}.
<a id="trace-19890"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 19890): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 151.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24148000119264532, 'next_transition': 20058}.
<a id="trace-19894"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 19894): MoveTactically. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 151.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24148000119264532, 'next_transition': 20058}.
<a id="trace-19895"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 19895): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 151.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24148000119264532, 'next_transition': 20058}.
<a id="trace-1722"></a>
- 150.40s–150.40s (×1), actor 5, squad 1 (events line 1722): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20000"></a>
- 150.40s–150.40s (×1), actor 5, squad 1 (trace 20000): renew committed intent (75 s lifetime). Knowledge: actor memory at 150.40s, trace 20000. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20389}.
<a id="trace-20058"></a>
<a id="trace-20060"></a>
<a id="trace-20089"></a>
<a id="trace-20091"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20153"></a>
<a id="trace-20155"></a>
- 151.80s–153.80s (×10), actor 5, squad 0 (trace 20058): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.40s, trace 20000. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01302000015361004, 'next_transition': 20089}.
<a id="trace-20168"></a>
- 154.20s–154.20s (×1), actor 1, squad 0 (trace 20168): ReactToContact: cover and return fire. Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.029734888599084762, 'next_transition': 20295}.
<a id="trace-20169"></a>
- 154.20s–154.20s (×1), actor 1, squad 0 (trace 20169): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 19423. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.029734888599084762, 'next_transition': 20295}.
<a id="trace-20295"></a>
<a id="trace-20297"></a>
<a id="trace-20379"></a>
<a id="trace-20381"></a>
<a id="trace-20429"></a>
<a id="trace-20431"></a>
<a id="trace-20454"></a>
<a id="trace-20456"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20498"></a>
<a id="trace-20500"></a>
<a id="trace-20516"></a>
<a id="trace-20518"></a>
- 154.80s–157.80s (×14), actor 5, squad 0 (trace 20295): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.40s, trace 20000. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24164464902000216, 'next_transition': 20379}.
<a id="trace-20389"></a>
- 155.35s–155.35s (×1), actor 9, squad 1 (trace 20389): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 20317. Next observer evidence: {'until': 158.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.292512345969735, 'next_transition': 20547}.
<a id="trace-20390"></a>
- 155.35s–155.35s (×1), actor 9, squad 1 (trace 20390): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 20317. Next observer evidence: {'until': 158.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.292512345969735, 'next_transition': 20547}.
<a id="trace-20529"></a>
- 158.20s–158.20s (×1), actor 1, squad 0 (trace 20529): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 155.00s, trace 20312. Next observer evidence: None.
<a id="trace-20536"></a>
<a id="trace-20538"></a>
<a id="trace-20603"></a>
<a id="trace-20605"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20790"></a>
<a id="trace-20792"></a>
<a id="trace-20819"></a>
<a id="trace-20821"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
- 158.30s–162.30s (×16), actor 5, squad 0 (trace 20536): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 20314. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05282102990287056, 'next_transition': 20603}.
<a id="trace-20547"></a>
- 158.65s–158.65s (×1), actor 9, squad 1 (trace 20547): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 155.00s, trace 20317. Next observer evidence: {'until': 178.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22161}.
<a id="trace-20548"></a>
- 158.65s–158.65s (×1), actor 9, squad 1 (trace 20548): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 20317. Next observer evidence: {'until': 178.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22161}.
<a id="trace-20871"></a>
- 162.60s–162.60s (×1), actor 1, squad 0 (trace 20871): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21258}.
<a id="trace-21143"></a>
- 162.60s–162.60s (×1), actor 1, squad 0 (trace 21143): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21258}.
<a id="trace-21144"></a>
- 162.60s–162.60s (×1), actor 1, squad 0 (trace 21144): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21258}.
<a id="trace-21242"></a>
- 162.60s–162.60s (×1), actor 1, squad 0 (trace 21242): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21258}.
<a id="trace-21243"></a>
- 162.60s–162.60s (×1), actor 1, squad 0 (trace 21243): Assaulting. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21258}.
<a id="trace-21258"></a>
<a id="trace-21260"></a>
- 162.80s–162.80s (×2), actor 5, squad 0 (trace 21258): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20684. Next observer evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05777999999999963, 'next_transition': 21270}.
<a id="trace-21270"></a>
- 163.15s–163.15s (×1), actor 1, squad 0 (trace 21270): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03890000000000029, 'next_transition': 21285}.
<a id="trace-21272"></a>
- 163.15s–163.15s (×1), actor 1, squad 0 (trace 21272): NeedSupport. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03890000000000029, 'next_transition': 21285}.
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
- 163.30s–163.80s (×4), actor 5, squad 0 (trace 21285): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20684. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21296}.
<a id="trace-21313"></a>
- 164.15s–164.15s (×1), actor 1, squad 0 (trace 21313): Reorganise: completed/failed drill. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21369}.
<a id="trace-21316"></a>
- 164.15s–164.15s (×1), actor 1, squad 0 (trace 21316): MoveTactically. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21369}.
<a id="trace-21317"></a>
- 164.15s–164.15s (×1), actor 1, squad 0 (trace 21317): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21369}.
<a id="trace-21369"></a>
<a id="trace-21371"></a>
- 164.30s–164.30s (×2), actor 5, squad 0 (trace 21369): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20684. Next observer evidence: {'until': 164.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21377}.
<a id="trace-21377"></a>
- 164.40s–164.40s (×1), actor 1, squad 0 (trace 21377): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 20682. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750460310733844, 'next_transition': 21456}.
<a id="trace-21456"></a>
<a id="trace-21458"></a>
<a id="trace-21538"></a>
<a id="trace-21540"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21572"></a>
<a id="trace-21574"></a>
<a id="trace-21587"></a>
<a id="trace-21589"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21667"></a>
<a id="trace-21669"></a>
- 164.80s–168.80s (×16), actor 5, squad 0 (trace 21456): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20684. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.70872021941607, 'next_transition': 21538}.
<a id="trace-21678"></a>
- 169.25s–169.25s (×1), actor 1, squad 0 (trace 21678): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 21469. Next observer evidence: None.
<a id="trace-21737"></a>
<a id="trace-21739"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21850"></a>
<a id="trace-21852"></a>
<a id="trace-21868"></a>
<a id="trace-21870"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21928"></a>
<a id="trace-21930"></a>
<a id="trace-21944"></a>
<a id="trace-21946"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-21985"></a>
<a id="trace-21987"></a>
<a id="trace-22059"></a>
<a id="trace-22061"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22105"></a>
<a id="trace-22107"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
- 169.30s–177.30s (×30), actor 5, squad 0 (trace 21737): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 21470. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3064217668154905, 'next_transition': 21835}.
<a id="trace-1928"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 1928): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246552192001634, 'next_transition': 22153}.
<a id="trace-22141"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 22141): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 22141. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246552192001634, 'next_transition': 22153}.
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22166"></a>
<a id="trace-22168"></a>
<a id="trace-22191"></a>
<a id="trace-22193"></a>
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22287"></a>
<a id="trace-22289"></a>
<a id="trace-22306"></a>
<a id="trace-22308"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22329"></a>
<a id="trace-22331"></a>
- 178.30s–181.80s (×16), actor 5, squad 0 (trace 22153): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 22141. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3387287475483423, 'next_transition': 22166}.
<a id="trace-22161"></a>
- 178.70s–178.70s (×1), actor 9, squad 1 (trace 22161): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 175.00s, trace 21997. Next observer evidence: {'until': 208.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2451}.
<a id="trace-22355"></a>
- 182.65s–182.65s (×1), actor 1, squad 0 (trace 22355): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 180.00s, trace 22212. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08821635633486542, 'next_transition': 22427}.
<a id="trace-22427"></a>
<a id="trace-22429"></a>
<a id="trace-22443"></a>
<a id="trace-22445"></a>
<a id="trace-22454"></a>
<a id="trace-22456"></a>
- 182.80s–183.80s (×6), actor 5, squad 0 (trace 22427): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22213. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18109010333256817, 'next_transition': 22443}.
<a id="trace-22469"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 22469): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 22212. Next observer evidence: None.
<a id="trace-22470"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 22470): MoveTactically. Knowledge: actor memory at 180.00s, trace 22212. Next observer evidence: None.
<a id="trace-22471"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 22471): . Knowledge: actor memory at 180.00s, trace 22212. Next observer evidence: None.
<a id="trace-22531"></a>
<a id="trace-22533"></a>
- 184.30s–184.30s (×2), actor 5, squad 0 (trace 22531): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22213. Next observer evidence: {'until': 184.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18123063372399284, 'next_transition': 22549}.
<a id="trace-22549"></a>
- 184.75s–184.75s (×1), actor 1, squad 0 (trace 22549): received platoon directive. Knowledge: actor memory at 180.00s, trace 22212. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0617653331972954, 'next_transition': 22678}.
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22715"></a>
<a id="trace-22717"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
- 185.30s–186.80s (×8), actor 5, squad 0 (trace 22678): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22615. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35829655711685643, 'next_transition': 22695}.
<a id="trace-22748"></a>
- 187.25s–187.25s (×1), actor 1, squad 0 (trace 22748): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 22614. Next observer evidence: None.
<a id="trace-22749"></a>
- 187.25s–187.25s (×1), actor 1, squad 0 (trace 22749): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 185.00s, trace 22614. Next observer evidence: None.
<a id="trace-22902"></a>
<a id="trace-22904"></a>
<a id="trace-22962"></a>
<a id="trace-22964"></a>
<a id="trace-22982"></a>
<a id="trace-22984"></a>
<a id="trace-22995"></a>
<a id="trace-22997"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23087"></a>
<a id="trace-23089"></a>
- 187.30s–190.80s (×12), actor 5, squad 0 (trace 22902): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22615. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1850625949537346, 'next_transition': 22962}.
<a id="trace-23100"></a>
- 190.95s–190.95s (×1), actor 1, squad 0 (trace 23100): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 190.00s, trace 23004. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417887828389563, 'next_transition': 23112}.
<a id="trace-23112"></a>
<a id="trace-23114"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23171"></a>
<a id="trace-23173"></a>
<a id="trace-23189"></a>
<a id="trace-23191"></a>
<a id="trace-23206"></a>
<a id="trace-23208"></a>
<a id="trace-23322"></a>
<a id="trace-23324"></a>
<a id="trace-23340"></a>
<a id="trace-23342"></a>
<a id="trace-23364"></a>
<a id="trace-23366"></a>
<a id="trace-23381"></a>
<a id="trace-23383"></a>
- 191.30s–196.80s (×18), actor 5, squad 0 (trace 23112): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 23005. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3051234048740517, 'next_transition': 23145}.
<a id="trace-23393"></a>
- 197.05s–197.05s (×1), actor 1, squad 0 (trace 23393): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 195.00s, trace 23252. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300000362103165, 'next_transition': 23418}.
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23470"></a>
<a id="trace-23472"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
<a id="trace-23572"></a>
<a id="trace-23574"></a>
<a id="trace-23599"></a>
<a id="trace-23601"></a>
- 197.80s–201.80s (×12), actor 5, squad 0 (trace 23418): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 23253. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3184061433293157, 'next_transition': 23445}.
<a id="trace-23612"></a>
- 202.25s–202.25s (×1), actor 1, squad 0 (trace 23612): NeedSupport. Knowledge: actor memory at 200.00s, trace 23490. Next observer evidence: None.
<a id="trace-23621"></a>
<a id="trace-23623"></a>
<a id="trace-23638"></a>
<a id="trace-23640"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23676"></a>
<a id="trace-23678"></a>
<a id="trace-23701"></a>
<a id="trace-23703"></a>
<a id="trace-23716"></a>
<a id="trace-23718"></a>
<a id="trace-23796"></a>
<a id="trace-23798"></a>
- 202.30s–205.30s (×14), actor 5, squad 0 (trace 23621): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 23491. Next observer evidence: {'until': 202.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.02127013986789959, 'next_transition': 23638}.
<a id="trace-2302"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (events line 2302): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23806"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 23806): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.636726 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 23806. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6312455923977841, 'next_transition': 23847}.
<a id="trace-23807"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 23807): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.636726 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 23807. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6312455923977841, 'next_transition': 23847}.
<a id="trace-23847"></a>
<a id="trace-23849"></a>
<a id="trace-23879"></a>
<a id="trace-23881"></a>
<a id="trace-23914"></a>
<a id="trace-23916"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-23977"></a>
<a id="trace-23979"></a>
<a id="trace-24001"></a>
<a id="trace-24003"></a>
<a id="trace-24036"></a>
<a id="trace-24038"></a>
<a id="trace-24107"></a>
<a id="trace-24109"></a>
<a id="trace-24133"></a>
<a id="trace-24135"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24218"></a>
<a id="trace-24228"></a>
<a id="trace-24297"></a>
<a id="trace-24319"></a>
<a id="trace-24339"></a>
<a id="trace-24368"></a>
<a id="trace-24392"></a>
<a id="trace-24403"></a>
<a id="trace-24472"></a>
<a id="trace-24492"></a>
<a id="trace-24502"></a>
<a id="trace-24526"></a>
<a id="trace-24542"></a>
<a id="trace-24566"></a>
<a id="trace-24576"></a>
<a id="trace-24646"></a>
<a id="trace-24656"></a>
<a id="trace-24668"></a>
<a id="trace-24692"></a>
<a id="trace-24703"></a>
<a id="trace-24721"></a>
<a id="trace-24741"></a>
<a id="trace-24752"></a>
<a id="trace-24820"></a>
<a id="trace-24831"></a>
<a id="trace-24844"></a>
<a id="trace-24855"></a>
<a id="trace-24869"></a>
<a id="trace-24882"></a>
<a id="trace-24898"></a>
<a id="trace-24907"></a>
<a id="trace-24921"></a>
<a id="trace-24930"></a>
<a id="trace-24998"></a>
<a id="trace-25021"></a>
<a id="trace-25030"></a>
<a id="trace-25044"></a>
<a id="trace-25072"></a>
<a id="trace-25081"></a>
<a id="trace-25095"></a>
<a id="trace-25106"></a>
<a id="trace-25174"></a>
<a id="trace-25183"></a>
<a id="trace-25196"></a>
<a id="trace-25219"></a>
<a id="trace-25227"></a>
<a id="trace-25240"></a>
<a id="trace-25251"></a>
<a id="trace-25265"></a>
<a id="trace-25276"></a>
<a id="trace-25363"></a>
<a id="trace-25371"></a>
<a id="trace-25395"></a>
<a id="trace-25410"></a>
<a id="trace-25420"></a>
<a id="trace-25446"></a>
<a id="trace-25514"></a>
<a id="trace-25545"></a>
<a id="trace-25570"></a>
<a id="trace-25586"></a>
<a id="trace-25598"></a>
<a id="trace-25613"></a>
<a id="trace-25621"></a>
<a id="trace-25696"></a>
<a id="trace-25708"></a>
<a id="trace-25731"></a>
<a id="trace-25752"></a>
<a id="trace-25760"></a>
<a id="trace-25773"></a>
<a id="trace-25865"></a>
<a id="trace-25885"></a>
<a id="trace-25914"></a>
<a id="trace-25933"></a>
<a id="trace-25942"></a>
<a id="trace-25954"></a>
<a id="trace-25963"></a>
<a id="trace-26031"></a>
<a id="trace-26039"></a>
<a id="trace-26051"></a>
<a id="trace-26093"></a>
<a id="trace-26112"></a>
<a id="trace-26185"></a>
<a id="trace-26226"></a>
<a id="trace-26248"></a>
<a id="trace-26267"></a>
<a id="trace-26379"></a>
<a id="trace-26478"></a>
<a id="trace-26510"></a>
<a id="trace-26529"></a>
<a id="trace-26547"></a>
<a id="trace-26619"></a>
<a id="trace-26638"></a>
<a id="trace-26656"></a>
<a id="trace-26690"></a>
<a id="trace-26713"></a>
<a id="trace-26802"></a>
<a id="trace-26820"></a>
<a id="trace-26841"></a>
<a id="trace-26934"></a>
<a id="trace-27021"></a>
<a id="trace-27121"></a>
<a id="trace-27144"></a>
<a id="trace-27239"></a>
<a id="trace-27273"></a>
<a id="trace-27295"></a>
<a id="trace-27322"></a>
<a id="trace-27341"></a>
<a id="trace-27413"></a>
<a id="trace-27463"></a>
<a id="trace-27499"></a>
<a id="trace-27594"></a>
<a id="trace-27611"></a>
<a id="trace-27630"></a>
<a id="trace-27654"></a>
<a id="trace-27675"></a>
<a id="trace-27756"></a>
<a id="trace-27777"></a>
<a id="trace-27862"></a>
<a id="trace-27888"></a>
<a id="trace-27908"></a>
<a id="trace-27985"></a>
<a id="trace-28018"></a>
<a id="trace-28127"></a>
<a id="trace-28223"></a>
<a id="trace-28248"></a>
<a id="trace-28277"></a>
<a id="trace-28299"></a>
<a id="trace-28396"></a>
<a id="trace-28412"></a>
<a id="trace-28431"></a>
<a id="trace-28448"></a>
<a id="trace-28518"></a>
<a id="trace-28532"></a>
<a id="trace-28553"></a>
<a id="trace-28643"></a>
<a id="trace-28670"></a>
<a id="trace-28749"></a>
<a id="trace-28925"></a>
<a id="trace-29022"></a>
<a id="trace-29049"></a>
<a id="trace-29136"></a>
<a id="trace-29220"></a>
<a id="trace-29279"></a>
<a id="trace-29301"></a>
<a id="trace-29372"></a>
<a id="trace-29416"></a>
<a id="trace-29433"></a>
<a id="trace-29518"></a>
<a id="trace-29562"></a>
<a id="trace-29580"></a>
<a id="trace-29599"></a>
- 206.30s–359.30s (×179), actor 5, squad 0 (trace 23847): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.65s, trace 23807. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6310945362950325, 'next_transition': 23879}.
<a id="trace-2451"></a>
- 219.50s–219.50s (×1), actor 5, squad 1 (events line 2451): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 249.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2623}.
<a id="trace-24400"></a>
- 219.50s–219.50s (×1), actor 5, squad 1 (trace 24400): renew committed intent (75 s lifetime). Knowledge: actor memory at 219.50s, trace 24400. Next observer evidence: {'until': 249.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2623}.
<a id="trace-2623"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (events line 2623): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 293.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26851}.
<a id="trace-26698"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (trace 26698): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.360861 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 26698. Next observer evidence: {'until': 293.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26851}.
<a id="trace-26699"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (trace 26699): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.360861 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 26699. Next observer evidence: {'until': 293.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26851}.
<a id="trace-26851"></a>
- 293.45s–293.45s (×1), actor 9, squad 1 (trace 26851): ReactToContact: cover and return fire. Knowledge: actor memory at 290.00s, trace 26730. Next observer evidence: {'until': 296.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977529440753731, 'next_transition': 27049}.
<a id="trace-26852"></a>
- 293.45s–293.45s (×1), actor 9, squad 1 (trace 26852): new contact inside 100 m. Knowledge: actor memory at 290.00s, trace 26730. Next observer evidence: {'until': 296.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977529440753731, 'next_transition': 27049}.
<a id="trace-27049"></a>
- 296.75s–296.75s (×1), actor 9, squad 1 (trace 27049): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 295.00s, trace 26964. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.96600754355015, 'next_transition': 2709}.
<a id="trace-27050"></a>
- 296.75s–296.75s (×1), actor 9, squad 1 (trace 27050): rearward bound: one stationary suppressing element. Knowledge: actor memory at 295.00s, trace 26964. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.96600754355015, 'next_transition': 2709}.
<a id="trace-2709"></a>
- 302.30s–302.30s (×1), actor 5, squad 1 (events line 2709): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27302"></a>
- 302.30s–302.30s (×1), actor 5, squad 1 (trace 27302): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.30s, trace 27302. Next observer evidence: {'until': 307.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.702481604439393, 'next_transition': 27472}.
<a id="trace-27303"></a>
- 302.30s–302.30s (×1), actor 5, squad 1 (trace 27303): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 302.30s, trace 27303. Next observer evidence: {'until': 307.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.702481604439393, 'next_transition': 27472}.
<a id="trace-27472"></a>
- 307.70s–307.70s (×1), actor 9, squad 1 (trace 27472): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 305.00s, trace 27357. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27790}.
<a id="trace-27473"></a>
- 307.70s–307.70s (×1), actor 9, squad 1 (trace 27473): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 305.00s, trace 27357. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27790}.
<a id="trace-27790"></a>
- 316.80s–316.80s (×1), actor 9, squad 1 (trace 27790): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 315.00s, trace 27700. Next observer evidence: None.
<a id="trace-27794"></a>
- 316.85s–316.85s (×1), actor 9, squad 1 (trace 27794): MoveTactically. Knowledge: actor memory at 315.00s, trace 27700. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000082944104008, 'next_transition': 28064}.
<a id="trace-27795"></a>
- 316.85s–316.85s (×1), actor 9, squad 1 (trace 27795): traveling. Knowledge: actor memory at 315.00s, trace 27700. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000082944104008, 'next_transition': 28064}.
<a id="trace-27796"></a>
- 316.85s–316.85s (×1), actor 9, squad 1 (trace 27796): received platoon directive. Knowledge: actor memory at 315.00s, trace 27700. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000082944104008, 'next_transition': 28064}.
<a id="trace-28064"></a>
- 323.30s–323.30s (×1), actor 9, squad 1 (trace 28064): traveling overwatch. Knowledge: actor memory at 320.00s, trace 27929. Next observer evidence: {'until': 329.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.742691198549586, 'next_transition': 28312}.
<a id="trace-28065"></a>
- 323.30s–323.30s (×1), actor 9, squad 1 (trace 28065): matching received arrivals: traveling stage complete. Knowledge: actor memory at 320.00s, trace 27929. Next observer evidence: {'until': 329.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.742691198549586, 'next_transition': 28312}.
<a id="trace-28312"></a>
- 329.55s–329.55s (×1), actor 9, squad 1 (trace 28312): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 325.00s, trace 28145. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28573}.
<a id="trace-28573"></a>
- 337.90s–337.90s (×1), actor 9, squad 1 (trace 28573): ReactToContact: cover and return fire. Knowledge: actor memory at 335.00s, trace 28464. Next observer evidence: {'until': 340.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.506832149142362, 'next_transition': 28760}.
<a id="trace-28574"></a>
- 337.90s–337.90s (×1), actor 9, squad 1 (trace 28574): bounding overwatch. Knowledge: actor memory at 335.00s, trace 28464. Next observer evidence: {'until': 340.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.506832149142362, 'next_transition': 28760}.
<a id="trace-28575"></a>
<a id="trace-28760"></a>
<a id="trace-28836"></a>
- 337.90s–341.20s (×3), actor 9, squad 1 (trace 28575): new contact inside 100 m. Knowledge: actor memory at 335.00s, trace 28464. Next observer evidence: {'until': 340.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.506832149142362, 'next_transition': 28760}.
<a id="trace-28938"></a>
- 342.55s–342.55s (×1), actor 9, squad 1 (trace 28938): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 340.00s, trace 28694. Next observer evidence: {'until': 343.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8454000000000015, 'next_transition': 2924}.
<a id="trace-2924"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (events line 2924): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29037"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (trace 29037): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.690923 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 29037. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0029000000000003467, 'next_transition': 29157}.
<a id="trace-29038"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (trace 29038): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.690923 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 29038. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0029000000000003467, 'next_transition': 29157}.
<a id="trace-29157"></a>
- 345.85s–345.85s (×1), actor 9, squad 1 (trace 29157): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 345.00s, trace 29078. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12370000000000303, 'next_transition': None}.
<a id="trace-29158"></a>
- 345.85s–345.85s (×1), actor 9, squad 1 (trace 29158): rearward bound: one stationary suppressing element. Knowledge: actor memory at 345.00s, trace 29078. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12370000000000303, 'next_transition': None}.

## Net delivery

294 matched order/radio deliveries; 341 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.530s; maximum 6.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3920: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3928: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3930: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3931: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3932: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3933: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3935: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3936: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3938: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3939: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5179: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5185: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5187: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5188: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5189: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5190: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5191: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5192: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5194: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5195: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5196: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5197: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5198: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 8374: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 8375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 8376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 8377: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 8378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 8379: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 8380: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 8381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 8382: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 8383: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 8384: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 8385: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 8386: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 8387: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 8388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 8389: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 8390: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 8391: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 8392: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 8393: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 8725: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8726: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8727: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8728: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8730: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8731: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8733: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8734: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8735: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8736: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8737: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8738: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8739: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8740: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8741: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8742: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8743: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8744: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 9201: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 9202: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9211: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9212: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9213: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9214: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9216: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9217: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 9219: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9220: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9221: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9222: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9223: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9224: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9225: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9226: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9227: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9228: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9229: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9230: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 10446: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10447: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10448: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10449: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10451: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10452: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10454: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10455: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10456: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10457: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10458: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10459: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10460: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10461: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10462: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10463: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10464: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10465: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11392: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11393: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11394: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11395: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11397: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11398: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11399: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11400: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11401: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11402: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11403: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11404: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11405: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11406: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11407: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11408: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11409: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11410: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11411: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 11887: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11888: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 11889: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11890: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11892: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11893: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11894: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 11895: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11896: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11897: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11898: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11899: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11900: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11901: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11902: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11903: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11904: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11905: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11906: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 12690: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 12691: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 12692: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 12693: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12695: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 12696: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 12697: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 12698: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 12699: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 12700: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12701: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12702: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12703: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12704: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12705: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12706: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12707: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12708: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12709: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13145: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13146: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13148: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13149: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13150: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 13151: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13152: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13153: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13154: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13155: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13156: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13157: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13158: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13159: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13160: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13161: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13162: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13598: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13600: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13601: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13602: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 13603: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 13604: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13605: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13606: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13607: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13608: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13609: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13610: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13611: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13612: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13613: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13614: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13862: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13864: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13865: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13866: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 13867: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13868: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13869: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13870: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13871: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13872: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13873: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13874: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13875: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13876: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13877: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13878: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14208: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14210: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14211: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14212: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 14213: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14214: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14215: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14216: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14217: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14218: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14219: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14220: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14221: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14222: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14223: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14224: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 14422: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 14423: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14552: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14554: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14555: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14556: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 14557: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14558: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14559: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14560: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14561: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14562: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14563: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14564: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14565: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14566: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14567: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14568: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14873: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14875: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14876: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14877: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 14878: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14879: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14880: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14881: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14882: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14883: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14884: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14885: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14886: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14887: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14888: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14889: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 15173: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15175: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 15176: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 15177: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 15178: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 15179: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15180: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15181: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15182: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15183: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15184: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15185: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15186: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15187: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 15188: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 15189: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15484: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15486: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15487: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15488: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 15489: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15490: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15491: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15492: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15493: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15494: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15495: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15496: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15497: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15498: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15499: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15500: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15757: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15759: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15760: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15761: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 15762: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15763: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15764: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15765: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15766: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15767: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15768: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15769: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15770: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15771: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15772: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15773: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 15934: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15970: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15972: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15973: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15974: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15975: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15976: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15977: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15978: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15979: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15980: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15981: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15982: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15983: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15984: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15985: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16269: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16271: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16272: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16273: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16274: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16275: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16276: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16277: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16278: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16279: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16280: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16281: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16282: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16283: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16284: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16664: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16666: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16667: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16668: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16669: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16670: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16671: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16672: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16673: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16674: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16675: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16676: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16677: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16678: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16679: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17758: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17760: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17761: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17762: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 17763: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17764: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17765: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17766: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17767: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17768: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17769: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17770: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17771: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17772: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17773: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18189: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18191: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18192: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18193: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18194: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18195: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18196: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18197: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18198: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18199: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18200: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18201: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18202: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18203: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18204: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18429: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18431: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18432: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18433: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18434: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18435: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18436: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18437: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18438: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18439: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18440: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18441: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18442: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18443: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18444: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18757: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18759: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18760: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18761: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 18762: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18763: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18764: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18765: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18766: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18767: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18768: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18769: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18770: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18771: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18772: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19062: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19063: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19064: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19065: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 19066: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 19067: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19068: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19069: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19070: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19071: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19072: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19073: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19074: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19075: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19076: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19077: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19423: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19424: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19425: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19426: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19427: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 19428: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19429: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19430: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19431: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19432: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19433: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19434: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19435: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19436: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19437: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19438: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 20000: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 20312: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 20313: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20314: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 20315: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 20316: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20317: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20318: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20319: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20320: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20321: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20322: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20323: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20324: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20325: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20326: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20682: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 20683: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20684: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20685: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20686: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 20687: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20688: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20689: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20690: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20691: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20692: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20693: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20694: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20695: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20696: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 21469: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 21470: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 21471: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21472: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21473: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21474: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21475: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21476: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21477: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21478: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21479: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21480: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21481: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21482: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 21763: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21764: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 21765: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 21766: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21767: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21768: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21769: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21770: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21771: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21772: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21773: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21774: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21775: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21776: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21993: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21994: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21995: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 21996: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21997: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21998: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21999: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 22000: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 22001: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 22002: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 22003: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 22004: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 22005: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 22006: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 22007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 22141: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22212: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22213: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22214: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22215: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22216: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22217: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22218: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22219: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22220: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22221: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22222: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22223: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22224: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22225: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22614: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22615: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22616: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22617: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22618: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22619: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22620: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22621: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22622: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22623: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22624: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22625: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22626: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22627: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 23004: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23005: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23006: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 23007: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23008: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23009: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23010: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23011: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23012: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23013: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23014: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23015: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23016: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23017: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 23252: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23253: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 23254: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 23255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 23256: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 23257: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23258: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23259: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23260: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23261: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23262: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23263: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23264: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23265: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 23490: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23491: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 23492: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 23493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 23494: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 23495: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23496: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23497: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23498: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23499: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23500: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23501: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23502: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23503: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 23725: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 23726: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 23727: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 23728: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 23729: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23730: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 23731: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 23732: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 23733: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 23734: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 23735: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 23736: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 23737: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 23806: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 23807: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24045: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 24046: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24047: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 24048: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24049: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24050: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24051: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 24052: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24053: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24054: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24055: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24056: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24235: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 24236: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24237: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24238: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24239: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24240: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24241: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24242: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24243: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24244: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24245: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24246: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 24400: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24410: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 24411: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24412: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 24413: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24414: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24415: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24416: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24417: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24418: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24419: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24420: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24421: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24584: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 24585: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 24586: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24587: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24588: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24589: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24590: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 24591: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24592: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24593: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24594: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24595: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24758: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 24759: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 24760: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24761: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24762: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24763: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24764: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 24765: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24766: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24767: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24768: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24769: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 24937: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 24938: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 24939: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 24940: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24941: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 24942: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24943: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 24944: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24945: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 24946: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24947: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24948: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25113: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 25114: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25115: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25116: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25117: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25118: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25119: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25120: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25121: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25122: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25123: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25124: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25282: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 25283: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25284: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 25285: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25286: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25287: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 25288: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25289: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25290: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25291: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25292: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25454: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 25455: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 25456: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 25457: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25458: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25459: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 25460: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25461: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 25462: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25463: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25464: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25627: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25628: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 25629: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 25630: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25631: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25632: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 25633: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25634: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 25635: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25636: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25637: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25786: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25787: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25788: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25789: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25790: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25791: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25792: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25793: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25794: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25795: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25969: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25970: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25971: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25972: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25973: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25974: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25975: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25976: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25977: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25978: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26128: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26129: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26130: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26131: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 26132: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26133: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26134: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26135: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26136: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26283: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26284: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26285: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26286: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26287: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26288: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26289: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26290: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26291: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26423: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26424: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26425: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26426: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26427: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26428: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26429: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26430: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26431: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26562: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26563: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26564: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26565: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26566: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26567: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26568: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26569: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26570: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 26698: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 26699: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26729: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 26730: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26731: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26732: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 26733: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26734: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26735: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26736: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26737: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 26963: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 26964: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26965: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26966: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 26967: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26968: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26969: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26970: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26971: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27181: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27182: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27183: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27184: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27185: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27186: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27187: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27188: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27189: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.30s leader 5, trace 27302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.30s leader 5, trace 27303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27358: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27359: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27360: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27361: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27362: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27363: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27364: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27539: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27540: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27541: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27542: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27543: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27544: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27545: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 27699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 27700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 27701: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 27702: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 27703: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 27704: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 27705: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27706: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27707: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 27928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 27929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 27930: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 27931: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 27932: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 27933: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 27934: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 27935: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 27936: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 27937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28146: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28147: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28148: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28149: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28150: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28151: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28152: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 28320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28322: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28323: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28324: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28325: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28326: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28327: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28328: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 28463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 28465: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 28466: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 28467: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 28468: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 28469: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28470: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28471: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 28693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 28694: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 28695: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 28696: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 28697: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 28698: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 28699: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 28700: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 28701: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 28702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 29037: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 29038: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 29077: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 29078: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 29079: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 29080: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 29081: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 29082: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 29083: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 29084: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 29085: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 29086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 29317: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 29318: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 29319: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 29320: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 29321: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 29322: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 29323: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 29324: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 29325: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 29326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 29463: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 29464: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 29465: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 29466: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 29467: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 29468: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 29469: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 29470: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 29471: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 29472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 29616: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 29617: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 29618: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 29619: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 29620: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 29621: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 29622: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 29623: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 29624: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 29625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Ash incapacitated
- 1: Bren killed in action
- 1: Tern incapacitated
- 1: Reed killed in action
- 1: Rook incapacitated
- 1: Kest killed in action
- 1: Voss incapacitated
- 1: Moss incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
