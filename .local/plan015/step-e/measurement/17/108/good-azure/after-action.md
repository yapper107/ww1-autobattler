# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/108/good-azure/battle-108-1789674019496272897`

## Battle summary

**Ember** · 360 s · 396 shots.

### Turning points

- 16.8s, squad 4: contact (events line 220). First recorded contact.
- 32.4s, squad 0: assault ([trace 10348](#trace-10348)). 43.2s, squad 0: took cover and returned fire.
- 36.2s, squad 1: assault ([trace 11240](#trace-11240)). 61.0s, squad 1: effective fire without superiority for 15 s after expected support.
- 39.9s, squad 0: help call ([trace 11939](#trace-11939)). 64.8s, squad 1: answered a neighbour with support by fire.
- 43.9s, squad 1: help call ([trace 12720](#trace-12720)). 45.7s, squad 0: answered a neighbour with support by fire.
- 45.7s, squad 0: help answer ([trace 13061](#trace-13061)). 55.7s, squad 0: took cover and returned fire.
- 59.5s, squad 0: withdrawal ([trace 17460](#trace-17460)). 102.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 64.8s, squad 1: help answer ([trace 19759](#trace-19759)). 71.2s, squad 1: took cover and returned fire.
- 74.6s, squad 1: withdrawal ([trace 21791](#trace-21791)). No completion observed before termination.
- 109.7s, squad 0: withdrawal ([trace 23575](#trace-23575)). 156.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 44 shots, 5/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, broke contact and 5 further drill types; no completed objective recorded; 6 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 246 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 100 shots, 0/4 lost.

### Decisions and attribution

At 74.6s, squad 1 chose broke contact ([trace 21791](#trace-21791)), followed by 0 shots and 1 own casualties; estimate 15.1 against 0 distinct squad-reported contacts; At 22.1s, squad 1 chose took cover and returned fire ([trace 5876](#trace-5876)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 32.4s, squad 0 chose prepared a base of fire ([trace 9114](#trace-9114)), followed by 1 shots and 0 own casualties; estimate 14.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1006}.

### Communication

292 matched deliveries (mean 0.44s, max 1.95s); 493 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.75s, squad 4, contact, evidence events line 220: First recorded contact; .
- 32.35s, squad 0, assault, evidence 10348: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 43.2s, squad 0: took cover and returned fire.
- 36.15s, squad 1, assault, evidence 11240: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 61.0s, squad 1: effective fire without superiority for 15 s after expected support.
- 39.85s, squad 0, help call, evidence 11939: NeedSupport; 64.8s, squad 1: answered a neighbour with support by fire.
- 43.90s, squad 1, help call, evidence 12720: NeedSupport; 45.7s, squad 0: answered a neighbour with support by fire.
- 45.65s, squad 0, help answer, evidence 13061: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 55.7s, squad 0: took cover and returned fire.
- 59.50s, squad 0, withdrawal, evidence 17460: BreakContact: believed ratio at least two without superiority; 102.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 64.85s, squad 1, help answer, evidence 19759: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 71.2s, squad 1: took cover and returned fire.
- 74.55s, squad 1, withdrawal, evidence 21791: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 109.65s, squad 0, withdrawal, evidence 23575: Withdraw to received rally; 156.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 229.35s, squad 0, withdrawal, evidence 29375: BreakContact: believed ratio at least two without superiority; 242.2s, squad 0: took cover and returned fire.
- 241.30s, squad 0, help call, evidence 30013: NeedSupport; No completion observed before termination.
- 245.95s, squad 0, withdrawal, evidence 30272: BreakContact: believed ratio at least two without superiority; 267.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 275.80s, squad 0, withdrawal, evidence 31365: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-768"></a>
<a id="trace-770"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599859215334897, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1006}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1006}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1006}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450031335669117, 'next_transition': 881}.
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1518"></a>
<a id="trace-1520"></a>
<a id="trace-1571"></a>
<a id="trace-1573"></a>
<a id="trace-1612"></a>
<a id="trace-1614"></a>
<a id="trace-1662"></a>
<a id="trace-1664"></a>
<a id="trace-1702"></a>
<a id="trace-1704"></a>
<a id="trace-1769"></a>
<a id="trace-1771"></a>
<a id="trace-1797"></a>
<a id="trace-1799"></a>
<a id="trace-1918"></a>
<a id="trace-1920"></a>
<a id="trace-1948"></a>
<a id="trace-1950"></a>
<a id="trace-1972"></a>
<a id="trace-1974"></a>
<a id="trace-2006"></a>
<a id="trace-2008"></a>
<a id="trace-2037"></a>
<a id="trace-2039"></a>
<a id="trace-2073"></a>
<a id="trace-2075"></a>
<a id="trace-2095"></a>
<a id="trace-2097"></a>
<a id="trace-2152"></a>
<a id="trace-2154"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2267"></a>
<a id="trace-2269"></a>
<a id="trace-2298"></a>
<a id="trace-2300"></a>
<a id="trace-2330"></a>
<a id="trace-2332"></a>
<a id="trace-3361"></a>
<a id="trace-3363"></a>
<a id="trace-4306"></a>
<a id="trace-4308"></a>
<a id="trace-4860"></a>
<a id="trace-4862"></a>
<a id="trace-5456"></a>
<a id="trace-5458"></a>
<a id="trace-5517"></a>
<a id="trace-5519"></a>
<a id="trace-5664"></a>
<a id="trace-5666"></a>
<a id="trace-5741"></a>
<a id="trace-5743"></a>
<a id="trace-5797"></a>
<a id="trace-5799"></a>
<a id="trace-5840"></a>
<a id="trace-5842"></a>
<a id="trace-6356"></a>
<a id="trace-6358"></a>
<a id="trace-6391"></a>
<a id="trace-6393"></a>
<a id="trace-6473"></a>
<a id="trace-6475"></a>
<a id="trace-7177"></a>
<a id="trace-7179"></a>
<a id="trace-7333"></a>
<a id="trace-7335"></a>
<a id="trace-7394"></a>
<a id="trace-7396"></a>
<a id="trace-7438"></a>
<a id="trace-7440"></a>
<a id="trace-7965"></a>
<a id="trace-7967"></a>
<a id="trace-8016"></a>
<a id="trace-8018"></a>
<a id="trace-8049"></a>
<a id="trace-8051"></a>
<a id="trace-8426"></a>
<a id="trace-8428"></a>
<a id="trace-8458"></a>
<a id="trace-8460"></a>
<a id="trace-8970"></a>
<a id="trace-8972"></a>
<a id="trace-9072"></a>
<a id="trace-9074"></a>
<a id="trace-9110"></a>
<a id="trace-9112"></a>
<a id="trace-10602"></a>
<a id="trace-10604"></a>
<a id="trace-10669"></a>
<a id="trace-10671"></a>
<a id="trace-10683"></a>
<a id="trace-10685"></a>
<a id="trace-10771"></a>
<a id="trace-10773"></a>
<a id="trace-10798"></a>
<a id="trace-10800"></a>
<a id="trace-11509"></a>
<a id="trace-11511"></a>
<a id="trace-11558"></a>
<a id="trace-11560"></a>
<a id="trace-11618"></a>
<a id="trace-11620"></a>
<a id="trace-11746"></a>
<a id="trace-11748"></a>
<a id="trace-11806"></a>
<a id="trace-11808"></a>
<a id="trace-11874"></a>
<a id="trace-11876"></a>
<a id="trace-11932"></a>
<a id="trace-11934"></a>
<a id="trace-12042"></a>
<a id="trace-12044"></a>
<a id="trace-12095"></a>
<a id="trace-12097"></a>
<a id="trace-12124"></a>
<a id="trace-12126"></a>
<a id="trace-12653"></a>
<a id="trace-12655"></a>
<a id="trace-12700"></a>
<a id="trace-12702"></a>
<a id="trace-12774"></a>
<a id="trace-12776"></a>
<a id="trace-12862"></a>
<a id="trace-12864"></a>
<a id="trace-12994"></a>
<a id="trace-12996"></a>
<a id="trace-16121"></a>
<a id="trace-16123"></a>
<a id="trace-16209"></a>
<a id="trace-16211"></a>
<a id="trace-16264"></a>
<a id="trace-16266"></a>
<a id="trace-16314"></a>
<a id="trace-16316"></a>
<a id="trace-16347"></a>
<a id="trace-16349"></a>
<a id="trace-16378"></a>
<a id="trace-16380"></a>
<a id="trace-16396"></a>
<a id="trace-16398"></a>
<a id="trace-16427"></a>
<a id="trace-16429"></a>
<a id="trace-16446"></a>
<a id="trace-16448"></a>
<a id="trace-16529"></a>
<a id="trace-16531"></a>
<a id="trace-16549"></a>
<a id="trace-16551"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16584"></a>
<a id="trace-16586"></a>
<a id="trace-16607"></a>
<a id="trace-16609"></a>
<a id="trace-16628"></a>
<a id="trace-16630"></a>
<a id="trace-16650"></a>
<a id="trace-16652"></a>
<a id="trace-16665"></a>
<a id="trace-16667"></a>
<a id="trace-16692"></a>
<a id="trace-16694"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-17260"></a>
<a id="trace-17262"></a>
<a id="trace-17286"></a>
<a id="trace-17288"></a>
<a id="trace-17318"></a>
<a id="trace-17320"></a>
<a id="trace-17345"></a>
<a id="trace-17347"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17425"></a>
<a id="trace-17427"></a>
<a id="trace-17448"></a>
<a id="trace-17450"></a>
<a id="trace-17835"></a>
<a id="trace-17837"></a>
<a id="trace-17968"></a>
<a id="trace-17970"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18404"></a>
<a id="trace-18406"></a>
<a id="trace-18458"></a>
<a id="trace-18460"></a>
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-21082"></a>
<a id="trace-21084"></a>
<a id="trace-21157"></a>
<a id="trace-21159"></a>
<a id="trace-21198"></a>
<a id="trace-21200"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21350"></a>
<a id="trace-21352"></a>
<a id="trace-21650"></a>
<a id="trace-21652"></a>
<a id="trace-21662"></a>
<a id="trace-21664"></a>
<a id="trace-21697"></a>
<a id="trace-21699"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21761"></a>
<a id="trace-21763"></a>
<a id="trace-21785"></a>
<a id="trace-21787"></a>
<a id="trace-21926"></a>
<a id="trace-21928"></a>
<a id="trace-22002"></a>
<a id="trace-22004"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22042"></a>
<a id="trace-22044"></a>
<a id="trace-22061"></a>
<a id="trace-22063"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22107"></a>
<a id="trace-22109"></a>
<a id="trace-22127"></a>
<a id="trace-22129"></a>
<a id="trace-22145"></a>
<a id="trace-22147"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22174"></a>
<a id="trace-22176"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22279"></a>
<a id="trace-22281"></a>
<a id="trace-22296"></a>
<a id="trace-22298"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22468"></a>
<a id="trace-22470"></a>
<a id="trace-22490"></a>
<a id="trace-22492"></a>
<a id="trace-22509"></a>
<a id="trace-22511"></a>
<a id="trace-22640"></a>
<a id="trace-22642"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22696"></a>
<a id="trace-22698"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22735"></a>
<a id="trace-22737"></a>
<a id="trace-22817"></a>
<a id="trace-22819"></a>
<a id="trace-22828"></a>
<a id="trace-22830"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22877"></a>
<a id="trace-22879"></a>
<a id="trace-22891"></a>
<a id="trace-22893"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22917"></a>
<a id="trace-22919"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-22998"></a>
<a id="trace-23000"></a>
<a id="trace-23014"></a>
<a id="trace-23016"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23187"></a>
<a id="trace-23189"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23345"></a>
<a id="trace-23347"></a>
<a id="trace-23364"></a>
<a id="trace-23366"></a>
<a id="trace-23381"></a>
<a id="trace-23383"></a>
<a id="trace-23393"></a>
<a id="trace-23395"></a>
<a id="trace-23410"></a>
<a id="trace-23412"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23514"></a>
<a id="trace-23516"></a>
<a id="trace-23529"></a>
<a id="trace-23531"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23549"></a>
<a id="trace-23551"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23718"></a>
<a id="trace-23720"></a>
<a id="trace-23734"></a>
<a id="trace-23736"></a>
<a id="trace-23755"></a>
<a id="trace-23757"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23807"></a>
<a id="trace-23809"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23831"></a>
<a id="trace-23833"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23931"></a>
<a id="trace-23933"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-23965"></a>
<a id="trace-23967"></a>
<a id="trace-23980"></a>
<a id="trace-23982"></a>
<a id="trace-23989"></a>
<a id="trace-23991"></a>
<a id="trace-24001"></a>
<a id="trace-24003"></a>
<a id="trace-24017"></a>
<a id="trace-24019"></a>
<a id="trace-24100"></a>
<a id="trace-24102"></a>
<a id="trace-24109"></a>
<a id="trace-24111"></a>
<a id="trace-24252"></a>
<a id="trace-24254"></a>
<a id="trace-24267"></a>
<a id="trace-24269"></a>
<a id="trace-24280"></a>
<a id="trace-24282"></a>
<a id="trace-24294"></a>
<a id="trace-24296"></a>
<a id="trace-24314"></a>
<a id="trace-24316"></a>
<a id="trace-24325"></a>
<a id="trace-24327"></a>
<a id="trace-24400"></a>
<a id="trace-24402"></a>
<a id="trace-24411"></a>
<a id="trace-24413"></a>
<a id="trace-24433"></a>
<a id="trace-24435"></a>
<a id="trace-24465"></a>
<a id="trace-24467"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24502"></a>
<a id="trace-24504"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24595"></a>
<a id="trace-24597"></a>
<a id="trace-24604"></a>
<a id="trace-24606"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24635"></a>
<a id="trace-24637"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24788"></a>
<a id="trace-24790"></a>
<a id="trace-24867"></a>
<a id="trace-24869"></a>
<a id="trace-24884"></a>
<a id="trace-24886"></a>
<a id="trace-24905"></a>
<a id="trace-24907"></a>
<a id="trace-24949"></a>
<a id="trace-24951"></a>
<a id="trace-24971"></a>
<a id="trace-24973"></a>
<a id="trace-25055"></a>
<a id="trace-25057"></a>
<a id="trace-25083"></a>
<a id="trace-25085"></a>
<a id="trace-25093"></a>
<a id="trace-25095"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25220"></a>
<a id="trace-25222"></a>
<a id="trace-25252"></a>
<a id="trace-25254"></a>
<a id="trace-25282"></a>
<a id="trace-25284"></a>
<a id="trace-25360"></a>
<a id="trace-25362"></a>
<a id="trace-25386"></a>
<a id="trace-25388"></a>
<a id="trace-25407"></a>
<a id="trace-25409"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25469"></a>
<a id="trace-25471"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25549"></a>
<a id="trace-25551"></a>
<a id="trace-25560"></a>
<a id="trace-25562"></a>
<a id="trace-25575"></a>
<a id="trace-25577"></a>
<a id="trace-25588"></a>
<a id="trace-25590"></a>
<a id="trace-25601"></a>
<a id="trace-25603"></a>
<a id="trace-25620"></a>
<a id="trace-25622"></a>
<a id="trace-25654"></a>
<a id="trace-25656"></a>
<a id="trace-25669"></a>
<a id="trace-25671"></a>
<a id="trace-25678"></a>
<a id="trace-25680"></a>
<a id="trace-25749"></a>
<a id="trace-25756"></a>
<a id="trace-25775"></a>
<a id="trace-25801"></a>
<a id="trace-25803"></a>
<a id="trace-25814"></a>
<a id="trace-25816"></a>
<a id="trace-25834"></a>
<a id="trace-25836"></a>
<a id="trace-25868"></a>
<a id="trace-25870"></a>
<a id="trace-25888"></a>
<a id="trace-25890"></a>
<a id="trace-25958"></a>
<a id="trace-25960"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-25980"></a>
<a id="trace-25982"></a>
<a id="trace-25991"></a>
<a id="trace-25993"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26012"></a>
<a id="trace-26014"></a>
<a id="trace-26024"></a>
<a id="trace-26026"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26120"></a>
<a id="trace-26122"></a>
<a id="trace-26135"></a>
<a id="trace-26137"></a>
<a id="trace-26155"></a>
<a id="trace-26157"></a>
<a id="trace-26162"></a>
<a id="trace-26164"></a>
<a id="trace-26173"></a>
<a id="trace-26175"></a>
<a id="trace-26192"></a>
<a id="trace-26194"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26294"></a>
<a id="trace-26296"></a>
<a id="trace-26309"></a>
<a id="trace-26311"></a>
<a id="trace-26333"></a>
<a id="trace-26335"></a>
<a id="trace-26339"></a>
<a id="trace-26341"></a>
<a id="trace-26360"></a>
<a id="trace-26362"></a>
<a id="trace-26368"></a>
<a id="trace-26370"></a>
<a id="trace-26391"></a>
<a id="trace-26393"></a>
<a id="trace-26399"></a>
<a id="trace-26401"></a>
<a id="trace-26578"></a>
<a id="trace-26580"></a>
<a id="trace-26595"></a>
<a id="trace-26597"></a>
<a id="trace-26610"></a>
<a id="trace-26612"></a>
<a id="trace-26633"></a>
<a id="trace-26635"></a>
<a id="trace-26660"></a>
<a id="trace-26662"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26730"></a>
<a id="trace-26732"></a>
<a id="trace-26960"></a>
<a id="trace-26962"></a>
<a id="trace-26978"></a>
<a id="trace-26980"></a>
<a id="trace-27000"></a>
<a id="trace-27002"></a>
<a id="trace-27007"></a>
<a id="trace-27009"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27058"></a>
<a id="trace-27060"></a>
<a id="trace-27072"></a>
<a id="trace-27074"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27107"></a>
<a id="trace-27109"></a>
<a id="trace-27189"></a>
<a id="trace-27191"></a>
<a id="trace-27218"></a>
<a id="trace-27220"></a>
<a id="trace-27227"></a>
<a id="trace-27229"></a>
<a id="trace-27249"></a>
<a id="trace-27251"></a>
<a id="trace-27264"></a>
<a id="trace-27266"></a>
<a id="trace-27281"></a>
<a id="trace-27283"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27313"></a>
<a id="trace-27315"></a>
<a id="trace-27393"></a>
<a id="trace-27395"></a>
<a id="trace-27410"></a>
<a id="trace-27412"></a>
<a id="trace-27576"></a>
<a id="trace-27578"></a>
<a id="trace-27594"></a>
<a id="trace-27596"></a>
<a id="trace-27619"></a>
<a id="trace-27621"></a>
<a id="trace-27636"></a>
<a id="trace-27638"></a>
<a id="trace-27662"></a>
<a id="trace-27664"></a>
<a id="trace-27677"></a>
<a id="trace-27679"></a>
<a id="trace-27774"></a>
<a id="trace-27776"></a>
<a id="trace-27786"></a>
<a id="trace-27788"></a>
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27832"></a>
<a id="trace-27834"></a>
<a id="trace-27870"></a>
<a id="trace-27872"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27964"></a>
<a id="trace-27966"></a>
<a id="trace-27981"></a>
<a id="trace-27983"></a>
<a id="trace-27993"></a>
<a id="trace-27995"></a>
<a id="trace-28007"></a>
<a id="trace-28009"></a>
<a id="trace-28016"></a>
<a id="trace-28018"></a>
<a id="trace-28033"></a>
<a id="trace-28035"></a>
<a id="trace-28044"></a>
<a id="trace-28046"></a>
<a id="trace-28066"></a>
<a id="trace-28068"></a>
<a id="trace-28148"></a>
<a id="trace-28150"></a>
<a id="trace-28181"></a>
<a id="trace-28183"></a>
<a id="trace-28205"></a>
<a id="trace-28207"></a>
<a id="trace-28227"></a>
<a id="trace-28229"></a>
<a id="trace-28246"></a>
<a id="trace-28248"></a>
<a id="trace-28319"></a>
<a id="trace-28321"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28416"></a>
<a id="trace-28418"></a>
<a id="trace-28543"></a>
<a id="trace-28545"></a>
<a id="trace-28565"></a>
<a id="trace-28567"></a>
<a id="trace-28596"></a>
<a id="trace-28598"></a>
<a id="trace-28622"></a>
<a id="trace-28624"></a>
<a id="trace-28690"></a>
<a id="trace-28692"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28717"></a>
<a id="trace-28719"></a>
<a id="trace-28745"></a>
<a id="trace-28747"></a>
<a id="trace-28757"></a>
<a id="trace-28759"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28791"></a>
<a id="trace-28793"></a>
<a id="trace-28814"></a>
<a id="trace-28816"></a>
<a id="trace-28825"></a>
<a id="trace-28827"></a>
<a id="trace-28894"></a>
<a id="trace-28896"></a>
<a id="trace-28917"></a>
<a id="trace-28919"></a>
<a id="trace-28948"></a>
<a id="trace-28950"></a>
<a id="trace-28970"></a>
<a id="trace-28972"></a>
<a id="trace-28980"></a>
<a id="trace-28982"></a>
<a id="trace-28999"></a>
<a id="trace-29001"></a>
<a id="trace-29014"></a>
<a id="trace-29016"></a>
<a id="trace-29262"></a>
<a id="trace-29264"></a>
<a id="trace-29275"></a>
<a id="trace-29277"></a>
<a id="trace-29289"></a>
<a id="trace-29291"></a>
<a id="trace-29304"></a>
<a id="trace-29306"></a>
<a id="trace-29318"></a>
<a id="trace-29320"></a>
<a id="trace-29336"></a>
<a id="trace-29338"></a>
<a id="trace-29371"></a>
<a id="trace-29373"></a>
<a id="trace-29666"></a>
<a id="trace-29668"></a>
<a id="trace-29679"></a>
<a id="trace-29681"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29714"></a>
<a id="trace-29716"></a>
<a id="trace-29724"></a>
<a id="trace-29726"></a>
<a id="trace-29738"></a>
<a id="trace-29740"></a>
<a id="trace-29748"></a>
<a id="trace-29750"></a>
<a id="trace-29763"></a>
<a id="trace-29765"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29844"></a>
<a id="trace-29846"></a>
<a id="trace-29882"></a>
<a id="trace-29884"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-30009"></a>
<a id="trace-30011"></a>
<a id="trace-30023"></a>
<a id="trace-30025"></a>
<a id="trace-30132"></a>
<a id="trace-30134"></a>
<a id="trace-30170"></a>
<a id="trace-30172"></a>
<a id="trace-30184"></a>
<a id="trace-30186"></a>
<a id="trace-30196"></a>
<a id="trace-30198"></a>
<a id="trace-30262"></a>
<a id="trace-30264"></a>
<a id="trace-30269"></a>
<a id="trace-30271"></a>
<a id="trace-30415"></a>
<a id="trace-30417"></a>
<a id="trace-30443"></a>
<a id="trace-30445"></a>
<a id="trace-30457"></a>
<a id="trace-30459"></a>
<a id="trace-30479"></a>
<a id="trace-30481"></a>
<a id="trace-30556"></a>
<a id="trace-30558"></a>
<a id="trace-30568"></a>
<a id="trace-30570"></a>
<a id="trace-30575"></a>
<a id="trace-30577"></a>
<a id="trace-30591"></a>
<a id="trace-30593"></a>
<a id="trace-30606"></a>
<a id="trace-30608"></a>
<a id="trace-30619"></a>
<a id="trace-30621"></a>
<a id="trace-30627"></a>
<a id="trace-30629"></a>
<a id="trace-30694"></a>
<a id="trace-30696"></a>
<a id="trace-30702"></a>
<a id="trace-30704"></a>
<a id="trace-30715"></a>
<a id="trace-30717"></a>
<a id="trace-30723"></a>
<a id="trace-30725"></a>
<a id="trace-30734"></a>
<a id="trace-30736"></a>
<a id="trace-30742"></a>
<a id="trace-30744"></a>
<a id="trace-30752"></a>
<a id="trace-30754"></a>
<a id="trace-30771"></a>
<a id="trace-30773"></a>
<a id="trace-30779"></a>
<a id="trace-30781"></a>
<a id="trace-30845"></a>
<a id="trace-30847"></a>
<a id="trace-30864"></a>
<a id="trace-30866"></a>
<a id="trace-30882"></a>
<a id="trace-30884"></a>
<a id="trace-30888"></a>
<a id="trace-30890"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30925"></a>
<a id="trace-30927"></a>
<a id="trace-30937"></a>
<a id="trace-30939"></a>
<a id="trace-30947"></a>
<a id="trace-30949"></a>
<a id="trace-31011"></a>
<a id="trace-31013"></a>
<a id="trace-31018"></a>
<a id="trace-31020"></a>
<a id="trace-31030"></a>
<a id="trace-31032"></a>
<a id="trace-31037"></a>
<a id="trace-31039"></a>
<a id="trace-31053"></a>
<a id="trace-31055"></a>
<a id="trace-31061"></a>
<a id="trace-31063"></a>
<a id="trace-31074"></a>
<a id="trace-31076"></a>
<a id="trace-31090"></a>
<a id="trace-31092"></a>
<a id="trace-31105"></a>
<a id="trace-31107"></a>
<a id="trace-31123"></a>
<a id="trace-31125"></a>
<a id="trace-31197"></a>
<a id="trace-31199"></a>
<a id="trace-31209"></a>
<a id="trace-31211"></a>
<a id="trace-31221"></a>
<a id="trace-31223"></a>
<a id="trace-31227"></a>
<a id="trace-31229"></a>
<a id="trace-31240"></a>
<a id="trace-31242"></a>
<a id="trace-31256"></a>
<a id="trace-31258"></a>
<a id="trace-31264"></a>
<a id="trace-31266"></a>
<a id="trace-31276"></a>
<a id="trace-31278"></a>
<a id="trace-31284"></a>
<a id="trace-31286"></a>
<a id="trace-31353"></a>
<a id="trace-31355"></a>
<a id="trace-31362"></a>
<a id="trace-31364"></a>
<a id="trace-31516"></a>
<a id="trace-31518"></a>
<a id="trace-31556"></a>
<a id="trace-31558"></a>
<a id="trace-31562"></a>
<a id="trace-31564"></a>
<a id="trace-31578"></a>
<a id="trace-31580"></a>
<a id="trace-31588"></a>
<a id="trace-31590"></a>
<a id="trace-31601"></a>
<a id="trace-31603"></a>
<a id="trace-31608"></a>
<a id="trace-31610"></a>
<a id="trace-31687"></a>
<a id="trace-31689"></a>
<a id="trace-31701"></a>
<a id="trace-31703"></a>
<a id="trace-31712"></a>
<a id="trace-31714"></a>
<a id="trace-31725"></a>
<a id="trace-31727"></a>
<a id="trace-31745"></a>
<a id="trace-31747"></a>
<a id="trace-31753"></a>
<a id="trace-31755"></a>
<a id="trace-31837"></a>
<a id="trace-31839"></a>
<a id="trace-31844"></a>
<a id="trace-31846"></a>
<a id="trace-31856"></a>
<a id="trace-31858"></a>
<a id="trace-31863"></a>
<a id="trace-31865"></a>
<a id="trace-31879"></a>
<a id="trace-31881"></a>
<a id="trace-31894"></a>
<a id="trace-31896"></a>
<a id="trace-31903"></a>
<a id="trace-31905"></a>
<a id="trace-31920"></a>
<a id="trace-31922"></a>
<a id="trace-31927"></a>
<a id="trace-31929"></a>
<a id="trace-32002"></a>
<a id="trace-32004"></a>
<a id="trace-32023"></a>
<a id="trace-32025"></a>
<a id="trace-32031"></a>
<a id="trace-32033"></a>
<a id="trace-32046"></a>
<a id="trace-32048"></a>
<a id="trace-32072"></a>
<a id="trace-32074"></a>
<a id="trace-32081"></a>
<a id="trace-32083"></a>
<a id="trace-32155"></a>
<a id="trace-32157"></a>
<a id="trace-32172"></a>
<a id="trace-32174"></a>
<a id="trace-32201"></a>
<a id="trace-32203"></a>
<a id="trace-32206"></a>
<a id="trace-32208"></a>
<a id="trace-32235"></a>
<a id="trace-32237"></a>
<a id="trace-32244"></a>
<a id="trace-32246"></a>
<a id="trace-32308"></a>
<a id="trace-32310"></a>
<a id="trace-32317"></a>
<a id="trace-32319"></a>
<a id="trace-32328"></a>
<a id="trace-32330"></a>
<a id="trace-32340"></a>
<a id="trace-32342"></a>
<a id="trace-32352"></a>
<a id="trace-32354"></a>
<a id="trace-32362"></a>
<a id="trace-32364"></a>
<a id="trace-32384"></a>
<a id="trace-32386"></a>
<a id="trace-32392"></a>
<a id="trace-32394"></a>
<a id="trace-32404"></a>
<a id="trace-32406"></a>
<a id="trace-32412"></a>
<a id="trace-32414"></a>
<a id="trace-32479"></a>
<a id="trace-32481"></a>
<a id="trace-32488"></a>
<a id="trace-32490"></a>
<a id="trace-32515"></a>
<a id="trace-32517"></a>
<a id="trace-32520"></a>
<a id="trace-32522"></a>
<a id="trace-32536"></a>
<a id="trace-32538"></a>
<a id="trace-32543"></a>
<a id="trace-32545"></a>
<a id="trace-32561"></a>
<a id="trace-32563"></a>
<a id="trace-32642"></a>
<a id="trace-32644"></a>
<a id="trace-32649"></a>
<a id="trace-32651"></a>
<a id="trace-32670"></a>
<a id="trace-32672"></a>
<a id="trace-32682"></a>
<a id="trace-32684"></a>
<a id="trace-32689"></a>
<a id="trace-32691"></a>
<a id="trace-32699"></a>
<a id="trace-32701"></a>
<a id="trace-32706"></a>
<a id="trace-32708"></a>
<a id="trace-32728"></a>
<a id="trace-32730"></a>
<a id="trace-32794"></a>
<a id="trace-32796"></a>
<a id="trace-32826"></a>
<a id="trace-32828"></a>
<a id="trace-32833"></a>
<a id="trace-32835"></a>
<a id="trace-32845"></a>
<a id="trace-32847"></a>
<a id="trace-32861"></a>
<a id="trace-32863"></a>
<a id="trace-32872"></a>
<a id="trace-32874"></a>
<a id="trace-32883"></a>
<a id="trace-32885"></a>
<a id="trace-32954"></a>
<a id="trace-32956"></a>
<a id="trace-32997"></a>
<a id="trace-32999"></a>
<a id="trace-33002"></a>
<a id="trace-33004"></a>
<a id="trace-33022"></a>
<a id="trace-33024"></a>
<a id="trace-33031"></a>
<a id="trace-33033"></a>
<a id="trace-33050"></a>
<a id="trace-33052"></a>
<a id="trace-33114"></a>
<a id="trace-33116"></a>
<a id="trace-33122"></a>
<a id="trace-33124"></a>
<a id="trace-33136"></a>
<a id="trace-33138"></a>
<a id="trace-33154"></a>
<a id="trace-33156"></a>
<a id="trace-33159"></a>
<a id="trace-33161"></a>
<a id="trace-33175"></a>
<a id="trace-33177"></a>
<a id="trace-33196"></a>
<a id="trace-33198"></a>
<a id="trace-33215"></a>
<a id="trace-33217"></a>
<a id="trace-33279"></a>
<a id="trace-33281"></a>
<a id="trace-33288"></a>
<a id="trace-33290"></a>
<a id="trace-33321"></a>
<a id="trace-33323"></a>
<a id="trace-33333"></a>
<a id="trace-33335"></a>
<a id="trace-33340"></a>
<a id="trace-33342"></a>
<a id="trace-33352"></a>
<a id="trace-33354"></a>
<a id="trace-33364"></a>
<a id="trace-33366"></a>
<a id="trace-33428"></a>
<a id="trace-33430"></a>
<a id="trace-33463"></a>
<a id="trace-33465"></a>
<a id="trace-33472"></a>
<a id="trace-33474"></a>
<a id="trace-33482"></a>
<a id="trace-33484"></a>
<a id="trace-33497"></a>
<a id="trace-33499"></a>
<a id="trace-33505"></a>
<a id="trace-33507"></a>
<a id="trace-33520"></a>
<a id="trace-33522"></a>
<a id="trace-33528"></a>
<a id="trace-33530"></a>
<a id="trace-33598"></a>
<a id="trace-33600"></a>
<a id="trace-33621"></a>
<a id="trace-33623"></a>
<a id="trace-33637"></a>
<a id="trace-33639"></a>
<a id="trace-33654"></a>
<a id="trace-33656"></a>
<a id="trace-33663"></a>
<a id="trace-33665"></a>
<a id="trace-33670"></a>
<a id="trace-33672"></a>
<a id="trace-33758"></a>
<a id="trace-33760"></a>
<a id="trace-33772"></a>
<a id="trace-33774"></a>
<a id="trace-33779"></a>
<a id="trace-33781"></a>
<a id="trace-33791"></a>
<a id="trace-33793"></a>
<a id="trace-33803"></a>
<a id="trace-33805"></a>
<a id="trace-33813"></a>
<a id="trace-33815"></a>
<a id="trace-33827"></a>
<a id="trace-33829"></a>
<a id="trace-33848"></a>
<a id="trace-33850"></a>
<a id="trace-33855"></a>
<a id="trace-33857"></a>
<a id="trace-33920"></a>
<a id="trace-33922"></a>
<a id="trace-33927"></a>
<a id="trace-33929"></a>
<a id="trace-33940"></a>
<a id="trace-33942"></a>
<a id="trace-33947"></a>
<a id="trace-33949"></a>
<a id="trace-33963"></a>
<a id="trace-33965"></a>
<a id="trace-33974"></a>
<a id="trace-33976"></a>
<a id="trace-33986"></a>
<a id="trace-33988"></a>
<a id="trace-34002"></a>
<a id="trace-34004"></a>
<a id="trace-34011"></a>
<a id="trace-34013"></a>
<a id="trace-34085"></a>
<a id="trace-34087"></a>
<a id="trace-34107"></a>
<a id="trace-34109"></a>
<a id="trace-34114"></a>
<a id="trace-34116"></a>
<a id="trace-34127"></a>
<a id="trace-34129"></a>
<a id="trace-34147"></a>
<a id="trace-34149"></a>
<a id="trace-34158"></a>
<a id="trace-34160"></a>
<a id="trace-34167"></a>
<a id="trace-34169"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624831201777943, 'next_transition': 1518}.
<a id="trace-1006"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1006): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.787879283456352, 'next_transition': 3368}.
<a id="trace-1197"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1197): received platoon directive. Knowledge: actor memory at 5.00s, trace 891. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299801262761824, 'next_transition': 1514}.
<a id="trace-1514"></a>
<a id="trace-1516"></a>
<a id="trace-1567"></a>
<a id="trace-1569"></a>
<a id="trace-1608"></a>
<a id="trace-1610"></a>
<a id="trace-1658"></a>
<a id="trace-1660"></a>
<a id="trace-1698"></a>
<a id="trace-1700"></a>
<a id="trace-1765"></a>
<a id="trace-1767"></a>
<a id="trace-1793"></a>
<a id="trace-1795"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-1914"></a>
<a id="trace-1916"></a>
<a id="trace-1944"></a>
<a id="trace-1946"></a>
<a id="trace-1968"></a>
<a id="trace-1970"></a>
<a id="trace-2002"></a>
<a id="trace-2004"></a>
<a id="trace-2033"></a>
<a id="trace-2035"></a>
<a id="trace-2069"></a>
<a id="trace-2071"></a>
<a id="trace-2091"></a>
<a id="trace-2093"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2148"></a>
<a id="trace-2150"></a>
<a id="trace-2177"></a>
<a id="trace-2179"></a>
<a id="trace-2263"></a>
<a id="trace-2265"></a>
<a id="trace-2294"></a>
<a id="trace-2296"></a>
<a id="trace-2326"></a>
<a id="trace-2328"></a>
<a id="trace-2355"></a>
<a id="trace-2357"></a>
- 6.20s–16.75s (×44), actor 5, squad 0 (trace 1514): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2257227395049857, 'next_transition': 1567}.
<a id="trace-2360"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2360): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725029048319045, 'next_transition': 2856}.
<a id="trace-2361"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2361): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725029048319045, 'next_transition': 2856}.
<a id="trace-2856"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2856): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624571391234775, 'next_transition': 3357}.
<a id="trace-2857"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2857): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624571391234775, 'next_transition': 3357}.
<a id="trace-2858"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2858): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624571391234775, 'next_transition': 3357}.
<a id="trace-3357"></a>
<a id="trace-3359"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 3357): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2192. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2055066040503023, 'next_transition': 3795}.
<a id="trace-3368"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 3368): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2195. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.660867997089397, 'next_transition': 388}.
<a id="trace-3369"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 3369): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2195. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.660867997089397, 'next_transition': 388}.
<a id="trace-3795"></a>
- 17.55s–17.55s (×1), actor 0, squad 0 (trace 3795): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23428133901291098, 'next_transition': 4302}.
<a id="trace-4302"></a>
<a id="trace-4304"></a>
- 17.75s–17.75s (×2), actor 5, squad 0 (trace 4302): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2192. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4842360973495572, 'next_transition': 4323}.
<a id="trace-4323"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 4323): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152376330888318, 'next_transition': 4856}.
<a id="trace-4856"></a>
<a id="trace-4858"></a>
<a id="trace-4902"></a>
<a id="trace-4904"></a>
- 18.25s–18.75s (×4), actor 5, squad 0 (trace 4856): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2192. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8927968888512987, 'next_transition': 4902}.
<a id="trace-4930"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 4930): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2187. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44827781017455104, 'next_transition': 5452}.
<a id="trace-5452"></a>
<a id="trace-5454"></a>
<a id="trace-5513"></a>
<a id="trace-5515"></a>
<a id="trace-5660"></a>
<a id="trace-5662"></a>
<a id="trace-5737"></a>
<a id="trace-5739"></a>
- 19.25s–20.75s (×8), actor 5, squad 0 (trace 5452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2192. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9018643877804651, 'next_transition': 5513}.
<a id="trace-387"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 387): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-388"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 388): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5777"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 5777): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5777. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.615373787189961, 'next_transition': 5793}.
<a id="trace-5778"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 5778): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5778. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.615373787189961, 'next_transition': 5793}.
<a id="trace-5779"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 5779): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5779. Next observer evidence: {'until': 22, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.582757860414886, 'next_transition': 5876}.
<a id="trace-5780"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 5780): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5780. Next observer evidence: {'until': 22, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.582757860414886, 'next_transition': 5876}.
<a id="trace-5793"></a>
<a id="trace-5795"></a>
<a id="trace-5836"></a>
<a id="trace-5838"></a>
<a id="trace-6352"></a>
<a id="trace-6354"></a>
<a id="trace-6387"></a>
<a id="trace-6389"></a>
<a id="trace-6427"></a>
<a id="trace-6429"></a>
- 21.25s–23.25s (×10), actor 5, squad 0 (trace 5793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5780. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2190913185592627, 'next_transition': 5836}.
<a id="trace-5876"></a>
- 22.05s–22.05s (×1), actor 8, squad 1 (trace 5876): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 5552. Next observer evidence: {'until': 22.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450137852868934, 'next_transition': 6372}.
<a id="trace-5877"></a>
- 22.05s–22.05s (×1), actor 8, squad 1 (trace 5877): bounding overwatch. Knowledge: actor memory at 20.00s, trace 5552. Next observer evidence: {'until': 22.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450137852868934, 'next_transition': 6372}.
<a id="trace-5878"></a>
- 22.05s–22.05s (×1), actor 8, squad 1 (trace 5878): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5552. Next observer evidence: {'until': 22.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450137852868934, 'next_transition': 6372}.
<a id="trace-6372"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 6372): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 5552. Next observer evidence: {'until': 25.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.9245679914540292, 'next_transition': 7359}.
<a id="trace-6434"></a>
- 23.35s–23.35s (×1), actor 0, squad 0 (trace 6434): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5544. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9357697707085024, 'next_transition': 6469}.
<a id="trace-6469"></a>
<a id="trace-6471"></a>
- 23.75s–23.75s (×2), actor 5, squad 0 (trace 6469): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5780. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1640471609573908, 'next_transition': 6503}.
<a id="trace-6503"></a>
- 24.20s–24.20s (×1), actor 0, squad 0 (trace 6503): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 5544. Next observer evidence: None.
<a id="trace-7173"></a>
<a id="trace-7175"></a>
- 24.25s–24.25s (×2), actor 5, squad 0 (trace 7173): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5780. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38714946537057193, 'next_transition': 7187}.
<a id="trace-7187"></a>
- 24.45s–24.45s (×1), actor 0, squad 0 (trace 7187): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 5544. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3320913610465108, 'next_transition': 7226}.
<a id="trace-7226"></a>
<a id="trace-7228"></a>
<a id="trace-7329"></a>
<a id="trace-7331"></a>
<a id="trace-7390"></a>
<a id="trace-7392"></a>
<a id="trace-7433"></a>
<a id="trace-7435"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-8010"></a>
<a id="trace-8012"></a>
<a id="trace-8043"></a>
<a id="trace-8045"></a>
- 24.75s–27.75s (×14), actor 5, squad 0 (trace 7226): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5780. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2684894691135775, 'next_transition': 7329}.
<a id="trace-7359"></a>
- 25.50s–25.50s (×1), actor 8, squad 1 (trace 7359): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 7257. Next observer evidence: {'until': 26.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.2708951880340441, 'next_transition': 7452}.
<a id="trace-7452"></a>
<a id="trace-8061"></a>
- 26.50s–28.10s (×2), actor 8, squad 1 (trace 7452): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 7257. Next observer evidence: {'until': 28, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49063333333333264, 'next_transition': 8061}.
<a id="trace-8413"></a>
- 28.20s–28.20s (×1), actor 0, squad 0 (trace 8413): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 7249. Next observer evidence: None.
<a id="trace-8420"></a>
<a id="trace-8422"></a>
<a id="trace-8452"></a>
<a id="trace-8454"></a>
<a id="trace-8843"></a>
<a id="trace-8845"></a>
<a id="trace-8872"></a>
<a id="trace-8874"></a>
<a id="trace-8965"></a>
<a id="trace-8967"></a>
<a id="trace-9008"></a>
<a id="trace-9010"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9068"></a>
<a id="trace-9070"></a>
<a id="trace-9106"></a>
<a id="trace-9108"></a>
- 28.25s–32.25s (×18), actor 5, squad 0 (trace 8420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 7254. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16942746267838887, 'next_transition': 8452}.
<a id="trace-8468"></a>
- 28.85s–28.85s (×1), actor 8, squad 1 (trace 8468): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 7257. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6646942141061025, 'next_transition': 10580}.
<a id="trace-9114"></a>
- 32.35s–32.35s (×1), actor 1, squad 0 (trace 9114): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 8886. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07630942451223022, 'next_transition': 10597}.
<a id="trace-10348"></a>
- 32.35s–32.35s (×1), actor 1, squad 0 (trace 10348): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 8886. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07630942451223022, 'next_transition': 10597}.
<a id="trace-10349"></a>
- 32.35s–32.35s (×1), actor 1, squad 0 (trace 10349): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 8886. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07630942451223022, 'next_transition': 10597}.
<a id="trace-10567"></a>
- 32.35s–32.35s (×1), actor 1, squad 0 (trace 10567): Assaulting. Knowledge: actor memory at 30.00s, trace 8886. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07630942451223022, 'next_transition': 10597}.
<a id="trace-10580"></a>
- 32.40s–32.40s (×1), actor 8, squad 1 (trace 10580): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 8893. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.725672250143233, 'next_transition': 10828}.
<a id="trace-10597"></a>
<a id="trace-10599"></a>
<a id="trace-10627"></a>
<a id="trace-10629"></a>
<a id="trace-10639"></a>
<a id="trace-10641"></a>
<a id="trace-10664"></a>
<a id="trace-10666"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
<a id="trace-10767"></a>
<a id="trace-10769"></a>
<a id="trace-10794"></a>
<a id="trace-10796"></a>
<a id="trace-11504"></a>
<a id="trace-11506"></a>
<a id="trace-11553"></a>
<a id="trace-11555"></a>
<a id="trace-11613"></a>
<a id="trace-11615"></a>
<a id="trace-11673"></a>
<a id="trace-11675"></a>
<a id="trace-11740"></a>
<a id="trace-11742"></a>
<a id="trace-11800"></a>
<a id="trace-11802"></a>
<a id="trace-11868"></a>
<a id="trace-11870"></a>
<a id="trace-11926"></a>
<a id="trace-11928"></a>
- 32.75s–39.75s (×30), actor 5, squad 0 (trace 10597): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 8890. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3910225432896142, 'next_transition': 10627}.
<a id="trace-10828"></a>
- 36.15s–36.15s (×1), actor 8, squad 1 (trace 10828): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 10700. Next observer evidence: {'until': 43.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.559243726240424, 'next_transition': 12720}.
<a id="trace-11240"></a>
- 36.15s–36.15s (×1), actor 8, squad 1 (trace 11240): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 10700. Next observer evidence: {'until': 43.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.559243726240424, 'next_transition': 12720}.
<a id="trace-11241"></a>
- 36.15s–36.15s (×1), actor 8, squad 1 (trace 11241): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 10700. Next observer evidence: {'until': 43.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.559243726240424, 'next_transition': 12720}.
<a id="trace-11479"></a>
- 36.15s–36.15s (×1), actor 8, squad 1 (trace 11479): Assaulting. Knowledge: actor memory at 35.00s, trace 10700. Next observer evidence: {'until': 43.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.559243726240424, 'next_transition': 12720}.
<a id="trace-11939"></a>
- 39.85s–39.85s (×1), actor 1, squad 0 (trace 11939): NeedSupport. Knowledge: actor memory at 35.00s, trace 10693. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4255988359740121, 'next_transition': 12036}.
<a id="trace-12036"></a>
<a id="trace-12038"></a>
<a id="trace-12089"></a>
<a id="trace-12091"></a>
<a id="trace-12118"></a>
<a id="trace-12120"></a>
<a id="trace-12141"></a>
<a id="trace-12143"></a>
- 40.25s–41.75s (×8), actor 5, squad 0 (trace 12036): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11954. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33897948702445996, 'next_transition': 12089}.
<a id="trace-12156"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 12156): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 40.00s, trace 11950. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21000814408126875, 'next_transition': 12168}.
<a id="trace-12168"></a>
<a id="trace-12170"></a>
<a id="trace-12176"></a>
<a id="trace-12178"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 12168): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11954. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200021869638502, 'next_transition': 12176}.
<a id="trace-12184"></a>
- 43.15s–43.15s (×1), actor 1, squad 0 (trace 12184): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 11950. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000852393293754, 'next_transition': 12647}.
<a id="trace-12189"></a>
- 43.15s–43.15s (×1), actor 1, squad 0 (trace 12189): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 11950. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000852393293754, 'next_transition': 12647}.
<a id="trace-12190"></a>
- 43.15s–43.15s (×1), actor 1, squad 0 (trace 12190): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 11950. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000852393293754, 'next_transition': 12647}.
<a id="trace-12647"></a>
<a id="trace-12649"></a>
<a id="trace-12694"></a>
<a id="trace-12696"></a>
- 43.25s–43.75s (×4), actor 5, squad 0 (trace 12647): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11954. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199863394022922, 'next_transition': 12694}.
<a id="trace-12720"></a>
- 43.90s–43.90s (×1), actor 8, squad 1 (trace 12720): NeedSupport. Knowledge: actor memory at 40.00s, trace 11957. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43236972944186686, 'next_transition': 1060}.
<a id="trace-12742"></a>
- 44.05s–44.05s (×1), actor 5, squad 0 (trace 12742): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 44.05s, trace 12742. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315005557865304, 'next_transition': 12770}.
<a id="trace-12770"></a>
<a id="trace-12772"></a>
<a id="trace-12858"></a>
<a id="trace-12860"></a>
<a id="trace-12990"></a>
<a id="trace-12992"></a>
- 44.25s–45.25s (×6), actor 5, squad 0 (trace 12770): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.05s, trace 12742. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8141921812111881, 'next_transition': 12858}.
<a id="trace-1060"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 1060): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12825"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 12825): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461814 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12825. Next observer evidence: {'until': 60.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.543153053347885, 'next_transition': 17991}.
<a id="trace-12826"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 12826): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461814 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12826. Next observer evidence: {'until': 60.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.543153053347885, 'next_transition': 17991}.
<a id="trace-13061"></a>
- 45.65s–45.65s (×1), actor 1, squad 0 (trace 13061): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 12892. Next observer evidence: None.
<a id="trace-13062"></a>
- 45.65s–45.65s (×1), actor 1, squad 0 (trace 13062): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 12892. Next observer evidence: None.
<a id="trace-16117"></a>
<a id="trace-16119"></a>
- 45.75s–45.75s (×2), actor 5, squad 0 (trace 16117): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12895. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3165999263140184, 'next_transition': 1106}.
<a id="trace-1106"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (events line 1106): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16141"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 16141): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.462853 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 16141. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6452948358108319, 'next_transition': 16203}.
<a id="trace-16142"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 16142): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.462853 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 16142. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6452948358108319, 'next_transition': 16203}.
<a id="trace-16203"></a>
<a id="trace-16205"></a>
<a id="trace-16258"></a>
<a id="trace-16260"></a>
<a id="trace-16308"></a>
<a id="trace-16310"></a>
<a id="trace-16341"></a>
<a id="trace-16343"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16390"></a>
<a id="trace-16392"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16523"></a>
<a id="trace-16525"></a>
<a id="trace-16543"></a>
<a id="trace-16545"></a>
<a id="trace-16561"></a>
<a id="trace-16563"></a>
<a id="trace-16578"></a>
<a id="trace-16580"></a>
<a id="trace-16602"></a>
<a id="trace-16604"></a>
<a id="trace-16623"></a>
<a id="trace-16625"></a>
<a id="trace-16645"></a>
<a id="trace-16647"></a>
<a id="trace-16660"></a>
<a id="trace-16662"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
- 46.25s–54.75s (×36), actor 5, squad 0 (trace 16203): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 16142. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8633985190876626, 'next_transition': 16258}.
<a id="trace-16739"></a>
- 55.00s–55.00s (×1), actor 1, squad 0 (trace 16739): support established: element delivered fire on threat area. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08021685286093967, 'next_transition': 16799}.
<a id="trace-16740"></a>
- 55.00s–55.00s (×1), actor 1, squad 0 (trace 16740): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08021685286093967, 'next_transition': 16799}.
<a id="trace-16741"></a>
- 55.00s–55.00s (×1), actor 1, squad 0 (trace 16741): Fixing. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08021685286093967, 'next_transition': 16799}.
<a id="trace-16799"></a>
<a id="trace-16801"></a>
- 55.25s–55.25s (×2), actor 5, squad 0 (trace 16799): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16721. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12931959302011778, 'next_transition': 16813}.
<a id="trace-16813"></a>
- 55.65s–55.65s (×1), actor 1, squad 0 (trace 16813): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: None.
<a id="trace-16814"></a>
- 55.65s–55.65s (×1), actor 1, squad 0 (trace 16814): received platoon directive. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: None.
<a id="trace-17254"></a>
<a id="trace-17256"></a>
<a id="trace-17280"></a>
<a id="trace-17282"></a>
<a id="trace-17312"></a>
<a id="trace-17314"></a>
<a id="trace-17339"></a>
<a id="trace-17341"></a>
<a id="trace-17368"></a>
<a id="trace-17370"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17419"></a>
<a id="trace-17421"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
- 55.75s–59.25s (×16), actor 5, squad 0 (trace 17254): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16721. Next observer evidence: {'until': 56.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.18015935280406, 'next_transition': 17280}.
<a id="trace-17460"></a>
- 59.50s–59.50s (×1), actor 1, squad 0 (trace 17460): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17715972153464232, 'next_transition': 17829}.
<a id="trace-17461"></a>
- 59.50s–59.50s (×1), actor 1, squad 0 (trace 17461): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 16718. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17715972153464232, 'next_transition': 17829}.
<a id="trace-17829"></a>
<a id="trace-17831"></a>
<a id="trace-17921"></a>
<a id="trace-17923"></a>
<a id="trace-17962"></a>
<a id="trace-17964"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18353"></a>
<a id="trace-18355"></a>
<a id="trace-18398"></a>
<a id="trace-18400"></a>
<a id="trace-18452"></a>
<a id="trace-18454"></a>
<a id="trace-18488"></a>
<a id="trace-18490"></a>
<a id="trace-18516"></a>
<a id="trace-18518"></a>
<a id="trace-18564"></a>
<a id="trace-18566"></a>
<a id="trace-18610"></a>
<a id="trace-18612"></a>
<a id="trace-20980"></a>
<a id="trace-20982"></a>
<a id="trace-21041"></a>
<a id="trace-21043"></a>
<a id="trace-21076"></a>
<a id="trace-21078"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
<a id="trace-21140"></a>
<a id="trace-21142"></a>
<a id="trace-21151"></a>
<a id="trace-21153"></a>
<a id="trace-21176"></a>
<a id="trace-21178"></a>
<a id="trace-21192"></a>
<a id="trace-21194"></a>
<a id="trace-21218"></a>
<a id="trace-21220"></a>
<a id="trace-21239"></a>
<a id="trace-21241"></a>
<a id="trace-21322"></a>
<a id="trace-21324"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
- 59.75s–70.75s (×46), actor 5, squad 0 (trace 17829): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16721. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3800015595607455, 'next_transition': 17921}.
<a id="trace-17991"></a>
- 60.95s–60.95s (×1), actor 8, squad 1 (trace 17991): effective fire without superiority for 15 s after expected support. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.117696100905113, 'next_transition': 18617}.
<a id="trace-17992"></a>
- 60.95s–60.95s (×1), actor 8, squad 1 (trace 17992): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.117696100905113, 'next_transition': 18617}.
<a id="trace-18617"></a>
- 64.75s–64.75s (×1), actor 8, squad 1 (trace 18617): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.34017919648524275, 'next_transition': 18622}.
<a id="trace-18622"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 18622): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: None.
<a id="trace-18623"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 18623): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: None.
<a id="trace-19752"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 19752): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: None.
<a id="trace-19759"></a>
- 64.85s–64.85s (×1), actor 8, squad 1 (trace 19759): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: None.
<a id="trace-19760"></a>
- 64.85s–64.85s (×1), actor 8, squad 1 (trace 19760): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: None.
<a id="trace-20896"></a>
- 64.90s–64.90s (×1), actor 8, squad 1 (trace 20896): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 17847. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 3.2678375413245155, 'next_transition': 21230}.
<a id="trace-21230"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 21230): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.338563 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 21230. Next observer evidence: None.
<a id="trace-21231"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 21231): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.338563 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 21231. Next observer evidence: None.
<a id="trace-1559"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (events line 1559): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5978006974901462, 'next_transition': 21514}.
<a id="trace-21357"></a>
- 71.05s–71.05s (×1), actor 1, squad 0 (trace 21357): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 21251. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600449033268654, 'next_transition': 21646}.
<a id="trace-21358"></a>
- 71.05s–71.05s (×1), actor 1, squad 0 (trace 21358): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 21251. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600449033268654, 'next_transition': 21646}.
<a id="trace-21514"></a>
- 71.20s–71.20s (×1), actor 8, squad 1 (trace 21514): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 70.00s, trace 21257. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.817369327475318, 'next_transition': 21791}.
<a id="trace-21515"></a>
- 71.20s–71.20s (×1), actor 8, squad 1 (trace 21515): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 21257. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.817369327475318, 'next_transition': 21791}.
<a id="trace-21516"></a>
- 71.20s–71.20s (×1), actor 8, squad 1 (trace 21516): received platoon directive. Knowledge: actor memory at 70.00s, trace 21257. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.817369327475318, 'next_transition': 21791}.
<a id="trace-21646"></a>
<a id="trace-21648"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21714"></a>
<a id="trace-21716"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21756"></a>
<a id="trace-21758"></a>
<a id="trace-21780"></a>
<a id="trace-21782"></a>
<a id="trace-21920"></a>
<a id="trace-21922"></a>
<a id="trace-21996"></a>
<a id="trace-21998"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22036"></a>
<a id="trace-22038"></a>
<a id="trace-22055"></a>
<a id="trace-22057"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22101"></a>
<a id="trace-22103"></a>
<a id="trace-22121"></a>
<a id="trace-22123"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22170"></a>
<a id="trace-22172"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22260"></a>
<a id="trace-22262"></a>
<a id="trace-22275"></a>
<a id="trace-22277"></a>
<a id="trace-22292"></a>
<a id="trace-22294"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22327"></a>
<a id="trace-22329"></a>
<a id="trace-22343"></a>
<a id="trace-22345"></a>
<a id="trace-22356"></a>
<a id="trace-22358"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22464"></a>
<a id="trace-22466"></a>
<a id="trace-22486"></a>
<a id="trace-22488"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
- 71.25s–86.75s (×60), actor 5, squad 0 (trace 21646): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 21254. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2743189017473344, 'next_transition': 21658}.
<a id="trace-21791"></a>
- 74.55s–74.55s (×1), actor 8, squad 1 (trace 21791): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 21257. Next observer evidence: {'until': 104.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.479645952081481, 'next_transition': None}.
<a id="trace-21792"></a>
- 74.55s–74.55s (×1), actor 8, squad 1 (trace 21792): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 21257. Next observer evidence: {'until': 104.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.479645952081481, 'next_transition': None}.
<a id="trace-22512"></a>
- 86.75s–86.75s (×1), actor 1, squad 0 (trace 22512): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 22397. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501617309251552, 'next_transition': 22636}.
<a id="trace-22570"></a>
- 86.75s–86.75s (×1), actor 1, squad 0 (trace 22570): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 22397. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501617309251552, 'next_transition': 22636}.
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22653"></a>
<a id="trace-22655"></a>
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22715"></a>
<a id="trace-22733"></a>
<a id="trace-22803"></a>
<a id="trace-22815"></a>
<a id="trace-22826"></a>
<a id="trace-22837"></a>
<a id="trace-22853"></a>
<a id="trace-22864"></a>
<a id="trace-22875"></a>
<a id="trace-22889"></a>
<a id="trace-22905"></a>
<a id="trace-22915"></a>
<a id="trace-22985"></a>
<a id="trace-22996"></a>
<a id="trace-23012"></a>
<a id="trace-23024"></a>
<a id="trace-23045"></a>
<a id="trace-23053"></a>
- 87.25s–97.75s (×26), actor 5, squad 0 (trace 22636): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 22400. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5279397840595018, 'next_transition': 22653}.
<a id="trace-23080"></a>
- 98.70s–98.70s (×1), actor 1, squad 0 (trace 23080): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 22925. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3510915728578876, 'next_transition': 1742}.
<a id="trace-23081"></a>
- 98.70s–98.70s (×1), actor 1, squad 0 (trace 23081): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 22925. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3510915728578876, 'next_transition': 1742}.
<a id="trace-1742"></a>
- 101.00s–101.00s (×1), actor 6, squad 0 (events line 1742): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4284083082107905, 'next_transition': 23303}.
<a id="trace-23299"></a>
- 101.00s–101.00s (×1), actor 6, squad 0 (trace 23299): renew committed intent (75 s lifetime). Knowledge: actor memory at 101.00s, trace 23299. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4284083082107905, 'next_transition': 23303}.
<a id="trace-23303"></a>
- 101.25s–101.25s (×1), actor 6, squad 0 (trace 23303): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 101.00s, trace 23299. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.477135377143456, 'next_transition': 23330}.
<a id="trace-23330"></a>
- 102.20s–102.20s (×1), actor 1, squad 0 (trace 23330): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 23217. Next observer evidence: None.
<a id="trace-23336"></a>
<a id="trace-23360"></a>
<a id="trace-23389"></a>
<a id="trace-23477"></a>
<a id="trace-23503"></a>
- 102.25s–106.25s (×5), actor 6, squad 0 (trace 23336): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 101.00s, trace 23299. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3545182881271178, 'next_transition': 23360}.
<a id="trace-1766"></a>
- 106.65s–106.65s (×1), actor 6, squad 0 (events line 1766): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}.
<a id="trace-23510"></a>
- 106.65s–106.65s (×1), actor 6, squad 0 (trace 23510): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.223332 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.65s, trace 23510. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}.
<a id="trace-23511"></a>
- 106.65s–106.65s (×1), actor 6, squad 0 (trace 23511): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.223332 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.65s, trace 23511. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}.
<a id="trace-23525"></a>
<a id="trace-23545"></a>
<a id="trace-23566"></a>
- 107.25s–109.25s (×3), actor 6, squad 0 (trace 23525): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 106.65s, trace 23511. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23545}.
<a id="trace-23575"></a>
- 109.65s–109.65s (×1), actor 1, squad 0 (trace 23575): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 23422. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23714}.
<a id="trace-23576"></a>
- 109.65s–109.65s (×1), actor 1, squad 0 (trace 23576): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 23422. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23714}.
<a id="trace-23714"></a>
<a id="trace-23776"></a>
<a id="trace-23803"></a>
<a id="trace-23827"></a>
<a id="trace-23902"></a>
<a id="trace-23927"></a>
<a id="trace-23950"></a>
<a id="trace-23976"></a>
<a id="trace-23997"></a>
<a id="trace-24096"></a>
<a id="trace-24121"></a>
- 110.25s–121.25s (×11), actor 6, squad 0 (trace 23714): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 110.00s, trace 23660. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4568482530792286, 'next_transition': 23776}.
<a id="trace-24129"></a>
- 121.45s–121.45s (×1), actor 1, squad 0 (trace 24129): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 24023. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5598827360483614, 'next_transition': 24248}.
<a id="trace-24130"></a>
- 121.45s–121.45s (×1), actor 1, squad 0 (trace 24130): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 24023. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5598827360483614, 'next_transition': 24248}.
<a id="trace-24248"></a>
<a id="trace-24276"></a>
<a id="trace-24310"></a>
<a id="trace-24396"></a>
<a id="trace-24429"></a>
<a id="trace-24461"></a>
<a id="trace-24486"></a>
<a id="trace-24591"></a>
<a id="trace-24616"></a>
<a id="trace-24648"></a>
<a id="trace-24687"></a>
<a id="trace-24711"></a>
<a id="trace-24784"></a>
- 122.25s–135.30s (×13), actor 6, squad 0 (trace 24248): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 120.00s, trace 24026. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7166299341327036, 'next_transition': 24276}.
<a id="trace-24800"></a>
- 135.85s–135.85s (×1), actor 1, squad 0 (trace 24800): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 24725. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22681479366434634, 'next_transition': 24863}.
<a id="trace-24801"></a>
- 135.85s–135.85s (×1), actor 1, squad 0 (trace 24801): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 24725. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22681479366434634, 'next_transition': 24863}.
<a id="trace-24863"></a>
<a id="trace-24901"></a>
<a id="trace-24933"></a>
<a id="trace-24967"></a>
<a id="trace-25051"></a>
<a id="trace-25079"></a>
<a id="trace-25103"></a>
- 136.30s–142.30s (×7), actor 6, squad 0 (trace 24863): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 135.00s, trace 24728. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3374959359452547, 'next_transition': 24901}.
<a id="trace-25111"></a>
- 142.45s–142.45s (×1), actor 1, squad 0 (trace 25111): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 24991. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25234}.
<a id="trace-25112"></a>
- 142.45s–142.45s (×1), actor 1, squad 0 (trace 25112): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 24991. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25234}.
<a id="trace-25234"></a>
<a id="trace-25265"></a>
<a id="trace-25356"></a>
<a id="trace-25415"></a>
<a id="trace-25439"></a>
<a id="trace-25465"></a>
<a id="trace-25545"></a>
<a id="trace-25571"></a>
<a id="trace-25597"></a>
<a id="trace-25640"></a>
<a id="trace-25665"></a>
<a id="trace-25745"></a>
- 143.30s–155.30s (×12), actor 6, squad 0 (trace 25234): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 140.00s, trace 24994. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7166212262503666, 'next_transition': 25265}.
<a id="trace-25764"></a>
- 156.20s–156.20s (×1), actor 1, squad 0 (trace 25764): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 25687. Next observer evidence: None.
<a id="trace-25771"></a>
<a id="trace-25797"></a>
<a id="trace-25830"></a>
<a id="trace-25864"></a>
<a id="trace-25954"></a>
<a id="trace-25976"></a>
<a id="trace-26002"></a>
<a id="trace-26020"></a>
<a id="trace-26116"></a>
<a id="trace-26151"></a>
<a id="trace-26169"></a>
<a id="trace-26188"></a>
- 156.30s–168.30s (×12), actor 6, squad 0 (trace 25771): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.00s, trace 25690. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.960738773170469, 'next_transition': 25797}.
<a id="trace-2249"></a>
- 168.60s–168.60s (×1), actor 6, squad 0 (events line 2249): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26198"></a>
- 168.60s–168.60s (×1), actor 6, squad 0 (trace 26198): renew committed intent (75 s lifetime). Knowledge: actor memory at 168.60s, trace 26198. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26209}.
<a id="trace-26209"></a>
<a id="trace-26278"></a>
<a id="trace-26305"></a>
- 169.30s–171.30s (×3), actor 6, squad 0 (trace 26209): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 168.60s, trace 26198. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26278}.
<a id="trace-2267"></a>
- 172.00s–172.00s (×1), actor 6, squad 0 (events line 2267): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26329}.
<a id="trace-26319"></a>
- 172.00s–172.00s (×1), actor 6, squad 0 (trace 26319): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.773644 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 172.00s, trace 26319. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26329}.
<a id="trace-26320"></a>
- 172.00s–172.00s (×1), actor 6, squad 0 (trace 26320): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.773644 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 172.00s, trace 26320. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26329}.
<a id="trace-26329"></a>
<a id="trace-26356"></a>
- 172.30s–173.30s (×2), actor 6, squad 0 (trace 26329): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 172.00s, trace 26320. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26356}.
<a id="trace-26375"></a>
- 174.20s–174.20s (×1), actor 1, squad 0 (trace 26375): MoveTactically. Knowledge: actor memory at 170.00s, trace 26221. Next observer evidence: None.
<a id="trace-26376"></a>
- 174.20s–174.20s (×1), actor 1, squad 0 (trace 26376): traveling overwatch. Knowledge: actor memory at 170.00s, trace 26221. Next observer evidence: None.
<a id="trace-26377"></a>
- 174.20s–174.20s (×1), actor 1, squad 0 (trace 26377): received platoon directive. Knowledge: actor memory at 170.00s, trace 26221. Next observer evidence: None.
<a id="trace-26387"></a>
- 174.30s–174.30s (×1), actor 6, squad 0 (trace 26387): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 172.00s, trace 26320. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26464}.
<a id="trace-26464"></a>
- 175.20s–175.20s (×1), actor 1, squad 0 (trace 26464): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 26408. Next observer evidence: None.
<a id="trace-26574"></a>
<a id="trace-26606"></a>
<a id="trace-26646"></a>
- 175.30s–177.30s (×3), actor 6, squad 0 (trace 26574): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 175.00s, trace 26411. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26606}.
<a id="trace-2327"></a>
- 177.60s–177.60s (×1), actor 6, squad 0 (events line 2327): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26654"></a>
- 177.60s–177.60s (×1), actor 6, squad 0 (trace 26654): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.60s, trace 26654. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.812679691897162, 'next_transition': 26679}.
<a id="trace-26655"></a>
- 177.60s–177.60s (×1), actor 6, squad 0 (trace 26655): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.60s, trace 26655. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.812679691897162, 'next_transition': 26679}.
<a id="trace-26679"></a>
<a id="trace-26707"></a>
- 178.30s–179.30s (×2), actor 6, squad 0 (trace 26679): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 177.60s, trace 26655. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.354491715830262, 'next_transition': 26707}.
<a id="trace-26736"></a>
- 179.95s–179.95s (×1), actor 1, squad 0 (trace 26736): traveling. Knowledge: actor memory at 175.00s, trace 26408. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417793596725511, 'next_transition': 26956}.
<a id="trace-26737"></a>
- 179.95s–179.95s (×1), actor 1, squad 0 (trace 26737): received platoon directive. Knowledge: actor memory at 175.00s, trace 26408. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417793596725511, 'next_transition': 26956}.
<a id="trace-26956"></a>
<a id="trace-26996"></a>
<a id="trace-27023"></a>
<a id="trace-27054"></a>
<a id="trace-27085"></a>
<a id="trace-27171"></a>
<a id="trace-27214"></a>
<a id="trace-27238"></a>
<a id="trace-27260"></a>
<a id="trace-27295"></a>
<a id="trace-27382"></a>
<a id="trace-27406"></a>
- 180.30s–191.30s (×12), actor 6, squad 0 (trace 26956): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 180.00s, trace 26899. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.124263710456213, 'next_transition': 26996}.
<a id="trace-27417"></a>
- 191.70s–191.70s (×1), actor 1, squad 0 (trace 27417): matching received arrivals: traveling stage complete. Knowledge: actor memory at 190.00s, trace 27316. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247211888639734, 'next_transition': 27590}.
<a id="trace-27590"></a>
<a id="trace-27632"></a>
<a id="trace-27658"></a>
<a id="trace-27742"></a>
<a id="trace-27770"></a>
<a id="trace-27797"></a>
<a id="trace-27828"></a>
<a id="trace-27866"></a>
<a id="trace-27947"></a>
<a id="trace-27977"></a>
<a id="trace-28003"></a>
<a id="trace-28029"></a>
<a id="trace-28062"></a>
<a id="trace-28144"></a>
- 192.30s–205.30s (×14), actor 6, squad 0 (trace 27590): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.00s, trace 27319. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6543354711968417, 'next_transition': 27632}.
<a id="trace-28172"></a>
- 206.05s–206.05s (×1), actor 1, squad 0 (trace 28172): matching received arrivals: deployment leg complete. Knowledge: actor memory at 205.00s, trace 28080. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574878824703665, 'next_transition': 28177}.
<a id="trace-28177"></a>
<a id="trace-28196"></a>
<a id="trace-28213"></a>
- 206.30s–208.30s (×3), actor 6, squad 0 (trace 28177): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 205.00s, trace 28083. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13162701327994927, 'next_transition': 28196}.
<a id="trace-2591"></a>
- 208.55s–208.55s (×1), actor 6, squad 0 (events line 2591): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28236}.
<a id="trace-28222"></a>
- 208.55s–208.55s (×1), actor 6, squad 0 (trace 28222): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 208.55s, trace 28222. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28236}.
<a id="trace-28223"></a>
- 208.55s–208.55s (×1), actor 6, squad 0 (trace 28223): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 208.55s, trace 28223. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28236}.
<a id="trace-28236"></a>
<a id="trace-28315"></a>
- 209.30s–210.30s (×2), actor 6, squad 0 (trace 28236): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 208.55s, trace 28223. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28315}.
<a id="trace-28330"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 28330): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 28251. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28399}.
<a id="trace-28334"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 28334): MoveTactically. Knowledge: actor memory at 210.00s, trace 28251. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28399}.
<a id="trace-28335"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 28335): traveling overwatch. Knowledge: actor memory at 210.00s, trace 28251. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28399}.
<a id="trace-28336"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 28336): Reorganise complete. Knowledge: actor memory at 210.00s, trace 28251. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28399}.
<a id="trace-28399"></a>
- 211.30s–211.30s (×1), actor 6, squad 0 (trace 28399): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 210.00s, trace 28254. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28425}.
<a id="trace-28425"></a>
- 211.85s–211.85s (×1), actor 1, squad 0 (trace 28425): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 210.00s, trace 28251. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28539}.
<a id="trace-28539"></a>
<a id="trace-28581"></a>
<a id="trace-28607"></a>
<a id="trace-28686"></a>
<a id="trace-28713"></a>
<a id="trace-28741"></a>
<a id="trace-28769"></a>
<a id="trace-28810"></a>
<a id="trace-28890"></a>
<a id="trace-28913"></a>
<a id="trace-28937"></a>
<a id="trace-28966"></a>
<a id="trace-28995"></a>
<a id="trace-29080"></a>
- 212.30s–225.30s (×14), actor 6, squad 0 (trace 28539): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 210.00s, trace 28254. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17484524949701807, 'next_transition': 28581}.
<a id="trace-29088"></a>
- 225.60s–225.60s (×1), actor 1, squad 0 (trace 29088): ReactToContact: cover and return fire. Knowledge: actor memory at 225.00s, trace 29018. Next observer evidence: {'until': 226.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.082910975563415, 'next_transition': 29271}.
<a id="trace-29089"></a>
- 225.60s–225.60s (×1), actor 1, squad 0 (trace 29089): bounding overwatch. Knowledge: actor memory at 225.00s, trace 29018. Next observer evidence: {'until': 226.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.082910975563415, 'next_transition': 29271}.
<a id="trace-29090"></a>
- 225.60s–225.60s (×1), actor 1, squad 0 (trace 29090): new contact inside 100 m. Knowledge: actor memory at 225.00s, trace 29018. Next observer evidence: {'until': 226.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.082910975563415, 'next_transition': 29271}.
<a id="trace-29271"></a>
<a id="trace-29300"></a>
- 226.30s–227.30s (×2), actor 6, squad 0 (trace 29271): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 225.00s, trace 29021. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2470797405963638, 'next_transition': 29300}.
<a id="trace-29324"></a>
- 228.10s–228.10s (×1), actor 6, squad 0 (trace 29324): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 228.10s, trace 29324. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1767203886492571, 'next_transition': 2782}.
<a id="trace-2782"></a>
- 228.25s–228.25s (×1), actor 6, squad 0 (events line 2782): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29328"></a>
- 228.25s–228.25s (×1), actor 6, squad 0 (trace 29328): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.264280 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 228.25s, trace 29328. Next observer evidence: None.
<a id="trace-29329"></a>
- 228.25s–228.25s (×1), actor 6, squad 0 (trace 29329): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.264280 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 228.25s, trace 29329. Next observer evidence: None.
<a id="trace-29331"></a>
<a id="trace-29367"></a>
- 228.30s–229.30s (×2), actor 6, squad 0 (trace 29331): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 228.25s, trace 29329. Next observer evidence: {'until': 229.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7473503372969708, 'next_transition': 29367}.
<a id="trace-29375"></a>
- 229.35s–229.35s (×1), actor 1, squad 0 (trace 29375): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 225.00s, trace 29018. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3237044186059251, 'next_transition': 29662}.
<a id="trace-29376"></a>
- 229.35s–229.35s (×1), actor 1, squad 0 (trace 29376): rearward bound: one stationary suppressing element. Knowledge: actor memory at 225.00s, trace 29018. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3237044186059251, 'next_transition': 29662}.
<a id="trace-29662"></a>
<a id="trace-29685"></a>
<a id="trace-29710"></a>
<a id="trace-29734"></a>
<a id="trace-29759"></a>
<a id="trace-29834"></a>
<a id="trace-29853"></a>
<a id="trace-29871"></a>
<a id="trace-29892"></a>
<a id="trace-29912"></a>
<a id="trace-29983"></a>
<a id="trace-30005"></a>
- 230.30s–241.30s (×12), actor 6, squad 0 (trace 29662): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 230.00s, trace 29601. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5199576712953253, 'next_transition': 29685}.
<a id="trace-30012"></a>
- 241.30s–241.30s (×1), actor 1, squad 0 (trace 30012): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.2489813422411102, 'next_transition': 30034}.
<a id="trace-30013"></a>
- 241.30s–241.30s (×1), actor 1, squad 0 (trace 30013): NeedSupport. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.2489813422411102, 'next_transition': 30034}.
<a id="trace-30034"></a>
- 242.20s–242.20s (×1), actor 1, squad 0 (trace 30034): Reorganise: completed/failed drill. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: None.
<a id="trace-30037"></a>
- 242.20s–242.20s (×1), actor 1, squad 0 (trace 30037): ReactToContact: cover and return fire. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: None.
<a id="trace-30038"></a>
- 242.20s–242.20s (×1), actor 1, squad 0 (trace 30038): Reorganise complete: known contact. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: None.
<a id="trace-30128"></a>
- 242.30s–242.30s (×1), actor 6, squad 0 (trace 30128): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 240.00s, trace 29927. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.050001088877032446, 'next_transition': 30146}.
<a id="trace-30146"></a>
- 242.90s–242.90s (×1), actor 1, squad 0 (trace 30146): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 240.00s, trace 29924. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0525167698084246, 'next_transition': 30158}.
<a id="trace-30158"></a>
<a id="trace-30180"></a>
<a id="trace-30258"></a>
- 243.30s–245.30s (×3), actor 6, squad 0 (trace 30158): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 240.00s, trace 29927. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30180}.
<a id="trace-30272"></a>
- 245.95s–245.95s (×1), actor 1, squad 0 (trace 30272): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 245.00s, trace 30202. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420011780258072, 'next_transition': 30411}.
<a id="trace-30273"></a>
- 245.95s–245.95s (×1), actor 1, squad 0 (trace 30273): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 30202. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420011780258072, 'next_transition': 30411}.
<a id="trace-30411"></a>
<a id="trace-30435"></a>
<a id="trace-30453"></a>
<a id="trace-30475"></a>
<a id="trace-30547"></a>
<a id="trace-30564"></a>
<a id="trace-30582"></a>
<a id="trace-30597"></a>
<a id="trace-30615"></a>
<a id="trace-30690"></a>
<a id="trace-30711"></a>
<a id="trace-30730"></a>
<a id="trace-30748"></a>
<a id="trace-30767"></a>
<a id="trace-30841"></a>
<a id="trace-30860"></a>
<a id="trace-30878"></a>
<a id="trace-30900"></a>
<a id="trace-30933"></a>
<a id="trace-31007"></a>
<a id="trace-31026"></a>
- 246.30s–266.30s (×21), actor 6, squad 0 (trace 30411): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 245.00s, trace 30204. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0499843750160183, 'next_transition': 30435}.
<a id="trace-31042"></a>
- 267.05s–267.05s (×1), actor 1, squad 0 (trace 31042): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 265.00s, trace 30950. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31049}.
<a id="trace-31049"></a>
<a id="trace-31070"></a>
<a id="trace-31101"></a>
<a id="trace-31193"></a>
<a id="trace-31217"></a>
<a id="trace-31233"></a>
- 267.30s–272.30s (×6), actor 6, squad 0 (trace 31049): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 265.00s, trace 30952. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31070}.
<a id="trace-2985"></a>
- 273.10s–273.10s (×1), actor 6, squad 0 (events line 2985): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31247"></a>
- 273.10s–273.10s (×1), actor 6, squad 0 (trace 31247): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189788 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 273.10s, trace 31247. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31252}.
<a id="trace-31248"></a>
- 273.10s–273.10s (×1), actor 6, squad 0 (trace 31248): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189788 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 273.10s, trace 31248. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31252}.
<a id="trace-31252"></a>
<a id="trace-31272"></a>
<a id="trace-31349"></a>
- 273.30s–275.30s (×3), actor 6, squad 0 (trace 31252): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 273.10s, trace 31248. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31272}.
<a id="trace-31365"></a>
- 275.80s–275.80s (×1), actor 1, squad 0 (trace 31365): Withdraw to received rally. Knowledge: actor memory at 275.00s, trace 31288. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31512}.
<a id="trace-31366"></a>
- 275.80s–275.80s (×1), actor 1, squad 0 (trace 31366): rearward bound: one stationary suppressing element. Knowledge: actor memory at 275.00s, trace 31288. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31512}.
<a id="trace-31512"></a>
<a id="trace-31552"></a>
<a id="trace-31574"></a>
<a id="trace-31597"></a>
<a id="trace-31669"></a>
<a id="trace-31683"></a>
<a id="trace-31708"></a>
<a id="trace-31741"></a>
<a id="trace-31764"></a>
<a id="trace-31833"></a>
<a id="trace-31852"></a>
<a id="trace-31870"></a>
<a id="trace-31890"></a>
<a id="trace-31916"></a>
<a id="trace-31998"></a>
<a id="trace-32019"></a>
<a id="trace-32039"></a>
<a id="trace-32052"></a>
<a id="trace-32068"></a>
<a id="trace-32146"></a>
<a id="trace-32168"></a>
<a id="trace-32197"></a>
<a id="trace-32216"></a>
<a id="trace-32231"></a>
<a id="trace-32304"></a>
<a id="trace-32324"></a>
<a id="trace-32348"></a>
<a id="trace-32380"></a>
<a id="trace-32400"></a>
<a id="trace-32475"></a>
<a id="trace-32495"></a>
<a id="trace-32511"></a>
<a id="trace-32532"></a>
<a id="trace-32557"></a>
<a id="trace-32638"></a>
<a id="trace-32657"></a>
<a id="trace-32678"></a>
<a id="trace-32695"></a>
<a id="trace-32714"></a>
<a id="trace-32790"></a>
<a id="trace-32822"></a>
<a id="trace-32841"></a>
<a id="trace-32857"></a>
<a id="trace-32879"></a>
<a id="trace-32950"></a>
<a id="trace-32973"></a>
<a id="trace-32993"></a>
<a id="trace-33018"></a>
<a id="trace-33038"></a>
<a id="trace-33110"></a>
<a id="trace-33150"></a>
<a id="trace-33171"></a>
<a id="trace-33192"></a>
<a id="trace-33275"></a>
<a id="trace-33310"></a>
<a id="trace-33329"></a>
<a id="trace-33348"></a>
<a id="trace-33424"></a>
- 276.30s–335.30s (×58), actor 6, squad 0 (trace 31512): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 275.00s, trace 31290. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31552}.
<a id="trace-3371"></a>
- 335.80s–335.80s (×1), actor 6, squad 0 (events line 3371): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33443"></a>
- 335.80s–335.80s (×1), actor 6, squad 0 (trace 33443): renew committed intent (75 s lifetime). Knowledge: actor memory at 335.80s, trace 33443. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33459}.
<a id="trace-33459"></a>
<a id="trace-33493"></a>
<a id="trace-33516"></a>
<a id="trace-33589"></a>
<a id="trace-33610"></a>
<a id="trace-33633"></a>
<a id="trace-33678"></a>
<a id="trace-33748"></a>
<a id="trace-33768"></a>
<a id="trace-33787"></a>
<a id="trace-33809"></a>
<a id="trace-33844"></a>
<a id="trace-33916"></a>
<a id="trace-33936"></a>
<a id="trace-33956"></a>
<a id="trace-33970"></a>
<a id="trace-33998"></a>
<a id="trace-34076"></a>
<a id="trace-34103"></a>
<a id="trace-34123"></a>
<a id="trace-34137"></a>
<a id="trace-34154"></a>
- 336.30s–359.30s (×22), actor 6, squad 0 (trace 33459): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 335.80s, trace 33443. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33493}.

## Net delivery

292 matched order/radio deliveries; 493 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.441s; maximum 1.950s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5544: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5550: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 5554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 5555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5556: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5557: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5558: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5559: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5560: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5561: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5562: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5564: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5565: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 5566: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 5567: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5777: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5778: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5779: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5780: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 7249: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 7250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 7251: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 7252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 7253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 7254: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 7255: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 7256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 7257: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 7258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 7259: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 7260: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 7261: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 7262: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 7263: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 7264: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 7265: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 7266: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 7267: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 7268: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 7269: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 7270: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 7271: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 7272: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 8886: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 8887: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 8888: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 8889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 8890: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 8891: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 8892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 8893: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 8894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 8895: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 8896: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 8897: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 8898: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 8899: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 8900: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 8901: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 8902: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 8903: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 8904: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 8905: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 8906: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10693: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10694: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10695: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10697: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10698: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 10700: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10702: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10703: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10704: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10705: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10706: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10707: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10708: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10709: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10710: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10711: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10712: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10713: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11950: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11951: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11952: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11954: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11955: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 11956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 11957: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11958: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 11959: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11960: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11961: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11962: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11963: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11964: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11965: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11966: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11967: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11968: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 11969: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 11970: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.05s leader 5, trace 12742: estimate 15.19; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12825: estimate 15.16; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12826: estimate 15.16; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12892: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 12893: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12895: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12896: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 12898: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12899: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 12900: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12901: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12902: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12903: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12904: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12905: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12906: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12907: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12908: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12909: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 12910: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 12911: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 16141: estimate 15.12; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 16142: estimate 15.12; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16452: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16453: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16454: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16455: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16456: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16457: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 16458: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16459: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 16460: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16461: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16462: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16463: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16464: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16465: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16466: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16467: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16468: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16469: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16470: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16471: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16718: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16719: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16720: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16721: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16722: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16723: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 16724: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16725: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16726: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16727: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16728: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16729: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16730: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16731: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16732: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16733: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16734: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16735: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16736: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16737: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 17841: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 17842: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 17843: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 17844: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 17845: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 17846: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 17847: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 17848: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 17849: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 17850: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 17851: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 17852: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 17853: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 17854: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 17855: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 17856: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 17857: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 17858: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 17859: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 17860: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 20904: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 20905: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 20906: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 20907: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 20908: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 20909: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 20910: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 20911: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 20912: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 20913: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 20914: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 20915: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 20916: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 20917: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 20918: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 20919: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 20920: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 20921: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 21230: estimate 14.77; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 21231: estimate 14.77; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 21251: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 21252: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 21253: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 21254: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 21255: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 21256: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 21257: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 21258: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 21259: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 21260: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 21261: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 21262: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 21263: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 21264: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 21265: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 21266: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 21267: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 21935: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 21936: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 21937: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 21938: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 21939: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 21940: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 21941: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 21942: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 21943: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 21944: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 21945: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 21946: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 21947: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 21948: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 21949: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 21950: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 22181: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 22182: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 22183: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 22184: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 22185: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 22186: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 22187: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 22188: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 22189: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 22190: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 22191: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 22192: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 22193: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 22194: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 22195: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 22397: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 22398: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 22399: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 22400: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 22401: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 22402: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 22403: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 22404: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 22405: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 22406: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 22407: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 22408: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 22409: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 22410: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 22411: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 22740: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 22741: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 22742: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 22743: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 22744: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 22745: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 22746: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 22747: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 22748: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 22749: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 22750: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 22751: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 22752: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 22753: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 22754: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 22925: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 22926: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 22927: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 22928: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 22929: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 22930: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 22931: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 22932: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 22933: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 22934: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 22935: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 22936: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 22937: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 22938: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 22939: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 23217: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 23218: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 23219: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 23220: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 23221: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 23222: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 23223: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 23224: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 23225: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 23226: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 23227: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 23228: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 23229: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 23230: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.00s leader 6, trace 23299: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 23422: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 23423: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 23424: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 23425: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 23426: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 23427: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 23428: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 23429: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 23430: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 23431: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 23432: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 23433: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 23434: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 23435: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.65s leader 6, trace 23510: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.65s leader 6, trace 23511: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 23657: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 23658: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 23659: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 23660: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 23661: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 23662: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 23663: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 23664: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 23665: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 23666: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 23667: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 23668: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 23669: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 23670: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 23845: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 23846: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 23847: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 23848: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 23849: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 23850: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 23851: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 23852: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 23853: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 23854: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 23855: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 23856: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 23857: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 23858: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 24023: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 24024: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 24025: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 24026: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 24027: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 24028: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 24029: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 24030: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 24031: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 24032: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 24033: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 24034: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 24035: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 24036: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 24334: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 24335: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 24336: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 24337: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 24338: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 24339: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 24340: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 24341: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 24342: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 24343: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 24344: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 24345: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 24346: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 24347: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 24529: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 24530: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 24531: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 24532: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 24533: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 24534: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 24535: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 24536: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 24537: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 24538: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 24539: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 24540: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 24541: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 24542: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 24725: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 24726: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 24727: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 24728: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 24729: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 24730: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 24731: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 24732: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 24733: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 24734: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 24735: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 24736: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 24737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 24738: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 24991: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 24992: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 24993: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 24994: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 24995: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 24996: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 24997: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 24998: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 24999: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 25000: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 25001: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 25002: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 25003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 25004: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 25290: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 25291: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 25292: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 25293: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 25294: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 25295: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 25296: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 25297: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 25298: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 25299: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 25300: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 25301: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 25302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 25303: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 25482: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 25483: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 25484: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 25485: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 25486: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 25487: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 25488: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 25489: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 25490: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 25491: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 25492: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 25493: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 25494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 25495: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 25687: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 25688: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 25689: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 25690: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 25691: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 25692: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 25693: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 25694: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 25695: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 25696: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 25697: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 25698: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 25699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 25700: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 25892: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 25893: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 25894: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 25895: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 25896: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 25897: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 25898: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 25899: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 25900: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 25901: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 25902: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 25903: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 25904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 25905: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 26058: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 26059: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 26060: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 26061: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 26062: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 26063: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 26064: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 26065: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 26066: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 26067: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 26068: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 26069: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 26070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 26071: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 168.60s leader 6, trace 26198: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 26221: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 26222: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 26223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 26224: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 26225: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 26226: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 26227: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 26228: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 26229: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 26230: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 26231: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 26232: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 26233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 26234: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 172.00s leader 6, trace 26319: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 172.00s leader 6, trace 26320: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 26408: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 26409: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 26411: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 26412: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 26413: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 26414: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 26415: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 26416: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 26417: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 26418: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 26419: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 26420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 26421: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.60s leader 6, trace 26654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.60s leader 6, trace 26655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 26896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 26897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 26898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 26899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 26900: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 26901: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 26902: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 26903: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 26904: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 26905: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 26906: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 26907: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 26908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 26909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 27112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 27113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 27114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 27115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 27116: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 27117: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 27118: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 27119: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 27120: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 27121: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 27122: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 27123: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 27124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 27125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 27316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 27317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 27318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 27319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 27320: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 27321: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 27322: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 27323: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 27324: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 27325: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 27326: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 27327: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 27328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 27329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 27682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 27683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 27684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 27685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 27686: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27687: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27688: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27689: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 27690: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27691: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27692: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27693: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 27694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 27695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 27888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 27889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 27890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 27891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 27892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 27900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 27901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 28080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 28081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 28082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 28083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 28084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 28085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 28086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 28087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 28088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 28089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 28090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 28091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 28092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 28093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 208.55s leader 6, trace 28222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 208.55s leader 6, trace 28223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 28251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 28252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 28253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 28254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 28255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 28256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 28257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 28258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 28259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 28260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 28261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 28262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 28263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 28264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 28627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 28628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 28629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 28630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 28631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 28639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 28640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 28830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 28831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 28832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 28833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 28841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 28842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 29018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 29019: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 29020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 29021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 29022: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 29023: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 29024: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 29025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 29026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 29027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 29028: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 29029: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 29030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 29031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 228.10s leader 6, trace 29324: estimate 11.36; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 228.25s leader 6, trace 29328: estimate 11.35; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 228.25s leader 6, trace 29329: estimate 11.35; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 29598: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 29599: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 29600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 29601: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 29602: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 29603: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 29604: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 29605: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 29606: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 29607: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 29608: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 29609: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 29610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 29611: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 29777: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 29778: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 29779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 29780: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 29781: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 29782: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 29783: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 29784: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 29785: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 29786: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 29787: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 29788: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 29789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 29790: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 29924: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 29925: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 29926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 29927: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 29928: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29929: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29930: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29931: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29932: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29933: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29934: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29935: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 29936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 29937: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 30202: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 30203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 30204: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 30205: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 30206: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 30207: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 30208: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 30209: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 30210: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 30211: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 30212: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 30213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 30214: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 30488: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 30489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 30490: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 30491: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 30492: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 30493: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 30494: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 30495: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 30496: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 30497: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 30498: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 30499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 30500: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 30631: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 30632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 30633: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 30634: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30635: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30636: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 30637: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 30638: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30639: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30640: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30641: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 30642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 30643: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 30784: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 30785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 30786: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 30787: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30788: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30789: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30790: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30791: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30792: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30793: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30794: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 30795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 30796: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 30950: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 30951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 30952: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 30953: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30954: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30955: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30956: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30957: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30958: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30959: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30960: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 30961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 30962: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 31126: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 31127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 31128: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 31129: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 31130: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 31131: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 31132: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 31133: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 31134: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 31135: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 31136: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 31137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 31138: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.10s leader 6, trace 31247: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.10s leader 6, trace 31248: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 31288: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 31289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 31290: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 31291: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 31292: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 31293: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 31294: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 31295: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 31296: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 31297: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 31298: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 31299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 31300: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 31611: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 31612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 31613: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 31614: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 31615: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 31616: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 31617: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 31618: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 31619: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 31620: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 31621: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 31622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 31623: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 31775: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 31776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 31777: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 31778: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 31779: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31780: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31781: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 31782: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31783: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31784: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31785: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 31786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 31787: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 31942: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 31943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 31944: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 31945: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31946: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31947: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31948: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31949: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31950: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31951: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31952: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 31953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 31954: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 32089: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 32090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 32091: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 32092: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 32093: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 32094: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 32095: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 32096: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 32097: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 32098: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 32099: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 32100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 32101: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 32247: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 32248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 32249: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 32250: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 32251: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 32252: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 32253: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 32254: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 32255: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 32256: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 32257: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 32258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 32259: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 32419: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 32420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 32421: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 32422: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 32423: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 32424: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 32425: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 32426: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 32427: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 32428: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 32429: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 32430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 32431: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 32580: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 32581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 32582: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 32583: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 32584: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 32585: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 32586: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 32587: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 32588: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 32589: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 32590: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 32591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 32592: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 32732: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 32733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 32734: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 32735: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 32736: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32737: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32738: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 32739: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32740: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32741: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32742: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 32743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 32744: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 32894: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 32895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 32896: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 32897: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32898: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32899: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32900: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32901: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32902: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32903: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32904: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 32905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 32906: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 33053: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 33054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 33055: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 33056: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 33057: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 33058: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 33059: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 33060: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 33061: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 33062: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 33063: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 33064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 33065: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 33218: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 33219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 33220: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 33221: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 33222: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 33223: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 33224: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 33225: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 33226: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 33227: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 33228: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 33229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 33230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 33368: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 33369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 33370: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 33371: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 33372: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 33373: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 33374: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 33375: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 33376: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 33377: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 33378: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 33379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 33380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.80s leader 6, trace 33443: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 33531: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 33532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 33533: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 33534: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 33535: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 33536: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 33537: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 33538: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 33539: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 33540: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 33541: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 33542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 33543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 33690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 33691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 33692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 33693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 33694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 33695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 33696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 33697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 33698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 33699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 33700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 33701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 33702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 33860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 33861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 33862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 33863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 33871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 33872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 34014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 34015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 34016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 34017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 34018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 34019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 34020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 34021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 34022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 34023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 34024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 34025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 34026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 34171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 34172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 34173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 34174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 34175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 34176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 34177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 34178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 34179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 34180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 34181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 34182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 34183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Dane killed in action
- 1: Vale killed in action
- 1: Pike killed in action
- 1: Soren killed in action
- 1: Ellis incapacitated
- 1: Cole incapacitated
- 1: Orin incapacitated
- 1: Reed incapacitated
- 1: Bren incapacitated
- 1: Iven incapacitated
- 1: Ash killed in action

## Outcome attribution

- 106.65s, evidence 1766: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 106.65s, evidence 23510: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.223332 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 106.65s, evidence 23511: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.223332 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 168.60s, evidence 2249: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 273.10s, evidence 2985: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 273.10s, evidence 31247: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189788 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31252}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 273.10s, evidence 31248: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189788 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31252}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 335.80s, evidence 3371: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
