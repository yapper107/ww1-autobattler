# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/21/108/good-azure/battle-108-1789674123144260999`

## Battle summary

**Ember** · 360 s · 270 shots.

### Turning points

- 15.3s, squad 4: contact (events line 212). First recorded contact.
- 22.5s, squad 1: assault ([trace 4662](#trace-4662)). 22.7s, squad 1: advanced tactically.
- 23.6s, squad 0: assault ([trace 5975](#trace-5975)). 23.8s, squad 0: advanced tactically.
- 35.4s, squad 1: assault ([trace 7711](#trace-7711)). 35.6s, squad 1: advanced tactically.
- 37.5s, squad 0: assault ([trace 8849](#trace-8849)). 37.7s, squad 0: advanced tactically.
- 45.4s, squad 1: help call ([trace 9644](#trace-9644)). No completion observed before termination.
- 47.0s, squad 0: help call ([trace 9707](#trace-9707)). 102.4s, squad 1: answered a neighbour with support by fire.
- 72.9s, squad 1: withdrawal ([trace 11694](#trace-11694)). 94.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 86.5s, squad 0: withdrawal ([trace 13553](#trace-13553)). 123.5s, squad 0: took cover and returned fire.
- 100.7s, squad 0: help call ([trace 14824](#trace-14824)). 102.4s, squad 1: answered a neighbour with support by fire.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 3 further drill types; no completed objective recorded; 22 shots, 8/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 4 further drill types; withdrew; 1 shots, 2/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 147 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 100 shots, 0/4 lost.

### Decisions and attribution

At 39.0s, squad 0 chose leader risk threshold crossed without support ([trace 9196](#trace-9196)), followed by 0 shots and 1 own casualties; estimate 16.2 against 9 distinct squad-reported contacts; At 123.5s, squad 0 chose took cover and returned fire ([trace 17415](#trace-17415)), followed by 0 shots and 1 own casualties; estimate 14.8 against 0 distinct squad-reported contacts; At 35.4s, squad 1 chose prepared a base of fire ([trace 7329](#trace-7329)), followed by 1 shots and 0 own casualties; estimate 15.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 795](#trace-795)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 797](#trace-797)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 969}.

### Communication

209 matched deliveries (mean 0.48s, max 1.75s); 496 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.30s, squad 4, contact, evidence events line 212: First recorded contact; .
- 22.45s, squad 1, assault, evidence 4662: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 22.7s, squad 1: advanced tactically.
- 23.55s, squad 0, assault, evidence 5975: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 23.8s, squad 0: advanced tactically.
- 35.35s, squad 1, assault, evidence 7711: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 35.6s, squad 1: advanced tactically.
- 37.45s, squad 0, assault, evidence 8849: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 37.7s, squad 0: advanced tactically.
- 45.35s, squad 1, help call, evidence 9644: NeedSupport; No completion observed before termination.
- 46.95s, squad 0, help call, evidence 9707: NeedSupport; 102.4s, squad 1: answered a neighbour with support by fire.
- 72.90s, squad 1, withdrawal, evidence 11694: BreakContact: believed ratio at least two without superiority; 94.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 86.50s, squad 0, withdrawal, evidence 13553: Withdraw to received rally; 123.5s, squad 0: took cover and returned fire.
- 100.70s, squad 0, help call, evidence 14824: NeedSupport; 102.4s, squad 1: answered a neighbour with support by fire.
- 102.40s, squad 1, help answer, evidence 14853: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 107.2s, squad 1: Withdraw to received rally.
- 107.15s, squad 1, withdrawal, evidence 16759: Withdraw to received rally; No completion observed before termination.
- 126.95s, squad 0, withdrawal, evidence 17631: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-311"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 311): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-312"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 312): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-313"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 313): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-666"></a>
<a id="trace-668"></a>
<a id="trace-695"></a>
<a id="trace-697"></a>
<a id="trace-732"></a>
<a id="trace-734"></a>
<a id="trace-759"></a>
<a id="trace-761"></a>
<a id="trace-783"></a>
<a id="trace-785"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599836769625399, 'next_transition': 695}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 969}.
<a id="trace-795"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 795): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 795. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-796"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 796): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 796. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-797"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 797): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 797. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 969}.
<a id="trace-798"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 798): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 969}.
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-845"></a>
<a id="trace-847"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-954"></a>
<a id="trace-956"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449940592413216, 'next_transition': 845}.
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-1102"></a>
<a id="trace-1104"></a>
<a id="trace-1153"></a>
<a id="trace-1155"></a>
<a id="trace-1196"></a>
<a id="trace-1198"></a>
<a id="trace-1246"></a>
<a id="trace-1248"></a>
<a id="trace-1286"></a>
<a id="trace-1288"></a>
<a id="trace-1353"></a>
<a id="trace-1355"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
<a id="trace-1502"></a>
<a id="trace-1504"></a>
<a id="trace-1538"></a>
<a id="trace-1540"></a>
<a id="trace-1560"></a>
<a id="trace-1562"></a>
<a id="trace-1592"></a>
<a id="trace-1594"></a>
<a id="trace-1618"></a>
<a id="trace-1620"></a>
<a id="trace-1640"></a>
<a id="trace-1642"></a>
<a id="trace-1666"></a>
<a id="trace-1668"></a>
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1833"></a>
<a id="trace-1835"></a>
<a id="trace-2133"></a>
<a id="trace-2135"></a>
<a id="trace-3054"></a>
<a id="trace-3056"></a>
<a id="trace-3794"></a>
<a id="trace-3796"></a>
<a id="trace-3859"></a>
<a id="trace-3861"></a>
<a id="trace-3936"></a>
<a id="trace-3938"></a>
<a id="trace-4058"></a>
<a id="trace-4060"></a>
<a id="trace-4090"></a>
<a id="trace-4092"></a>
<a id="trace-4184"></a>
<a id="trace-4186"></a>
<a id="trace-4208"></a>
<a id="trace-4210"></a>
<a id="trace-4229"></a>
<a id="trace-4231"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4272"></a>
<a id="trace-4274"></a>
<a id="trace-4800"></a>
<a id="trace-4802"></a>
<a id="trace-6005"></a>
<a id="trace-6007"></a>
<a id="trace-6305"></a>
<a id="trace-6307"></a>
<a id="trace-6512"></a>
<a id="trace-6514"></a>
<a id="trace-6536"></a>
<a id="trace-6538"></a>
<a id="trace-6565"></a>
<a id="trace-6567"></a>
<a id="trace-6597"></a>
<a id="trace-6599"></a>
<a id="trace-6623"></a>
<a id="trace-6625"></a>
<a id="trace-6633"></a>
<a id="trace-6635"></a>
<a id="trace-6651"></a>
<a id="trace-6653"></a>
<a id="trace-6667"></a>
<a id="trace-6669"></a>
<a id="trace-6786"></a>
<a id="trace-6788"></a>
<a id="trace-7086"></a>
<a id="trace-7088"></a>
<a id="trace-7121"></a>
<a id="trace-7123"></a>
<a id="trace-7154"></a>
<a id="trace-7156"></a>
<a id="trace-7228"></a>
<a id="trace-7230"></a>
<a id="trace-7240"></a>
<a id="trace-7242"></a>
<a id="trace-7323"></a>
<a id="trace-7325"></a>
<a id="trace-7849"></a>
<a id="trace-7851"></a>
<a id="trace-7885"></a>
<a id="trace-7887"></a>
<a id="trace-7915"></a>
<a id="trace-7917"></a>
<a id="trace-7954"></a>
<a id="trace-7956"></a>
<a id="trace-9133"></a>
<a id="trace-9135"></a>
<a id="trace-9168"></a>
<a id="trace-9170"></a>
<a id="trace-9214"></a>
<a id="trace-9216"></a>
<a id="trace-9230"></a>
<a id="trace-9232"></a>
<a id="trace-9309"></a>
<a id="trace-9311"></a>
<a id="trace-9327"></a>
<a id="trace-9329"></a>
<a id="trace-9341"></a>
<a id="trace-9343"></a>
<a id="trace-9479"></a>
<a id="trace-9481"></a>
<a id="trace-9505"></a>
<a id="trace-9507"></a>
<a id="trace-9541"></a>
<a id="trace-9543"></a>
<a id="trace-9562"></a>
<a id="trace-9564"></a>
<a id="trace-9641"></a>
<a id="trace-9643"></a>
<a id="trace-9667"></a>
<a id="trace-9669"></a>
<a id="trace-9690"></a>
<a id="trace-9692"></a>
<a id="trace-9700"></a>
<a id="trace-9702"></a>
<a id="trace-9848"></a>
<a id="trace-9850"></a>
<a id="trace-9858"></a>
<a id="trace-9860"></a>
<a id="trace-9874"></a>
<a id="trace-9876"></a>
<a id="trace-9892"></a>
<a id="trace-9894"></a>
<a id="trace-9914"></a>
<a id="trace-9916"></a>
<a id="trace-9975"></a>
<a id="trace-9977"></a>
<a id="trace-10056"></a>
<a id="trace-10058"></a>
<a id="trace-10073"></a>
<a id="trace-10075"></a>
<a id="trace-10089"></a>
<a id="trace-10091"></a>
<a id="trace-10099"></a>
<a id="trace-10101"></a>
<a id="trace-10128"></a>
<a id="trace-10130"></a>
<a id="trace-10144"></a>
<a id="trace-10146"></a>
<a id="trace-10162"></a>
<a id="trace-10164"></a>
<a id="trace-10175"></a>
<a id="trace-10177"></a>
<a id="trace-10200"></a>
<a id="trace-10202"></a>
<a id="trace-10333"></a>
<a id="trace-10335"></a>
<a id="trace-10406"></a>
<a id="trace-10408"></a>
<a id="trace-10421"></a>
<a id="trace-10423"></a>
<a id="trace-10435"></a>
<a id="trace-10437"></a>
<a id="trace-10448"></a>
<a id="trace-10450"></a>
<a id="trace-10466"></a>
<a id="trace-10468"></a>
<a id="trace-10478"></a>
<a id="trace-10480"></a>
<a id="trace-10502"></a>
<a id="trace-10504"></a>
<a id="trace-10523"></a>
<a id="trace-10525"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10632"></a>
<a id="trace-10634"></a>
<a id="trace-10670"></a>
<a id="trace-10672"></a>
<a id="trace-10836"></a>
<a id="trace-10838"></a>
<a id="trace-10858"></a>
<a id="trace-10860"></a>
<a id="trace-10876"></a>
<a id="trace-10878"></a>
<a id="trace-10889"></a>
<a id="trace-10891"></a>
<a id="trace-10916"></a>
<a id="trace-10918"></a>
<a id="trace-11050"></a>
<a id="trace-11052"></a>
<a id="trace-11101"></a>
<a id="trace-11103"></a>
<a id="trace-11137"></a>
<a id="trace-11139"></a>
<a id="trace-11169"></a>
<a id="trace-11171"></a>
<a id="trace-11186"></a>
<a id="trace-11188"></a>
<a id="trace-11291"></a>
<a id="trace-11293"></a>
<a id="trace-11315"></a>
<a id="trace-11317"></a>
<a id="trace-11334"></a>
<a id="trace-11336"></a>
<a id="trace-11356"></a>
<a id="trace-11358"></a>
<a id="trace-11371"></a>
<a id="trace-11373"></a>
<a id="trace-11708"></a>
<a id="trace-11710"></a>
<a id="trace-11728"></a>
<a id="trace-11730"></a>
<a id="trace-11758"></a>
<a id="trace-11760"></a>
<a id="trace-11773"></a>
<a id="trace-11775"></a>
<a id="trace-11851"></a>
<a id="trace-11853"></a>
<a id="trace-11873"></a>
<a id="trace-11875"></a>
<a id="trace-11892"></a>
<a id="trace-11894"></a>
<a id="trace-11910"></a>
<a id="trace-11912"></a>
<a id="trace-11929"></a>
<a id="trace-11931"></a>
<a id="trace-11946"></a>
<a id="trace-11948"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11983"></a>
<a id="trace-11985"></a>
<a id="trace-12618"></a>
<a id="trace-12620"></a>
<a id="trace-12640"></a>
<a id="trace-12642"></a>
<a id="trace-12755"></a>
<a id="trace-12757"></a>
<a id="trace-12775"></a>
<a id="trace-12777"></a>
<a id="trace-12790"></a>
<a id="trace-12792"></a>
<a id="trace-12815"></a>
<a id="trace-12817"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13026"></a>
<a id="trace-13028"></a>
<a id="trace-13055"></a>
<a id="trace-13057"></a>
<a id="trace-13076"></a>
<a id="trace-13078"></a>
<a id="trace-13157"></a>
<a id="trace-13159"></a>
<a id="trace-13543"></a>
<a id="trace-13545"></a>
<a id="trace-13932"></a>
<a id="trace-13934"></a>
<a id="trace-13963"></a>
<a id="trace-13965"></a>
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14082"></a>
<a id="trace-14084"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14181"></a>
<a id="trace-14183"></a>
<a id="trace-14323"></a>
<a id="trace-14325"></a>
<a id="trace-14361"></a>
<a id="trace-14363"></a>
<a id="trace-14447"></a>
<a id="trace-14449"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14558"></a>
<a id="trace-14560"></a>
<a id="trace-14623"></a>
<a id="trace-14625"></a>
<a id="trace-14635"></a>
<a id="trace-14637"></a>
<a id="trace-14656"></a>
<a id="trace-14658"></a>
<a id="trace-14667"></a>
<a id="trace-14669"></a>
<a id="trace-14680"></a>
<a id="trace-14682"></a>
<a id="trace-14698"></a>
<a id="trace-14700"></a>
<a id="trace-14727"></a>
<a id="trace-14729"></a>
<a id="trace-14742"></a>
<a id="trace-14744"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
<a id="trace-14816"></a>
<a id="trace-14818"></a>
<a id="trace-14829"></a>
<a id="trace-14831"></a>
<a id="trace-14838"></a>
<a id="trace-14840"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16630"></a>
<a id="trace-16632"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16659"></a>
<a id="trace-16661"></a>
<a id="trace-16738"></a>
<a id="trace-16740"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16825"></a>
<a id="trace-16827"></a>
<a id="trace-16843"></a>
<a id="trace-16845"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16960"></a>
<a id="trace-16962"></a>
<a id="trace-16972"></a>
<a id="trace-16974"></a>
<a id="trace-16987"></a>
<a id="trace-16989"></a>
<a id="trace-16999"></a>
<a id="trace-17001"></a>
<a id="trace-17015"></a>
<a id="trace-17017"></a>
<a id="trace-17040"></a>
<a id="trace-17042"></a>
<a id="trace-17053"></a>
<a id="trace-17055"></a>
<a id="trace-17067"></a>
<a id="trace-17069"></a>
<a id="trace-17078"></a>
<a id="trace-17080"></a>
<a id="trace-17146"></a>
<a id="trace-17148"></a>
<a id="trace-17166"></a>
<a id="trace-17168"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17217"></a>
<a id="trace-17219"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17243"></a>
<a id="trace-17245"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17401"></a>
<a id="trace-17403"></a>
<a id="trace-17504"></a>
<a id="trace-17506"></a>
<a id="trace-17521"></a>
<a id="trace-17523"></a>
<a id="trace-17529"></a>
<a id="trace-17531"></a>
<a id="trace-17599"></a>
<a id="trace-17601"></a>
<a id="trace-17607"></a>
<a id="trace-17609"></a>
<a id="trace-17618"></a>
<a id="trace-17620"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17784"></a>
<a id="trace-17786"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17826"></a>
<a id="trace-17828"></a>
<a id="trace-17832"></a>
<a id="trace-17834"></a>
<a id="trace-17901"></a>
<a id="trace-17903"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17915"></a>
<a id="trace-17917"></a>
<a id="trace-17920"></a>
<a id="trace-17922"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17943"></a>
<a id="trace-17945"></a>
<a id="trace-17959"></a>
<a id="trace-17961"></a>
<a id="trace-18051"></a>
<a id="trace-18053"></a>
<a id="trace-18062"></a>
<a id="trace-18064"></a>
<a id="trace-18066"></a>
<a id="trace-18068"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18097"></a>
<a id="trace-18099"></a>
<a id="trace-18107"></a>
<a id="trace-18109"></a>
<a id="trace-18180"></a>
<a id="trace-18182"></a>
<a id="trace-18192"></a>
<a id="trace-18194"></a>
<a id="trace-18196"></a>
<a id="trace-18198"></a>
<a id="trace-18206"></a>
<a id="trace-18208"></a>
<a id="trace-18213"></a>
<a id="trace-18215"></a>
<a id="trace-18231"></a>
<a id="trace-18233"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18314"></a>
<a id="trace-18316"></a>
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18331"></a>
<a id="trace-18345"></a>
<a id="trace-18347"></a>
<a id="trace-18371"></a>
<a id="trace-18373"></a>
<a id="trace-18379"></a>
<a id="trace-18381"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-18461"></a>
<a id="trace-18463"></a>
<a id="trace-18471"></a>
<a id="trace-18473"></a>
<a id="trace-18479"></a>
<a id="trace-18481"></a>
<a id="trace-18496"></a>
<a id="trace-18498"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18581"></a>
<a id="trace-18587"></a>
<a id="trace-18603"></a>
<a id="trace-18631"></a>
<a id="trace-18633"></a>
<a id="trace-18638"></a>
<a id="trace-18640"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
<a id="trace-18662"></a>
<a id="trace-18664"></a>
<a id="trace-18668"></a>
<a id="trace-18670"></a>
<a id="trace-18730"></a>
<a id="trace-18732"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
<a id="trace-18771"></a>
<a id="trace-18773"></a>
<a id="trace-18786"></a>
<a id="trace-18788"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18829"></a>
<a id="trace-18831"></a>
<a id="trace-18836"></a>
<a id="trace-18838"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18903"></a>
<a id="trace-18905"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-18917"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-18948"></a>
<a id="trace-18950"></a>
<a id="trace-19052"></a>
<a id="trace-19054"></a>
<a id="trace-19059"></a>
<a id="trace-19061"></a>
<a id="trace-19071"></a>
<a id="trace-19073"></a>
<a id="trace-19085"></a>
<a id="trace-19087"></a>
<a id="trace-19092"></a>
<a id="trace-19094"></a>
<a id="trace-19101"></a>
<a id="trace-19103"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19127"></a>
<a id="trace-19129"></a>
<a id="trace-19198"></a>
<a id="trace-19200"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19219"></a>
<a id="trace-19221"></a>
<a id="trace-19237"></a>
<a id="trace-19239"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19267"></a>
<a id="trace-19269"></a>
<a id="trace-19275"></a>
<a id="trace-19277"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19292"></a>
<a id="trace-19294"></a>
<a id="trace-19355"></a>
<a id="trace-19357"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19369"></a>
<a id="trace-19371"></a>
<a id="trace-19379"></a>
<a id="trace-19381"></a>
<a id="trace-19392"></a>
<a id="trace-19394"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19445"></a>
<a id="trace-19447"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19536"></a>
<a id="trace-19538"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19578"></a>
<a id="trace-19580"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19615"></a>
<a id="trace-19617"></a>
<a id="trace-19681"></a>
<a id="trace-19683"></a>
<a id="trace-19691"></a>
<a id="trace-19693"></a>
<a id="trace-19697"></a>
<a id="trace-19699"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19718"></a>
<a id="trace-19720"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
<a id="trace-19745"></a>
<a id="trace-19747"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19852"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19867"></a>
<a id="trace-19869"></a>
<a id="trace-19883"></a>
<a id="trace-19885"></a>
<a id="trace-19903"></a>
<a id="trace-19905"></a>
<a id="trace-19911"></a>
<a id="trace-19913"></a>
<a id="trace-19978"></a>
<a id="trace-19980"></a>
<a id="trace-19993"></a>
<a id="trace-19995"></a>
<a id="trace-20000"></a>
<a id="trace-20002"></a>
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20054"></a>
<a id="trace-20056"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20152"></a>
<a id="trace-20154"></a>
<a id="trace-20172"></a>
<a id="trace-20174"></a>
<a id="trace-20194"></a>
<a id="trace-20196"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20296"></a>
<a id="trace-20298"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20310"></a>
<a id="trace-20312"></a>
<a id="trace-20320"></a>
<a id="trace-20322"></a>
<a id="trace-20332"></a>
<a id="trace-20334"></a>
<a id="trace-20349"></a>
<a id="trace-20351"></a>
<a id="trace-20372"></a>
<a id="trace-20374"></a>
<a id="trace-20437"></a>
<a id="trace-20439"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20470"></a>
<a id="trace-20472"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20490"></a>
<a id="trace-20492"></a>
<a id="trace-20499"></a>
<a id="trace-20501"></a>
<a id="trace-20507"></a>
<a id="trace-20509"></a>
<a id="trace-20520"></a>
<a id="trace-20522"></a>
<a id="trace-20527"></a>
<a id="trace-20529"></a>
<a id="trace-20593"></a>
<a id="trace-20595"></a>
<a id="trace-20613"></a>
<a id="trace-20615"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20662"></a>
<a id="trace-20664"></a>
<a id="trace-20668"></a>
<a id="trace-20670"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20686"></a>
<a id="trace-20688"></a>
<a id="trace-20753"></a>
<a id="trace-20755"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20769"></a>
<a id="trace-20771"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20798"></a>
<a id="trace-20800"></a>
<a id="trace-20810"></a>
<a id="trace-20812"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20911"></a>
<a id="trace-20913"></a>
<a id="trace-20916"></a>
<a id="trace-20918"></a>
<a id="trace-20926"></a>
<a id="trace-20928"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20945"></a>
<a id="trace-20947"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20969"></a>
<a id="trace-20971"></a>
<a id="trace-20988"></a>
<a id="trace-20990"></a>
<a id="trace-20997"></a>
<a id="trace-20999"></a>
<a id="trace-21070"></a>
<a id="trace-21072"></a>
<a id="trace-21105"></a>
<a id="trace-21107"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
<a id="trace-21223"></a>
<a id="trace-21225"></a>
<a id="trace-21228"></a>
<a id="trace-21230"></a>
<a id="trace-21246"></a>
<a id="trace-21248"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21287"></a>
<a id="trace-21289"></a>
<a id="trace-21293"></a>
<a id="trace-21295"></a>
<a id="trace-21356"></a>
<a id="trace-21358"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21401"></a>
<a id="trace-21403"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21451"></a>
<a id="trace-21453"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21585"></a>
<a id="trace-21587"></a>
<a id="trace-21599"></a>
<a id="trace-21601"></a>
<a id="trace-21669"></a>
<a id="trace-21671"></a>
<a id="trace-21686"></a>
<a id="trace-21688"></a>
<a id="trace-21694"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21700"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21715"></a>
<a id="trace-21717"></a>
<a id="trace-21724"></a>
<a id="trace-21726"></a>
<a id="trace-21739"></a>
<a id="trace-21741"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21872"></a>
<a id="trace-21874"></a>
<a id="trace-21879"></a>
<a id="trace-21881"></a>
<a id="trace-21888"></a>
<a id="trace-21890"></a>
<a id="trace-21894"></a>
<a id="trace-21896"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-21980"></a>
<a id="trace-21982"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-21996"></a>
<a id="trace-21998"></a>
<a id="trace-22013"></a>
<a id="trace-22015"></a>
<a id="trace-22028"></a>
<a id="trace-22030"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22077"></a>
<a id="trace-22079"></a>
<a id="trace-22083"></a>
<a id="trace-22085"></a>
<a id="trace-22145"></a>
<a id="trace-22147"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22162"></a>
<a id="trace-22164"></a>
<a id="trace-22179"></a>
<a id="trace-22181"></a>
<a id="trace-22189"></a>
<a id="trace-22191"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22220"></a>
<a id="trace-22222"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22318"></a>
<a id="trace-22320"></a>
<a id="trace-22326"></a>
<a id="trace-22328"></a>
<a id="trace-22338"></a>
<a id="trace-22340"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22379"></a>
<a id="trace-22381"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22511"></a>
<a id="trace-22513"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22526"></a>
<a id="trace-22528"></a>
<a id="trace-22601"></a>
<a id="trace-22603"></a>
<a id="trace-22606"></a>
<a id="trace-22608"></a>
<a id="trace-22615"></a>
<a id="trace-22617"></a>
<a id="trace-22620"></a>
<a id="trace-22622"></a>
<a id="trace-22647"></a>
<a id="trace-22649"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22688"></a>
<a id="trace-22690"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22769"></a>
<a id="trace-22771"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-22786"></a>
<a id="trace-22800"></a>
<a id="trace-22802"></a>
<a id="trace-22835"></a>
<a id="trace-22837"></a>
<a id="trace-22849"></a>
<a id="trace-22851"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-22954"></a>
<a id="trace-22956"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22984"></a>
<a id="trace-22986"></a>
<a id="trace-22991"></a>
<a id="trace-22993"></a>
<a id="trace-23060"></a>
<a id="trace-23062"></a>
<a id="trace-23069"></a>
<a id="trace-23071"></a>
<a id="trace-23085"></a>
<a id="trace-23087"></a>
<a id="trace-23091"></a>
<a id="trace-23093"></a>
<a id="trace-23116"></a>
<a id="trace-23118"></a>
<a id="trace-23123"></a>
<a id="trace-23125"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23153"></a>
<a id="trace-23155"></a>
<a id="trace-23159"></a>
<a id="trace-23161"></a>
<a id="trace-23221"></a>
<a id="trace-23223"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23264"></a>
<a id="trace-23266"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23390"></a>
<a id="trace-23392"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23410"></a>
<a id="trace-23412"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23428"></a>
<a id="trace-23430"></a>
<a id="trace-23440"></a>
<a id="trace-23442"></a>
<a id="trace-23468"></a>
<a id="trace-23470"></a>
<a id="trace-23542"></a>
<a id="trace-23544"></a>
<a id="trace-23559"></a>
<a id="trace-23561"></a>
<a id="trace-23565"></a>
<a id="trace-23567"></a>
<a id="trace-23575"></a>
<a id="trace-23577"></a>
<a id="trace-23589"></a>
<a id="trace-23591"></a>
<a id="trace-23595"></a>
<a id="trace-23597"></a>
<a id="trace-23607"></a>
<a id="trace-23609"></a>
<a id="trace-23681"></a>
<a id="trace-23683"></a>
<a id="trace-23727"></a>
<a id="trace-23729"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23748"></a>
<a id="trace-23750"></a>
<a id="trace-23756"></a>
<a id="trace-23758"></a>
<a id="trace-23772"></a>
<a id="trace-23774"></a>
<a id="trace-23834"></a>
<a id="trace-23836"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23873"></a>
<a id="trace-23875"></a>
<a id="trace-23888"></a>
<a id="trace-23890"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23927"></a>
<a id="trace-23929"></a>
<a id="trace-23935"></a>
<a id="trace-23937"></a>
<a id="trace-23998"></a>
<a id="trace-24000"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24032"></a>
<a id="trace-24034"></a>
<a id="trace-24048"></a>
<a id="trace-24050"></a>
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24076"></a>
<a id="trace-24078"></a>
<a id="trace-24082"></a>
<a id="trace-24084"></a>
<a id="trace-24157"></a>
<a id="trace-24159"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24205"></a>
<a id="trace-24207"></a>
<a id="trace-24212"></a>
<a id="trace-24214"></a>
<a id="trace-24224"></a>
<a id="trace-24226"></a>
<a id="trace-24232"></a>
<a id="trace-24234"></a>
<a id="trace-24306"></a>
<a id="trace-24308"></a>
<a id="trace-24336"></a>
<a id="trace-24338"></a>
<a id="trace-24345"></a>
<a id="trace-24347"></a>
<a id="trace-24354"></a>
<a id="trace-24356"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24371"></a>
<a id="trace-24373"></a>
<a id="trace-24456"></a>
<a id="trace-24458"></a>
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24476"></a>
<a id="trace-24478"></a>
<a id="trace-24488"></a>
<a id="trace-24490"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24611"></a>
<a id="trace-24613"></a>
<a id="trace-24621"></a>
<a id="trace-24623"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24636"></a>
<a id="trace-24638"></a>
<a id="trace-24653"></a>
<a id="trace-24655"></a>
<a id="trace-24669"></a>
<a id="trace-24671"></a>
<a id="trace-24678"></a>
<a id="trace-24680"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24715"></a>
<a id="trace-24717"></a>
<a id="trace-24781"></a>
<a id="trace-24783"></a>
<a id="trace-24789"></a>
<a id="trace-24791"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24807"></a>
<a id="trace-24809"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24843"></a>
<a id="trace-24845"></a>
<a id="trace-24856"></a>
<a id="trace-24858"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 872. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624628825126529, 'next_transition': 1102}.
<a id="trace-969"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 969): traveling overwatch. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.328914752061163, 'next_transition': 1851}.
<a id="trace-970"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 970): received platoon directive. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.328914752061163, 'next_transition': 1851}.
<a id="trace-1022"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1022): traveling overwatch. Knowledge: actor memory at 5.00s, trace 855. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299830761201114, 'next_transition': 1098}.
<a id="trace-1023"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1023): received platoon directive. Knowledge: actor memory at 5.00s, trace 855. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299830761201114, 'next_transition': 1098}.
<a id="trace-1098"></a>
<a id="trace-1100"></a>
<a id="trace-1149"></a>
<a id="trace-1151"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1242"></a>
<a id="trace-1244"></a>
<a id="trace-1282"></a>
<a id="trace-1284"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1377"></a>
<a id="trace-1379"></a>
<a id="trace-1407"></a>
<a id="trace-1409"></a>
<a id="trace-1498"></a>
<a id="trace-1500"></a>
<a id="trace-1534"></a>
<a id="trace-1536"></a>
<a id="trace-1556"></a>
<a id="trace-1558"></a>
<a id="trace-1588"></a>
<a id="trace-1590"></a>
<a id="trace-1614"></a>
<a id="trace-1616"></a>
<a id="trace-1636"></a>
<a id="trace-1638"></a>
<a id="trace-1662"></a>
<a id="trace-1664"></a>
<a id="trace-1683"></a>
<a id="trace-1685"></a>
<a id="trace-1714"></a>
<a id="trace-1716"></a>
<a id="trace-1739"></a>
<a id="trace-1741"></a>
<a id="trace-1829"></a>
<a id="trace-1831"></a>
<a id="trace-2129"></a>
<a id="trace-2131"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1098): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 860. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403386088810724, 'next_transition': 1149}.
<a id="trace-1851"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 1851): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1760. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2454}.
<a id="trace-1852"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 1852): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1760. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2454}.
<a id="trace-1853"></a>
<a id="trace-2454"></a>
- 15.60s–15.90s (×2), actor 8, squad 1 (trace 1853): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1760. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2454}.
<a id="trace-2140"></a>
- 15.85s–15.85s (×1), actor 0, squad 0 (trace 2140): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1752. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2731}.
<a id="trace-2141"></a>
- 15.85s–15.85s (×1), actor 0, squad 0 (trace 2141): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1752. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2731}.
<a id="trace-2142"></a>
<a id="trace-2731"></a>
- 15.85s–16.10s (×2), actor 0, squad 0 (trace 2142): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1752. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2731}.
<a id="trace-3050"></a>
<a id="trace-3052"></a>
- 16.25s–16.25s (×2), actor 5, squad 0 (trace 3050): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: None.
<a id="trace-3065"></a>
- 16.35s–16.35s (×1), actor 0, squad 0 (trace 3065): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1752. Next observer evidence: {'until': 16.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3402}.
<a id="trace-3402"></a>
<a id="trace-3404"></a>
- 16.75s–16.75s (×2), actor 5, squad 0 (trace 3402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 16.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749791091313525, 'next_transition': 3410}.
<a id="trace-3410"></a>
- 16.80s–16.80s (×1), actor 0, squad 0 (trace 3410): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1752. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2820573567556784, 'next_transition': 3790}.
<a id="trace-3790"></a>
<a id="trace-3792"></a>
<a id="trace-3855"></a>
<a id="trace-3857"></a>
<a id="trace-3932"></a>
<a id="trace-3934"></a>
<a id="trace-3989"></a>
<a id="trace-3991"></a>
<a id="trace-4054"></a>
<a id="trace-4056"></a>
<a id="trace-4086"></a>
<a id="trace-4088"></a>
- 17.25s–19.75s (×12), actor 5, squad 0 (trace 3790): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812179306255267, 'next_transition': 3855}.
<a id="trace-406"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 406): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-407"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 407): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4093"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4093): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725231 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4093. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799911643012805, 'next_transition': 4179}.
<a id="trace-4094"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4094): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725231 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4094. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799911643012805, 'next_transition': 4179}.
<a id="trace-4095"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4095): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725231 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4095. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001213956001116, 'next_transition': 4173}.
<a id="trace-4096"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4096): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725231 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4096. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001213956001116, 'next_transition': 4173}.
<a id="trace-4173"></a>
- 20.20s–20.20s (×1), actor 9, squad 1 (trace 4173): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.057204868178071, 'next_transition': 4280}.
<a id="trace-4179"></a>
<a id="trace-4181"></a>
<a id="trace-4203"></a>
<a id="trace-4205"></a>
<a id="trace-4224"></a>
<a id="trace-4226"></a>
<a id="trace-4237"></a>
<a id="trace-4239"></a>
- 20.25s–21.75s (×8), actor 5, squad 0 (trace 4179): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4103. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000239139001054, 'next_transition': 4203}.
<a id="trace-4247"></a>
- 22.05s–22.05s (×1), actor 1, squad 0 (trace 4247): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2250208184239952, 'next_transition': 4266}.
<a id="trace-4266"></a>
<a id="trace-4268"></a>
<a id="trace-4794"></a>
<a id="trace-4796"></a>
<a id="trace-4823"></a>
<a id="trace-4825"></a>
- 22.25s–23.25s (×6), actor 5, squad 0 (trace 4266): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4103. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799971336563165, 'next_transition': 4794}.
<a id="trace-4280"></a>
- 22.45s–22.45s (×1), actor 9, squad 1 (trace 4280): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4662"></a>
- 22.45s–22.45s (×1), actor 9, squad 1 (trace 4662): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4663"></a>
- 22.45s–22.45s (×1), actor 9, squad 1 (trace 4663): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4664"></a>
- 22.45s–22.45s (×1), actor 9, squad 1 (trace 4664): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4665"></a>
- 22.45s–22.45s (×1), actor 9, squad 1 (trace 4665): Assaulting. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4678"></a>
- 22.70s–22.70s (×1), actor 9, squad 1 (trace 4678): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6310}.
<a id="trace-4682"></a>
- 22.70s–22.70s (×1), actor 9, squad 1 (trace 4682): MoveTactically. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6310}.
<a id="trace-4683"></a>
- 22.70s–22.70s (×1), actor 9, squad 1 (trace 4683): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6310}.
<a id="trace-4831"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 4831): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6001}.
<a id="trace-5975"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 5975): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6001}.
<a id="trace-5976"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 5976): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6001}.
<a id="trace-5977"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 5977): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6001}.
<a id="trace-5978"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 5978): Assaulting. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6001}.
<a id="trace-6001"></a>
<a id="trace-6003"></a>
- 23.75s–23.75s (×2), actor 5, squad 0 (trace 6001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4103. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6010}.
<a id="trace-6010"></a>
- 23.80s–23.80s (×1), actor 1, squad 0 (trace 6010): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6187}.
<a id="trace-6016"></a>
- 23.80s–23.80s (×1), actor 1, squad 0 (trace 6016): MoveTactically. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6187}.
<a id="trace-6017"></a>
- 23.80s–23.80s (×1), actor 1, squad 0 (trace 6017): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6187}.
<a id="trace-6187"></a>
- 24.20s–24.20s (×1), actor 1, squad 0 (trace 6187): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 4099. Next observer evidence: None.
<a id="trace-6301"></a>
<a id="trace-6303"></a>
<a id="trace-6378"></a>
<a id="trace-6380"></a>
<a id="trace-6506"></a>
<a id="trace-6508"></a>
<a id="trace-6530"></a>
<a id="trace-6532"></a>
<a id="trace-6560"></a>
<a id="trace-6562"></a>
<a id="trace-6592"></a>
<a id="trace-6594"></a>
<a id="trace-6619"></a>
<a id="trace-6621"></a>
<a id="trace-6629"></a>
<a id="trace-6631"></a>
<a id="trace-6647"></a>
<a id="trace-6649"></a>
<a id="trace-6663"></a>
<a id="trace-6665"></a>
<a id="trace-6686"></a>
<a id="trace-6688"></a>
<a id="trace-6697"></a>
<a id="trace-6699"></a>
- 24.25s–29.75s (×24), actor 5, squad 0 (trace 6301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4103. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04087142857142873, 'next_transition': 6378}.
<a id="trace-6310"></a>
- 24.40s–24.40s (×1), actor 9, squad 1 (trace 6310): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 4106. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.768873043315638, 'next_transition': 6789}.
<a id="trace-6728"></a>
- 30.05s–30.05s (×1), actor 5, squad 0 (trace 6728): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 30.05s, trace 6728. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999762217488, 'next_transition': 6782}.
<a id="trace-6782"></a>
<a id="trace-6784"></a>
<a id="trace-6884"></a>
<a id="trace-6886"></a>
<a id="trace-6908"></a>
<a id="trace-6910"></a>
- 30.25s–31.25s (×6), actor 5, squad 0 (trace 6782): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.05s, trace 6728. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359996839234546, 'next_transition': 6884}.
<a id="trace-6789"></a>
- 30.35s–30.35s (×1), actor 9, squad 1 (trace 6789): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 6713. Next observer evidence: {'until': 34, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9226557439044676, 'next_transition': 7207}.
<a id="trace-6790"></a>
- 30.35s–30.35s (×1), actor 9, squad 1 (trace 6790): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 6713. Next observer evidence: {'until': 34, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9226557439044676, 'next_transition': 7207}.
<a id="trace-6915"></a>
- 31.35s–31.35s (×1), actor 1, squad 0 (trace 6915): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 6706. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000282142913485, 'next_transition': 7082}.
<a id="trace-6916"></a>
- 31.35s–31.35s (×1), actor 1, squad 0 (trace 6916): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 6706. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000282142913485, 'next_transition': 7082}.
<a id="trace-7082"></a>
<a id="trace-7084"></a>
<a id="trace-7117"></a>
<a id="trace-7119"></a>
<a id="trace-7150"></a>
<a id="trace-7152"></a>
<a id="trace-7172"></a>
<a id="trace-7174"></a>
<a id="trace-7186"></a>
<a id="trace-7188"></a>
<a id="trace-7224"></a>
<a id="trace-7226"></a>
<a id="trace-7236"></a>
<a id="trace-7238"></a>
- 31.75s–34.75s (×14), actor 5, squad 0 (trace 7082): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.05s, trace 6728. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33751431957446326, 'next_transition': 7117}.
<a id="trace-7207"></a>
- 34.10s–34.10s (×1), actor 9, squad 1 (trace 7207): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6713. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9211697603470154, 'next_transition': 7329}.
<a id="trace-7270"></a>
- 35.05s–35.05s (×1), actor 1, squad 0 (trace 7270): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800092206951406, 'next_transition': 7319}.
<a id="trace-7319"></a>
<a id="trace-7321"></a>
<a id="trace-7845"></a>
<a id="trace-7847"></a>
<a id="trace-7881"></a>
<a id="trace-7883"></a>
<a id="trace-7911"></a>
<a id="trace-7913"></a>
<a id="trace-7950"></a>
<a id="trace-7952"></a>
- 35.25s–37.25s (×10), actor 5, squad 0 (trace 7319): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7249. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33748955710101164, 'next_transition': 7845}.
<a id="trace-7329"></a>
- 35.35s–35.35s (×1), actor 9, squad 1 (trace 7329): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7729}.
<a id="trace-7711"></a>
- 35.35s–35.35s (×1), actor 9, squad 1 (trace 7711): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7729}.
<a id="trace-7712"></a>
- 35.35s–35.35s (×1), actor 9, squad 1 (trace 7712): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7729}.
<a id="trace-7713"></a>
- 35.35s–35.35s (×1), actor 9, squad 1 (trace 7713): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7729}.
<a id="trace-7714"></a>
- 35.35s–35.35s (×1), actor 9, squad 1 (trace 7714): Assaulting. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7729}.
<a id="trace-7729"></a>
- 35.60s–35.60s (×1), actor 9, squad 1 (trace 7729): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150666666666659, 'next_transition': 7957}.
<a id="trace-7733"></a>
- 35.60s–35.60s (×1), actor 9, squad 1 (trace 7733): MoveTactically. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150666666666659, 'next_transition': 7957}.
<a id="trace-7734"></a>
- 35.60s–35.60s (×1), actor 9, squad 1 (trace 7734): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150666666666659, 'next_transition': 7957}.
<a id="trace-7957"></a>
- 37.25s–37.25s (×1), actor 9, squad 1 (trace 7957): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087458483416979, 'next_transition': 9644}.
<a id="trace-8079"></a>
- 37.25s–37.25s (×1), actor 9, squad 1 (trace 8079): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 35.00s, trace 7252. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087458483416979, 'next_transition': 9644}.
<a id="trace-8086"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 8086): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8878}.
<a id="trace-8849"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 8849): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8878}.
<a id="trace-8850"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 8850): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8878}.
<a id="trace-8851"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 8851): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8878}.
<a id="trace-8852"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 8852): Assaulting. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8878}.
<a id="trace-8878"></a>
- 37.70s–37.70s (×1), actor 1, squad 0 (trace 8878): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: None.
<a id="trace-8884"></a>
- 37.70s–37.70s (×1), actor 1, squad 0 (trace 8884): MoveTactically. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: None.
<a id="trace-8885"></a>
- 37.70s–37.70s (×1), actor 1, squad 0 (trace 8885): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 7245. Next observer evidence: None.
<a id="trace-9078"></a>
<a id="trace-9080"></a>
<a id="trace-9129"></a>
<a id="trace-9131"></a>
<a id="trace-9164"></a>
<a id="trace-9166"></a>
- 37.75s–38.75s (×6), actor 5, squad 0 (trace 9078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7249. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00918428571428574, 'next_transition': 9129}.
<a id="trace-9196"></a>
- 39.05s–39.05s (×1), actor 5, squad 0 (trace 9196): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 39.05s, trace 9196. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.10797262913175541, 'next_transition': 9210}.
<a id="trace-9210"></a>
<a id="trace-9212"></a>
<a id="trace-9226"></a>
<a id="trace-9228"></a>
<a id="trace-9304"></a>
<a id="trace-9306"></a>
<a id="trace-9322"></a>
<a id="trace-9324"></a>
<a id="trace-9336"></a>
<a id="trace-9338"></a>
<a id="trace-9363"></a>
<a id="trace-9365"></a>
<a id="trace-9401"></a>
<a id="trace-9403"></a>
<a id="trace-9439"></a>
<a id="trace-9441"></a>
<a id="trace-9472"></a>
<a id="trace-9474"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9536"></a>
<a id="trace-9538"></a>
<a id="trace-9557"></a>
<a id="trace-9559"></a>
<a id="trace-9636"></a>
<a id="trace-9638"></a>
<a id="trace-9662"></a>
<a id="trace-9664"></a>
<a id="trace-9685"></a>
<a id="trace-9687"></a>
<a id="trace-9695"></a>
<a id="trace-9697"></a>
- 39.25s–46.75s (×32), actor 5, squad 0 (trace 9210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.05s, trace 9196. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100060701768192, 'next_transition': 9226}.
<a id="trace-9644"></a>
- 45.35s–45.35s (×1), actor 9, squad 1 (trace 9644): NeedSupport. Knowledge: actor memory at 45.00s, trace 9573. Next observer evidence: {'until': 50.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.27445520144460717, 'next_transition': 1098}.
<a id="trace-9707"></a>
- 46.95s–46.95s (×1), actor 2, squad 0 (trace 9707): NeedSupport. Knowledge: actor memory at 45.00s, trace 9567. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9716}.
<a id="trace-9716"></a>
- 47.20s–47.20s (×1), actor 2, squad 0 (trace 9716): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 9567. Next observer evidence: None.
<a id="trace-9838"></a>
- 47.20s–47.20s (×1), actor 2, squad 0 (trace 9838): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 45.00s, trace 9567. Next observer evidence: None.
<a id="trace-9844"></a>
<a id="trace-9846"></a>
<a id="trace-9854"></a>
<a id="trace-9856"></a>
<a id="trace-9870"></a>
<a id="trace-9872"></a>
<a id="trace-9888"></a>
<a id="trace-9890"></a>
<a id="trace-9910"></a>
<a id="trace-9912"></a>
- 47.25s–49.25s (×10), actor 5, squad 0 (trace 9844): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9570. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9854}.
<a id="trace-9917"></a>
- 49.50s–49.50s (×1), actor 2, squad 0 (trace 9917): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 9567. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9971}.
<a id="trace-9971"></a>
<a id="trace-9973"></a>
<a id="trace-10052"></a>
<a id="trace-10054"></a>
<a id="trace-10069"></a>
<a id="trace-10071"></a>
<a id="trace-10085"></a>
<a id="trace-10087"></a>
<a id="trace-10095"></a>
<a id="trace-10097"></a>
<a id="trace-10124"></a>
<a id="trace-10126"></a>
<a id="trace-10140"></a>
<a id="trace-10142"></a>
<a id="trace-10158"></a>
<a id="trace-10160"></a>
<a id="trace-10171"></a>
<a id="trace-10173"></a>
<a id="trace-10196"></a>
<a id="trace-10198"></a>
- 49.75s–54.25s (×20), actor 5, squad 0 (trace 9971): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9570. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10052}.
<a id="trace-1098"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 1098): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10076"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 10076): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.440779 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 10076. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1124}.
<a id="trace-10077"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 10077): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.440779 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 10077. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1124}.
<a id="trace-1124"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 1124): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10109"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 10109): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.379297 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 10109. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10169}.
<a id="trace-10110"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 10110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.379297 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 10110. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10169}.
<a id="trace-10169"></a>
- 53.65s–53.65s (×1), actor 10, squad 1 (trace 10169): received platoon directive; retain held slots. Knowledge: actor memory at 50.00s, trace 9984. Next observer evidence: {'until': 56, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10424}.
<a id="trace-10203"></a>
- 54.25s–54.25s (×1), actor 2, squad 0 (trace 10203): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 9978. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10329}.
<a id="trace-10329"></a>
<a id="trace-10331"></a>
<a id="trace-10402"></a>
<a id="trace-10404"></a>
<a id="trace-10417"></a>
<a id="trace-10419"></a>
<a id="trace-10431"></a>
<a id="trace-10433"></a>
<a id="trace-10444"></a>
<a id="trace-10446"></a>
<a id="trace-10462"></a>
<a id="trace-10464"></a>
<a id="trace-10474"></a>
<a id="trace-10476"></a>
<a id="trace-10487"></a>
<a id="trace-10489"></a>
<a id="trace-10498"></a>
<a id="trace-10500"></a>
<a id="trace-10519"></a>
<a id="trace-10521"></a>
<a id="trace-10530"></a>
<a id="trace-10532"></a>
<a id="trace-10607"></a>
<a id="trace-10609"></a>
<a id="trace-10628"></a>
<a id="trace-10630"></a>
<a id="trace-10651"></a>
<a id="trace-10653"></a>
<a id="trace-10666"></a>
<a id="trace-10668"></a>
- 54.75s–61.75s (×30), actor 5, squad 0 (trace 10329): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 10110. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10402}.
<a id="trace-10424"></a>
- 56.15s–56.15s (×1), actor 10, squad 1 (trace 10424): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 10342. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11149}.
<a id="trace-10681"></a>
- 62.00s–62.00s (×1), actor 2, squad 0 (trace 10681): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 10537. Next observer evidence: {'until': 62.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10832}.
<a id="trace-10832"></a>
<a id="trace-10834"></a>
<a id="trace-10854"></a>
<a id="trace-10856"></a>
<a id="trace-10872"></a>
<a id="trace-10874"></a>
<a id="trace-10885"></a>
<a id="trace-10887"></a>
<a id="trace-10912"></a>
<a id="trace-10914"></a>
<a id="trace-10933"></a>
<a id="trace-10935"></a>
<a id="trace-11010"></a>
<a id="trace-11012"></a>
<a id="trace-11024"></a>
<a id="trace-11026"></a>
<a id="trace-11046"></a>
<a id="trace-11048"></a>
<a id="trace-11063"></a>
<a id="trace-11065"></a>
<a id="trace-11080"></a>
<a id="trace-11082"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11117"></a>
<a id="trace-11119"></a>
<a id="trace-11132"></a>
<a id="trace-11134"></a>
<a id="trace-11163"></a>
<a id="trace-11165"></a>
<a id="trace-11180"></a>
<a id="trace-11182"></a>
<a id="trace-11269"></a>
<a id="trace-11271"></a>
<a id="trace-11285"></a>
<a id="trace-11287"></a>
<a id="trace-11309"></a>
<a id="trace-11311"></a>
<a id="trace-11328"></a>
<a id="trace-11330"></a>
<a id="trace-11352"></a>
<a id="trace-11354"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
- 62.25s–72.75s (×44), actor 5, squad 0 (trace 10832): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10540. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.036177394653151874, 'next_transition': 10854}.
<a id="trace-11149"></a>
- 69.15s–69.15s (×1), actor 10, squad 1 (trace 11149): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 10949. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11694}.
<a id="trace-11150"></a>
- 69.15s–69.15s (×1), actor 10, squad 1 (trace 11150): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 10949. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11694}.
<a id="trace-11378"></a>
- 72.80s–72.80s (×1), actor 2, squad 0 (trace 11378): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 11195. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.504026003265216, 'next_transition': 11704}.
<a id="trace-11694"></a>
- 72.90s–72.90s (×1), actor 10, squad 1 (trace 11694): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 11200. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14552}.
<a id="trace-11695"></a>
- 72.90s–72.90s (×1), actor 10, squad 1 (trace 11695): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 11200. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14552}.
<a id="trace-11704"></a>
<a id="trace-11706"></a>
<a id="trace-11724"></a>
<a id="trace-11726"></a>
<a id="trace-11754"></a>
<a id="trace-11756"></a>
<a id="trace-11769"></a>
<a id="trace-11771"></a>
<a id="trace-11847"></a>
<a id="trace-11849"></a>
<a id="trace-11869"></a>
<a id="trace-11871"></a>
<a id="trace-11888"></a>
<a id="trace-11890"></a>
<a id="trace-11906"></a>
<a id="trace-11908"></a>
<a id="trace-11925"></a>
<a id="trace-11927"></a>
<a id="trace-11942"></a>
<a id="trace-11944"></a>
<a id="trace-11964"></a>
<a id="trace-11966"></a>
<a id="trace-11979"></a>
<a id="trace-11981"></a>
- 73.25s–78.75s (×24), actor 5, squad 0 (trace 11704): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11198. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6614865577771676, 'next_transition': 11724}.
<a id="trace-11988"></a>
- 78.95s–78.95s (×1), actor 2, squad 0 (trace 11988): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24845338737074987, 'next_transition': 12304}.
<a id="trace-11989"></a>
- 78.95s–78.95s (×1), actor 2, squad 0 (trace 11989): MoveTactically. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24845338737074987, 'next_transition': 12304}.
<a id="trace-11990"></a>
- 78.95s–78.95s (×1), actor 2, squad 0 (trace 11990): . Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24845338737074987, 'next_transition': 12304}.
<a id="trace-12285"></a>
- 78.95s–78.95s (×1), actor 2, squad 0 (trace 12285): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24845338737074987, 'next_transition': 12304}.
<a id="trace-12304"></a>
- 79.20s–79.20s (×1), actor 2, squad 0 (trace 12304): recovering: retry accepted element corridor in column. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600119212134467, 'next_transition': 12626}.
<a id="trace-12599"></a>
- 79.20s–79.20s (×1), actor 2, squad 0 (trace 12599): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600119212134467, 'next_transition': 12626}.
<a id="trace-12626"></a>
- 79.45s–79.45s (×1), actor 2, squad 0 (trace 12626): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 75.00s, trace 11777. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15133232908753697, 'next_transition': 12636}.
<a id="trace-12636"></a>
<a id="trace-12638"></a>
- 79.75s–79.75s (×2), actor 5, squad 0 (trace 12636): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11780. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3545462933561783, 'next_transition': 1431}.
<a id="trace-1431"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1431): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12672"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 12672): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 12672. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11591981516043015, 'next_transition': 12732}.
<a id="trace-12732"></a>
<a id="trace-12734"></a>
<a id="trace-12751"></a>
<a id="trace-12753"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12786"></a>
<a id="trace-12788"></a>
<a id="trace-12811"></a>
<a id="trace-12813"></a>
<a id="trace-12835"></a>
<a id="trace-12837"></a>
- 80.25s–82.75s (×12), actor 5, squad 0 (trace 12732): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 12672. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3544944402873754, 'next_transition': 12751}.
<a id="trace-12843"></a>
- 83.05s–83.05s (×1), actor 2, squad 0 (trace 12843): received platoon directive. Knowledge: actor memory at 80.00s, trace 12646. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13011}.
<a id="trace-13011"></a>
<a id="trace-13013"></a>
<a id="trace-13022"></a>
<a id="trace-13024"></a>
- 83.25s–83.75s (×4), actor 5, squad 0 (trace 13011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 12672. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750838058973235, 'next_transition': 13022}.
<a id="trace-1474"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (events line 1474): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13034"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 13034): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322093 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13034. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575054801351407, 'next_transition': 13051}.
<a id="trace-13035"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 13035): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322093 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13035. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575054801351407, 'next_transition': 13051}.
<a id="trace-13051"></a>
<a id="trace-13053"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13153"></a>
<a id="trace-13155"></a>
- 84.25s–85.25s (×6), actor 5, squad 0 (trace 13051): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.05s, trace 13035. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7244878258528574, 'next_transition': 13072}.
<a id="trace-13162"></a>
- 85.55s–85.55s (×1), actor 2, squad 0 (trace 13162): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 13087. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5035318498311034, 'next_transition': 13539}.
<a id="trace-13163"></a>
- 85.55s–85.55s (×1), actor 2, squad 0 (trace 13163): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 13087. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5035318498311034, 'next_transition': 13539}.
<a id="trace-13539"></a>
<a id="trace-13541"></a>
- 86.25s–86.25s (×2), actor 5, squad 0 (trace 13539): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13090. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3538837374837837, 'next_transition': 13553}.
<a id="trace-13553"></a>
- 86.50s–86.50s (×1), actor 2, squad 0 (trace 13553): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 13087. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37800334490770815, 'next_transition': 13928}.
<a id="trace-13554"></a>
- 86.50s–86.50s (×1), actor 2, squad 0 (trace 13554): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 13087. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37800334490770815, 'next_transition': 13928}.
<a id="trace-13928"></a>
<a id="trace-13930"></a>
<a id="trace-13959"></a>
<a id="trace-13961"></a>
<a id="trace-13994"></a>
<a id="trace-13996"></a>
<a id="trace-14039"></a>
<a id="trace-14041"></a>
<a id="trace-14078"></a>
<a id="trace-14080"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14177"></a>
<a id="trace-14179"></a>
<a id="trace-14284"></a>
<a id="trace-14286"></a>
<a id="trace-14319"></a>
<a id="trace-14321"></a>
<a id="trace-14357"></a>
<a id="trace-14359"></a>
<a id="trace-14401"></a>
<a id="trace-14403"></a>
<a id="trace-14443"></a>
<a id="trace-14445"></a>
<a id="trace-14477"></a>
<a id="trace-14479"></a>
- 86.75s–92.75s (×26), actor 5, squad 0 (trace 13928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13090. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9178436990861224, 'next_transition': 13959}.
<a id="trace-14552"></a>
- 94.65s–94.65s (×1), actor 10, squad 1 (trace 14552): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 14208. Next observer evidence: {'until': 95.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1740}.
<a id="trace-1739"></a>
- 95.80s–95.80s (×1), actor 6, squad 0 (events line 1739): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1740"></a>
- 95.80s–95.80s (×1), actor 6, squad 1 (events line 1740): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14638"></a>
- 95.80s–95.80s (×1), actor 6, squad 0 (trace 14638): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.80s, trace 14638. Next observer evidence: {'until': 96.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4200013990585163, 'next_transition': 14650}.
<a id="trace-14639"></a>
- 95.80s–95.80s (×1), actor 6, squad 1 (trace 14639): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.80s, trace 14639. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1775}.
<a id="trace-14650"></a>
<a id="trace-14652"></a>
<a id="trace-14674"></a>
<a id="trace-14676"></a>
<a id="trace-14712"></a>
<a id="trace-14714"></a>
<a id="trace-14736"></a>
<a id="trace-14738"></a>
- 96.25s–99.25s (×8), actor 6, squad 0 (trace 14650): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 95.80s, trace 14639. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9716704708902086, 'next_transition': 14674}.
<a id="trace-1775"></a>
- 98.65s–98.65s (×1), actor 6, squad 1 (events line 1775): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14723"></a>
- 98.65s–98.65s (×1), actor 6, squad 1 (trace 14723): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.242522 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.65s, trace 14723. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14853}.
<a id="trace-14724"></a>
- 98.65s–98.65s (×1), actor 6, squad 1 (trace 14724): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.242522 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.65s, trace 14724. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14853}.
<a id="trace-14824"></a>
- 100.70s–100.70s (×1), actor 3, squad 0 (trace 14824): NeedSupport. Knowledge: actor memory at 100.00s, trace 14757. Next observer evidence: {'until': 103.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8150451310356999, 'next_transition': 16613}.
<a id="trace-14853"></a>
- 102.40s–102.40s (×1), actor 10, squad 1 (trace 14853): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 14759. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.488807909345079, 'next_transition': 1831}.
<a id="trace-14854"></a>
- 102.40s–102.40s (×1), actor 10, squad 1 (trace 14854): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 100.00s, trace 14759. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.488807909345079, 'next_transition': 1831}.
<a id="trace-16613"></a>
<a id="trace-16615"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
- 103.25s–104.25s (×4), actor 3, squad 0 (trace 16613): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 100.00s, trace 14757. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16643}.
<a id="trace-1830"></a>
- 104.95s–104.95s (×1), actor 3, squad 0 (events line 1830): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3706927828067329, 'next_transition': 16728}.
<a id="trace-1831"></a>
- 104.95s–104.95s (×1), actor 3, squad 1 (events line 1831): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 107, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.929974147357157, 'next_transition': 16759}.
<a id="trace-16664"></a>
- 104.95s–104.95s (×1), actor 3, squad 0 (trace 16664): renew committed intent (75 s lifetime). Knowledge: actor memory at 104.95s, trace 16664. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3706927828067329, 'next_transition': 16728}.
<a id="trace-16665"></a>
- 104.95s–104.95s (×1), actor 3, squad 1 (trace 16665): renew committed intent (75 s lifetime). Knowledge: actor memory at 104.95s, trace 16665. Next observer evidence: {'until': 107, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.929974147357157, 'next_transition': 16759}.
<a id="trace-16728"></a>
<a id="trace-16730"></a>
<a id="trace-16743"></a>
<a id="trace-16745"></a>
<a id="trace-16813"></a>
<a id="trace-16815"></a>
<a id="trace-16839"></a>
<a id="trace-16870"></a>
<a id="trace-16872"></a>
<a id="trace-16882"></a>
<a id="trace-16894"></a>
<a id="trace-16954"></a>
<a id="trace-16956"></a>
<a id="trace-16965"></a>
<a id="trace-16979"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-16992"></a>
<a id="trace-17004"></a>
<a id="trace-17009"></a>
<a id="trace-17011"></a>
<a id="trace-17034"></a>
<a id="trace-17036"></a>
<a id="trace-17061"></a>
<a id="trace-17063"></a>
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17160"></a>
<a id="trace-17162"></a>
<a id="trace-17172"></a>
<a id="trace-17179"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17196"></a>
<a id="trace-17206"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17224"></a>
<a id="trace-17232"></a>
<a id="trace-17237"></a>
<a id="trace-17239"></a>
<a id="trace-17249"></a>
<a id="trace-17258"></a>
<a id="trace-17318"></a>
<a id="trace-17327"></a>
<a id="trace-17337"></a>
<a id="trace-17344"></a>
<a id="trace-17346"></a>
<a id="trace-17359"></a>
<a id="trace-17367"></a>
<a id="trace-17371"></a>
<a id="trace-17373"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
- 105.25s–123.25s (×54), actor 3, squad 0 (trace 16728): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 105.00s, trace 16666. Next observer evidence: {'until': 106.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4247649119218766, 'next_transition': 16743}.
<a id="trace-16759"></a>
- 107.15s–107.15s (×1), actor 10, squad 1 (trace 16759): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 16668. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7012972902606798, 'next_transition': 18086}.
<a id="trace-16760"></a>
- 107.15s–107.15s (×1), actor 10, squad 1 (trace 16760): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 16668. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7012972902606798, 'next_transition': 18086}.
<a id="trace-17410"></a>
- 123.50s–123.50s (×1), actor 3, squad 0 (trace 17410): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 17259. Next observer evidence: None.
<a id="trace-17413"></a>
- 123.55s–123.55s (×1), actor 3, squad 0 (trace 17413): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 17259. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3149959217914575, 'next_transition': 17515}.
<a id="trace-17415"></a>
- 123.55s–123.55s (×1), actor 3, squad 0 (trace 17415): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 17259. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3149959217914575, 'next_transition': 17515}.
<a id="trace-17416"></a>
- 123.55s–123.55s (×1), actor 3, squad 0 (trace 17416): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 17259. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3149959217914575, 'next_transition': 17515}.
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17593"></a>
<a id="trace-17595"></a>
<a id="trace-17612"></a>
<a id="trace-17614"></a>
- 124.25s–126.25s (×6), actor 3, squad 0 (trace 17515): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 120.00s, trace 17259. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150009431255722, 'next_transition': 17593}.
<a id="trace-17631"></a>
- 126.95s–126.95s (×1), actor 3, squad 0 (trace 17631): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 17532. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259999064206002, 'next_transition': 17767}.
<a id="trace-17632"></a>
- 126.95s–126.95s (×1), actor 3, squad 0 (trace 17632): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 17532. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259999064206002, 'next_transition': 17767}.
<a id="trace-17767"></a>
<a id="trace-17769"></a>
<a id="trace-17800"></a>
<a id="trace-17802"></a>
<a id="trace-17820"></a>
<a id="trace-17822"></a>
<a id="trace-17895"></a>
<a id="trace-17897"></a>
<a id="trace-17910"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17953"></a>
<a id="trace-17955"></a>
<a id="trace-17974"></a>
<a id="trace-17976"></a>
- 127.25s–134.30s (×15), actor 3, squad 0 (trace 17767): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 125.00s, trace 17532. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.906183719736934, 'next_transition': 17800}.
<a id="trace-18086"></a>
<a id="trace-18103"></a>
- 138.30s–139.30s (×2), actor 10, squad 1 (trace 18086): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 135.00s, trace 17991. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18103}.
<a id="trace-1968"></a>
- 140.15s–140.15s (×1), actor 10, squad 1 (events line 1968): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18132"></a>
- 140.15s–140.15s (×1), actor 10, squad 1 (trace 18132): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.15s, trace 18132. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18176}.
<a id="trace-18176"></a>
<a id="trace-18188"></a>
<a id="trace-18202"></a>
<a id="trace-18220"></a>
<a id="trace-18239"></a>
<a id="trace-18310"></a>
<a id="trace-18321"></a>
<a id="trace-18335"></a>
<a id="trace-18352"></a>
<a id="trace-18367"></a>
<a id="trace-18440"></a>
<a id="trace-18453"></a>
<a id="trace-18467"></a>
<a id="trace-18486"></a>
<a id="trace-18503"></a>
<a id="trace-18577"></a>
<a id="trace-18599"></a>
<a id="trace-18627"></a>
<a id="trace-18643"></a>
<a id="trace-18658"></a>
<a id="trace-18726"></a>
<a id="trace-18741"></a>
<a id="trace-18767"></a>
<a id="trace-18803"></a>
<a id="trace-18825"></a>
<a id="trace-18894"></a>
<a id="trace-18907"></a>
<a id="trace-18922"></a>
<a id="trace-18944"></a>
<a id="trace-18971"></a>
<a id="trace-19048"></a>
<a id="trace-19067"></a>
<a id="trace-19081"></a>
<a id="trace-19097"></a>
<a id="trace-19116"></a>
<a id="trace-19194"></a>
<a id="trace-19215"></a>
<a id="trace-19243"></a>
<a id="trace-19263"></a>
<a id="trace-19282"></a>
<a id="trace-19351"></a>
<a id="trace-19388"></a>
<a id="trace-19422"></a>
<a id="trace-19441"></a>
<a id="trace-19514"></a>
<a id="trace-19528"></a>
<a id="trace-19543"></a>
<a id="trace-19565"></a>
<a id="trace-19593"></a>
<a id="trace-19674"></a>
<a id="trace-19687"></a>
<a id="trace-19704"></a>
<a id="trace-19724"></a>
<a id="trace-19741"></a>
<a id="trace-19819"></a>
<a id="trace-19848"></a>
<a id="trace-19863"></a>
<a id="trace-19879"></a>
<a id="trace-19899"></a>
<a id="trace-19970"></a>
<a id="trace-19989"></a>
<a id="trace-20014"></a>
- 140.30s–202.30s (×62), actor 10, squad 1 (trace 18176): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 140.15s, trace 18132. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18188}.
<a id="trace-2198"></a>
- 202.60s–202.60s (×1), actor 10, squad 1 (events line 2198): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20021"></a>
- 202.60s–202.60s (×1), actor 10, squad 1 (trace 20021): renew committed intent (75 s lifetime). Knowledge: actor memory at 202.60s, trace 20021. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20044}.
<a id="trace-20044"></a>
<a id="trace-20061"></a>
<a id="trace-20129"></a>
<a id="trace-20148"></a>
<a id="trace-20162"></a>
<a id="trace-20186"></a>
<a id="trace-20209"></a>
<a id="trace-20287"></a>
<a id="trace-20302"></a>
<a id="trace-20316"></a>
<a id="trace-20340"></a>
<a id="trace-20358"></a>
<a id="trace-20433"></a>
<a id="trace-20466"></a>
<a id="trace-20478"></a>
<a id="trace-20495"></a>
<a id="trace-20516"></a>
<a id="trace-20589"></a>
<a id="trace-20609"></a>
<a id="trace-20632"></a>
<a id="trace-20658"></a>
<a id="trace-20675"></a>
<a id="trace-20744"></a>
<a id="trace-20759"></a>
<a id="trace-20780"></a>
<a id="trace-20806"></a>
<a id="trace-20841"></a>
<a id="trace-20907"></a>
<a id="trace-20920"></a>
<a id="trace-20934"></a>
<a id="trace-20953"></a>
<a id="trace-20984"></a>
<a id="trace-21063"></a>
<a id="trace-21086"></a>
<a id="trace-21096"></a>
<a id="trace-21110"></a>
<a id="trace-21127"></a>
<a id="trace-21198"></a>
<a id="trace-21219"></a>
<a id="trace-21242"></a>
<a id="trace-21268"></a>
<a id="trace-21283"></a>
<a id="trace-21352"></a>
<a id="trace-21366"></a>
<a id="trace-21385"></a>
<a id="trace-21412"></a>
<a id="trace-21447"></a>
<a id="trace-21513"></a>
<a id="trace-21524"></a>
<a id="trace-21539"></a>
<a id="trace-21555"></a>
<a id="trace-21581"></a>
<a id="trace-21665"></a>
<a id="trace-21690"></a>
<a id="trace-21704"></a>
<a id="trace-21720"></a>
<a id="trace-21735"></a>
<a id="trace-21807"></a>
<a id="trace-21834"></a>
<a id="trace-21868"></a>
<a id="trace-21884"></a>
<a id="trace-21901"></a>
- 203.30s–264.30s (×62), actor 10, squad 1 (trace 20044): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 202.60s, trace 20021. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20061}.
<a id="trace-2483"></a>
- 264.45s–264.45s (×1), actor 10, squad 1 (events line 2483): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21909"></a>
- 264.45s–264.45s (×1), actor 10, squad 1 (trace 21909): renew committed intent (75 s lifetime). Knowledge: actor memory at 264.45s, trace 21909. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21971}.
<a id="trace-21971"></a>
<a id="trace-21985"></a>
<a id="trace-22009"></a>
<a id="trace-22043"></a>
<a id="trace-22073"></a>
<a id="trace-22141"></a>
<a id="trace-22154"></a>
<a id="trace-22168"></a>
<a id="trace-22185"></a>
<a id="trace-22216"></a>
<a id="trace-22294"></a>
<a id="trace-22322"></a>
<a id="trace-22334"></a>
<a id="trace-22350"></a>
<a id="trace-22368"></a>
<a id="trace-22439"></a>
<a id="trace-22459"></a>
<a id="trace-22500"></a>
<a id="trace-22516"></a>
<a id="trace-22533"></a>
<a id="trace-22597"></a>
<a id="trace-22611"></a>
<a id="trace-22635"></a>
<a id="trace-22660"></a>
<a id="trace-22697"></a>
<a id="trace-22765"></a>
<a id="trace-22776"></a>
<a id="trace-22790"></a>
<a id="trace-22806"></a>
<a id="trace-22831"></a>
<a id="trace-22922"></a>
<a id="trace-22937"></a>
<a id="trace-22950"></a>
<a id="trace-22966"></a>
<a id="trace-22980"></a>
<a id="trace-23056"></a>
<a id="trace-23081"></a>
<a id="trace-23112"></a>
<a id="trace-23131"></a>
<a id="trace-23149"></a>
<a id="trace-23217"></a>
<a id="trace-23232"></a>
<a id="trace-23253"></a>
<a id="trace-23277"></a>
<a id="trace-23310"></a>
<a id="trace-23381"></a>
<a id="trace-23394"></a>
<a id="trace-23424"></a>
<a id="trace-23450"></a>
<a id="trace-23538"></a>
<a id="trace-23555"></a>
<a id="trace-23571"></a>
<a id="trace-23585"></a>
<a id="trace-23603"></a>
<a id="trace-23677"></a>
<a id="trace-23699"></a>
<a id="trace-23723"></a>
<a id="trace-23744"></a>
<a id="trace-23764"></a>
<a id="trace-23830"></a>
- 265.30s–325.30s (×60), actor 10, squad 1 (trace 21971): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 265.00s, trace 21916. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21985}.
<a id="trace-2756"></a>
- 326.05s–326.05s (×1), actor 10, squad 1 (events line 2756): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23843"></a>
- 326.05s–326.05s (×1), actor 10, squad 1 (trace 23843): renew committed intent (75 s lifetime). Knowledge: actor memory at 326.05s, trace 23843. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23847}.
<a id="trace-23847"></a>
<a id="trace-23869"></a>
<a id="trace-23906"></a>
<a id="trace-23923"></a>
<a id="trace-23994"></a>
<a id="trace-24011"></a>
<a id="trace-24022"></a>
<a id="trace-24044"></a>
<a id="trace-24072"></a>
<a id="trace-24153"></a>
<a id="trace-24166"></a>
<a id="trace-24185"></a>
<a id="trace-24201"></a>
<a id="trace-24220"></a>
- 326.30s–339.30s (×14), actor 10, squad 1 (trace 23847): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 326.05s, trace 23843. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23869}.
<a id="trace-24229"></a>
- 339.60s–339.60s (×1), actor 10, squad 1 (trace 24229): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 24098. Next observer evidence: {'until': 340.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24299}.
<a id="trace-24299"></a>
<a id="trace-24318"></a>
<a id="trace-24359"></a>
<a id="trace-24384"></a>
<a id="trace-24449"></a>
<a id="trace-24462"></a>
<a id="trace-24520"></a>
<a id="trace-24539"></a>
<a id="trace-24607"></a>
<a id="trace-24627"></a>
<a id="trace-24643"></a>
<a id="trace-24665"></a>
<a id="trace-24693"></a>
<a id="trace-24773"></a>
<a id="trace-24785"></a>
<a id="trace-24803"></a>
<a id="trace-24821"></a>
<a id="trace-24839"></a>
- 340.30s–359.30s (×18), actor 10, squad 1 (trace 24299): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 340.00s, trace 24241. Next observer evidence: {'until': 341.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24318}.

## Net delivery

209 matched order/radio deliveries; 496 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.480s; maximum 1.750s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4093: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4094: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4095: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4096: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4103: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4104: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 4107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 4108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4109: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4110: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4111: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4112: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4113: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4114: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4115: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4116: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4117: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4118: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 4119: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 4120: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6416: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6420: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6421: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6423: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 6424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 6425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6426: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6427: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6428: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6429: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6430: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6431: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6432: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6433: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6434: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6435: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6436: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6437: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6706: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6710: estimate 15.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6711: estimate 16.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6713: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6716: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6717: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6718: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6719: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6720: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6721: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6722: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6723: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6724: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6725: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6726: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6727: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.05s leader 5, trace 6728: estimate 16.28; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7245: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7249: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7250: estimate 16.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7252: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 7253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 7254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7255: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7256: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7257: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7258: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7259: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7260: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7261: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7262: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7263: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7264: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 7265: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 7266: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.05s leader 5, trace 9196: estimate 16.21; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9237: estimate 16.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9238: estimate 16.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9240: estimate 15.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 9241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 9242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9243: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9244: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9245: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9246: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9247: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9248: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9249: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9250: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9251: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9252: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 9253: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 9254: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9567: estimate 16.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9570: estimate 16.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9571: estimate 16.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9573: estimate 16.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 9574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 9575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9576: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9577: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9578: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9579: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9580: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9581: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9582: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9583: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9584: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9585: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 9586: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 9587: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9978: estimate 16.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9981: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9982: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 9984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 9985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9986: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9987: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9988: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9989: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9990: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9991: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9992: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9993: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9994: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9995: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 9996: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 9997: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 10076: estimate 15.88; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 10077: estimate 15.88; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 10109: estimate 15.82; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 10110: estimate 15.82; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 10336: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10339: estimate 15.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10340: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 10342: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 10343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10344: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10345: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10346: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10347: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10348: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10349: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10350: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10351: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10352: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10353: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 10354: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 10355: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10537: estimate 15.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10540: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10541: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 10543: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 10544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10545: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10546: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10547: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10548: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10549: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10550: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10551: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10552: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10553: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10554: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 10555: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 10556: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 10943: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10946: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10947: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10948: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 10949: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 10950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10951: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10952: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10953: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10954: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10955: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10956: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10957: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10958: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 10959: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 10960: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 10961: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 10962: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11195: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11198: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11199: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 11200: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 11201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11202: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11203: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11204: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11205: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11206: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11207: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11208: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11209: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11210: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11211: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 11212: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 11213: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11777: estimate 15.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11780: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11781: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 11782: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 11783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11784: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11785: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11786: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11787: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11788: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11789: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11790: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11791: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11792: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11793: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 11794: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 11795: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 12646: estimate 15.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12649: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12650: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 12651: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 12652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12653: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12654: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12655: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12656: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12657: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12658: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12659: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12660: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12661: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12662: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 12663: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 12664: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 12672: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13034: estimate 15.52; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13035: estimate 15.52; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 13087: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13090: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13091: estimate 15.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13092: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13094: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13095: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13096: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13097: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13098: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13099: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13100: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13101: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13102: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13103: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13104: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13105: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14203: estimate 16.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14205: estimate 16.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14206: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14207: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 14208: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 14209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14210: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14211: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14212: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14213: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14214: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14215: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14216: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14217: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14218: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14219: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 14220: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 14221: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14563: estimate 16.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14564: estimate 16.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 14565: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 14566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14567: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14568: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14569: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14570: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14571: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14572: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14573: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14574: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14575: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14576: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14577: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14578: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.80s leader 6, trace 14638: estimate 16.18; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.80s leader 6, trace 14639: estimate 16.18; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.65s leader 6, trace 14723: estimate 16.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.65s leader 6, trace 14724: estimate 16.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14757: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14758: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 14759: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 14760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14761: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14762: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14763: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14764: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14765: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14766: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14767: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14768: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14769: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14770: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14771: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14772: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.95s leader 3, trace 16664: estimate 15.28; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.95s leader 3, trace 16665: estimate 15.28; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 16666: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 16667: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 16668: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 16669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16670: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16671: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16672: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16673: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16674: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16675: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16676: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16677: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16678: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16679: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16680: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16681: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 16896: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16897: estimate 15.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 16898: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 16899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16900: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16901: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16902: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16903: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16904: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16905: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16906: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16907: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16908: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16909: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 16910: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16911: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17082: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17083: estimate 15.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 17084: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 17085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17086: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17087: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17088: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17089: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17090: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17091: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17092: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17093: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17094: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17095: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 17096: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 17097: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17259: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17260: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 17261: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 17262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17263: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17264: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17265: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17266: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17267: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17268: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17269: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17270: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17271: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17272: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17273: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17274: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17532: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 17533: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 17534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17535: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17536: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17537: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17538: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17539: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17540: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17541: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17542: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17543: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17544: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17545: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17546: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 17835: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 17836: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 17837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17838: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17839: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17840: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17841: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17842: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17843: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17844: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17845: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17846: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17847: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 17848: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 17849: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 17991: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 17992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17993: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17994: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17995: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17996: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17997: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17998: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17999: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18000: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18001: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18002: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18003: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18004: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 18117: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 18118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18119: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18120: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18121: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18122: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18123: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18124: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18125: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18126: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18127: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18128: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 18129: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 18130: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.15s leader 10, trace 18132: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 18253: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 18254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 18255: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 18256: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 18257: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 18258: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 18259: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 18260: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 18261: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 18262: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 18263: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 18264: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 18265: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 18266: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 18383: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 18384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18385: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18386: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 18387: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18388: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18389: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18390: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18391: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18392: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18393: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18394: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 18395: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 18396: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 18519: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 18520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18521: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18522: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18523: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18524: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18525: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18526: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18527: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18528: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18529: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18530: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 18531: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 18532: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 18671: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 18672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18673: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18674: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18675: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18676: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18677: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18678: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18679: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18680: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18681: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18682: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 18683: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18684: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 18839: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 18840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18841: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18842: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18843: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18844: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18845: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18846: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18847: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18848: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18849: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18850: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 18851: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 18852: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 18993: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 18994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18995: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18996: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18997: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18998: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18999: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 19000: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 19001: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 19002: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 19003: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19004: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 19005: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 19006: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 19136: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 19137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19138: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19139: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 19140: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19141: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19142: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19143: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19144: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19145: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19146: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19147: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 19148: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 19149: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 10, trace 19295: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 19296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19297: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19298: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 19299: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19300: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19301: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19302: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19303: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19304: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19305: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19306: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 19307: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 19308: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 10, trace 19459: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 19460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19461: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19462: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19463: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19464: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19465: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19466: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19467: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19468: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19469: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19470: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 19471: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 19472: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 10, trace 19619: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 19620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19621: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19622: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19623: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19624: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19625: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19626: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19627: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19628: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19629: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19630: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19631: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19632: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 10, trace 19761: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 19762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19763: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19764: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19765: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19766: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19767: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19768: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19769: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19770: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19771: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19772: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19773: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19774: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 10, trace 19914: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 19915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19916: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19917: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19918: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19919: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19920: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19921: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19922: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19923: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19924: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19925: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19926: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19927: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 202.60s leader 10, trace 20021: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 10, trace 20074: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 20075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20076: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20077: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20078: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20079: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20080: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20081: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20082: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20083: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20084: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20085: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 20086: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 20087: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 10, trace 20232: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 20233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20234: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20235: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20236: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20237: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20238: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20239: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20240: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20241: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20242: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20243: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 20244: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 20245: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 10, trace 20378: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 20379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20380: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20381: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20382: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20383: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20384: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20385: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20386: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20387: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20388: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20389: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 20390: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 20391: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 10, trace 20531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 20532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20533: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20534: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20535: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20536: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20537: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20538: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20539: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20540: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20541: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20542: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 20543: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 20544: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 10, trace 20689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 20690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20691: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20692: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20693: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20694: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20695: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20696: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20697: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20698: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20699: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20700: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 20701: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 20702: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 10, trace 20852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 20853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20854: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20855: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20856: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20857: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20858: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20859: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20860: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20861: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20862: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20863: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 20864: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 20865: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 10, trace 21000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 21001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21002: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21003: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21004: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21005: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21006: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21007: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21008: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21009: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21010: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21011: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 21012: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 21013: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 10, trace 21138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 21139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 21150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 21151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 10, trace 21296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 21297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 21308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 21309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 10, trace 21458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 21459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 21470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 21471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 10, trace 21602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 11, trace 21603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 21614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 21615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 10, trace 21751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 11, trace 21752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 21763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 21764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.45s leader 10, trace 21909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 10, trace 21916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 11, trace 21917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 21928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 21929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 10, trace 22086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 11, trace 22087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 22098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 22099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 10, trace 22238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 11, trace 22239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 22250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 22251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 10, trace 22383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 11, trace 22384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 22395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 22396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 10, trace 22542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 11, trace 22543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 22554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 22555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 10, trace 22710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 11, trace 22711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 22722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 22723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 10, trace 22852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 11, trace 22853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 22864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 22865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 10, trace 22994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 11, trace 22995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 23006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 23007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 10, trace 23162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 11, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 23174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 23175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 10, trace 23326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 11, trace 23327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 23335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 23338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 23339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 10, trace 23471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 11, trace 23472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 23483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 23484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 10, trace 23616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 11, trace 23617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 23628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 23629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 10, trace 23775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 11, trace 23776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 23788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 326.05s leader 10, trace 23843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 10, trace 23939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 11, trace 23940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 23951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 23952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 10, trace 24098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 11, trace 24099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 24110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 24111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 10, trace 24241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 11, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 24253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 24254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 10, trace 24393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 11, trace 24394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 10, trace 24552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 11, trace 24553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 24564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 24565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 10, trace 24718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 11, trace 24719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 24730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 24731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 10, trace 24859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 11, trace 24860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 24871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 24872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Cole killed in action
- 1: Reed killed in action
- 1: Iven incapacitated
- 1: Soren killed in action
- 1: Moss killed in action
- 1: Tern incapacitated
- 1: Ash incapacitated

## Outcome attribution

- 79.45s, evidence 12626: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15133232908753697, 'next_transition': 12636}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 1474: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13034: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322093 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575054801351407, 'next_transition': 13051}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13035: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322093 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575054801351407, 'next_transition': 13051}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 95.80s, evidence 1739: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 98.65s, evidence 1775: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 98.65s, evidence 14723: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.242522 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14853}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 98.65s, evidence 14724: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.242522 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14853}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.95s, evidence 1830: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3706927828067329, 'next_transition': 16728}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.95s, evidence 1831: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 107, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.929974147357157, 'next_transition': 16759}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 140.15s, evidence 1968: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 202.60s, evidence 2198: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 264.45s, evidence 2483: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 326.05s, evidence 2756: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
