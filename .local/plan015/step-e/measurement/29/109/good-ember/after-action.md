# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/109/good-ember/battle-109-1789674326443380311`

## Battle summary

**Ember** · 360 s · 452 shots.

### Turning points

- 34.5s, squad 4: contact (events line 365). First recorded contact.
- 59.2s, squad 0: help call ([trace 7784](#trace-7784)). No completion observed before termination.
- 109.2s, squad 0: withdrawal ([trace 10791](#trace-10791)). 150.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.7s, squad 0: help call ([trace 11414](#trace-11414)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 72 shots, 4/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 380 shots, 2/8 lost.

### Decisions and attribution

At 93.1s, squad 0 chose advanced tactically ([trace 9894](#trace-9894)), followed by 7 shots and 0 own casualties; estimate 9.5 against 0 distinct squad-reported contacts; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1243](#trace-1243)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 38.0s, squad 0 chose took cover and returned fire ([trace 3387](#trace-3387)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1242](#trace-1242)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4622077207253526, 'next_transition': 1267}.
- 52.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292399 retreat threshold=0.220000 initiative=requires intent ([trace 5496](#trace-5496)). Following evidence: None.

### Communication

171 matched deliveries (mean 0.48s, max 5.35s); 236 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 34.50s, squad 4, contact, evidence events line 365: First recorded contact; .
- 59.15s, squad 0, help call, evidence 7784: NeedSupport; No completion observed before termination.
- 109.25s, squad 0, withdrawal, evidence 10791: BreakContact: believed ratio at least two without superiority; 150.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.65s, squad 0, help call, evidence 11414: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.782814465228485, 'next_transition': 648}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.782814465228485, 'next_transition': 648}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.782814465228485, 'next_transition': 648}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-498"></a>
<a id="trace-515"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-571"></a>
<a id="trace-650"></a>
<a id="trace-671"></a>
<a id="trace-695"></a>
<a id="trace-721"></a>
<a id="trace-738"></a>
<a id="trace-759"></a>
<a id="trace-781"></a>
<a id="trace-806"></a>
<a id="trace-816"></a>
<a id="trace-827"></a>
<a id="trace-909"></a>
<a id="trace-922"></a>
<a id="trace-1239"></a>
<a id="trace-1269"></a>
<a id="trace-1299"></a>
<a id="trace-1322"></a>
<a id="trace-1346"></a>
<a id="trace-1373"></a>
<a id="trace-1401"></a>
<a id="trace-1424"></a>
<a id="trace-1503"></a>
<a id="trace-1523"></a>
<a id="trace-1546"></a>
<a id="trace-1571"></a>
<a id="trace-1734"></a>
<a id="trace-1759"></a>
<a id="trace-1941"></a>
<a id="trace-1965"></a>
<a id="trace-1998"></a>
<a id="trace-2031"></a>
<a id="trace-2121"></a>
<a id="trace-2157"></a>
<a id="trace-2175"></a>
<a id="trace-2202"></a>
<a id="trace-2227"></a>
<a id="trace-2240"></a>
<a id="trace-2260"></a>
<a id="trace-2272"></a>
<a id="trace-2294"></a>
<a id="trace-2308"></a>
<a id="trace-2383"></a>
<a id="trace-2394"></a>
<a id="trace-2417"></a>
<a id="trace-2428"></a>
<a id="trace-2445"></a>
<a id="trace-2455"></a>
<a id="trace-2472"></a>
<a id="trace-2485"></a>
<a id="trace-2496"></a>
<a id="trace-2812"></a>
<a id="trace-2901"></a>
<a id="trace-2916"></a>
<a id="trace-2931"></a>
<a id="trace-2949"></a>
<a id="trace-2969"></a>
<a id="trace-2990"></a>
<a id="trace-3006"></a>
<a id="trace-3025"></a>
<a id="trace-3049"></a>
<a id="trace-3066"></a>
<a id="trace-3148"></a>
<a id="trace-3307"></a>
<a id="trace-3326"></a>
<a id="trace-3352"></a>
<a id="trace-3364"></a>
<a id="trace-3374"></a>
<a id="trace-3715"></a>
<a id="trace-4050"></a>
<a id="trace-4086"></a>
<a id="trace-4445"></a>
<a id="trace-4543"></a>
<a id="trace-4596"></a>
<a id="trace-4656"></a>
<a id="trace-4677"></a>
<a id="trace-4720"></a>
<a id="trace-4739"></a>
<a id="trace-4748"></a>
<a id="trace-4753"></a>
<a id="trace-5091"></a>
<a id="trace-5111"></a>
<a id="trace-5202"></a>
<a id="trace-5224"></a>
<a id="trace-5241"></a>
<a id="trace-5269"></a>
<a id="trace-5293"></a>
<a id="trace-5306"></a>
<a id="trace-5321"></a>
<a id="trace-5346"></a>
<a id="trace-5363"></a>
<a id="trace-5376"></a>
<a id="trace-5461"></a>
<a id="trace-5469"></a>
<a id="trace-5475"></a>
<a id="trace-5485"></a>
<a id="trace-5495"></a>
<a id="trace-5509"></a>
<a id="trace-7540"></a>
<a id="trace-7544"></a>
<a id="trace-7566"></a>
<a id="trace-7583"></a>
<a id="trace-7658"></a>
<a id="trace-7675"></a>
<a id="trace-7691"></a>
<a id="trace-7714"></a>
<a id="trace-7728"></a>
<a id="trace-7741"></a>
<a id="trace-7762"></a>
<a id="trace-7778"></a>
<a id="trace-7794"></a>
<a id="trace-7809"></a>
<a id="trace-7884"></a>
<a id="trace-7899"></a>
<a id="trace-7908"></a>
<a id="trace-7915"></a>
<a id="trace-7928"></a>
<a id="trace-7942"></a>
<a id="trace-7958"></a>
<a id="trace-7975"></a>
<a id="trace-7993"></a>
<a id="trace-8016"></a>
<a id="trace-8098"></a>
<a id="trace-8110"></a>
<a id="trace-8123"></a>
<a id="trace-8130"></a>
<a id="trace-8478"></a>
<a id="trace-8499"></a>
<a id="trace-8515"></a>
<a id="trace-8531"></a>
<a id="trace-8541"></a>
<a id="trace-8622"></a>
<a id="trace-8630"></a>
<a id="trace-8639"></a>
<a id="trace-8644"></a>
<a id="trace-8663"></a>
<a id="trace-8677"></a>
<a id="trace-8697"></a>
<a id="trace-8712"></a>
<a id="trace-9162"></a>
<a id="trace-9175"></a>
<a id="trace-9253"></a>
<a id="trace-9267"></a>
<a id="trace-9284"></a>
<a id="trace-9298"></a>
<a id="trace-9314"></a>
<a id="trace-9324"></a>
<a id="trace-9334"></a>
<a id="trace-9345"></a>
<a id="trace-9355"></a>
<a id="trace-9363"></a>
<a id="trace-9439"></a>
<a id="trace-9450"></a>
<a id="trace-9466"></a>
<a id="trace-9475"></a>
<a id="trace-9574"></a>
<a id="trace-9584"></a>
<a id="trace-9593"></a>
<a id="trace-9600"></a>
<a id="trace-9614"></a>
<a id="trace-9621"></a>
<a id="trace-9702"></a>
<a id="trace-9710"></a>
<a id="trace-9720"></a>
<a id="trace-9726"></a>
<a id="trace-9735"></a>
<a id="trace-9740"></a>
<a id="trace-9747"></a>
<a id="trace-9752"></a>
<a id="trace-9763"></a>
<a id="trace-9768"></a>
<a id="trace-9843"></a>
<a id="trace-9854"></a>
<a id="trace-9861"></a>
<a id="trace-9874"></a>
<a id="trace-9886"></a>
<a id="trace-9893"></a>
<a id="trace-9953"></a>
<a id="trace-9958"></a>
<a id="trace-9971"></a>
<a id="trace-9977"></a>
<a id="trace-10046"></a>
<a id="trace-10054"></a>
<a id="trace-10068"></a>
<a id="trace-10078"></a>
<a id="trace-10097"></a>
<a id="trace-10117"></a>
<a id="trace-10132"></a>
<a id="trace-10147"></a>
<a id="trace-10161"></a>
<a id="trace-10172"></a>
<a id="trace-10243"></a>
<a id="trace-10254"></a>
<a id="trace-10265"></a>
<a id="trace-10277"></a>
<a id="trace-10292"></a>
<a id="trace-10300"></a>
<a id="trace-10307"></a>
<a id="trace-10621"></a>
<a id="trace-10636"></a>
<a id="trace-10649"></a>
<a id="trace-10719"></a>
<a id="trace-10725"></a>
<a id="trace-10729"></a>
<a id="trace-10737"></a>
<a id="trace-10745"></a>
<a id="trace-10754"></a>
<a id="trace-10764"></a>
<a id="trace-10780"></a>
<a id="trace-10790"></a>
<a id="trace-10998"></a>
<a id="trace-11070"></a>
<a id="trace-11075"></a>
<a id="trace-11088"></a>
<a id="trace-11093"></a>
<a id="trace-11125"></a>
<a id="trace-11149"></a>
<a id="trace-11180"></a>
<a id="trace-11196"></a>
<a id="trace-11222"></a>
<a id="trace-11240"></a>
<a id="trace-11311"></a>
<a id="trace-11320"></a>
<a id="trace-11349"></a>
<a id="trace-11360"></a>
<a id="trace-11385"></a>
<a id="trace-11394"></a>
<a id="trace-11410"></a>
<a id="trace-11423"></a>
<a id="trace-11432"></a>
<a id="trace-11442"></a>
<a id="trace-11515"></a>
<a id="trace-11523"></a>
<a id="trace-11560"></a>
<a id="trace-11572"></a>
<a id="trace-11590"></a>
<a id="trace-11600"></a>
<a id="trace-11606"></a>
<a id="trace-11620"></a>
<a id="trace-11737"></a>
<a id="trace-11809"></a>
<a id="trace-11828"></a>
<a id="trace-11835"></a>
<a id="trace-11846"></a>
<a id="trace-11863"></a>
<a id="trace-11868"></a>
<a id="trace-11882"></a>
<a id="trace-11893"></a>
<a id="trace-11901"></a>
<a id="trace-11911"></a>
<a id="trace-11983"></a>
<a id="trace-11992"></a>
<a id="trace-12002"></a>
<a id="trace-12008"></a>
<a id="trace-12025"></a>
<a id="trace-12038"></a>
<a id="trace-12049"></a>
<a id="trace-12056"></a>
<a id="trace-12071"></a>
<a id="trace-12083"></a>
<a id="trace-12149"></a>
<a id="trace-12157"></a>
<a id="trace-12170"></a>
<a id="trace-12182"></a>
<a id="trace-12194"></a>
<a id="trace-12201"></a>
<a id="trace-12214"></a>
<a id="trace-12219"></a>
<a id="trace-12228"></a>
<a id="trace-12238"></a>
<a id="trace-12310"></a>
<a id="trace-12328"></a>
<a id="trace-12339"></a>
<a id="trace-12345"></a>
<a id="trace-12363"></a>
<a id="trace-12368"></a>
<a id="trace-12379"></a>
<a id="trace-12386"></a>
<a id="trace-12449"></a>
<a id="trace-12471"></a>
<a id="trace-12542"></a>
<a id="trace-12552"></a>
<a id="trace-12564"></a>
<a id="trace-12576"></a>
<a id="trace-12586"></a>
<a id="trace-12594"></a>
<a id="trace-12601"></a>
<a id="trace-12605"></a>
<a id="trace-12613"></a>
<a id="trace-12625"></a>
<a id="trace-12696"></a>
<a id="trace-12707"></a>
<a id="trace-12718"></a>
<a id="trace-12773"></a>
<a id="trace-12799"></a>
<a id="trace-12813"></a>
<a id="trace-12836"></a>
<a id="trace-12841"></a>
<a id="trace-12856"></a>
<a id="trace-12864"></a>
<a id="trace-12932"></a>
<a id="trace-12939"></a>
<a id="trace-12947"></a>
<a id="trace-12956"></a>
<a id="trace-12966"></a>
<a id="trace-12972"></a>
<a id="trace-12983"></a>
<a id="trace-12988"></a>
<a id="trace-12999"></a>
<a id="trace-13010"></a>
<a id="trace-13078"></a>
<a id="trace-13083"></a>
<a id="trace-13090"></a>
<a id="trace-13098"></a>
<a id="trace-13107"></a>
<a id="trace-13117"></a>
<a id="trace-13127"></a>
<a id="trace-13132"></a>
<a id="trace-13141"></a>
<a id="trace-13151"></a>
<a id="trace-13220"></a>
<a id="trace-13226"></a>
<a id="trace-13238"></a>
<a id="trace-13243"></a>
<a id="trace-13253"></a>
<a id="trace-13262"></a>
<a id="trace-13271"></a>
<a id="trace-13278"></a>
<a id="trace-13286"></a>
<a id="trace-13294"></a>
<a id="trace-13363"></a>
<a id="trace-13368"></a>
<a id="trace-13378"></a>
<a id="trace-13383"></a>
<a id="trace-13396"></a>
<a id="trace-13403"></a>
<a id="trace-13414"></a>
<a id="trace-13421"></a>
<a id="trace-13428"></a>
<a id="trace-13438"></a>
<a id="trace-13506"></a>
<a id="trace-13510"></a>
<a id="trace-13519"></a>
<a id="trace-13525"></a>
<a id="trace-13537"></a>
<a id="trace-13544"></a>
<a id="trace-13555"></a>
<a id="trace-13560"></a>
<a id="trace-13570"></a>
<a id="trace-13584"></a>
<a id="trace-13651"></a>
<a id="trace-13658"></a>
<a id="trace-13665"></a>
<a id="trace-13671"></a>
<a id="trace-13681"></a>
<a id="trace-13689"></a>
<a id="trace-13701"></a>
<a id="trace-13706"></a>
<a id="trace-13714"></a>
<a id="trace-13724"></a>
<a id="trace-13799"></a>
<a id="trace-13810"></a>
<a id="trace-13817"></a>
<a id="trace-13827"></a>
<a id="trace-13833"></a>
<a id="trace-13843"></a>
<a id="trace-13847"></a>
<a id="trace-13858"></a>
<a id="trace-13867"></a>
<a id="trace-13935"></a>
<a id="trace-13940"></a>
<a id="trace-13951"></a>
<a id="trace-13958"></a>
<a id="trace-13970"></a>
<a id="trace-13983"></a>
<a id="trace-13991"></a>
<a id="trace-13995"></a>
<a id="trace-14004"></a>
<a id="trace-14012"></a>
<a id="trace-14081"></a>
<a id="trace-14087"></a>
<a id="trace-14096"></a>
<a id="trace-14100"></a>
<a id="trace-14110"></a>
<a id="trace-14121"></a>
<a id="trace-14129"></a>
<a id="trace-14138"></a>
<a id="trace-14150"></a>
<a id="trace-14158"></a>
<a id="trace-14226"></a>
<a id="trace-14231"></a>
<a id="trace-14240"></a>
<a id="trace-14245"></a>
<a id="trace-14257"></a>
<a id="trace-14264"></a>
<a id="trace-14274"></a>
<a id="trace-14280"></a>
<a id="trace-14290"></a>
<a id="trace-14300"></a>
<a id="trace-14369"></a>
<a id="trace-14373"></a>
<a id="trace-14384"></a>
<a id="trace-14389"></a>
<a id="trace-14401"></a>
<a id="trace-14408"></a>
<a id="trace-14417"></a>
<a id="trace-14422"></a>
<a id="trace-14431"></a>
<a id="trace-14443"></a>
<a id="trace-14510"></a>
<a id="trace-14517"></a>
<a id="trace-14526"></a>
<a id="trace-14531"></a>
<a id="trace-14544"></a>
<a id="trace-14555"></a>
<a id="trace-14565"></a>
<a id="trace-14570"></a>
<a id="trace-14579"></a>
<a id="trace-14588"></a>
<a id="trace-14655"></a>
<a id="trace-14663"></a>
<a id="trace-14672"></a>
<a id="trace-14679"></a>
<a id="trace-14688"></a>
<a id="trace-14697"></a>
<a id="trace-14706"></a>
<a id="trace-14713"></a>
<a id="trace-14726"></a>
<a id="trace-14733"></a>
<a id="trace-14801"></a>
<a id="trace-14806"></a>
<a id="trace-14814"></a>
<a id="trace-14821"></a>
<a id="trace-14831"></a>
<a id="trace-14842"></a>
<a id="trace-14850"></a>
<a id="trace-14854"></a>
<a id="trace-14865"></a>
<a id="trace-14873"></a>
<a id="trace-14944"></a>
<a id="trace-14953"></a>
<a id="trace-14961"></a>
<a id="trace-14966"></a>
<a id="trace-14976"></a>
<a id="trace-14986"></a>
<a id="trace-14993"></a>
<a id="trace-15001"></a>
<a id="trace-15011"></a>
<a id="trace-15019"></a>
<a id="trace-15087"></a>
<a id="trace-15094"></a>
<a id="trace-15102"></a>
<a id="trace-15109"></a>
<a id="trace-15124"></a>
<a id="trace-15133"></a>
<a id="trace-15141"></a>
<a id="trace-15148"></a>
<a id="trace-15157"></a>
<a id="trace-15167"></a>
<a id="trace-15235"></a>
<a id="trace-15239"></a>
<a id="trace-15251"></a>
<a id="trace-15256"></a>
<a id="trace-15270"></a>
<a id="trace-15276"></a>
<a id="trace-15288"></a>
<a id="trace-15293"></a>
<a id="trace-15304"></a>
<a id="trace-15314"></a>
<a id="trace-15381"></a>
<a id="trace-15388"></a>
<a id="trace-15396"></a>
<a id="trace-15401"></a>
<a id="trace-15413"></a>
<a id="trace-15422"></a>
<a id="trace-15431"></a>
<a id="trace-15436"></a>
<a id="trace-15447"></a>
<a id="trace-15454"></a>
<a id="trace-15522"></a>
<a id="trace-15532"></a>
<a id="trace-15538"></a>
<a id="trace-15545"></a>
<a id="trace-15555"></a>
<a id="trace-15563"></a>
<a id="trace-15571"></a>
<a id="trace-15577"></a>
<a id="trace-15588"></a>
<a id="trace-15596"></a>
<a id="trace-15663"></a>
<a id="trace-15670"></a>
<a id="trace-15676"></a>
<a id="trace-15685"></a>
<a id="trace-15698"></a>
<a id="trace-15707"></a>
<a id="trace-15715"></a>
<a id="trace-15720"></a>
<a id="trace-15729"></a>
<a id="trace-15737"></a>
<a id="trace-15807"></a>
<a id="trace-15814"></a>
<a id="trace-15822"></a>
<a id="trace-15826"></a>
<a id="trace-15837"></a>
<a id="trace-15846"></a>
<a id="trace-15856"></a>
<a id="trace-15867"></a>
<a id="trace-15874"></a>
<a id="trace-15882"></a>
<a id="trace-15950"></a>
<a id="trace-15955"></a>
<a id="trace-15964"></a>
<a id="trace-15970"></a>
<a id="trace-15982"></a>
<a id="trace-15989"></a>
<a id="trace-15997"></a>
<a id="trace-16006"></a>
<a id="trace-16024"></a>
<a id="trace-16094"></a>
<a id="trace-16099"></a>
<a id="trace-16107"></a>
<a id="trace-16112"></a>
<a id="trace-16125"></a>
<a id="trace-16132"></a>
<a id="trace-16142"></a>
<a id="trace-16146"></a>
<a id="trace-16155"></a>
<a id="trace-16165"></a>
<a id="trace-16234"></a>
<a id="trace-16240"></a>
<a id="trace-16249"></a>
<a id="trace-16254"></a>
<a id="trace-16269"></a>
<a id="trace-16276"></a>
<a id="trace-16286"></a>
<a id="trace-16291"></a>
<a id="trace-16301"></a>
<a id="trace-16309"></a>
<a id="trace-16377"></a>
<a id="trace-16386"></a>
<a id="trace-16393"></a>
<a id="trace-16400"></a>
<a id="trace-16412"></a>
<a id="trace-16418"></a>
<a id="trace-16429"></a>
<a id="trace-16438"></a>
<a id="trace-16448"></a>
<a id="trace-16455"></a>
<a id="trace-16522"></a>
<a id="trace-16528"></a>
<a id="trace-16535"></a>
<a id="trace-16543"></a>
<a id="trace-16555"></a>
<a id="trace-16564"></a>
<a id="trace-16572"></a>
<a id="trace-16579"></a>
<a id="trace-16588"></a>
<a id="trace-16598"></a>
<a id="trace-16670"></a>
<a id="trace-16675"></a>
<a id="trace-16683"></a>
<a id="trace-16688"></a>
<a id="trace-16699"></a>
<a id="trace-16708"></a>
<a id="trace-16717"></a>
<a id="trace-16726"></a>
<a id="trace-16734"></a>
<a id="trace-16742"></a>
<a id="trace-16812"></a>
<a id="trace-16817"></a>
<a id="trace-16827"></a>
<a id="trace-16835"></a>
<a id="trace-16846"></a>
<a id="trace-16853"></a>
<a id="trace-16861"></a>
<a id="trace-16869"></a>
<a id="trace-16877"></a>
<a id="trace-16888"></a>
<a id="trace-16956"></a>
<a id="trace-16960"></a>
<a id="trace-16968"></a>
<a id="trace-16975"></a>
<a id="trace-16987"></a>
<a id="trace-16995"></a>
<a id="trace-17008"></a>
<a id="trace-17013"></a>
<a id="trace-17021"></a>
<a id="trace-17031"></a>
<a id="trace-17099"></a>
<a id="trace-17106"></a>
<a id="trace-17115"></a>
<a id="trace-17123"></a>
<a id="trace-17136"></a>
<a id="trace-17143"></a>
<a id="trace-17155"></a>
<a id="trace-17160"></a>
<a id="trace-17170"></a>
<a id="trace-17178"></a>
<a id="trace-17249"></a>
<a id="trace-17255"></a>
<a id="trace-17262"></a>
<a id="trace-17270"></a>
<a id="trace-17280"></a>
<a id="trace-17287"></a>
<a id="trace-17297"></a>
<a id="trace-17303"></a>
<a id="trace-17312"></a>
<a id="trace-17320"></a>
<a id="trace-17389"></a>
<a id="trace-17394"></a>
<a id="trace-17403"></a>
<a id="trace-17415"></a>
<a id="trace-17425"></a>
<a id="trace-17433"></a>
<a id="trace-17441"></a>
<a id="trace-17447"></a>
<a id="trace-17455"></a>
<a id="trace-17464"></a>
<a id="trace-17535"></a>
<a id="trace-17540"></a>
<a id="trace-17547"></a>
<a id="trace-17555"></a>
<a id="trace-17565"></a>
<a id="trace-17578"></a>
<a id="trace-17590"></a>
<a id="trace-17597"></a>
<a id="trace-17604"></a>
<a id="trace-17612"></a>
<a id="trace-17681"></a>
<a id="trace-17686"></a>
<a id="trace-17696"></a>
<a id="trace-17703"></a>
<a id="trace-17714"></a>
<a id="trace-17722"></a>
<a id="trace-17732"></a>
<a id="trace-17738"></a>
<a id="trace-17747"></a>
<a id="trace-17761"></a>
<a id="trace-17828"></a>
<a id="trace-17833"></a>
<a id="trace-17841"></a>
<a id="trace-17847"></a>
<a id="trace-17859"></a>
<a id="trace-17868"></a>
<a id="trace-17879"></a>
<a id="trace-17883"></a>
<a id="trace-17890"></a>
<a id="trace-17902"></a>
<a id="trace-17969"></a>
<a id="trace-17978"></a>
<a id="trace-17988"></a>
<a id="trace-17993"></a>
<a id="trace-18004"></a>
<a id="trace-18012"></a>
<a id="trace-18023"></a>
<a id="trace-18030"></a>
<a id="trace-18039"></a>
<a id="trace-18047"></a>
<a id="trace-18116"></a>
<a id="trace-18123"></a>
<a id="trace-18132"></a>
<a id="trace-18139"></a>
<a id="trace-18151"></a>
<a id="trace-18158"></a>
<a id="trace-18171"></a>
<a id="trace-18177"></a>
<a id="trace-18186"></a>
<a id="trace-18194"></a>
<a id="trace-18263"></a>
<a id="trace-18268"></a>
<a id="trace-18276"></a>
<a id="trace-18285"></a>
<a id="trace-18295"></a>
<a id="trace-18303"></a>
<a id="trace-18313"></a>
<a id="trace-18319"></a>
<a id="trace-18329"></a>
<a id="trace-18341"></a>
<a id="trace-18409"></a>
<a id="trace-18414"></a>
<a id="trace-18422"></a>
<a id="trace-18428"></a>
<a id="trace-18437"></a>
<a id="trace-18447"></a>
<a id="trace-18457"></a>
<a id="trace-18464"></a>
<a id="trace-18471"></a>
<a id="trace-18483"></a>
<a id="trace-18551"></a>
<a id="trace-18558"></a>
<a id="trace-18570"></a>
<a id="trace-18575"></a>
<a id="trace-18586"></a>
<a id="trace-18593"></a>
<a id="trace-18601"></a>
<a id="trace-18608"></a>
<a id="trace-18616"></a>
<a id="trace-18629"></a>
<a id="trace-18696"></a>
<a id="trace-18701"></a>
<a id="trace-18711"></a>
<a id="trace-18716"></a>
<a id="trace-18730"></a>
<a id="trace-18740"></a>
<a id="trace-18748"></a>
<a id="trace-18753"></a>
<a id="trace-18760"></a>
<a id="trace-18772"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250111180236026, 'next_transition': 472}.
<a id="trace-648"></a>
<a id="trace-669"></a>
<a id="trace-693"></a>
<a id="trace-719"></a>
<a id="trace-736"></a>
<a id="trace-757"></a>
<a id="trace-779"></a>
<a id="trace-804"></a>
<a id="trace-907"></a>
<a id="trace-920"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 583. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0725050609190772, 'next_transition': 669}.
<a id="trace-928"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 928): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 830. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787367036029603, 'next_transition': 1237}.
<a id="trace-1237"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 1237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 835. Next observer evidence: None.
<a id="trace-136"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 136): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4622077207253526, 'next_transition': 1267}.
<a id="trace-1242"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1242): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1242. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4622077207253526, 'next_transition': 1267}.
<a id="trace-1243"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1243): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1243. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4622077207253526, 'next_transition': 1267}.
<a id="trace-1267"></a>
<a id="trace-1297"></a>
<a id="trace-1320"></a>
<a id="trace-1344"></a>
<a id="trace-1399"></a>
<a id="trace-1501"></a>
<a id="trace-1521"></a>
<a id="trace-1544"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 1267): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1243. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4716380302899824, 'next_transition': 1297}.
<a id="trace-1572"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1572): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8450016533374167, 'next_transition': 1732}.
<a id="trace-1573"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1573): received platoon directive. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8450016533374167, 'next_transition': 1732}.
<a id="trace-1732"></a>
- 17.25s–17.25s (×1), actor 5, squad 0 (trace 1732): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1432. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.111871631304765, 'next_transition': 1760}.
<a id="trace-1760"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 1760): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6536624823906634, 'next_transition': 1963}.
<a id="trace-1963"></a>
<a id="trace-1996"></a>
<a id="trace-2119"></a>
<a id="trace-2155"></a>
<a id="trace-2173"></a>
<a id="trace-2200"></a>
<a id="trace-2225"></a>
<a id="trace-2270"></a>
<a id="trace-2292"></a>
<a id="trace-2306"></a>
<a id="trace-2392"></a>
<a id="trace-2415"></a>
<a id="trace-2443"></a>
<a id="trace-2453"></a>
<a id="trace-2470"></a>
<a id="trace-2483"></a>
<a id="trace-2494"></a>
- 18.75s–29.25s (×17), actor 5, squad 0 (trace 1963): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1432. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.539204496724953, 'next_transition': 1996}.
<a id="trace-2497"></a>
- 29.25s–29.25s (×1), actor 0, squad 0 (trace 2497): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2311. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.046257519658970105, 'next_transition': 2810}.
<a id="trace-2810"></a>
<a id="trace-2899"></a>
<a id="trace-2914"></a>
<a id="trace-2929"></a>
<a id="trace-2947"></a>
<a id="trace-2988"></a>
<a id="trace-3023"></a>
<a id="trace-3047"></a>
- 29.75s–34.25s (×8), actor 5, squad 0 (trace 2810): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2316. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13781156736645872, 'next_transition': 2899}.
<a id="trace-3149"></a>
- 35.25s–35.25s (×1), actor 0, squad 0 (trace 3149): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3305}.
<a id="trace-3305"></a>
<a id="trace-3324"></a>
<a id="trace-3362"></a>
- 35.75s–37.25s (×3), actor 5, squad 0 (trace 3305): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3081. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3324}.
<a id="trace-3387"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 3387): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625393966866387, 'next_transition': 3713}.
<a id="trace-3388"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 3388): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625393966866387, 'next_transition': 3713}.
<a id="trace-3389"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 3389): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625393966866387, 'next_transition': 3713}.
<a id="trace-3713"></a>
- 38.25s–38.25s (×1), actor 5, squad 0 (trace 3713): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3081. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.47249537191155866, 'next_transition': 4048}.
<a id="trace-3716"></a>
- 38.25s–38.25s (×1), actor 0, squad 0 (trace 3716): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.47249537191155866, 'next_transition': 4048}.
<a id="trace-4048"></a>
<a id="trace-4084"></a>
- 38.75s–39.25s (×2), actor 5, squad 0 (trace 4048): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3081. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7466741560810717, 'next_transition': 4084}.
<a id="trace-4102"></a>
- 39.50s–39.50s (×1), actor 0, squad 0 (trace 4102): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3076. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2705157853357011, 'next_transition': 4443}.
<a id="trace-4443"></a>
<a id="trace-4594"></a>
<a id="trace-4675"></a>
<a id="trace-4718"></a>
<a id="trace-4737"></a>
<a id="trace-4746"></a>
<a id="trace-4751"></a>
- 39.75s–43.75s (×7), actor 5, squad 0 (trace 4443): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3081. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1998253276838708, 'next_transition': 4594}.
<a id="trace-4754"></a>
- 43.75s–43.75s (×1), actor 0, squad 0 (trace 4754): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 4457. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5089}.
<a id="trace-5089"></a>
<a id="trace-5109"></a>
<a id="trace-5239"></a>
<a id="trace-5267"></a>
- 44.25s–46.75s (×4), actor 5, squad 0 (trace 5089): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4462. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.032428800109817586, 'next_transition': 5109}.
<a id="trace-5300"></a>
- 47.45s–47.45s (×1), actor 0, squad 0 (trace 5300): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 5126. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04874926441752737, 'next_transition': 5304}.
<a id="trace-5304"></a>
<a id="trace-5319"></a>
<a id="trace-5344"></a>
<a id="trace-5459"></a>
<a id="trace-5483"></a>
- 47.75s–51.75s (×5), actor 5, squad 0 (trace 5304): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5131. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1080501857934542, 'next_transition': 5319}.
<a id="trace-627"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 627): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5496"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 5496): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292399 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 5496. Next observer evidence: None.
<a id="trace-5497"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 5497): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292399 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 5497. Next observer evidence: None.
<a id="trace-5507"></a>
- 52.75s–52.75s (×1), actor 5, squad 0 (trace 5507): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 5497. Next observer evidence: {'until': 53, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149917329656999, 'next_transition': 5510}.
<a id="trace-5510"></a>
- 53.15s–53.15s (×1), actor 1, squad 0 (trace 5510): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 5381. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999709974987768, 'next_transition': 7538}.
<a id="trace-7285"></a>
- 53.15s–53.15s (×1), actor 1, squad 0 (trace 7285): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 5381. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999709974987768, 'next_transition': 7538}.
<a id="trace-7286"></a>
- 53.15s–53.15s (×1), actor 1, squad 0 (trace 7286): MoveTactically. Knowledge: actor memory at 50.00s, trace 5381. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999709974987768, 'next_transition': 7538}.
<a id="trace-7287"></a>
- 53.15s–53.15s (×1), actor 1, squad 0 (trace 7287): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 5381. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999709974987768, 'next_transition': 7538}.
<a id="trace-7538"></a>
<a id="trace-7656"></a>
<a id="trace-7673"></a>
<a id="trace-7689"></a>
<a id="trace-7776"></a>
- 53.25s–58.75s (×5), actor 5, squad 0 (trace 7538): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 5497. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7572150404318805, 'next_transition': 7656}.
<a id="trace-7784"></a>
- 59.15s–59.15s (×1), actor 1, squad 0 (trace 7784): NeedSupport. Knowledge: actor memory at 55.00s, trace 7589. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27000950236969007, 'next_transition': 7792}.
<a id="trace-7792"></a>
<a id="trace-7807"></a>
<a id="trace-7897"></a>
<a id="trace-7906"></a>
<a id="trace-7926"></a>
<a id="trace-7973"></a>
<a id="trace-7991"></a>
<a id="trace-8014"></a>
<a id="trace-8108"></a>
<a id="trace-8121"></a>
- 59.25s–66.25s (×10), actor 5, squad 0 (trace 7792): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7593. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5580925666485899, 'next_transition': 7807}.
<a id="trace-8139"></a>
- 67.20s–67.20s (×1), actor 1, squad 0 (trace 8139): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 8028. Next observer evidence: None.
<a id="trace-8473"></a>
<a id="trace-8476"></a>
<a id="trace-8497"></a>
<a id="trace-8529"></a>
<a id="trace-8539"></a>
<a id="trace-8620"></a>
<a id="trace-8628"></a>
<a id="trace-8637"></a>
<a id="trace-8642"></a>
<a id="trace-8661"></a>
- 67.25s–72.25s (×10), actor 5, squad 0 (trace 8473): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 8032. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10490934753482932, 'next_transition': 8476}.
<a id="trace-8701"></a>
- 73.30s–73.30s (×1), actor 1, squad 0 (trace 8701): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 8549. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000087822567678, 'next_transition': 8710}.
<a id="trace-8710"></a>
- 73.75s–73.75s (×1), actor 5, squad 0 (trace 8710): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8553. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999922812688832, 'next_transition': 8715}.
<a id="trace-8715"></a>
- 74.15s–74.15s (×1), actor 1, squad 0 (trace 8715): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 8549. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1261172192361853, 'next_transition': 9160}.
<a id="trace-8720"></a>
- 74.15s–74.15s (×1), actor 1, squad 0 (trace 8720): MoveTactically. Knowledge: actor memory at 70.00s, trace 8549. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1261172192361853, 'next_transition': 9160}.
<a id="trace-8721"></a>
- 74.15s–74.15s (×1), actor 1, squad 0 (trace 8721): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 70.00s, trace 8549. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1261172192361853, 'next_transition': 9160}.
<a id="trace-9160"></a>
<a id="trace-9173"></a>
<a id="trace-9251"></a>
<a id="trace-9265"></a>
<a id="trace-9282"></a>
<a id="trace-9296"></a>
<a id="trace-9312"></a>
<a id="trace-9322"></a>
<a id="trace-9343"></a>
<a id="trace-9353"></a>
<a id="trace-9361"></a>
<a id="trace-9437"></a>
<a id="trace-9448"></a>
<a id="trace-9464"></a>
<a id="trace-9473"></a>
- 74.25s–81.75s (×15), actor 5, squad 0 (trace 9160): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8553. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1379830715769603, 'next_transition': 9173}.
<a id="trace-9481"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 9481): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 9366. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06119865805082828, 'next_transition': 9572}.
<a id="trace-9563"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 9563): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 80.00s, trace 9366. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06119865805082828, 'next_transition': 9572}.
<a id="trace-9572"></a>
<a id="trace-9582"></a>
<a id="trace-9591"></a>
<a id="trace-9598"></a>
<a id="trace-9612"></a>
- 82.25s–84.25s (×5), actor 5, squad 0 (trace 9572): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 9369. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9582}.
<a id="trace-9640"></a>
- 85.10s–85.10s (×1), actor 1, squad 0 (trace 9640): Fixing. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04298385100502534, 'next_transition': 9700}.
<a id="trace-9700"></a>
<a id="trace-9718"></a>
- 85.25s–86.25s (×2), actor 5, squad 0 (trace 9700): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9630. Next observer evidence: {'until': 86.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.03175829572288517, 'next_transition': 9718}.
<a id="trace-9721"></a>
- 86.25s–86.25s (×1), actor 1, squad 0 (trace 9721): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 86.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9724}.
<a id="trace-9722"></a>
- 86.25s–86.25s (×1), actor 1, squad 0 (trace 9722): ; retain held slots. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 86.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9724}.
<a id="trace-9724"></a>
<a id="trace-9733"></a>
<a id="trace-9738"></a>
<a id="trace-9745"></a>
<a id="trace-9761"></a>
<a id="trace-9766"></a>
<a id="trace-9852"></a>
<a id="trace-9872"></a>
<a id="trace-9884"></a>
- 86.75s–92.25s (×9), actor 5, squad 0 (trace 9724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9630. Next observer evidence: {'until': 87.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9733}.
<a id="trace-9894"></a>
- 93.10s–93.10s (×1), actor 1, squad 0 (trace 9894): MoveTactically. Knowledge: actor memory at 90.00s, trace 9771. Next observer evidence: {'until': 94.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.21000033746666014, 'next_transition': 9969}.
<a id="trace-9895"></a>
- 93.10s–93.10s (×1), actor 1, squad 0 (trace 9895): superiority established (8 s hysteresis). Knowledge: actor memory at 90.00s, trace 9771. Next observer evidence: {'until': 94.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.21000033746666014, 'next_transition': 9969}.
<a id="trace-9969"></a>
<a id="trace-9975"></a>
<a id="trace-10044"></a>
<a id="trace-10066"></a>
<a id="trace-10076"></a>
<a id="trace-10095"></a>
<a id="trace-10115"></a>
<a id="trace-10130"></a>
<a id="trace-10145"></a>
<a id="trace-10159"></a>
<a id="trace-10170"></a>
<a id="trace-10241"></a>
<a id="trace-10252"></a>
<a id="trace-10290"></a>
<a id="trace-10298"></a>
<a id="trace-10305"></a>
- 94.25s–103.25s (×16), actor 5, squad 0 (trace 9969): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 9774. Next observer evidence: {'until': 94.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.21000030413999146, 'next_transition': 9975}.
<a id="trace-10316"></a>
- 103.65s–103.65s (×1), actor 1, squad 0 (trace 10316): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 10174. Next observer evidence: None.
<a id="trace-10317"></a>
- 103.65s–103.65s (×1), actor 1, squad 0 (trace 10317): superiority lost (8 s hysteresis). Knowledge: actor memory at 100.00s, trace 10174. Next observer evidence: None.
<a id="trace-10619"></a>
<a id="trace-10634"></a>
<a id="trace-10647"></a>
<a id="trace-10717"></a>
<a id="trace-10723"></a>
<a id="trace-10735"></a>
- 103.75s–106.75s (×6), actor 5, squad 0 (trace 10619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 10176. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5188588281853503, 'next_transition': 10634}.
<a id="trace-10746"></a>
- 107.40s–107.40s (×1), actor 4, squad 0 (trace 10746): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 10654. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05589770232308258, 'next_transition': 10752}.
<a id="trace-10752"></a>
<a id="trace-10762"></a>
<a id="trace-10778"></a>
<a id="trace-10788"></a>
- 107.75s–109.25s (×4), actor 5, squad 0 (trace 10752): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10655. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17517750462031356, 'next_transition': 10762}.
<a id="trace-10791"></a>
- 109.25s–109.25s (×1), actor 4, squad 0 (trace 10791): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 105.00s, trace 10654. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299873735235112, 'next_transition': 10996}.
<a id="trace-10792"></a>
- 109.25s–109.25s (×1), actor 4, squad 0 (trace 10792): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 10654. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299873735235112, 'next_transition': 10996}.
<a id="trace-10996"></a>
<a id="trace-11068"></a>
<a id="trace-11073"></a>
<a id="trace-11194"></a>
<a id="trace-11220"></a>
<a id="trace-11309"></a>
<a id="trace-11347"></a>
<a id="trace-11358"></a>
<a id="trace-11383"></a>
<a id="trace-11392"></a>
<a id="trace-11408"></a>
- 109.75s–118.25s (×11), actor 5, squad 0 (trace 10996): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10655. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175060247604476, 'next_transition': 11068}.
<a id="trace-11414"></a>
- 118.65s–118.65s (×1), actor 4, squad 0 (trace 11414): NeedSupport. Knowledge: actor memory at 115.00s, trace 11242. Next observer evidence: None.
<a id="trace-11421"></a>
<a id="trace-11430"></a>
<a id="trace-11521"></a>
<a id="trace-11545"></a>
<a id="trace-11558"></a>
- 118.75s–121.75s (×5), actor 5, squad 0 (trace 11421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11243. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33719115063411714, 'next_transition': 11430}.
<a id="trace-1391"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 1391): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04590307887277326, 'next_transition': 11588}.
<a id="trace-11561"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 11561): renew committed intent (75 s lifetime). Knowledge: actor memory at 121.80s, trace 11561. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04590307887277326, 'next_transition': 11588}.
<a id="trace-11588"></a>
<a id="trace-11598"></a>
<a id="trace-11604"></a>
- 122.75s–123.75s (×3), actor 5, squad 0 (trace 11588): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 11561. Next observer evidence: {'until': 123.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11598}.
<a id="trace-11621"></a>
- 124.30s–124.30s (×1), actor 4, squad 0 (trace 11621): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 11445. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17729846109385722, 'next_transition': 11735}.
<a id="trace-11622"></a>
- 124.30s–124.30s (×1), actor 4, squad 0 (trace 11622): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 11445. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17729846109385722, 'next_transition': 11735}.
<a id="trace-11735"></a>
<a id="trace-11807"></a>
<a id="trace-11826"></a>
<a id="trace-11833"></a>
<a id="trace-11844"></a>
<a id="trace-11861"></a>
<a id="trace-11866"></a>
<a id="trace-11880"></a>
<a id="trace-11891"></a>
<a id="trace-11899"></a>
<a id="trace-11909"></a>
<a id="trace-11981"></a>
<a id="trace-11990"></a>
<a id="trace-12000"></a>
<a id="trace-12006"></a>
<a id="trace-12023"></a>
<a id="trace-12036"></a>
<a id="trace-12054"></a>
<a id="trace-12081"></a>
<a id="trace-12168"></a>
<a id="trace-12192"></a>
<a id="trace-12199"></a>
<a id="trace-12212"></a>
<a id="trace-12236"></a>
<a id="trace-12308"></a>
<a id="trace-12326"></a>
<a id="trace-12337"></a>
<a id="trace-12343"></a>
<a id="trace-12361"></a>
<a id="trace-12377"></a>
<a id="trace-12384"></a>
- 124.75s–143.80s (×31), actor 5, squad 0 (trace 11735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 11561. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0324043825076177, 'next_transition': 11807}.
<a id="trace-12390"></a>
- 143.95s–143.95s (×1), actor 4, squad 0 (trace 12390): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 12242. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500096031599695, 'next_transition': 12447}.
<a id="trace-12433"></a>
- 143.95s–143.95s (×1), actor 4, squad 0 (trace 12433): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 12242. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500096031599695, 'next_transition': 12447}.
<a id="trace-12447"></a>
<a id="trace-12540"></a>
<a id="trace-12550"></a>
<a id="trace-12562"></a>
<a id="trace-12584"></a>
<a id="trace-12592"></a>
<a id="trace-12611"></a>
<a id="trace-12623"></a>
<a id="trace-12694"></a>
- 144.30s–150.30s (×9), actor 5, squad 0 (trace 12447): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 12243. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0616956448352008, 'next_transition': 12540}.
<a id="trace-12699"></a>
- 150.65s–150.65s (×1), actor 4, squad 0 (trace 12699): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 12627. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12705}.
<a id="trace-12705"></a>
<a id="trace-12716"></a>
- 150.80s–151.30s (×2), actor 5, squad 0 (trace 12705): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 12628. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12716}.
<a id="trace-12722"></a>
- 151.65s–151.65s (×1), actor 4, squad 0 (trace 12722): MoveTactically. Knowledge: actor memory at 150.00s, trace 12627. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12771}.
<a id="trace-12723"></a>
- 151.65s–151.65s (×1), actor 4, squad 0 (trace 12723): received platoon directive. Knowledge: actor memory at 150.00s, trace 12627. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12771}.
<a id="trace-12771"></a>
- 151.80s–151.80s (×1), actor 5, squad 0 (trace 12771): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 12628. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12793}.
<a id="trace-12793"></a>
- 152.20s–152.20s (×1), actor 4, squad 0 (trace 12793): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 12627. Next observer evidence: None.
<a id="trace-12797"></a>
<a id="trace-12811"></a>
<a id="trace-12834"></a>
<a id="trace-12839"></a>
<a id="trace-12862"></a>
<a id="trace-12930"></a>
<a id="trace-12937"></a>
<a id="trace-12945"></a>
<a id="trace-12954"></a>
<a id="trace-12964"></a>
<a id="trace-12981"></a>
<a id="trace-12986"></a>
<a id="trace-13076"></a>
<a id="trace-13081"></a>
<a id="trace-13088"></a>
<a id="trace-13096"></a>
<a id="trace-13115"></a>
<a id="trace-13125"></a>
<a id="trace-13130"></a>
<a id="trace-13139"></a>
<a id="trace-13149"></a>
<a id="trace-13218"></a>
<a id="trace-13236"></a>
<a id="trace-13241"></a>
<a id="trace-13251"></a>
<a id="trace-13260"></a>
<a id="trace-13269"></a>
<a id="trace-13276"></a>
<a id="trace-13292"></a>
<a id="trace-13366"></a>
<a id="trace-13381"></a>
<a id="trace-13394"></a>
<a id="trace-13401"></a>
<a id="trace-13419"></a>
<a id="trace-13436"></a>
<a id="trace-13504"></a>
<a id="trace-13517"></a>
<a id="trace-13535"></a>
<a id="trace-13542"></a>
<a id="trace-13553"></a>
<a id="trace-13558"></a>
<a id="trace-13568"></a>
<a id="trace-13582"></a>
<a id="trace-13649"></a>
<a id="trace-13656"></a>
<a id="trace-13663"></a>
<a id="trace-13669"></a>
<a id="trace-13687"></a>
<a id="trace-13699"></a>
<a id="trace-13704"></a>
<a id="trace-13722"></a>
<a id="trace-13789"></a>
<a id="trace-13797"></a>
<a id="trace-13808"></a>
<a id="trace-13815"></a>
<a id="trace-13825"></a>
<a id="trace-13841"></a>
<a id="trace-13856"></a>
<a id="trace-13933"></a>
<a id="trace-13938"></a>
- 152.30s–190.80s (×60), actor 5, squad 0 (trace 12797): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 12628. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12811}.
<a id="trace-1717"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 1717): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13942"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 13942): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 13942. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13949}.
<a id="trace-13949"></a>
<a id="trace-13956"></a>
<a id="trace-13968"></a>
<a id="trace-13981"></a>
<a id="trace-13989"></a>
<a id="trace-14002"></a>
<a id="trace-14079"></a>
<a id="trace-14085"></a>
<a id="trace-14108"></a>
<a id="trace-14119"></a>
<a id="trace-14127"></a>
<a id="trace-14136"></a>
<a id="trace-14148"></a>
<a id="trace-14156"></a>
<a id="trace-14224"></a>
<a id="trace-14229"></a>
<a id="trace-14243"></a>
<a id="trace-14255"></a>
<a id="trace-14262"></a>
<a id="trace-14272"></a>
<a id="trace-14288"></a>
<a id="trace-14298"></a>
<a id="trace-14367"></a>
<a id="trace-14387"></a>
<a id="trace-14399"></a>
<a id="trace-14406"></a>
<a id="trace-14420"></a>
<a id="trace-14429"></a>
<a id="trace-14441"></a>
<a id="trace-14508"></a>
<a id="trace-14515"></a>
<a id="trace-14524"></a>
<a id="trace-14529"></a>
<a id="trace-14542"></a>
<a id="trace-14553"></a>
<a id="trace-14563"></a>
<a id="trace-14568"></a>
<a id="trace-14577"></a>
<a id="trace-14586"></a>
<a id="trace-14653"></a>
<a id="trace-14661"></a>
<a id="trace-14670"></a>
<a id="trace-14677"></a>
<a id="trace-14695"></a>
<a id="trace-14704"></a>
<a id="trace-14711"></a>
<a id="trace-14799"></a>
<a id="trace-14804"></a>
<a id="trace-14812"></a>
<a id="trace-14819"></a>
<a id="trace-14840"></a>
<a id="trace-14848"></a>
<a id="trace-14863"></a>
<a id="trace-14871"></a>
<a id="trace-14942"></a>
<a id="trace-14951"></a>
<a id="trace-14959"></a>
<a id="trace-14964"></a>
<a id="trace-14974"></a>
<a id="trace-14984"></a>
<a id="trace-14999"></a>
<a id="trace-15009"></a>
<a id="trace-15017"></a>
<a id="trace-15085"></a>
<a id="trace-15092"></a>
<a id="trace-15107"></a>
- 191.30s–231.80s (×66), actor 5, squad 0 (trace 13949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 13942. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13956}.
<a id="trace-1918"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 1918): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15139}.
<a id="trace-15122"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 15122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 15023. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15139}.
<a id="trace-15125"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 15125): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 15125. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15139}.
<a id="trace-15126"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 15126): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 15126. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15139}.
<a id="trace-15139"></a>
<a id="trace-15146"></a>
<a id="trace-15155"></a>
<a id="trace-15165"></a>
<a id="trace-15233"></a>
- 233.30s–235.30s (×5), actor 5, squad 0 (trace 15139): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 15126. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15146}.
<a id="trace-15244"></a>
- 236.15s–236.15s (×1), actor 4, squad 0 (trace 15244): traveling overwatch. Knowledge: actor memory at 235.00s, trace 15168. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15249}.
<a id="trace-15245"></a>
- 236.15s–236.15s (×1), actor 4, squad 0 (trace 15245): current contact unknown for 10 s. Knowledge: actor memory at 235.00s, trace 15168. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15249}.
<a id="trace-15249"></a>
<a id="trace-15254"></a>
<a id="trace-15268"></a>
- 236.30s–237.30s (×3), actor 5, squad 0 (trace 15249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 15169. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15254}.
<a id="trace-15279"></a>
- 238.15s–238.15s (×1), actor 4, squad 0 (trace 15279): received platoon directive. Knowledge: actor memory at 235.00s, trace 15168. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15286}.
<a id="trace-15286"></a>
<a id="trace-15291"></a>
<a id="trace-15312"></a>
<a id="trace-15379"></a>
<a id="trace-15386"></a>
<a id="trace-15394"></a>
<a id="trace-15399"></a>
<a id="trace-15411"></a>
<a id="trace-15420"></a>
<a id="trace-15434"></a>
<a id="trace-15445"></a>
<a id="trace-15543"></a>
<a id="trace-15553"></a>
<a id="trace-15561"></a>
<a id="trace-15575"></a>
<a id="trace-15594"></a>
<a id="trace-15668"></a>
<a id="trace-15683"></a>
<a id="trace-15705"></a>
<a id="trace-15713"></a>
<a id="trace-15718"></a>
<a id="trace-15735"></a>
<a id="trace-15805"></a>
<a id="trace-15812"></a>
<a id="trace-15820"></a>
<a id="trace-15844"></a>
<a id="trace-15854"></a>
<a id="trace-15865"></a>
<a id="trace-15880"></a>
<a id="trace-15948"></a>
<a id="trace-15962"></a>
<a id="trace-15968"></a>
<a id="trace-15987"></a>
<a id="trace-15995"></a>
<a id="trace-16004"></a>
<a id="trace-16022"></a>
<a id="trace-16097"></a>
<a id="trace-16105"></a>
<a id="trace-16110"></a>
<a id="trace-16123"></a>
<a id="trace-16130"></a>
<a id="trace-16140"></a>
<a id="trace-16163"></a>
<a id="trace-16232"></a>
<a id="trace-16247"></a>
<a id="trace-16252"></a>
<a id="trace-16267"></a>
<a id="trace-16274"></a>
<a id="trace-16284"></a>
<a id="trace-16289"></a>
<a id="trace-16299"></a>
<a id="trace-16307"></a>
<a id="trace-16375"></a>
<a id="trace-16384"></a>
<a id="trace-16391"></a>
<a id="trace-16398"></a>
<a id="trace-16410"></a>
<a id="trace-16427"></a>
<a id="trace-16436"></a>
<a id="trace-16446"></a>
<a id="trace-16526"></a>
<a id="trace-16533"></a>
<a id="trace-16541"></a>
<a id="trace-16553"></a>
<a id="trace-16562"></a>
<a id="trace-16570"></a>
<a id="trace-16577"></a>
<a id="trace-16586"></a>
<a id="trace-16596"></a>
<a id="trace-16673"></a>
<a id="trace-16681"></a>
<a id="trace-16686"></a>
<a id="trace-16697"></a>
<a id="trace-16706"></a>
<a id="trace-16715"></a>
<a id="trace-16724"></a>
<a id="trace-16732"></a>
<a id="trace-16740"></a>
<a id="trace-16810"></a>
<a id="trace-16815"></a>
<a id="trace-16844"></a>
<a id="trace-16851"></a>
<a id="trace-16859"></a>
<a id="trace-16867"></a>
<a id="trace-16875"></a>
<a id="trace-16886"></a>
<a id="trace-16966"></a>
<a id="trace-16973"></a>
<a id="trace-16985"></a>
<a id="trace-17006"></a>
<a id="trace-17011"></a>
<a id="trace-17019"></a>
<a id="trace-17029"></a>
<a id="trace-17097"></a>
<a id="trace-17104"></a>
- 238.30s–300.80s (×95), actor 5, squad 0 (trace 15286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 15169. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15291}.
<a id="trace-2243"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (events line 2243): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17113"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (trace 17113): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 17033. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17121}.
<a id="trace-17116"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (trace 17116): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 17116. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17121}.
<a id="trace-17121"></a>
<a id="trace-17134"></a>
<a id="trace-17141"></a>
<a id="trace-17153"></a>
<a id="trace-17158"></a>
<a id="trace-17168"></a>
<a id="trace-17176"></a>
<a id="trace-17247"></a>
<a id="trace-17260"></a>
<a id="trace-17268"></a>
<a id="trace-17285"></a>
<a id="trace-17295"></a>
<a id="trace-17310"></a>
<a id="trace-17318"></a>
<a id="trace-17392"></a>
<a id="trace-17401"></a>
<a id="trace-17413"></a>
<a id="trace-17423"></a>
<a id="trace-17439"></a>
<a id="trace-17445"></a>
<a id="trace-17453"></a>
<a id="trace-17462"></a>
<a id="trace-17533"></a>
<a id="trace-17538"></a>
<a id="trace-17553"></a>
<a id="trace-17563"></a>
<a id="trace-17576"></a>
<a id="trace-17588"></a>
<a id="trace-17595"></a>
<a id="trace-17602"></a>
<a id="trace-17610"></a>
<a id="trace-17679"></a>
<a id="trace-17684"></a>
<a id="trace-17694"></a>
<a id="trace-17701"></a>
<a id="trace-17712"></a>
<a id="trace-17720"></a>
<a id="trace-17730"></a>
<a id="trace-17745"></a>
<a id="trace-17759"></a>
<a id="trace-17826"></a>
<a id="trace-17831"></a>
<a id="trace-17839"></a>
<a id="trace-17845"></a>
<a id="trace-17857"></a>
<a id="trace-17866"></a>
<a id="trace-17877"></a>
<a id="trace-17888"></a>
<a id="trace-17900"></a>
<a id="trace-17967"></a>
<a id="trace-17976"></a>
<a id="trace-17991"></a>
<a id="trace-18002"></a>
<a id="trace-18010"></a>
<a id="trace-18021"></a>
<a id="trace-18028"></a>
<a id="trace-18037"></a>
<a id="trace-18045"></a>
<a id="trace-18114"></a>
<a id="trace-18121"></a>
<a id="trace-18130"></a>
<a id="trace-18137"></a>
<a id="trace-18149"></a>
<a id="trace-18156"></a>
<a id="trace-18169"></a>
<a id="trace-18175"></a>
<a id="trace-18184"></a>
<a id="trace-18192"></a>
<a id="trace-18261"></a>
<a id="trace-18266"></a>
<a id="trace-18274"></a>
<a id="trace-18283"></a>
<a id="trace-18293"></a>
<a id="trace-18311"></a>
<a id="trace-18317"></a>
<a id="trace-18327"></a>
<a id="trace-18339"></a>
<a id="trace-18412"></a>
<a id="trace-18420"></a>
<a id="trace-18426"></a>
<a id="trace-18445"></a>
<a id="trace-18455"></a>
<a id="trace-18469"></a>
<a id="trace-18481"></a>
<a id="trace-18549"></a>
<a id="trace-18556"></a>
<a id="trace-18573"></a>
<a id="trace-18584"></a>
<a id="trace-18591"></a>
<a id="trace-18606"></a>
<a id="trace-18614"></a>
<a id="trace-18627"></a>
<a id="trace-18694"></a>
<a id="trace-18699"></a>
<a id="trace-18709"></a>
<a id="trace-18714"></a>
<a id="trace-18728"></a>
<a id="trace-18751"></a>
<a id="trace-18758"></a>
<a id="trace-18770"></a>
- 301.80s–359.80s (×100), actor 5, squad 0 (trace 17121): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 301.30s, trace 17116. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17134}.

## Net delivery

171 matched order/radio deliveries; 236 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.485s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3088: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3089: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3090: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3091: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4457: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4458: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4459: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4465: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4466: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4467: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4468: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4469: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4470: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4471: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4472: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5126: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5127: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5128: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5132: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5134: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5135: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5136: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5137: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5138: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5139: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5140: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5380: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5381: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5382: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5385: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5386: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5388: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5389: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5390: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5391: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5392: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5393: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5394: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 5496: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 5497: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7589: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7590: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7593: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7594: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7596: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7597: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7598: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7599: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7600: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7601: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7602: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7813: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7814: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7817: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7818: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7819: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7820: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7821: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7822: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7823: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7824: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7825: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7826: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8028: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8029: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8032: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8033: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8034: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8035: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8036: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8037: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8038: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8039: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8040: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8041: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8549: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8550: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8553: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8554: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8555: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8556: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8557: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8558: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8559: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8560: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8561: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8562: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9184: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9187: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9188: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9189: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9190: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9191: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9192: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9193: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9194: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9195: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9196: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9366: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9369: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9370: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9371: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9372: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9373: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9374: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9375: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9376: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9377: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9378: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9627: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9628: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9630: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9631: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9632: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9633: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9634: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9635: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9636: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9637: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9638: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9639: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 9771: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 9772: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 9773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 9774: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 9775: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 9776: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 9777: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 9778: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 9779: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 9780: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 9781: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 9782: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 9783: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 9979: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 9980: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 9981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 9982: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 9983: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 9984: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 9985: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 9986: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 9987: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 9988: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 9989: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 9990: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10174: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10176: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10177: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10178: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10179: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10180: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10181: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10182: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10183: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10184: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10655: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 10656: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 10657: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 10658: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 10659: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10660: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10661: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10662: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10663: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11003: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11004: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11005: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11006: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11007: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11008: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11009: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11010: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11011: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11012: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11242: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11243: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11244: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11245: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11246: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11247: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11248: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11249: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11250: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11251: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 11445: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11446: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11447: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11448: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11449: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11450: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11451: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11452: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11453: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11454: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 11561: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 11743: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 11744: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 11745: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 11746: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 11747: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 11748: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11749: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11750: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11751: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11752: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 11913: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 11914: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 11915: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 11916: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 11917: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 11918: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11919: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11920: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11921: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11922: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 12086: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 12087: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12088: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12089: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12090: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 12091: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12092: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12093: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12094: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12095: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 12242: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 12243: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 12244: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 12245: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 12246: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 12247: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 12248: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 12249: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 12250: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 12251: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 12472: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12473: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12474: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 12475: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12476: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12477: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12478: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12479: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12480: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12481: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 12627: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 12628: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 12629: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 12630: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 12631: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 12632: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12633: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12634: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12635: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12636: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 12866: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 12867: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 12868: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 12869: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 12870: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 12871: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12872: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12873: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12874: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12875: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13011: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 13012: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13013: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 13014: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13015: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 13016: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13017: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13018: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13019: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13020: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 13153: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 13154: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 13155: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 13156: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13157: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 13158: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13159: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13160: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13161: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13162: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 13299: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 13300: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 13301: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 13302: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 13303: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 13304: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 13305: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 13306: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 13307: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 13308: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 13440: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 13441: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 13442: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 13443: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 13444: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 13445: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 13446: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 13447: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 13448: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 13449: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 13585: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 13586: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 13587: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 13588: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 13589: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 13590: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 13591: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 13592: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 13593: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 13594: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 13726: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 13727: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 13728: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 13729: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 13730: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 13731: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 13732: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 13733: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 13734: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 13735: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 13868: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 13869: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 13870: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 13871: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 13872: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 13873: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 13874: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 13875: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 13876: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 13877: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 13942: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 14014: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 14015: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 14016: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 14017: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 14018: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 14019: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 14020: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 14021: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 14022: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 14023: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 14161: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 14162: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 14163: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 14164: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 14165: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 14166: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 14167: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 14168: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 14169: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 14170: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 14301: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 14302: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 14303: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 14304: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 14305: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 14306: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 14307: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 14308: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 14309: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 14310: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 14444: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 14445: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 14446: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 14447: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 14448: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 14449: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 14450: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 14451: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 14452: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 14453: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 14590: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 14591: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 14592: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 14593: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 14594: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 14595: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 14596: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 14597: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 14598: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 14599: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 14734: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 14735: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 14736: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 14737: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 14738: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 14739: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 14740: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 14741: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 14742: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 14743: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 14875: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 14876: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 14877: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 14878: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 14879: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 14880: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 14881: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 14882: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 14883: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 14884: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 15022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 15023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 15024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 15025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 15026: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 15027: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 15028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 15029: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 15030: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 15031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 15125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 15126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 15168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 15169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 15170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 15171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 15172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 15173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 15174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 15175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 15176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 15177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 15315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 15316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 15317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 15318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 15319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 15320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 15321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 15322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 15323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 15324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 15458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 15459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 15460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 15461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 15462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 15463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 15464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 15465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 15466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 15467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 15597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 15598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 15599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 15600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 15601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 15602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 15603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 15604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 15605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 15606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 15739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 15740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 15741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 15742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 15743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 15744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 15745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 15746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 15747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 15748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 15885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 15886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 15887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 15888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 15889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 15890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 15891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 15892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 15893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 15894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 16025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 16026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 16027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 16028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 16029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 16030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 16031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 16032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 16033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 16034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 16166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 16167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 16168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 16169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 16170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 16171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 16172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 16173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 16174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 16175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 16312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 16313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 16314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 16315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 16316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 16317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 16318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 16319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 16320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 16321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 16456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 16457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 16458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 16459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 16460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 16461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 16462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 16463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 16464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 16465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 16600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 16601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 16602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 16603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 16604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 16605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 16606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 16607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 16608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 16609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 16745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 16746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 16747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 16748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 16749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 16750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 16751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 16752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 16753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 16754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 16889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 16890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 16891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 16892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 16893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 16894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 16895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 16896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 16897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 16898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 17032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 17033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 17034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 17035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 17036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 17037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 17038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 17039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 17040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 17041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 17116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 17184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 17185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 17186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 17187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 17188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 17189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 17190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 17191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 17192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 17193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 17323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 17324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 17325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 17326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 17327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 17328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 17329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 17330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 17331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 17332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 17466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 17467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 17468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 17469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 17470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 17471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 17472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 17473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 17474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 17475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 17615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 17616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 17617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 17618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 17619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 17620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 17621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 17622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 17623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 17624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 17762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 17763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 17764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 17765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 17766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 17767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 17768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 17769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 17770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 17771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 17903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 17904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 17905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 17906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 17907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 17908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 17909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 17910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 17911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 17912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 18051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 18052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 18053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 18054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 18055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 18056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 18057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 18058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 18059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 18060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 18196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 18197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 18198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 18199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 18200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 18201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 18202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 18203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 18204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 18205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 18343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 18344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 18345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 18346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 18347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 18348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 18349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 18350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 18351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 18352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 18486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 18487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 18488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 18489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 18490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 18491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 18492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 18493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 18494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 18495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 18630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 18631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 18632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 18633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 18634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 18635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 18636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 18637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 18638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 18639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 18773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 18774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 18775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 18776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 18777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 18778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 18779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 18780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 18781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 18782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Voss killed in action
- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Kest killed in action
- 1: Ash incapacitated
- 1: Rook killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
