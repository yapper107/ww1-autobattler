# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/109/good-azure/battle-109-1789673856552529009`

## Battle summary

**Ember** · 360 s · 424 shots.

### Turning points

- 17.6s, squad 1: contact (events line 218). First recorded contact.
- 39.4s, squad 1: help call ([trace 13132](#trace-13132)). No completion observed before termination.
- 40.9s, squad 0: help answer ([trace 13286](#trace-13286)). 45.5s, squad 0: took cover and returned fire.
- 42.7s, squad 0: help call ([trace 16695](#trace-16695)). 44.5s, squad 1: answered a neighbour with support by fire.
- 44.5s, squad 1: help answer ([trace 16825](#trace-16825)). No completion observed before termination.
- 54.5s, squad 0: withdrawal ([trace 18076](#trace-18076)). 95.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 102.0s, squad 0: withdrawal ([trace 20906](#trace-20906)). 107.6s, squad 0: took cover and returned fire.
- 112.0s, squad 0: withdrawal ([trace 21581](#trace-21581)). 133.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 234.5s, squad 0: help call ([trace 26943](#trace-26943)). No completion observed before termination.
- 254.4s, squad 0: withdrawal ([trace 28117](#trace-28117)). 283.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 30 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, answered a neighbour with support by fire and 1 further drill types; no completed objective recorded; 6 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 308 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 80 shots, 0/2 lost.

### Decisions and attribution

At 31.1s, squad 1 chose FightHere: nearest known group ([trace 7405](#trace-7405)), followed by 1 shots and 0 own casualties; estimate 12.9 against 10 distinct squad-reported contacts; At 37.1s, squad 1 chose FightHere: nearest known group ([trace 7854](#trace-7854)), followed by 1 shots and 0 own casualties; estimate 12.8 against 8 distinct squad-reported contacts; At 38.9s, squad 0 chose prepared a base of fire ([trace 7924](#trace-7924)), followed by 1 shots and 0 own casualties; estimate 12.8 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9312135007214011, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 828}.

### Communication

182 matched deliveries (mean 0.50s, max 2.40s); 492 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.55s, squad 1, contact, evidence events line 218: First recorded contact; .
- 39.40s, squad 1, help call, evidence 13132: NeedSupport; No completion observed before termination.
- 40.85s, squad 0, help answer, evidence 13286: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 45.5s, squad 0: took cover and returned fire.
- 42.70s, squad 0, help call, evidence 16695: NeedSupport; 44.5s, squad 1: answered a neighbour with support by fire.
- 44.55s, squad 1, help answer, evidence 16825: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; No completion observed before termination.
- 54.45s, squad 0, withdrawal, evidence 18076: BreakContact: believed ratio at least two without superiority; 95.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 102.00s, squad 0, withdrawal, evidence 20906: Withdraw to received rally; 107.6s, squad 0: took cover and returned fire.
- 111.95s, squad 0, withdrawal, evidence 21581: BreakContact: believed ratio at least two without superiority; 133.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 234.50s, squad 0, help call, evidence 26943: NeedSupport; No completion observed before termination.
- 254.40s, squad 0, withdrawal, evidence 28117: BreakContact: believed ratio at least two without superiority; 283.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 270.05s, squad 0, help call, evidence 28804: NeedSupport; No completion observed before termination.
- 297.00s, squad 0, withdrawal, evidence 29802: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870314167627293, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870314167627293, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870314167627293, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599833311525694, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9312135007214011, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 828}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9312135007214011, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9312135007214011, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 828}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 828}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-741"></a>
<a id="trace-743"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-937"></a>
<a id="trace-939"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9397773220885139, 'next_transition': 741}.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.863886882600056, 'next_transition': 1835}.
<a id="trace-941"></a>
<a id="trace-1278"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
<a id="trace-1360"></a>
<a id="trace-1362"></a>
<a id="trace-1427"></a>
<a id="trace-1429"></a>
<a id="trace-1477"></a>
<a id="trace-1479"></a>
<a id="trace-1508"></a>
<a id="trace-1510"></a>
<a id="trace-1535"></a>
<a id="trace-1537"></a>
<a id="trace-1627"></a>
<a id="trace-1629"></a>
<a id="trace-1653"></a>
<a id="trace-1655"></a>
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1706"></a>
<a id="trace-1708"></a>
<a id="trace-1761"></a>
<a id="trace-1763"></a>
<a id="trace-1785"></a>
<a id="trace-1787"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-2033"></a>
<a id="trace-2035"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2147"></a>
<a id="trace-2149"></a>
<a id="trace-2617"></a>
<a id="trace-2619"></a>
<a id="trace-2654"></a>
<a id="trace-2656"></a>
<a id="trace-2683"></a>
<a id="trace-2685"></a>
<a id="trace-3618"></a>
<a id="trace-3620"></a>
<a id="trace-3665"></a>
<a id="trace-3667"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
<a id="trace-4873"></a>
<a id="trace-4875"></a>
<a id="trace-4937"></a>
<a id="trace-4939"></a>
<a id="trace-5556"></a>
<a id="trace-5558"></a>
<a id="trace-5592"></a>
<a id="trace-5594"></a>
<a id="trace-5659"></a>
<a id="trace-5661"></a>
<a id="trace-5709"></a>
<a id="trace-5711"></a>
<a id="trace-5761"></a>
<a id="trace-5763"></a>
<a id="trace-5790"></a>
<a id="trace-5792"></a>
<a id="trace-6134"></a>
<a id="trace-6136"></a>
<a id="trace-6230"></a>
<a id="trace-6232"></a>
<a id="trace-6258"></a>
<a id="trace-6260"></a>
<a id="trace-6304"></a>
<a id="trace-6306"></a>
<a id="trace-6332"></a>
<a id="trace-6334"></a>
<a id="trace-6367"></a>
<a id="trace-6369"></a>
<a id="trace-7118"></a>
<a id="trace-7120"></a>
<a id="trace-7157"></a>
<a id="trace-7159"></a>
<a id="trace-7234"></a>
<a id="trace-7236"></a>
<a id="trace-7247"></a>
<a id="trace-7249"></a>
<a id="trace-7370"></a>
<a id="trace-7372"></a>
<a id="trace-7395"></a>
<a id="trace-7397"></a>
<a id="trace-7428"></a>
<a id="trace-7430"></a>
<a id="trace-7451"></a>
<a id="trace-7453"></a>
<a id="trace-7481"></a>
<a id="trace-7483"></a>
<a id="trace-7509"></a>
<a id="trace-7511"></a>
<a id="trace-7553"></a>
<a id="trace-7555"></a>
<a id="trace-7592"></a>
<a id="trace-7594"></a>
<a id="trace-7640"></a>
<a id="trace-7642"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-7789"></a>
<a id="trace-7791"></a>
<a id="trace-7817"></a>
<a id="trace-7819"></a>
<a id="trace-7848"></a>
<a id="trace-7850"></a>
<a id="trace-7866"></a>
<a id="trace-7868"></a>
<a id="trace-7880"></a>
<a id="trace-7882"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-7918"></a>
<a id="trace-7920"></a>
<a id="trace-13129"></a>
<a id="trace-13131"></a>
<a id="trace-13163"></a>
<a id="trace-13165"></a>
<a id="trace-13264"></a>
<a id="trace-13266"></a>
<a id="trace-13277"></a>
<a id="trace-13279"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16646"></a>
<a id="trace-16648"></a>
<a id="trace-16712"></a>
<a id="trace-16714"></a>
<a id="trace-16747"></a>
<a id="trace-16749"></a>
<a id="trace-16770"></a>
<a id="trace-16772"></a>
<a id="trace-16806"></a>
<a id="trace-16808"></a>
<a id="trace-16846"></a>
<a id="trace-16848"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-17591"></a>
<a id="trace-17593"></a>
<a id="trace-17613"></a>
<a id="trace-17615"></a>
<a id="trace-17631"></a>
<a id="trace-17633"></a>
<a id="trace-17661"></a>
<a id="trace-17663"></a>
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17940"></a>
<a id="trace-17942"></a>
<a id="trace-17958"></a>
<a id="trace-17960"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-17992"></a>
<a id="trace-17994"></a>
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18035"></a>
<a id="trace-18037"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-18655"></a>
<a id="trace-18657"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18694"></a>
<a id="trace-18696"></a>
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18746"></a>
<a id="trace-18748"></a>
<a id="trace-18759"></a>
<a id="trace-18761"></a>
<a id="trace-18778"></a>
<a id="trace-18780"></a>
<a id="trace-18797"></a>
<a id="trace-18799"></a>
<a id="trace-18874"></a>
<a id="trace-18876"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-18925"></a>
<a id="trace-18927"></a>
<a id="trace-18937"></a>
<a id="trace-18939"></a>
<a id="trace-18948"></a>
<a id="trace-18950"></a>
<a id="trace-18955"></a>
<a id="trace-18957"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19190"></a>
<a id="trace-19192"></a>
<a id="trace-19229"></a>
<a id="trace-19231"></a>
<a id="trace-19305"></a>
<a id="trace-19307"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19389"></a>
<a id="trace-19391"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19620"></a>
<a id="trace-19622"></a>
<a id="trace-19628"></a>
<a id="trace-19630"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19665"></a>
<a id="trace-19667"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19682"></a>
<a id="trace-19684"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19767"></a>
<a id="trace-19769"></a>
<a id="trace-19774"></a>
<a id="trace-19776"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19812"></a>
<a id="trace-19814"></a>
<a id="trace-19821"></a>
<a id="trace-19823"></a>
<a id="trace-19834"></a>
<a id="trace-19836"></a>
<a id="trace-19840"></a>
<a id="trace-19842"></a>
<a id="trace-19908"></a>
<a id="trace-19910"></a>
<a id="trace-19916"></a>
<a id="trace-19918"></a>
<a id="trace-19937"></a>
<a id="trace-19939"></a>
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-19955"></a>
<a id="trace-19957"></a>
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-19970"></a>
<a id="trace-19972"></a>
<a id="trace-20058"></a>
<a id="trace-20060"></a>
<a id="trace-20080"></a>
<a id="trace-20082"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20111"></a>
<a id="trace-20113"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20144"></a>
<a id="trace-20146"></a>
<a id="trace-20152"></a>
<a id="trace-20154"></a>
<a id="trace-20220"></a>
<a id="trace-20222"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20608"></a>
<a id="trace-20610"></a>
<a id="trace-20709"></a>
<a id="trace-20711"></a>
<a id="trace-20721"></a>
<a id="trace-20723"></a>
<a id="trace-20745"></a>
<a id="trace-20747"></a>
<a id="trace-20753"></a>
<a id="trace-20755"></a>
<a id="trace-20769"></a>
<a id="trace-20771"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20877"></a>
<a id="trace-20879"></a>
<a id="trace-20883"></a>
<a id="trace-20885"></a>
<a id="trace-20896"></a>
<a id="trace-20898"></a>
<a id="trace-20902"></a>
<a id="trace-20904"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21193"></a>
<a id="trace-21195"></a>
<a id="trace-21213"></a>
<a id="trace-21215"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21326"></a>
<a id="trace-21328"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21454"></a>
<a id="trace-21456"></a>
<a id="trace-21463"></a>
<a id="trace-21465"></a>
<a id="trace-21539"></a>
<a id="trace-21541"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21568"></a>
<a id="trace-21570"></a>
<a id="trace-21577"></a>
<a id="trace-21579"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21676"></a>
<a id="trace-21678"></a>
<a id="trace-21699"></a>
<a id="trace-21701"></a>
<a id="trace-21707"></a>
<a id="trace-21709"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21806"></a>
<a id="trace-21808"></a>
<a id="trace-21812"></a>
<a id="trace-21814"></a>
<a id="trace-21830"></a>
<a id="trace-21832"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21880"></a>
<a id="trace-21882"></a>
<a id="trace-21895"></a>
<a id="trace-21897"></a>
<a id="trace-21906"></a>
<a id="trace-21908"></a>
<a id="trace-21978"></a>
<a id="trace-21980"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22055"></a>
<a id="trace-22057"></a>
<a id="trace-22069"></a>
<a id="trace-22071"></a>
<a id="trace-22190"></a>
<a id="trace-22192"></a>
<a id="trace-22210"></a>
<a id="trace-22212"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22359"></a>
<a id="trace-22361"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22461"></a>
<a id="trace-22463"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22495"></a>
<a id="trace-22497"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
<a id="trace-22534"></a>
<a id="trace-22536"></a>
<a id="trace-22552"></a>
<a id="trace-22554"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22616"></a>
<a id="trace-22618"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22728"></a>
<a id="trace-22730"></a>
<a id="trace-22740"></a>
<a id="trace-22742"></a>
<a id="trace-22757"></a>
<a id="trace-22759"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22805"></a>
<a id="trace-22807"></a>
<a id="trace-22815"></a>
<a id="trace-22817"></a>
<a id="trace-22890"></a>
<a id="trace-22892"></a>
<a id="trace-22904"></a>
<a id="trace-22906"></a>
<a id="trace-22936"></a>
<a id="trace-22938"></a>
<a id="trace-22948"></a>
<a id="trace-22950"></a>
<a id="trace-22957"></a>
<a id="trace-22959"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22980"></a>
<a id="trace-22982"></a>
<a id="trace-22992"></a>
<a id="trace-22994"></a>
<a id="trace-23002"></a>
<a id="trace-23004"></a>
<a id="trace-23096"></a>
<a id="trace-23098"></a>
<a id="trace-23108"></a>
<a id="trace-23110"></a>
<a id="trace-23126"></a>
<a id="trace-23128"></a>
<a id="trace-23141"></a>
<a id="trace-23143"></a>
<a id="trace-23155"></a>
<a id="trace-23157"></a>
<a id="trace-23163"></a>
<a id="trace-23165"></a>
<a id="trace-23179"></a>
<a id="trace-23181"></a>
<a id="trace-23189"></a>
<a id="trace-23191"></a>
<a id="trace-23263"></a>
<a id="trace-23265"></a>
<a id="trace-23270"></a>
<a id="trace-23272"></a>
<a id="trace-23291"></a>
<a id="trace-23293"></a>
<a id="trace-23315"></a>
<a id="trace-23317"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23359"></a>
<a id="trace-23361"></a>
<a id="trace-23440"></a>
<a id="trace-23442"></a>
<a id="trace-23468"></a>
<a id="trace-23470"></a>
<a id="trace-23477"></a>
<a id="trace-23479"></a>
<a id="trace-23490"></a>
<a id="trace-23492"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23511"></a>
<a id="trace-23513"></a>
<a id="trace-23523"></a>
<a id="trace-23525"></a>
<a id="trace-23621"></a>
<a id="trace-23623"></a>
<a id="trace-23628"></a>
<a id="trace-23630"></a>
<a id="trace-23657"></a>
<a id="trace-23659"></a>
<a id="trace-23695"></a>
<a id="trace-23697"></a>
<a id="trace-23704"></a>
<a id="trace-23706"></a>
<a id="trace-23716"></a>
<a id="trace-23718"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23802"></a>
<a id="trace-23804"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23862"></a>
<a id="trace-23864"></a>
<a id="trace-23875"></a>
<a id="trace-23877"></a>
<a id="trace-23895"></a>
<a id="trace-23897"></a>
<a id="trace-23905"></a>
<a id="trace-23907"></a>
<a id="trace-23984"></a>
<a id="trace-23986"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24037"></a>
<a id="trace-24039"></a>
<a id="trace-24052"></a>
<a id="trace-24054"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24080"></a>
<a id="trace-24082"></a>
<a id="trace-24090"></a>
<a id="trace-24092"></a>
<a id="trace-24164"></a>
<a id="trace-24166"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24204"></a>
<a id="trace-24206"></a>
<a id="trace-24217"></a>
<a id="trace-24219"></a>
<a id="trace-24239"></a>
<a id="trace-24241"></a>
<a id="trace-24248"></a>
<a id="trace-24250"></a>
<a id="trace-24260"></a>
<a id="trace-24262"></a>
<a id="trace-24347"></a>
<a id="trace-24349"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24382"></a>
<a id="trace-24384"></a>
<a id="trace-24395"></a>
<a id="trace-24397"></a>
<a id="trace-24406"></a>
<a id="trace-24408"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24456"></a>
<a id="trace-24458"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24568"></a>
<a id="trace-24570"></a>
<a id="trace-24590"></a>
<a id="trace-24592"></a>
<a id="trace-24602"></a>
<a id="trace-24604"></a>
<a id="trace-24621"></a>
<a id="trace-24623"></a>
<a id="trace-24638"></a>
<a id="trace-24640"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24734"></a>
<a id="trace-24736"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24785"></a>
<a id="trace-24787"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24894"></a>
<a id="trace-24896"></a>
<a id="trace-24932"></a>
<a id="trace-24934"></a>
<a id="trace-24960"></a>
<a id="trace-24962"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-24994"></a>
<a id="trace-24996"></a>
<a id="trace-25072"></a>
<a id="trace-25074"></a>
<a id="trace-25082"></a>
<a id="trace-25084"></a>
<a id="trace-25269"></a>
<a id="trace-25271"></a>
<a id="trace-25283"></a>
<a id="trace-25285"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25618"></a>
<a id="trace-25620"></a>
<a id="trace-25641"></a>
<a id="trace-25643"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25691"></a>
<a id="trace-25693"></a>
<a id="trace-25707"></a>
<a id="trace-25709"></a>
<a id="trace-25715"></a>
<a id="trace-25717"></a>
<a id="trace-25732"></a>
<a id="trace-25734"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25825"></a>
<a id="trace-25827"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25889"></a>
<a id="trace-25891"></a>
<a id="trace-25901"></a>
<a id="trace-25903"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25950"></a>
<a id="trace-25952"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26044"></a>
<a id="trace-26046"></a>
<a id="trace-26065"></a>
<a id="trace-26067"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26091"></a>
<a id="trace-26093"></a>
<a id="trace-26099"></a>
<a id="trace-26101"></a>
<a id="trace-26118"></a>
<a id="trace-26120"></a>
<a id="trace-26230"></a>
<a id="trace-26232"></a>
<a id="trace-26345"></a>
<a id="trace-26347"></a>
<a id="trace-26352"></a>
<a id="trace-26354"></a>
<a id="trace-26381"></a>
<a id="trace-26383"></a>
<a id="trace-26395"></a>
<a id="trace-26397"></a>
<a id="trace-26406"></a>
<a id="trace-26408"></a>
<a id="trace-26420"></a>
<a id="trace-26422"></a>
<a id="trace-26428"></a>
<a id="trace-26430"></a>
<a id="trace-26446"></a>
<a id="trace-26448"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26536"></a>
<a id="trace-26538"></a>
<a id="trace-26571"></a>
<a id="trace-26573"></a>
<a id="trace-26580"></a>
<a id="trace-26582"></a>
<a id="trace-26596"></a>
<a id="trace-26598"></a>
<a id="trace-26605"></a>
<a id="trace-26607"></a>
<a id="trace-26647"></a>
<a id="trace-26649"></a>
<a id="trace-26721"></a>
<a id="trace-26723"></a>
<a id="trace-26734"></a>
<a id="trace-26736"></a>
<a id="trace-26758"></a>
<a id="trace-26760"></a>
<a id="trace-26769"></a>
<a id="trace-26771"></a>
<a id="trace-26786"></a>
<a id="trace-26788"></a>
<a id="trace-26795"></a>
<a id="trace-26797"></a>
<a id="trace-26916"></a>
<a id="trace-26918"></a>
<a id="trace-26924"></a>
<a id="trace-26926"></a>
<a id="trace-26936"></a>
<a id="trace-26938"></a>
<a id="trace-26950"></a>
<a id="trace-26952"></a>
<a id="trace-27040"></a>
<a id="trace-27042"></a>
<a id="trace-27047"></a>
<a id="trace-27049"></a>
<a id="trace-27059"></a>
<a id="trace-27061"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27080"></a>
<a id="trace-27082"></a>
<a id="trace-27085"></a>
<a id="trace-27087"></a>
<a id="trace-27097"></a>
<a id="trace-27099"></a>
<a id="trace-27104"></a>
<a id="trace-27106"></a>
<a id="trace-27172"></a>
<a id="trace-27174"></a>
<a id="trace-27310"></a>
<a id="trace-27312"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27336"></a>
<a id="trace-27338"></a>
<a id="trace-27355"></a>
<a id="trace-27357"></a>
<a id="trace-27367"></a>
<a id="trace-27369"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27398"></a>
<a id="trace-27400"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27550"></a>
<a id="trace-27552"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27570"></a>
<a id="trace-27572"></a>
<a id="trace-27724"></a>
<a id="trace-27726"></a>
<a id="trace-27734"></a>
<a id="trace-27736"></a>
<a id="trace-27752"></a>
<a id="trace-27754"></a>
<a id="trace-27759"></a>
<a id="trace-27761"></a>
<a id="trace-27829"></a>
<a id="trace-27831"></a>
<a id="trace-27976"></a>
<a id="trace-27978"></a>
<a id="trace-27991"></a>
<a id="trace-27993"></a>
<a id="trace-28004"></a>
<a id="trace-28006"></a>
<a id="trace-28033"></a>
<a id="trace-28035"></a>
<a id="trace-28091"></a>
<a id="trace-28093"></a>
<a id="trace-28111"></a>
<a id="trace-28113"></a>
<a id="trace-28322"></a>
<a id="trace-28324"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28422"></a>
<a id="trace-28424"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28456"></a>
<a id="trace-28458"></a>
<a id="trace-28475"></a>
<a id="trace-28477"></a>
<a id="trace-28482"></a>
<a id="trace-28484"></a>
<a id="trace-28492"></a>
<a id="trace-28494"></a>
<a id="trace-28499"></a>
<a id="trace-28501"></a>
<a id="trace-28567"></a>
<a id="trace-28569"></a>
<a id="trace-28585"></a>
<a id="trace-28587"></a>
<a id="trace-28591"></a>
<a id="trace-28593"></a>
<a id="trace-28604"></a>
<a id="trace-28606"></a>
<a id="trace-28610"></a>
<a id="trace-28612"></a>
<a id="trace-28621"></a>
<a id="trace-28623"></a>
<a id="trace-28627"></a>
<a id="trace-28629"></a>
<a id="trace-28642"></a>
<a id="trace-28644"></a>
<a id="trace-28710"></a>
<a id="trace-28712"></a>
<a id="trace-28730"></a>
<a id="trace-28732"></a>
<a id="trace-28735"></a>
<a id="trace-28737"></a>
<a id="trace-28749"></a>
<a id="trace-28751"></a>
<a id="trace-28764"></a>
<a id="trace-28766"></a>
<a id="trace-28769"></a>
<a id="trace-28771"></a>
<a id="trace-28926"></a>
<a id="trace-28928"></a>
<a id="trace-28951"></a>
<a id="trace-28953"></a>
<a id="trace-28969"></a>
<a id="trace-28971"></a>
<a id="trace-28975"></a>
<a id="trace-28977"></a>
<a id="trace-28998"></a>
<a id="trace-29000"></a>
<a id="trace-29010"></a>
<a id="trace-29012"></a>
<a id="trace-29105"></a>
<a id="trace-29107"></a>
<a id="trace-29112"></a>
<a id="trace-29114"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29131"></a>
<a id="trace-29133"></a>
<a id="trace-29144"></a>
<a id="trace-29146"></a>
<a id="trace-29150"></a>
<a id="trace-29152"></a>
<a id="trace-29235"></a>
<a id="trace-29237"></a>
<a id="trace-29243"></a>
<a id="trace-29245"></a>
<a id="trace-29257"></a>
<a id="trace-29259"></a>
<a id="trace-29274"></a>
<a id="trace-29276"></a>
<a id="trace-29280"></a>
<a id="trace-29282"></a>
<a id="trace-29307"></a>
<a id="trace-29309"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29336"></a>
<a id="trace-29338"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29439"></a>
<a id="trace-29441"></a>
<a id="trace-29446"></a>
<a id="trace-29448"></a>
<a id="trace-29461"></a>
<a id="trace-29463"></a>
<a id="trace-29480"></a>
<a id="trace-29482"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29500"></a>
<a id="trace-29502"></a>
<a id="trace-29576"></a>
<a id="trace-29578"></a>
<a id="trace-29585"></a>
<a id="trace-29587"></a>
<a id="trace-29601"></a>
<a id="trace-29603"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29636"></a>
<a id="trace-29638"></a>
<a id="trace-29666"></a>
<a id="trace-29668"></a>
<a id="trace-29676"></a>
<a id="trace-29678"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29699"></a>
<a id="trace-29701"></a>
<a id="trace-29768"></a>
<a id="trace-29770"></a>
<a id="trace-29775"></a>
<a id="trace-29777"></a>
<a id="trace-29791"></a>
<a id="trace-29793"></a>
<a id="trace-29798"></a>
<a id="trace-29800"></a>
<a id="trace-29814"></a>
<a id="trace-29816"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29844"></a>
<a id="trace-29846"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29969"></a>
<a id="trace-29971"></a>
<a id="trace-29978"></a>
<a id="trace-29980"></a>
<a id="trace-29994"></a>
<a id="trace-29996"></a>
<a id="trace-30000"></a>
<a id="trace-30002"></a>
<a id="trace-30012"></a>
<a id="trace-30014"></a>
<a id="trace-30019"></a>
<a id="trace-30021"></a>
<a id="trace-30038"></a>
<a id="trace-30040"></a>
<a id="trace-30060"></a>
<a id="trace-30062"></a>
<a id="trace-30143"></a>
<a id="trace-30145"></a>
<a id="trace-30173"></a>
<a id="trace-30175"></a>
<a id="trace-30196"></a>
<a id="trace-30198"></a>
<a id="trace-30203"></a>
<a id="trace-30205"></a>
<a id="trace-30218"></a>
<a id="trace-30220"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30243"></a>
<a id="trace-30245"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30360"></a>
<a id="trace-30362"></a>
<a id="trace-30380"></a>
<a id="trace-30382"></a>
<a id="trace-30396"></a>
<a id="trace-30398"></a>
<a id="trace-30402"></a>
<a id="trace-30404"></a>
<a id="trace-30427"></a>
<a id="trace-30429"></a>
<a id="trace-30496"></a>
<a id="trace-30498"></a>
<a id="trace-30505"></a>
<a id="trace-30507"></a>
<a id="trace-30521"></a>
<a id="trace-30523"></a>
<a id="trace-30537"></a>
<a id="trace-30539"></a>
<a id="trace-30550"></a>
<a id="trace-30552"></a>
<a id="trace-30564"></a>
<a id="trace-30566"></a>
<a id="trace-30576"></a>
<a id="trace-30578"></a>
<a id="trace-30605"></a>
<a id="trace-30607"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30687"></a>
<a id="trace-30689"></a>
<a id="trace-30705"></a>
<a id="trace-30707"></a>
<a id="trace-30731"></a>
<a id="trace-30733"></a>
<a id="trace-30745"></a>
<a id="trace-30747"></a>
<a id="trace-30753"></a>
<a id="trace-30755"></a>
<a id="trace-30775"></a>
<a id="trace-30777"></a>
<a id="trace-30849"></a>
<a id="trace-30851"></a>
<a id="trace-30888"></a>
<a id="trace-30890"></a>
<a id="trace-30903"></a>
<a id="trace-30905"></a>
<a id="trace-30929"></a>
<a id="trace-30931"></a>
<a id="trace-30936"></a>
<a id="trace-30938"></a>
<a id="trace-30949"></a>
<a id="trace-30951"></a>
<a id="trace-30958"></a>
<a id="trace-30960"></a>
<a id="trace-31032"></a>
<a id="trace-31034"></a>
<a id="trace-31053"></a>
<a id="trace-31055"></a>
<a id="trace-31059"></a>
<a id="trace-31061"></a>
<a id="trace-31076"></a>
<a id="trace-31078"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31108"></a>
<a id="trace-31110"></a>
<a id="trace-31131"></a>
<a id="trace-31133"></a>
<a id="trace-31139"></a>
<a id="trace-31141"></a>
<a id="trace-31235"></a>
<a id="trace-31237"></a>
<a id="trace-31242"></a>
<a id="trace-31244"></a>
<a id="trace-31254"></a>
<a id="trace-31256"></a>
<a id="trace-31265"></a>
<a id="trace-31267"></a>
<a id="trace-31279"></a>
<a id="trace-31281"></a>
<a id="trace-31291"></a>
<a id="trace-31293"></a>
<a id="trace-31314"></a>
<a id="trace-31316"></a>
<a id="trace-31393"></a>
<a id="trace-31395"></a>
<a id="trace-31402"></a>
<a id="trace-31404"></a>
<a id="trace-31418"></a>
<a id="trace-31420"></a>
<a id="trace-31447"></a>
<a id="trace-31449"></a>
<a id="trace-31461"></a>
<a id="trace-31463"></a>
<a id="trace-31467"></a>
<a id="trace-31469"></a>
<a id="trace-31484"></a>
<a id="trace-31486"></a>
<a id="trace-31492"></a>
<a id="trace-31494"></a>
<a id="trace-31566"></a>
<a id="trace-31568"></a>
<a id="trace-31585"></a>
<a id="trace-31587"></a>
<a id="trace-31601"></a>
<a id="trace-31603"></a>
<a id="trace-31609"></a>
<a id="trace-31611"></a>
<a id="trace-31632"></a>
<a id="trace-31634"></a>
<a id="trace-31654"></a>
<a id="trace-31656"></a>
<a id="trace-31673"></a>
<a id="trace-31675"></a>
<a id="trace-31743"></a>
<a id="trace-31745"></a>
<a id="trace-31756"></a>
<a id="trace-31758"></a>
<a id="trace-31772"></a>
<a id="trace-31774"></a>
<a id="trace-31784"></a>
<a id="trace-31786"></a>
<a id="trace-31807"></a>
<a id="trace-31809"></a>
<a id="trace-31813"></a>
<a id="trace-31815"></a>
<a id="trace-31828"></a>
<a id="trace-31830"></a>
<a id="trace-31839"></a>
<a id="trace-31841"></a>
<a id="trace-31851"></a>
<a id="trace-31853"></a>
<a id="trace-31860"></a>
<a id="trace-31862"></a>
<a id="trace-31932"></a>
<a id="trace-31934"></a>
<a id="trace-31939"></a>
<a id="trace-31941"></a>
<a id="trace-31956"></a>
<a id="trace-31958"></a>
<a id="trace-31984"></a>
<a id="trace-31986"></a>
<a id="trace-31991"></a>
<a id="trace-31993"></a>
<a id="trace-32010"></a>
<a id="trace-32012"></a>
<a id="trace-32016"></a>
<a id="trace-32018"></a>
<a id="trace-32039"></a>
<a id="trace-32041"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 941): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624999958994736, 'next_transition': 1278}.
<a id="trace-955"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 955): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300004817461916, 'next_transition': 1274}.
<a id="trace-1274"></a>
<a id="trace-1276"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1356"></a>
<a id="trace-1358"></a>
<a id="trace-1393"></a>
<a id="trace-1395"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1473"></a>
<a id="trace-1475"></a>
<a id="trace-1504"></a>
<a id="trace-1506"></a>
<a id="trace-1531"></a>
<a id="trace-1533"></a>
<a id="trace-1623"></a>
<a id="trace-1625"></a>
<a id="trace-1649"></a>
<a id="trace-1651"></a>
<a id="trace-1672"></a>
<a id="trace-1674"></a>
<a id="trace-1702"></a>
<a id="trace-1704"></a>
<a id="trace-1733"></a>
<a id="trace-1735"></a>
<a id="trace-1757"></a>
<a id="trace-1759"></a>
<a id="trace-1781"></a>
<a id="trace-1783"></a>
<a id="trace-1799"></a>
<a id="trace-1801"></a>
<a id="trace-1828"></a>
<a id="trace-1830"></a>
<a id="trace-2029"></a>
<a id="trace-2031"></a>
<a id="trace-2118"></a>
<a id="trace-2120"></a>
<a id="trace-2143"></a>
<a id="trace-2145"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2638892395057753, 'next_transition': 1312}.
<a id="trace-1835"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1835): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1552. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2693}.
<a id="trace-1836"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1836): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1552. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2693}.
<a id="trace-2152"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2152): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2044. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4428985844498968, 'next_transition': 2613}.
<a id="trace-2153"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2153): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2044. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4428985844498968, 'next_transition': 2613}.
<a id="trace-2613"></a>
<a id="trace-2615"></a>
<a id="trace-2650"></a>
<a id="trace-2652"></a>
<a id="trace-2679"></a>
<a id="trace-2681"></a>
<a id="trace-3099"></a>
<a id="trace-3101"></a>
<a id="trace-3614"></a>
<a id="trace-3616"></a>
<a id="trace-3661"></a>
<a id="trace-3663"></a>
<a id="trace-3701"></a>
<a id="trace-3703"></a>
- 16.25s–19.25s (×14), actor 5, squad 0 (trace 2613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2049. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843681974368125, 'next_transition': 2650}.
<a id="trace-2693"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2693): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2052. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2895}.
<a id="trace-2694"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2694): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2052. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2895}.
<a id="trace-2695"></a>
<a id="trace-2895"></a>
<a id="trace-3104"></a>
<a id="trace-3332"></a>
- 17.55s–17.80s (×4), actor 8, squad 1 (trace 2695): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2052. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2895}.
<a id="trace-3721"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 3721): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2044. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874995895649889, 'next_transition': 4213}.
<a id="trace-3722"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 3722): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2044. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874995895649889, 'next_transition': 4213}.
<a id="trace-3723"></a>
<a id="trace-4213"></a>
- 19.35s–19.60s (×2), actor 0, squad 0 (trace 3723): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2044. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874995895649889, 'next_transition': 4213}.
<a id="trace-4747"></a>
<a id="trace-4749"></a>
<a id="trace-4869"></a>
<a id="trace-4871"></a>
<a id="trace-4933"></a>
<a id="trace-4935"></a>
- 19.75s–20.75s (×6), actor 5, squad 0 (trace 4747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2049. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.181242740876209, 'next_transition': 4869}.
<a id="trace-339"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-340"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 340): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4956"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 4956): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667606 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4956. Next observer evidence: None.
<a id="trace-4957"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 4957): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667606 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4957. Next observer evidence: None.
<a id="trace-4958"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 4958): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667606 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4958. Next observer evidence: None.
<a id="trace-4959"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 4959): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667606 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4959. Next observer evidence: None.
<a id="trace-4965"></a>
- 21.10s–21.10s (×1), actor 0, squad 0 (trace 4965): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4773. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512401289602347, 'next_transition': 5551}.
<a id="trace-5543"></a>
- 21.15s–21.15s (×1), actor 8, squad 1 (trace 5543): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4781. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4877000169597707, 'next_transition': 5712}.
<a id="trace-5551"></a>
<a id="trace-5553"></a>
<a id="trace-5587"></a>
<a id="trace-5589"></a>
<a id="trace-5654"></a>
<a id="trace-5656"></a>
<a id="trace-5704"></a>
<a id="trace-5706"></a>
<a id="trace-5755"></a>
<a id="trace-5757"></a>
<a id="trace-5784"></a>
<a id="trace-5786"></a>
<a id="trace-5830"></a>
<a id="trace-5832"></a>
- 21.25s–24.25s (×14), actor 5, squad 0 (trace 5551): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 4959. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1704740226317467, 'next_transition': 5587}.
<a id="trace-5712"></a>
- 22.75s–22.75s (×1), actor 8, squad 1 (trace 5712): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4781. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32098801877951816, 'next_transition': 5733}.
<a id="trace-5733"></a>
- 22.90s–22.90s (×1), actor 8, squad 1 (trace 5733): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 4781. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.519995110957559, 'next_transition': 5854}.
<a id="trace-5854"></a>
- 24.40s–24.40s (×1), actor 8, squad 1 (trace 5854): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4781. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.635865721304157, 'next_transition': 423}.
<a id="trace-6112"></a>
- 24.60s–24.60s (×1), actor 0, squad 0 (trace 6112): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4773. Next observer evidence: None.
<a id="trace-6128"></a>
<a id="trace-6130"></a>
<a id="trace-6224"></a>
<a id="trace-6226"></a>
<a id="trace-6252"></a>
<a id="trace-6254"></a>
<a id="trace-6298"></a>
<a id="trace-6300"></a>
<a id="trace-6326"></a>
<a id="trace-6328"></a>
<a id="trace-6361"></a>
<a id="trace-6363"></a>
- 24.75s–27.25s (×12), actor 5, squad 0 (trace 6128): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 4959. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9606971803258655, 'next_transition': 6224}.
<a id="trace-423"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (events line 423): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6270"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 6270): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.677044 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 6270. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.252847509667447, 'next_transition': 7121}.
<a id="trace-6271"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 6271): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.677044 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 6271. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.252847509667447, 'next_transition': 7121}.
<a id="trace-6380"></a>
- 27.60s–27.60s (×1), actor 0, squad 0 (trace 6380): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 6146. Next observer evidence: None.
<a id="trace-7112"></a>
<a id="trace-7114"></a>
<a id="trace-7151"></a>
<a id="trace-7153"></a>
- 27.75s–28.25s (×4), actor 5, squad 0 (trace 7112): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 6271. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6330871389889329, 'next_transition': 7151}.
<a id="trace-7121"></a>
- 27.75s–27.75s (×1), actor 8, squad 1 (trace 7121): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 6154. Next observer evidence: {'until': 27.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7126}.
<a id="trace-7126"></a>
- 27.80s–27.80s (×1), actor 8, squad 1 (trace 7126): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 6154. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7174}.
<a id="trace-7173"></a>
- 28.60s–28.60s (×1), actor 0, squad 0 (trace 7173): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 6146. Next observer evidence: None.
<a id="trace-7174"></a>
- 28.60s–28.60s (×1), actor 8, squad 1 (trace 7174): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 6154. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.638014473268436, 'next_transition': 548}.
<a id="trace-7195"></a>
<a id="trace-7197"></a>
<a id="trace-7230"></a>
<a id="trace-7232"></a>
<a id="trace-7243"></a>
<a id="trace-7245"></a>
<a id="trace-7366"></a>
<a id="trace-7368"></a>
<a id="trace-7391"></a>
<a id="trace-7393"></a>
<a id="trace-7423"></a>
<a id="trace-7425"></a>
- 28.75s–31.25s (×12), actor 5, squad 0 (trace 7195): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 6271. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9997702968238398, 'next_transition': 7230}.
<a id="trace-548"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 548): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7404"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 7404): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.622106 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 7404. Next observer evidence: {'until': 32.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.638014473268436, 'next_transition': 7489}.
<a id="trace-7405"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 7405): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.622106 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 7405. Next observer evidence: {'until': 32.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.638014473268436, 'next_transition': 7489}.
<a id="trace-7437"></a>
- 31.45s–31.45s (×1), actor 0, squad 0 (trace 7437): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7256. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2714186754772094, 'next_transition': 7446}.
<a id="trace-7446"></a>
<a id="trace-7448"></a>
<a id="trace-7476"></a>
<a id="trace-7478"></a>
<a id="trace-7504"></a>
<a id="trace-7506"></a>
<a id="trace-7548"></a>
<a id="trace-7550"></a>
<a id="trace-7586"></a>
<a id="trace-7588"></a>
<a id="trace-7634"></a>
<a id="trace-7636"></a>
<a id="trace-7680"></a>
<a id="trace-7682"></a>
<a id="trace-7783"></a>
<a id="trace-7785"></a>
<a id="trace-7811"></a>
<a id="trace-7813"></a>
<a id="trace-7832"></a>
<a id="trace-7834"></a>
<a id="trace-7843"></a>
<a id="trace-7845"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
<a id="trace-7875"></a>
<a id="trace-7877"></a>
<a id="trace-7896"></a>
<a id="trace-7898"></a>
<a id="trace-7913"></a>
<a id="trace-7915"></a>
- 31.75s–38.75s (×30), actor 5, squad 0 (trace 7446): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 7405. Next observer evidence: {'until': 32.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7354007367862221, 'next_transition': 7476}.
<a id="trace-7489"></a>
- 32.45s–32.45s (×1), actor 8, squad 1 (trace 7489): received platoon directive; retain held slots. Knowledge: actor memory at 30.00s, trace 7264. Next observer evidence: {'until': 37, 'shots': 2, 'casualties': 1, 'mean_displacement': 2.085800468078997, 'next_transition': 765}.
<a id="trace-765"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 765): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7853"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7853): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.626776 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7853. Next observer evidence: {'until': 39.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.665499999999998, 'next_transition': 13132}.
<a id="trace-7854"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7854): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.626776 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7854. Next observer evidence: {'until': 39.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.665499999999998, 'next_transition': 13132}.
<a id="trace-7924"></a>
- 38.85s–38.85s (×1), actor 0, squad 0 (trace 7924): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7698. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3008168935072072, 'next_transition': 13122}.
<a id="trace-12593"></a>
- 38.85s–38.85s (×1), actor 0, squad 0 (trace 12593): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 7698. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3008168935072072, 'next_transition': 13122}.
<a id="trace-12594"></a>
- 38.85s–38.85s (×1), actor 0, squad 0 (trace 12594): MoveTactically. Knowledge: actor memory at 35.00s, trace 7698. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3008168935072072, 'next_transition': 13122}.
<a id="trace-12595"></a>
- 38.85s–38.85s (×1), actor 0, squad 0 (trace 12595): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 7698. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3008168935072072, 'next_transition': 13122}.
<a id="trace-13122"></a>
<a id="trace-13124"></a>
<a id="trace-13156"></a>
<a id="trace-13158"></a>
<a id="trace-13257"></a>
<a id="trace-13259"></a>
<a id="trace-13270"></a>
<a id="trace-13272"></a>
- 39.25s–40.75s (×8), actor 5, squad 0 (trace 13122): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7854. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3498516506932899, 'next_transition': 13156}.
<a id="trace-13132"></a>
- 39.40s–39.40s (×1), actor 9, squad 1 (trace 13132): NeedSupport. Knowledge: actor memory at 35.00s, trace 7707. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8921000000000028, 'next_transition': 16825}.
<a id="trace-13286"></a>
- 40.85s–40.85s (×1), actor 0, squad 0 (trace 13286): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 13167. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7839876728899424, 'next_transition': 16614}.
<a id="trace-13287"></a>
- 40.85s–40.85s (×1), actor 0, squad 0 (trace 13287): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 13167. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7839876728899424, 'next_transition': 16614}.
<a id="trace-16614"></a>
<a id="trace-16616"></a>
<a id="trace-16641"></a>
<a id="trace-16643"></a>
<a id="trace-16675"></a>
<a id="trace-16677"></a>
- 41.25s–42.25s (×6), actor 5, squad 0 (trace 16614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 13172. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.799480394709628, 'next_transition': 16641}.
<a id="trace-16695"></a>
- 42.70s–42.70s (×1), actor 0, squad 0 (trace 16695): NeedSupport. Knowledge: actor memory at 40.00s, trace 13167. Next observer evidence: None.
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16764"></a>
<a id="trace-16766"></a>
<a id="trace-16800"></a>
<a id="trace-16802"></a>
- 42.75s–44.25s (×8), actor 5, squad 0 (trace 16707): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 13172. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7109549326509266, 'next_transition': 16742}.
<a id="trace-16821"></a>
- 44.50s–44.50s (×1), actor 0, squad 0 (trace 16821): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 40.00s, trace 13167. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2215979515633159, 'next_transition': 1018}.
<a id="trace-16825"></a>
- 44.55s–44.55s (×1), actor 9, squad 1 (trace 16825): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 13175. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16831}.
<a id="trace-16826"></a>
- 44.55s–44.55s (×1), actor 9, squad 1 (trace 16826): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 13175. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16831}.
<a id="trace-1018"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 1018): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16828"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 16828): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548037 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 16828. Next observer evidence: None.
<a id="trace-16829"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 16829): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548037 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 16829. Next observer evidence: None.
<a id="trace-16831"></a>
- 44.60s–44.60s (×1), actor 9, squad 1 (trace 16831): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 13175. Next observer evidence: {'until': 49, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.004299999999997084, 'next_transition': 17790}.
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-16929"></a>
<a id="trace-16931"></a>
- 44.75s–45.25s (×4), actor 5, squad 0 (trace 16840): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 16829. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6606475600330561, 'next_transition': 16929}.
<a id="trace-16939"></a>
- 45.50s–45.50s (×1), actor 0, squad 0 (trace 16939): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 16852. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2269955128117054, 'next_transition': 17586}.
<a id="trace-16945"></a>
- 45.50s–45.50s (×1), actor 0, squad 0 (trace 16945): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 16852. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2269955128117054, 'next_transition': 17586}.
<a id="trace-16946"></a>
- 45.50s–45.50s (×1), actor 0, squad 0 (trace 16946): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 16852. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2269955128117054, 'next_transition': 17586}.
<a id="trace-17586"></a>
<a id="trace-17588"></a>
- 45.75s–45.75s (×2), actor 5, squad 0 (trace 17586): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 16856. Next observer evidence: {'until': 49, 'shots': 4, 'casualties': 1, 'mean_displacement': 3.5916364012861206, 'next_transition': 17787}.
<a id="trace-17787"></a>
- 49.05s–49.05s (×1), actor 6, squad 0 (trace 17787): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 49.05s, trace 17787. Next observer evidence: None.
<a id="trace-17788"></a>
- 49.05s–49.05s (×1), actor 6, squad 0 (trace 17788): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465061 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.05s, trace 17788. Next observer evidence: None.
<a id="trace-17789"></a>
- 49.05s–49.05s (×1), actor 6, squad 0 (trace 17789): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465061 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.05s, trace 17789. Next observer evidence: None.
<a id="trace-17790"></a>
- 49.05s–49.05s (×1), actor 6, squad 1 (trace 17790): renew committed intent (75 s lifetime). Knowledge: actor memory at 49.05s, trace 17790. Next observer evidence: None.
<a id="trace-17791"></a>
- 49.05s–49.05s (×1), actor 0, squad 0 (trace 17791): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 16852. Next observer evidence: None.
<a id="trace-1129"></a>
- 49.05s–49.05s (×1), actor 6, squad 0 (events line 1129): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33185953403975904, 'next_transition': 17810}.
<a id="trace-1130"></a>
- 49.05s–49.05s (×1), actor 6, squad 1 (events line 1130): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.5376999999999974, 'next_transition': None}.
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17936"></a>
<a id="trace-17978"></a>
<a id="trace-18007"></a>
<a id="trace-18031"></a>
<a id="trace-18069"></a>
- 49.25s–54.25s (×7), actor 6, squad 0 (trace 17810): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 49.05s, trace 17790. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.836912652766202, 'next_transition': 17936}.
<a id="trace-18076"></a>
- 54.45s–54.45s (×1), actor 0, squad 0 (trace 18076): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 17859. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42641687367990305, 'next_transition': 18651}.
<a id="trace-18077"></a>
- 54.45s–54.45s (×1), actor 0, squad 0 (trace 18077): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 17859. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42641687367990305, 'next_transition': 18651}.
<a id="trace-18651"></a>
<a id="trace-18774"></a>
<a id="trace-18870"></a>
<a id="trace-18904"></a>
<a id="trace-18921"></a>
<a id="trace-18944"></a>
<a id="trace-18984"></a>
<a id="trace-19104"></a>
- 55.25s–65.25s (×8), actor 6, squad 0 (trace 18651): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 55.00s, trace 18583. Next observer evidence: {'until': 59.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 5.2568321894785255, 'next_transition': 18774}.
<a id="trace-19379"></a>
- 69.10s–69.10s (×1), actor 1, squad 0 (trace 19379): renew committed intent (75 s lifetime). Knowledge: actor memory at 69.10s, trace 19379. Next observer evidence: None.
<a id="trace-1402"></a>
- 69.10s–69.10s (×1), actor 1, squad 0 (events line 1402): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12697500000000028, 'next_transition': 19385}.
<a id="trace-19385"></a>
- 69.25s–69.25s (×1), actor 1, squad 0 (trace 19385): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 69.10s, trace 19379. Next observer evidence: {'until': 69.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19400}.
<a id="trace-19400"></a>
- 69.50s–69.50s (×1), actor 1, squad 0 (trace 19400): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 69.10s, trace 19379. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05207499999999987, 'next_transition': 19587}.
<a id="trace-19401"></a>
- 69.50s–69.50s (×1), actor 1, squad 0 (trace 19401): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 69.10s, trace 19379. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05207499999999987, 'next_transition': 19587}.
<a id="trace-19587"></a>
<a id="trace-19616"></a>
<a id="trace-19644"></a>
<a id="trace-19688"></a>
<a id="trace-19763"></a>
<a id="trace-19785"></a>
<a id="trace-19801"></a>
<a id="trace-19830"></a>
<a id="trace-19904"></a>
<a id="trace-19927"></a>
<a id="trace-19944"></a>
<a id="trace-19961"></a>
<a id="trace-19977"></a>
<a id="trace-20054"></a>
<a id="trace-20076"></a>
<a id="trace-20098"></a>
<a id="trace-20119"></a>
<a id="trace-20140"></a>
<a id="trace-20216"></a>
<a id="trace-20236"></a>
- 70.25s–91.25s (×20), actor 1, squad 0 (trace 19587): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 70.00s, trace 19522. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48503499990335786, 'next_transition': 19616}.
<a id="trace-20248"></a>
- 91.75s–91.75s (×1), actor 1, squad 0 (trace 20248): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 20155. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20522}.
<a id="trace-20411"></a>
- 91.75s–91.75s (×1), actor 1, squad 0 (trace 20411): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 20155. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20522}.
<a id="trace-20522"></a>
<a id="trace-20555"></a>
<a id="trace-20587"></a>
<a id="trace-20680"></a>
- 92.25s–95.25s (×4), actor 1, squad 0 (trace 20522): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 90.00s, trace 20155. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9669349177146204, 'next_transition': 20555}.
<a id="trace-20693"></a>
- 95.85s–95.85s (×1), actor 1, squad 0 (trace 20693): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 20615. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417962386492842, 'next_transition': 20705}.
<a id="trace-20705"></a>
<a id="trace-20741"></a>
<a id="trace-20765"></a>
<a id="trace-20791"></a>
- 96.25s–99.25s (×4), actor 1, squad 0 (trace 20705): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 95.00s, trace 20615. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7030041992939392, 'next_transition': 20741}.
<a id="trace-1542"></a>
- 99.70s–99.70s (×1), actor 1, squad 0 (events line 1542): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20801"></a>
- 99.70s–99.70s (×1), actor 1, squad 0 (trace 20801): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358149 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.70s, trace 20801. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149924343932727, 'next_transition': 20873}.
<a id="trace-20802"></a>
- 99.70s–99.70s (×1), actor 1, squad 0 (trace 20802): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358149 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.70s, trace 20802. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149924343932727, 'next_transition': 20873}.
<a id="trace-20873"></a>
<a id="trace-20892"></a>
- 100.25s–101.25s (×2), actor 1, squad 0 (trace 20873): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 20810. Next observer evidence: {'until': 101.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20892}.
<a id="trace-20906"></a>
- 102.00s–102.00s (×1), actor 1, squad 0 (trace 20906): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 20810. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21180}.
<a id="trace-20907"></a>
- 102.00s–102.00s (×1), actor 1, squad 0 (trace 20907): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 20810. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21180}.
<a id="trace-21180"></a>
<a id="trace-21209"></a>
<a id="trace-21228"></a>
<a id="trace-21342"></a>
- 102.25s–106.25s (×4), actor 1, squad 0 (trace 21180): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 20810. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24885139130112632, 'next_transition': 21209}.
<a id="trace-21361"></a>
- 106.85s–106.85s (×1), actor 1, squad 0 (trace 21361): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224085893761915, 'next_transition': 21367}.
<a id="trace-21367"></a>
- 107.25s–107.25s (×1), actor 1, squad 0 (trace 21367): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224065208966942, 'next_transition': 21373}.
<a id="trace-21373"></a>
- 107.60s–107.60s (×1), actor 1, squad 0 (trace 21373): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836101035426113, 'next_transition': 21417}.
<a id="trace-21377"></a>
- 107.60s–107.60s (×1), actor 1, squad 0 (trace 21377): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836101035426113, 'next_transition': 21417}.
<a id="trace-21378"></a>
- 107.60s–107.60s (×1), actor 1, squad 0 (trace 21378): Reorganise complete: known contact. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836101035426113, 'next_transition': 21417}.
<a id="trace-21417"></a>
<a id="trace-21450"></a>
<a id="trace-21535"></a>
<a id="trace-21564"></a>
- 108.25s–111.25s (×4), actor 1, squad 0 (trace 21417): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 21256. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240036008208987, 'next_transition': 21450}.
<a id="trace-21581"></a>
- 111.95s–111.95s (×1), actor 1, squad 0 (trace 21581): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 21471. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420006160814602, 'next_transition': 21664}.
<a id="trace-21582"></a>
- 111.95s–111.95s (×1), actor 1, squad 0 (trace 21582): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 21471. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420006160814602, 'next_transition': 21664}.
<a id="trace-21664"></a>
<a id="trace-21695"></a>
<a id="trace-21714"></a>
<a id="trace-21802"></a>
<a id="trace-21826"></a>
<a id="trace-21847"></a>
<a id="trace-21869"></a>
<a id="trace-21891"></a>
<a id="trace-21974"></a>
<a id="trace-21999"></a>
<a id="trace-22019"></a>
<a id="trace-22040"></a>
<a id="trace-22065"></a>
<a id="trace-22146"></a>
<a id="trace-22173"></a>
<a id="trace-22206"></a>
- 112.25s–127.25s (×16), actor 1, squad 0 (trace 21664): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.00s, trace 21471. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3695957410399999, 'next_transition': 21695}.
<a id="trace-22227"></a>
- 127.80s–127.80s (×1), actor 1, squad 0 (trace 22227): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 22085. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22341}.
<a id="trace-22228"></a>
- 127.80s–127.80s (×1), actor 1, squad 0 (trace 22228): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 22085. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22341}.
<a id="trace-22341"></a>
<a id="trace-22375"></a>
<a id="trace-22457"></a>
<a id="trace-22491"></a>
<a id="trace-22521"></a>
<a id="trace-22548"></a>
- 128.30s–133.30s (×6), actor 1, squad 0 (trace 22341): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 125.00s, trace 22085. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.466217477011007, 'next_transition': 22375}.
<a id="trace-22561"></a>
- 133.70s–133.70s (×1), actor 1, squad 0 (trace 22561): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 22391. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836139971515357, 'next_transition': 22590}.
<a id="trace-22590"></a>
<a id="trace-22693"></a>
<a id="trace-22724"></a>
<a id="trace-22753"></a>
<a id="trace-22775"></a>
<a id="trace-22801"></a>
<a id="trace-22886"></a>
<a id="trace-22922"></a>
<a id="trace-22944"></a>
<a id="trace-22966"></a>
<a id="trace-22988"></a>
<a id="trace-23071"></a>
<a id="trace-23092"></a>
<a id="trace-23122"></a>
<a id="trace-23151"></a>
<a id="trace-23175"></a>
<a id="trace-23259"></a>
<a id="trace-23283"></a>
<a id="trace-23304"></a>
<a id="trace-23327"></a>
<a id="trace-23355"></a>
<a id="trace-23436"></a>
<a id="trace-23464"></a>
<a id="trace-23486"></a>
<a id="trace-23507"></a>
<a id="trace-23531"></a>
<a id="trace-23617"></a>
<a id="trace-23645"></a>
- 134.30s–161.30s (×28), actor 1, squad 0 (trace 22590): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 22391. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5123957539302503, 'next_transition': 22693}.
<a id="trace-2096"></a>
- 161.75s–161.75s (×1), actor 1, squad 0 (events line 2096): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23667}.
<a id="trace-23654"></a>
- 161.75s–161.75s (×1), actor 1, squad 0 (trace 23654): renew committed intent (75 s lifetime). Knowledge: actor memory at 161.75s, trace 23654. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23667}.
<a id="trace-23667"></a>
<a id="trace-23691"></a>
<a id="trace-23712"></a>
<a id="trace-23798"></a>
<a id="trace-23823"></a>
<a id="trace-23846"></a>
<a id="trace-23871"></a>
<a id="trace-23891"></a>
<a id="trace-24002"></a>
<a id="trace-24026"></a>
<a id="trace-24048"></a>
<a id="trace-24076"></a>
<a id="trace-24160"></a>
<a id="trace-24185"></a>
<a id="trace-24213"></a>
<a id="trace-24235"></a>
<a id="trace-24256"></a>
<a id="trace-24370"></a>
<a id="trace-24391"></a>
<a id="trace-24420"></a>
<a id="trace-24443"></a>
<a id="trace-24528"></a>
<a id="trace-24551"></a>
<a id="trace-24579"></a>
<a id="trace-24617"></a>
<a id="trace-24705"></a>
<a id="trace-24730"></a>
<a id="trace-24752"></a>
<a id="trace-24781"></a>
<a id="trace-24801"></a>
<a id="trace-24883"></a>
<a id="trace-24911"></a>
<a id="trace-24928"></a>
<a id="trace-24956"></a>
- 162.30s–198.30s (×34), actor 1, squad 0 (trace 23667): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 161.75s, trace 23654. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23691}.
<a id="trace-2475"></a>
- 198.40s–198.40s (×1), actor 1, squad 0 (events line 2475): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24963"></a>
- 198.40s–198.40s (×1), actor 1, squad 0 (trace 24963): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.642856 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 198.40s, trace 24963. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24982}.
<a id="trace-24964"></a>
- 198.40s–198.40s (×1), actor 1, squad 0 (trace 24964): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.642856 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 198.40s, trace 24964. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24982}.
<a id="trace-24982"></a>
<a id="trace-25068"></a>
- 199.30s–200.30s (×2), actor 1, squad 0 (trace 24982): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 198.40s, trace 24964. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25068}.
<a id="trace-2510"></a>
- 201.25s–201.25s (×1), actor 1, squad 0 (events line 2510): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25093"></a>
- 201.25s–201.25s (×1), actor 1, squad 0 (trace 25093): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 201.25s, trace 25093. Next observer evidence: None.
<a id="trace-25094"></a>
- 201.25s–201.25s (×1), actor 1, squad 0 (trace 25094): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: None.
<a id="trace-25097"></a>
- 201.30s–201.30s (×1), actor 1, squad 0 (trace 25097): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 201.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25103}.
<a id="trace-25103"></a>
- 201.45s–201.45s (×1), actor 1, squad 0 (trace 25103): MoveTactically. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25279}.
<a id="trace-25104"></a>
- 201.45s–201.45s (×1), actor 1, squad 0 (trace 25104): traveling. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25279}.
<a id="trace-25105"></a>
- 201.45s–201.45s (×1), actor 1, squad 0 (trace 25105): received platoon directive. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25279}.
<a id="trace-25279"></a>
<a id="trace-25314"></a>
- 202.30s–203.30s (×2), actor 1, squad 0 (trace 25279): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.74091455730756, 'next_transition': 25314}.
<a id="trace-25338"></a>
- 204.05s–204.05s (×1), actor 1, squad 0 (trace 25338): received platoon directive. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.512372364725479, 'next_transition': 25502}.
<a id="trace-25502"></a>
<a id="trace-25605"></a>
<a id="trace-25637"></a>
<a id="trace-25678"></a>
<a id="trace-25703"></a>
<a id="trace-25728"></a>
<a id="trace-25821"></a>
<a id="trace-25855"></a>
<a id="trace-25885"></a>
<a id="trace-25918"></a>
<a id="trace-25946"></a>
<a id="trace-26031"></a>
<a id="trace-26061"></a>
<a id="trace-26087"></a>
<a id="trace-26114"></a>
- 204.30s–218.30s (×15), actor 1, squad 0 (trace 25502): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 201.25s, trace 25094. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5065716390440427, 'next_transition': 25605}.
<a id="trace-26129"></a>
- 218.65s–218.65s (×1), actor 1, squad 0 (trace 26129): traveling overwatch. Knowledge: actor memory at 215.00s, trace 25966. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26244}.
<a id="trace-26130"></a>
- 218.65s–218.65s (×1), actor 1, squad 0 (trace 26130): matching received arrivals: traveling stage complete. Knowledge: actor memory at 215.00s, trace 25966. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26244}.
<a id="trace-26244"></a>
<a id="trace-26341"></a>
<a id="trace-26368"></a>
<a id="trace-26391"></a>
<a id="trace-26416"></a>
<a id="trace-26442"></a>
<a id="trace-26532"></a>
<a id="trace-26567"></a>
<a id="trace-26592"></a>
<a id="trace-26614"></a>
<a id="trace-26635"></a>
<a id="trace-26717"></a>
<a id="trace-26754"></a>
<a id="trace-26782"></a>
- 219.30s–232.30s (×14), actor 1, squad 0 (trace 26244): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 215.00s, trace 25966. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2646226369757509, 'next_transition': 26341}.
<a id="trace-26798"></a>
- 232.80s–232.80s (×1), actor 1, squad 0 (trace 26798): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 26655. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 26912}.
<a id="trace-26912"></a>
- 233.30s–233.30s (×1), actor 1, squad 0 (trace 26912): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 26655. Next observer evidence: {'until': 234.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875367981243795, 'next_transition': 26941}.
<a id="trace-26941"></a>
- 234.50s–234.50s (×1), actor 1, squad 0 (trace 26941): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 230.00s, trace 26655. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599699488876719, 'next_transition': 27015}.
<a id="trace-26943"></a>
- 234.50s–234.50s (×1), actor 1, squad 0 (trace 26943): NeedSupport. Knowledge: actor memory at 230.00s, trace 26655. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599699488876719, 'next_transition': 27015}.
<a id="trace-27015"></a>
<a id="trace-27036"></a>
<a id="trace-27055"></a>
- 235.30s–237.30s (×3), actor 1, squad 0 (trace 27015): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 235.00s, trace 26955. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749748863077149, 'next_transition': 27036}.
<a id="trace-2908"></a>
- 237.80s–237.80s (×1), actor 1, squad 0 (events line 2908): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299899545230863, 'next_transition': 27076}.
<a id="trace-27067"></a>
- 237.80s–237.80s (×1), actor 1, squad 0 (trace 27067): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 237.80s, trace 27067. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299899545230863, 'next_transition': 27076}.
<a id="trace-27068"></a>
- 237.80s–237.80s (×1), actor 1, squad 0 (trace 27068): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 237.80s, trace 27068. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299899545230863, 'next_transition': 27076}.
<a id="trace-27076"></a>
<a id="trace-27093"></a>
<a id="trace-27168"></a>
- 238.30s–240.30s (×3), actor 1, squad 0 (trace 27076): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 237.80s, trace 27068. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749997867063348, 'next_transition': 27093}.
<a id="trace-27178"></a>
- 240.75s–240.75s (×1), actor 1, squad 0 (trace 27178): Reorganise: completed/failed drill. Knowledge: actor memory at 240.00s, trace 27108. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450023620638469, 'next_transition': 27321}.
<a id="trace-27181"></a>
- 240.75s–240.75s (×1), actor 1, squad 0 (trace 27181): MoveTactically. Knowledge: actor memory at 240.00s, trace 27108. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450023620638469, 'next_transition': 27321}.
<a id="trace-27182"></a>
- 240.75s–240.75s (×1), actor 1, squad 0 (trace 27182): Reorganise complete. Knowledge: actor memory at 240.00s, trace 27108. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450023620638469, 'next_transition': 27321}.
<a id="trace-27321"></a>
<a id="trace-27346"></a>
<a id="trace-27363"></a>
<a id="trace-27386"></a>
- 241.30s–244.30s (×4), actor 1, squad 0 (trace 27321): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.00s, trace 27108. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4922476945973981, 'next_transition': 27346}.
<a id="trace-27460"></a>
- 245.25s–245.25s (×1), actor 1, squad 0 (trace 27460): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: None.
<a id="trace-27514"></a>
<a id="trace-27539"></a>
- 245.30s–246.30s (×2), actor 1, squad 0 (trace 27514): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6033, 'next_transition': 27539}.
<a id="trace-27575"></a>
- 248.25s–248.25s (×1), actor 1, squad 0 (trace 27575): ReactToContact: cover and return fire. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: None.
<a id="trace-27576"></a>
- 248.25s–248.25s (×1), actor 1, squad 0 (trace 27576): bounding overwatch. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: None.
<a id="trace-27577"></a>
- 248.25s–248.25s (×1), actor 1, squad 0 (trace 27577): new contact inside 100 m. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: None.
<a id="trace-27720"></a>
- 248.30s–248.30s (×1), actor 1, squad 0 (trace 27720): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 245.00s, trace 27401. Next observer evidence: {'until': 249, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2958}.
<a id="trace-2958"></a>
- 249.05s–249.05s (×1), actor 1, squad 0 (events line 2958): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27748}.
<a id="trace-27739"></a>
- 249.05s–249.05s (×1), actor 1, squad 0 (trace 27739): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.382003 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 249.05s, trace 27739. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27748}.
<a id="trace-27740"></a>
- 249.05s–249.05s (×1), actor 1, squad 0 (trace 27740): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.382003 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 249.05s, trace 27740. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27748}.
<a id="trace-27748"></a>
- 249.30s–249.30s (×1), actor 1, squad 0 (trace 27748): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 249.05s, trace 27740. Next observer evidence: {'until': 249.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27757}.
<a id="trace-27757"></a>
- 249.75s–249.75s (×1), actor 1, squad 0 (trace 27757): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 249.75s, trace 27757. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27825}.
<a id="trace-27825"></a>
- 250.30s–250.30s (×1), actor 1, squad 0 (trace 27825): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 27762. Next observer evidence: {'until': 250.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27833}.
<a id="trace-27833"></a>
- 250.65s–250.65s (×1), actor 1, squad 0 (trace 27833): new contact inside 100 m. Knowledge: actor memory at 250.00s, trace 27762. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27987}.
<a id="trace-27987"></a>
<a id="trace-28014"></a>
<a id="trace-28063"></a>
<a id="trace-28107"></a>
- 251.30s–254.30s (×4), actor 1, squad 0 (trace 27987): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 27762. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28014}.
<a id="trace-28117"></a>
- 254.40s–254.40s (×1), actor 1, squad 0 (trace 28117): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 250.00s, trace 27762. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1507000000000005, 'next_transition': 28399}.
<a id="trace-28118"></a>
- 254.40s–254.40s (×1), actor 1, squad 0 (trace 28118): rearward bound: one stationary suppressing element. Knowledge: actor memory at 250.00s, trace 27762. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1507000000000005, 'next_transition': 28399}.
<a id="trace-28399"></a>
<a id="trace-28431"></a>
<a id="trace-28452"></a>
<a id="trace-28471"></a>
<a id="trace-28488"></a>
<a id="trace-28563"></a>
<a id="trace-28581"></a>
<a id="trace-28600"></a>
<a id="trace-28617"></a>
<a id="trace-28633"></a>
<a id="trace-28706"></a>
<a id="trace-28726"></a>
<a id="trace-28745"></a>
<a id="trace-28760"></a>
<a id="trace-28778"></a>
- 255.30s–269.30s (×15), actor 1, squad 0 (trace 28399): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 28328. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5126676373959707, 'next_transition': 28431}.
<a id="trace-28804"></a>
- 270.05s–270.05s (×1), actor 1, squad 0 (trace 28804): NeedSupport. Knowledge: actor memory at 270.00s, trace 28788. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339992460314902, 'next_transition': 28855}.
<a id="trace-28855"></a>
- 270.30s–270.30s (×1), actor 1, squad 0 (trace 28855): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 270.00s, trace 28788. Next observer evidence: {'until': 270.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28863}.
<a id="trace-28863"></a>
- 270.45s–270.45s (×1), actor 1, squad 0 (trace 28863): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 28788. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 28938}.
<a id="trace-28864"></a>
- 270.45s–270.45s (×1), actor 1, squad 0 (trace 28864): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 28788. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 28938}.
<a id="trace-28938"></a>
<a id="trace-28965"></a>
<a id="trace-28990"></a>
<a id="trace-29006"></a>
<a id="trace-29082"></a>
<a id="trace-29101"></a>
<a id="trace-29122"></a>
<a id="trace-29140"></a>
<a id="trace-29159"></a>
<a id="trace-29231"></a>
<a id="trace-29253"></a>
<a id="trace-29270"></a>
- 271.30s–282.30s (×12), actor 1, squad 0 (trace 28938): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 270.00s, trace 28788. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28965}.
<a id="trace-29286"></a>
- 283.05s–283.05s (×1), actor 1, squad 0 (trace 29286): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: None.
<a id="trace-29289"></a>
- 283.10s–283.10s (×1), actor 1, squad 0 (trace 29289): MoveTactically. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: None.
<a id="trace-29290"></a>
- 283.10s–283.10s (×1), actor 1, squad 0 (trace 29290): traveling overwatch. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: None.
<a id="trace-29291"></a>
- 283.10s–283.10s (×1), actor 1, squad 0 (trace 29291): received platoon directive. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: None.
<a id="trace-29295"></a>
- 283.15s–283.15s (×1), actor 1, squad 0 (trace 29295): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29299}.
<a id="trace-29299"></a>
<a id="trace-29323"></a>
<a id="trace-29403"></a>
<a id="trace-29435"></a>
<a id="trace-29457"></a>
<a id="trace-29476"></a>
<a id="trace-29496"></a>
<a id="trace-29572"></a>
<a id="trace-29597"></a>
<a id="trace-29622"></a>
<a id="trace-29662"></a>
<a id="trace-29684"></a>
- 283.30s–294.30s (×12), actor 1, squad 0 (trace 29299): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 29171. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29323}.
<a id="trace-3246"></a>
- 294.75s–294.75s (×1), actor 1, squad 0 (events line 3246): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}.
<a id="trace-29695"></a>
- 294.75s–294.75s (×1), actor 1, squad 0 (trace 29695): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.094251 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 294.75s, trace 29695. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}.
<a id="trace-29696"></a>
- 294.75s–294.75s (×1), actor 1, squad 0 (trace 29696): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.094251 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 294.75s, trace 29696. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}.
<a id="trace-29764"></a>
<a id="trace-29787"></a>
- 295.30s–296.30s (×2), actor 1, squad 0 (trace 29764): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 29704. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29787}.
<a id="trace-29802"></a>
- 297.00s–297.00s (×1), actor 1, squad 0 (trace 29802): Withdraw to received rally. Knowledge: actor memory at 295.00s, trace 29704. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29810}.
<a id="trace-29803"></a>
- 297.00s–297.00s (×1), actor 1, squad 0 (trace 29803): rearward bound: one stationary suppressing element. Knowledge: actor memory at 295.00s, trace 29704. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29810}.
<a id="trace-29810"></a>
<a id="trace-29840"></a>
<a id="trace-29866"></a>
<a id="trace-29965"></a>
<a id="trace-30008"></a>
<a id="trace-30029"></a>
<a id="trace-30046"></a>
<a id="trace-30126"></a>
<a id="trace-30169"></a>
<a id="trace-30192"></a>
<a id="trace-30214"></a>
<a id="trace-30231"></a>
<a id="trace-30308"></a>
<a id="trace-30333"></a>
<a id="trace-30356"></a>
<a id="trace-30392"></a>
<a id="trace-30411"></a>
<a id="trace-30492"></a>
<a id="trace-30517"></a>
<a id="trace-30533"></a>
<a id="trace-30560"></a>
<a id="trace-30595"></a>
<a id="trace-30672"></a>
<a id="trace-30701"></a>
<a id="trace-30723"></a>
<a id="trace-30741"></a>
<a id="trace-30765"></a>
<a id="trace-30845"></a>
<a id="trace-30877"></a>
<a id="trace-30899"></a>
<a id="trace-30925"></a>
<a id="trace-30945"></a>
<a id="trace-31022"></a>
<a id="trace-31049"></a>
<a id="trace-31072"></a>
<a id="trace-31104"></a>
<a id="trace-31127"></a>
<a id="trace-31207"></a>
<a id="trace-31231"></a>
<a id="trace-31250"></a>
<a id="trace-31275"></a>
<a id="trace-31310"></a>
<a id="trace-31389"></a>
<a id="trace-31414"></a>
<a id="trace-31437"></a>
<a id="trace-31457"></a>
<a id="trace-31480"></a>
<a id="trace-31562"></a>
<a id="trace-31597"></a>
<a id="trace-31620"></a>
<a id="trace-31643"></a>
<a id="trace-31664"></a>
<a id="trace-31739"></a>
<a id="trace-31768"></a>
<a id="trace-31803"></a>
<a id="trace-31824"></a>
<a id="trace-31847"></a>
<a id="trace-31928"></a>
<a id="trace-31952"></a>
- 297.30s–356.30s (×59), actor 1, squad 0 (trace 29810): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 29704. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29840}.
<a id="trace-3875"></a>
- 356.35s–356.35s (×1), actor 1, squad 0 (events line 3875): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31960"></a>
- 356.35s–356.35s (×1), actor 1, squad 0 (trace 31960): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.35s, trace 31960. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31980}.
<a id="trace-31980"></a>
<a id="trace-32006"></a>
<a id="trace-32035"></a>
- 357.30s–359.30s (×3), actor 1, squad 0 (trace 31980): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 356.35s, trace 31960. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32006}.

## Net delivery

182 matched order/radio deliveries; 492 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.500s; maximum 2.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4773: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4779: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4781: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4783: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4784: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4785: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4786: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4787: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4788: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4789: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4791: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4792: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4956: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4957: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4958: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4959: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6146: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6151: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6152: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6154: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6155: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6156: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6157: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6158: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6159: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6160: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6161: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6162: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6163: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6164: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6165: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 6270: estimate 11.82; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 6271: estimate 11.82; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7256: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7261: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7262: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7264: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7265: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7266: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7267: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7268: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7269: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7270: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7271: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7272: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7273: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7274: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7275: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 7404: estimate 12.86; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 7405: estimate 12.86; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 7698: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7699: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7702: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7703: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7704: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 7706: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7707: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7708: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7709: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7710: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7711: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7712: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7713: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7714: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7715: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7716: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7717: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7853: estimate 12.76; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7854: estimate 12.76; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 13167: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 13168: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 13169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 13170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 13171: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 13172: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 13173: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 13174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 13175: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 13176: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 13177: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 13178: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 13179: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 13180: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 13181: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 13182: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 13183: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 13184: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 13185: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 16828: estimate 12.77; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 16829: estimate 12.77; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 16852: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 16853: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 16854: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 16855: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 16856: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 16857: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 16858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 16859: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 16860: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 16861: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 16862: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 16863: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 16864: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 16865: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 16866: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 16867: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 16868: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 16869: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.05s leader 6, trace 17787: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.05s leader 6, trace 17788: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.05s leader 6, trace 17789: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.05s leader 6, trace 17790: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 17859: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 17860: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 17861: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 17862: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 17863: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 17864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 17865: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 17866: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 17867: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 17868: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 17869: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 17870: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 17871: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 17872: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 17873: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 17874: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 17875: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 18579: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 18580: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 18581: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 18582: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 18583: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 18584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 18585: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 18586: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 18587: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 18588: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 18589: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 18590: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 18591: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 18592: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 18593: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 18594: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 18801: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 18802: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 18803: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 18804: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 18805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 18806: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 18807: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 18808: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 18809: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 18810: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 18811: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 18812: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 18813: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 18814: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 18815: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 19030: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 19031: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 19032: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 19033: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 19034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 19035: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 19036: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 19037: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 19038: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 19039: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 19040: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 19041: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 19042: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 19043: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 19044: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.10s leader 1, trace 19379: estimate 12.47; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 19522: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 19523: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 19524: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 19525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 19526: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 19527: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 19528: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 19529: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 19530: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 19531: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 19532: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 19533: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 19534: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 19535: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 19703: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 19704: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 19705: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 19706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 19707: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 19708: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 19709: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 19710: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 19711: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 19712: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 19713: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 19714: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 19715: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 19716: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 19844: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 19845: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 19846: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 19847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 19848: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 19849: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 19850: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 19851: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 19852: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 19853: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 19854: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 19855: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 19856: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 19857: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 19992: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 19993: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 19994: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 19995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 19996: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 19997: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 19998: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 19999: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 20000: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 20001: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 20002: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 20003: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 20004: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 20005: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 20155: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 20156: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 20157: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 20158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 20159: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 20160: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 20161: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 20162: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 20163: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 20164: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 20165: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 20166: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 20167: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 20168: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 20615: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 20616: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 20617: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 20618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 20619: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 20620: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 20621: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 20622: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 20623: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 20624: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 20625: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 20626: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 20627: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 20628: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.70s leader 1, trace 20801: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.70s leader 1, trace 20802: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20810: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 20811: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 20812: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 20813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20814: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20815: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20816: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20817: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20818: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20819: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20820: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20821: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20822: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20823: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 21256: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 21257: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 21258: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 21259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 21260: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 21261: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 21262: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 21263: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 21264: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 21265: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 21266: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 21267: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 21268: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 21269: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 21471: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 21472: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 21473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 21474: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 21475: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 21476: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 21477: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 21478: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 21479: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 21480: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 21481: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 21482: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 21483: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 21741: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 21742: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 21743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 21744: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 21745: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 21746: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 21747: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 21748: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 21749: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 21750: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 21751: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 21752: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 21753: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 21911: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 21912: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 21913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 21914: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 21915: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 21916: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 21917: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 21918: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 21919: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 21920: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 21921: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 21922: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 21923: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 22085: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 22086: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 22087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 22088: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 22089: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 22090: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 22091: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 22092: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 22093: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 22094: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 22095: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 22096: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 22097: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 22391: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 22392: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 22393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 22394: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 22395: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 22396: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 22397: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 22398: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 22399: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 22400: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 22401: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 22402: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 22403: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 22629: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 22630: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 22631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 22632: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 22633: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 22634: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 22635: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 22636: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 22637: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 22638: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 22639: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 22640: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 22641: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 22824: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 22825: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 22826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 22827: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 22828: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 22829: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 22830: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 22831: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 22832: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 22833: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 22834: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 22835: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 22836: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 23006: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 23007: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 23008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 23009: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 23010: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 23011: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 23012: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 23013: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 23014: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 23015: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 23016: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 23017: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 23018: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 23193: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 23194: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 23195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 23196: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 23197: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 23198: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 23199: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 23200: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 23201: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 23202: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 23203: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 23204: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 23205: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 23372: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 23373: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 23374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 23375: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 23376: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 23377: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 23378: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 23379: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 23380: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 23381: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 23382: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 23383: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 23384: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 23548: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 23549: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 23550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 23551: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 23552: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 23553: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 23554: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 23555: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 23556: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 23557: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 23558: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 23559: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 23560: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.75s leader 1, trace 23654: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 23730: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 23731: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 23732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 23733: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 23734: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 23735: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 23736: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 23737: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 23738: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 23739: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 23740: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 23741: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 23742: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23917: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 23918: estimate 1.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 23920: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23921: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23922: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23923: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23924: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23925: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23926: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23927: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23928: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23929: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 24096: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 24097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 24098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 24099: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 24100: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 24101: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 24102: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 24103: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 24104: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 24105: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 24106: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 24107: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 24108: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 24275: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 24276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 24277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 24278: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 24279: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 24280: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 24281: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 24282: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 24283: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 24284: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 24285: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 24286: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 24287: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 24464: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 24465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 24466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 24467: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24468: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24469: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24470: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 24471: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24472: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24473: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 24474: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24475: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24476: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 24642: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 24643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 24644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 24645: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24646: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24647: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 24648: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 24649: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 24650: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24651: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 24652: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24653: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24654: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 24820: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 24821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 24822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 24823: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24824: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24825: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24826: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 24827: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24828: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24829: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24830: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24831: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24832: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.40s leader 1, trace 24963: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.40s leader 1, trace 24964: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 25006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 25008: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25009: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25011: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25012: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25013: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25014: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25015: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25016: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25017: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 201.25s leader 1, trace 25093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 201.25s leader 1, trace 25094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 25530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 25531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 25532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 25533: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 25534: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 25535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 25536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 25537: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 25538: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 25539: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 25540: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 25541: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 25542: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 25752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 25755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 25756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 25760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 25761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 25762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 25763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 25764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 25966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 25967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 25968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 25969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 25970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 25971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 25972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 25973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 25974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 25975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 25976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 25977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 25978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 26274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 26275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 26276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 26277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 26278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 26279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 26280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 26281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 26282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 26283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 26284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 26285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 26286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 26468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 26469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 26470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 26471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 26472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 26473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 26474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 26475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 26476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 26477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 26478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 26479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 26480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 26655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 26656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 26657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 26658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 26659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 26660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 26661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 26662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 26663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 26664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 26665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 26666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 26667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 26955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 26956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 26957: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 26958: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 26959: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 26960: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 26961: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 26962: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 26963: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 26964: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 26965: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 26966: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.80s leader 1, trace 27067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.80s leader 1, trace 27068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 27108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 27109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 27110: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 27111: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 27112: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 27113: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 27114: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 27115: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 27116: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 27117: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 27118: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 27119: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 27401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 27402: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 27403: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 27404: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 27405: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 27406: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 27407: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 27408: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 27409: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 27410: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 27411: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 27412: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.05s leader 1, trace 27739: estimate 1.45; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.05s leader 1, trace 27740: estimate 1.45; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.75s leader 1, trace 27757: estimate 12.16; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 27762: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 27763: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 27764: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 27765: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 27766: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 27767: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 27768: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 27769: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 27770: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 27771: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 27772: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 27773: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 28328: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 28329: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 28330: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 28331: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 28332: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 28333: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 28334: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 28335: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 28336: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 28337: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 28338: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 28339: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 28502: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 28503: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 28504: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 28505: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 28506: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 28507: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 28508: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 28509: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 28510: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 28511: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 28512: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 28513: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 28645: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 28646: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 28647: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 28648: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 28649: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 28650: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 28651: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 28652: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 28653: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 28654: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 28655: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 28656: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 28788: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 28789: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 28790: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 28791: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 28792: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 28793: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 28794: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 28795: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 28796: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 28797: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 28798: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 28799: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 29022: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 29023: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29024: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 29025: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29026: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29027: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29028: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29029: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 29030: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 29031: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 29032: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 29171: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 29172: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 29173: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 29174: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 29175: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 29176: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 29177: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 29178: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 29179: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 29180: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 29181: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 29342: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 29343: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 29344: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 29345: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 29346: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 29347: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 29348: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 29349: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 29350: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 29351: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 29352: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 29512: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 29513: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 29514: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 29515: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 29516: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 29517: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 29518: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 29519: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 29520: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 29521: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 29522: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 294.75s leader 1, trace 29695: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 294.75s leader 1, trace 29696: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 29704: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 29705: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 29706: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 29707: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 29708: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 29709: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 29710: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 29711: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 29712: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 29713: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 29714: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 29900: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 29901: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 29902: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 29903: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 29904: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 29905: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 29906: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 29907: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 29908: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 29909: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 29910: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 30066: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 30067: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 30068: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 30069: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 30070: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 30071: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 30072: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 30073: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 30074: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 30075: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 30076: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 30247: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 30248: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 30249: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 30250: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 30251: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 30252: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 30253: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 30254: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 30255: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 30256: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 30257: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 30431: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 30432: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 30433: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 30434: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 30435: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 30436: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 30437: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 30438: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 30439: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 30440: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 30441: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 30612: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 30613: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 30614: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 30615: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 30616: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 30617: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 30618: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 30619: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 30620: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 30621: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 30622: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 30780: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 30781: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 30782: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 30783: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 30784: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 30785: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 30786: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 30787: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 30788: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 30789: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 30790: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 30961: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 30962: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 30963: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 30964: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 30965: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 30966: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 30967: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 30968: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 30969: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 30970: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 30971: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 31146: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 31147: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 31148: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 31149: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 31150: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 31151: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 31152: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 31153: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 31154: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 31155: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 31156: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 31325: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 31326: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 31327: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 31328: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 31329: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 31330: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 31331: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 31332: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 31333: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 31334: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 31335: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 31496: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 31497: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 31498: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 31499: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 31500: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 31501: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 31502: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 31503: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 31504: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 31505: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 31506: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 31679: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 31680: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 31681: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 31682: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 31683: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 31684: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 31685: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 31686: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 31687: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 31688: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 31689: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 31866: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 31867: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31868: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 31869: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31870: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 31871: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 31872: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31873: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 31874: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31875: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31876: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.35s leader 1, trace 31960: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 32049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 32050: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32051: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 32052: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32053: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 32054: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32055: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32056: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 32058: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 32059: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Tern incapacitated
- 1: Iven incapacitated
- 1: Cole killed in action
- 1: Vale killed in action
- 1: Moss incapacitated
- 1: Ash killed in action
- 1: Soren killed in action
- 1: Reed killed in action

## Outcome attribution

- 99.70s, evidence 1542: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 99.70s, evidence 20801: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358149 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149924343932727, 'next_transition': 20873}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 99.70s, evidence 20802: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358149 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149924343932727, 'next_transition': 20873}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 161.75s, evidence 2096: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23667}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 294.75s, evidence 3246: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 294.75s, evidence 29695: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.094251 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 294.75s, evidence 29696: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.094251 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29764}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 356.35s, evidence 3875: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
