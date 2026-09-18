# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/108/good-ember/battle-108-1789674320781159895`

## Battle summary

**Ember** · 203.5 s · 819 shots.

### Turning points

- 27.9s, squad 4: contact (events line 310). First recorded contact.
- 50.6s, squad 0: help call ([trace 6876](#trace-6876)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 48 shots, 8/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 771 shots, 2/8 lost.

### Decisions and attribution

At 181.0s, squad 0 chose FightHere: nearest known group ([trace 17084](#trace-17084)), followed by 1 shots and 1 own casualties; estimate 10.0 against 0 distinct squad-reported contacts; At 80.3s, squad 0 chose advanced tactically ([trace 11246](#trace-11246)), followed by 2 shots and 0 own casualties; estimate 8.2 against 0 distinct squad-reported contacts; At 54.5s, squad 0 chose prepared a base of fire ([trace 7054](#trace-7054)), followed by 1 shots and 0 own casualties; estimate 9.8 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1353](#trace-1353)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845005203211148, 'next_transition': 1382}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292149 retreat threshold=0.220000 initiative=requires intent ([trace 4183](#trace-4183)). Following evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11640491402068569, 'next_transition': 4192}.

### Communication

150 matched deliveries (mean 0.41s, max 6.60s); 102 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.85s, squad 4, contact, evidence events line 310: First recorded contact; .
- 50.60s, squad 0, help call, evidence 6876: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.875615667036465, 'next_transition': 788}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.875615667036465, 'next_transition': 788}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.875615667036465, 'next_transition': 788}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-494"></a>
<a id="trace-515"></a>
<a id="trace-529"></a>
<a id="trace-548"></a>
<a id="trace-569"></a>
<a id="trace-648"></a>
<a id="trace-665"></a>
<a id="trace-689"></a>
<a id="trace-711"></a>
<a id="trace-728"></a>
<a id="trace-745"></a>
<a id="trace-767"></a>
<a id="trace-790"></a>
<a id="trace-803"></a>
<a id="trace-813"></a>
<a id="trace-897"></a>
<a id="trace-908"></a>
<a id="trace-1229"></a>
<a id="trace-1251"></a>
<a id="trace-1280"></a>
<a id="trace-1303"></a>
<a id="trace-1326"></a>
<a id="trace-1352"></a>
<a id="trace-1384"></a>
<a id="trace-1408"></a>
<a id="trace-1487"></a>
<a id="trace-1507"></a>
<a id="trace-1530"></a>
<a id="trace-1556"></a>
<a id="trace-1573"></a>
<a id="trace-1592"></a>
<a id="trace-1616"></a>
<a id="trace-1634"></a>
<a id="trace-1853"></a>
<a id="trace-1874"></a>
<a id="trace-1965"></a>
<a id="trace-2003"></a>
<a id="trace-2017"></a>
<a id="trace-2051"></a>
<a id="trace-2080"></a>
<a id="trace-2094"></a>
<a id="trace-2116"></a>
<a id="trace-2132"></a>
<a id="trace-2149"></a>
<a id="trace-2168"></a>
<a id="trace-2251"></a>
<a id="trace-2261"></a>
<a id="trace-2280"></a>
<a id="trace-2301"></a>
<a id="trace-2320"></a>
<a id="trace-2332"></a>
<a id="trace-2786"></a>
<a id="trace-3093"></a>
<a id="trace-3127"></a>
<a id="trace-3163"></a>
<a id="trace-3268"></a>
<a id="trace-3307"></a>
<a id="trace-3352"></a>
<a id="trace-3379"></a>
<a id="trace-3395"></a>
<a id="trace-3411"></a>
<a id="trace-3433"></a>
<a id="trace-3442"></a>
<a id="trace-3459"></a>
<a id="trace-3475"></a>
<a id="trace-3554"></a>
<a id="trace-3914"></a>
<a id="trace-3930"></a>
<a id="trace-3951"></a>
<a id="trace-3980"></a>
<a id="trace-3987"></a>
<a id="trace-4012"></a>
<a id="trace-4032"></a>
<a id="trace-4067"></a>
<a id="trace-4079"></a>
<a id="trace-4158"></a>
<a id="trace-4173"></a>
<a id="trace-4182"></a>
<a id="trace-4194"></a>
<a id="trace-4214"></a>
<a id="trace-6244"></a>
<a id="trace-6254"></a>
<a id="trace-6272"></a>
<a id="trace-6296"></a>
<a id="trace-6311"></a>
<a id="trace-6391"></a>
<a id="trace-6410"></a>
<a id="trace-6439"></a>
<a id="trace-6451"></a>
<a id="trace-6466"></a>
<a id="trace-6473"></a>
<a id="trace-6716"></a>
<a id="trace-6733"></a>
<a id="trace-6761"></a>
<a id="trace-6777"></a>
<a id="trace-6855"></a>
<a id="trace-6890"></a>
<a id="trace-6923"></a>
<a id="trace-6936"></a>
<a id="trace-6957"></a>
<a id="trace-6978"></a>
<a id="trace-6995"></a>
<a id="trace-7009"></a>
<a id="trace-7042"></a>
<a id="trace-9728"></a>
<a id="trace-9806"></a>
<a id="trace-9843"></a>
<a id="trace-9864"></a>
<a id="trace-9882"></a>
<a id="trace-9904"></a>
<a id="trace-9917"></a>
<a id="trace-9942"></a>
<a id="trace-9953"></a>
<a id="trace-9968"></a>
<a id="trace-9983"></a>
<a id="trace-10061"></a>
<a id="trace-10079"></a>
<a id="trace-10093"></a>
<a id="trace-10102"></a>
<a id="trace-10120"></a>
<a id="trace-10132"></a>
<a id="trace-10151"></a>
<a id="trace-10159"></a>
<a id="trace-10179"></a>
<a id="trace-10189"></a>
<a id="trace-10270"></a>
<a id="trace-10297"></a>
<a id="trace-10306"></a>
<a id="trace-10325"></a>
<a id="trace-10340"></a>
<a id="trace-10356"></a>
<a id="trace-10367"></a>
<a id="trace-10387"></a>
<a id="trace-10397"></a>
<a id="trace-10475"></a>
<a id="trace-10495"></a>
<a id="trace-10847"></a>
<a id="trace-10862"></a>
<a id="trace-10879"></a>
<a id="trace-10895"></a>
<a id="trace-10917"></a>
<a id="trace-10924"></a>
<a id="trace-10942"></a>
<a id="trace-10954"></a>
<a id="trace-11032"></a>
<a id="trace-11046"></a>
<a id="trace-11064"></a>
<a id="trace-11072"></a>
<a id="trace-11091"></a>
<a id="trace-11100"></a>
<a id="trace-11115"></a>
<a id="trace-11135"></a>
<a id="trace-11144"></a>
<a id="trace-11155"></a>
<a id="trace-11239"></a>
<a id="trace-11694"></a>
<a id="trace-11712"></a>
<a id="trace-11722"></a>
<a id="trace-11736"></a>
<a id="trace-11748"></a>
<a id="trace-11762"></a>
<a id="trace-11772"></a>
<a id="trace-11785"></a>
<a id="trace-11798"></a>
<a id="trace-11877"></a>
<a id="trace-11892"></a>
<a id="trace-11898"></a>
<a id="trace-11906"></a>
<a id="trace-11917"></a>
<a id="trace-11925"></a>
<a id="trace-11938"></a>
<a id="trace-11942"></a>
<a id="trace-11951"></a>
<a id="trace-11956"></a>
<a id="trace-12027"></a>
<a id="trace-12033"></a>
<a id="trace-12041"></a>
<a id="trace-12048"></a>
<a id="trace-12062"></a>
<a id="trace-12069"></a>
<a id="trace-12084"></a>
<a id="trace-12090"></a>
<a id="trace-12098"></a>
<a id="trace-12107"></a>
<a id="trace-12175"></a>
<a id="trace-12187"></a>
<a id="trace-12199"></a>
<a id="trace-12210"></a>
<a id="trace-12229"></a>
<a id="trace-12239"></a>
<a id="trace-12247"></a>
<a id="trace-12260"></a>
<a id="trace-12282"></a>
<a id="trace-12298"></a>
<a id="trace-12387"></a>
<a id="trace-12414"></a>
<a id="trace-12435"></a>
<a id="trace-12468"></a>
<a id="trace-12509"></a>
<a id="trace-12541"></a>
<a id="trace-12580"></a>
<a id="trace-12617"></a>
<a id="trace-12655"></a>
<a id="trace-12688"></a>
<a id="trace-12774"></a>
<a id="trace-12790"></a>
<a id="trace-12812"></a>
<a id="trace-12833"></a>
<a id="trace-12861"></a>
<a id="trace-12868"></a>
<a id="trace-12877"></a>
<a id="trace-12882"></a>
<a id="trace-12892"></a>
<a id="trace-12896"></a>
<a id="trace-12971"></a>
<a id="trace-12992"></a>
<a id="trace-13025"></a>
<a id="trace-13054"></a>
<a id="trace-13097"></a>
<a id="trace-13135"></a>
<a id="trace-13182"></a>
<a id="trace-13202"></a>
<a id="trace-13223"></a>
<a id="trace-13247"></a>
<a id="trace-13323"></a>
<a id="trace-13339"></a>
<a id="trace-13374"></a>
<a id="trace-13398"></a>
<a id="trace-13419"></a>
<a id="trace-13437"></a>
<a id="trace-13460"></a>
<a id="trace-13469"></a>
<a id="trace-13476"></a>
<a id="trace-13485"></a>
<a id="trace-13553"></a>
<a id="trace-13670"></a>
<a id="trace-13678"></a>
<a id="trace-13684"></a>
<a id="trace-13692"></a>
<a id="trace-13709"></a>
<a id="trace-13741"></a>
<a id="trace-13770"></a>
<a id="trace-13802"></a>
<a id="trace-13833"></a>
<a id="trace-13922"></a>
<a id="trace-13945"></a>
<a id="trace-13966"></a>
<a id="trace-13983"></a>
<a id="trace-13991"></a>
<a id="trace-13997"></a>
<a id="trace-14011"></a>
<a id="trace-14022"></a>
<a id="trace-14033"></a>
<a id="trace-14040"></a>
<a id="trace-14110"></a>
<a id="trace-14122"></a>
<a id="trace-14129"></a>
<a id="trace-14137"></a>
<a id="trace-14144"></a>
<a id="trace-14152"></a>
<a id="trace-14160"></a>
<a id="trace-14164"></a>
<a id="trace-14172"></a>
<a id="trace-14179"></a>
<a id="trace-14245"></a>
<a id="trace-14254"></a>
<a id="trace-14264"></a>
<a id="trace-14272"></a>
<a id="trace-14282"></a>
<a id="trace-14291"></a>
<a id="trace-14295"></a>
<a id="trace-14298"></a>
<a id="trace-14303"></a>
<a id="trace-14307"></a>
<a id="trace-14373"></a>
<a id="trace-14406"></a>
<a id="trace-14433"></a>
<a id="trace-14457"></a>
<a id="trace-14481"></a>
<a id="trace-14517"></a>
<a id="trace-14556"></a>
<a id="trace-14573"></a>
<a id="trace-14592"></a>
<a id="trace-14599"></a>
<a id="trace-14660"></a>
<a id="trace-14665"></a>
<a id="trace-14670"></a>
<a id="trace-14673"></a>
<a id="trace-14677"></a>
<a id="trace-14682"></a>
<a id="trace-14691"></a>
<a id="trace-14927"></a>
<a id="trace-14937"></a>
<a id="trace-14940"></a>
<a id="trace-15007"></a>
<a id="trace-15012"></a>
<a id="trace-15018"></a>
<a id="trace-15020"></a>
<a id="trace-15030"></a>
<a id="trace-15038"></a>
<a id="trace-15046"></a>
<a id="trace-15269"></a>
<a id="trace-15281"></a>
<a id="trace-15284"></a>
<a id="trace-15349"></a>
<a id="trace-15357"></a>
<a id="trace-15369"></a>
<a id="trace-15939"></a>
<a id="trace-15962"></a>
<a id="trace-15967"></a>
<a id="trace-16176"></a>
<a id="trace-16188"></a>
<a id="trace-16202"></a>
<a id="trace-16207"></a>
<a id="trace-16271"></a>
<a id="trace-16285"></a>
<a id="trace-16292"></a>
<a id="trace-16298"></a>
<a id="trace-16306"></a>
<a id="trace-16312"></a>
<a id="trace-16320"></a>
<a id="trace-16531"></a>
<a id="trace-16539"></a>
<a id="trace-16545"></a>
<a id="trace-16612"></a>
<a id="trace-16618"></a>
<a id="trace-16623"></a>
<a id="trace-16631"></a>
<a id="trace-16642"></a>
<a id="trace-16646"></a>
<a id="trace-16657"></a>
<a id="trace-16660"></a>
<a id="trace-16668"></a>
<a id="trace-16677"></a>
<a id="trace-16743"></a>
<a id="trace-16752"></a>
<a id="trace-16762"></a>
<a id="trace-16766"></a>
<a id="trace-16777"></a>
<a id="trace-16888"></a>
<a id="trace-16898"></a>
<a id="trace-16905"></a>
<a id="trace-16910"></a>
<a id="trace-16915"></a>
<a id="trace-16976"></a>
<a id="trace-16982"></a>
<a id="trace-16987"></a>
<a id="trace-16989"></a>
<a id="trace-16995"></a>
<a id="trace-16998"></a>
<a id="trace-17002"></a>
<a id="trace-17006"></a>
<a id="trace-17012"></a>
<a id="trace-17017"></a>
<a id="trace-17077"></a>
<a id="trace-17082"></a>
<a id="trace-17088"></a>
<a id="trace-17092"></a>
<a id="trace-17097"></a>
<a id="trace-17100"></a>
<a id="trace-17105"></a>
<a id="trace-17109"></a>
<a id="trace-17115"></a>
<a id="trace-17119"></a>
<a id="trace-17179"></a>
<a id="trace-17184"></a>
<a id="trace-17187"></a>
<a id="trace-17189"></a>
<a id="trace-17194"></a>
<a id="trace-17197"></a>
<a id="trace-17202"></a>
<a id="trace-17206"></a>
<a id="trace-17212"></a>
<a id="trace-17216"></a>
<a id="trace-17276"></a>
<a id="trace-17281"></a>
<a id="trace-17286"></a>
<a id="trace-17288"></a>
<a id="trace-17296"></a>
<a id="trace-17299"></a>
<a id="trace-17305"></a>
<a id="trace-17308"></a>
- 1.60s–193.80s (×384), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250111180236026, 'next_transition': 472}.
<a id="trace-788"></a>
<a id="trace-801"></a>
<a id="trace-811"></a>
<a id="trace-895"></a>
<a id="trace-906"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 788): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 583. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7575090045727019, 'next_transition': 801}.
<a id="trace-916"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 916): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 818. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787591084459744, 'next_transition': 1227}.
<a id="trace-1227"></a>
<a id="trace-1324"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 1227): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 823. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4753568248440776, 'next_transition': 1324}.
<a id="trace-169"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 169): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845005203211148, 'next_transition': 1382}.
<a id="trace-1353"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1353): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1353. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845005203211148, 'next_transition': 1382}.
<a id="trace-1354"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1354): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1354. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845005203211148, 'next_transition': 1382}.
<a id="trace-1382"></a>
<a id="trace-1406"></a>
<a id="trace-1485"></a>
<a id="trace-1505"></a>
<a id="trace-1528"></a>
<a id="trace-1554"></a>
<a id="trace-1571"></a>
<a id="trace-1590"></a>
<a id="trace-1632"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 1382): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1354. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0331416582716046, 'next_transition': 1406}.
<a id="trace-1640"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1640): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1412. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30122998599361783, 'next_transition': 1851}.
<a id="trace-1641"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1641): received platoon directive. Knowledge: actor memory at 15.00s, trace 1412. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30122998599361783, 'next_transition': 1851}.
<a id="trace-1851"></a>
<a id="trace-1872"></a>
<a id="trace-1963"></a>
<a id="trace-2001"></a>
<a id="trace-2049"></a>
<a id="trace-2114"></a>
<a id="trace-2147"></a>
<a id="trace-2166"></a>
<a id="trace-2249"></a>
<a id="trace-2259"></a>
<a id="trace-2318"></a>
- 19.25s–27.25s (×11), actor 5, squad 0 (trace 1851): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1417. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4425123601751403, 'next_transition': 1872}.
<a id="trace-2333"></a>
- 27.80s–27.80s (×1), actor 0, squad 0 (trace 2333): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2174. Next observer evidence: {'until': 28, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2489}.
<a id="trace-2489"></a>
- 28.05s–28.05s (×1), actor 0, squad 0 (trace 2489): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2174. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2784}.
<a id="trace-2490"></a>
- 28.05s–28.05s (×1), actor 0, squad 0 (trace 2490): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2174. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2784}.
<a id="trace-2491"></a>
- 28.05s–28.05s (×1), actor 0, squad 0 (trace 2491): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2174. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2784}.
<a id="trace-2784"></a>
- 28.25s–28.25s (×1), actor 5, squad 0 (trace 2784): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2179. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2794}.
<a id="trace-2794"></a>
- 28.50s–28.50s (×1), actor 0, squad 0 (trace 2794): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2174. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1402882723360532, 'next_transition': 3161}.
<a id="trace-3161"></a>
<a id="trace-3266"></a>
<a id="trace-3305"></a>
<a id="trace-3377"></a>
<a id="trace-3393"></a>
- 29.75s–32.25s (×5), actor 5, squad 0 (trace 3161): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2179. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3447486117221952, 'next_transition': 3266}.
<a id="trace-3398"></a>
- 32.40s–32.40s (×1), actor 0, squad 0 (trace 3398): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 3179. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6558672360234692, 'next_transition': 3431}.
<a id="trace-3431"></a>
<a id="trace-3440"></a>
<a id="trace-3457"></a>
<a id="trace-3473"></a>
<a id="trace-3552"></a>
- 33.25s–35.25s (×5), actor 5, squad 0 (trace 3431): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3184. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18145935357670073, 'next_transition': 3440}.
<a id="trace-3561"></a>
- 35.50s–35.50s (×1), actor 0, squad 0 (trace 3561): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3480. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11882636250588277, 'next_transition': 3912}.
<a id="trace-3912"></a>
<a id="trace-3949"></a>
<a id="trace-3978"></a>
<a id="trace-4010"></a>
<a id="trace-4030"></a>
- 35.75s–38.75s (×5), actor 5, squad 0 (trace 3912): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3485. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5909818184651356, 'next_transition': 3949}.
<a id="trace-4053"></a>
- 39.00s–39.00s (×1), actor 0, squad 0 (trace 4053): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3480. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14040907513850376, 'next_transition': 4077}.
<a id="trace-4077"></a>
<a id="trace-4156"></a>
<a id="trace-4171"></a>
<a id="trace-4180"></a>
- 39.75s–41.25s (×4), actor 5, squad 0 (trace 4077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3485. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1622923879699933, 'next_transition': 4156}.
<a id="trace-498"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 498): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4183"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 4183): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292149 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 4183. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11640491402068569, 'next_transition': 4192}.
<a id="trace-4184"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 4184): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292149 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 4184. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11640491402068569, 'next_transition': 4192}.
<a id="trace-4192"></a>
<a id="trace-4212"></a>
- 41.75s–42.25s (×2), actor 5, squad 0 (trace 4192): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 4184. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11275396317755264, 'next_transition': 4212}.
<a id="trace-4222"></a>
- 42.60s–42.60s (×1), actor 0, squad 0 (trace 4222): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4081. Next observer evidence: None.
<a id="trace-5925"></a>
- 42.60s–42.60s (×1), actor 0, squad 0 (trace 5925): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4081. Next observer evidence: None.
<a id="trace-5926"></a>
- 42.60s–42.60s (×1), actor 0, squad 0 (trace 5926): MoveTactically. Knowledge: actor memory at 40.00s, trace 4081. Next observer evidence: None.
<a id="trace-5927"></a>
- 42.60s–42.60s (×1), actor 0, squad 0 (trace 5927): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4081. Next observer evidence: None.
<a id="trace-6242"></a>
<a id="trace-6252"></a>
<a id="trace-6270"></a>
<a id="trace-6408"></a>
<a id="trace-6437"></a>
<a id="trace-6449"></a>
<a id="trace-6464"></a>
<a id="trace-6471"></a>
- 42.75s–47.75s (×8), actor 5, squad 0 (trace 6242): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 4184. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18555916984144114, 'next_transition': 6252}.
<a id="trace-6476"></a>
- 47.80s–47.80s (×1), actor 0, squad 0 (trace 6476): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 6317. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5108195511248108, 'next_transition': 6731}.
<a id="trace-6477"></a>
- 47.80s–47.80s (×1), actor 0, squad 0 (trace 6477): received platoon directive. Knowledge: actor memory at 45.00s, trace 6317. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5108195511248108, 'next_transition': 6731}.
<a id="trace-6731"></a>
<a id="trace-6759"></a>
<a id="trace-6775"></a>
<a id="trace-6853"></a>
- 48.75s–50.25s (×4), actor 5, squad 0 (trace 6731): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6321. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7434345126243959, 'next_transition': 6759}.
<a id="trace-6876"></a>
- 50.60s–50.60s (×1), actor 0, squad 0 (trace 6876): NeedSupport. Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: None.
<a id="trace-6888"></a>
<a id="trace-6921"></a>
- 50.75s–51.25s (×2), actor 5, squad 0 (trace 6888): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6785. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5282355481287377, 'next_transition': 6921}.
<a id="trace-6924"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 6924): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6322142005099494, 'next_transition': 6955}.
<a id="trace-6955"></a>
<a id="trace-6976"></a>
<a id="trace-6993"></a>
<a id="trace-7007"></a>
<a id="trace-7040"></a>
- 52.25s–54.25s (×5), actor 5, squad 0 (trace 6955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6785. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6353136697775733, 'next_transition': 6976}.
<a id="trace-7054"></a>
- 54.50s–54.50s (×1), actor 0, squad 0 (trace 7054): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9726}.
<a id="trace-9422"></a>
- 54.50s–54.50s (×1), actor 0, squad 0 (trace 9422): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9726}.
<a id="trace-9423"></a>
- 54.50s–54.50s (×1), actor 0, squad 0 (trace 9423): MoveTactically. Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9726}.
<a id="trace-9424"></a>
- 54.50s–54.50s (×1), actor 0, squad 0 (trace 9424): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 6781. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9726}.
<a id="trace-9726"></a>
<a id="trace-9841"></a>
<a id="trace-9862"></a>
<a id="trace-9880"></a>
<a id="trace-9902"></a>
<a id="trace-9915"></a>
<a id="trace-9940"></a>
<a id="trace-9951"></a>
<a id="trace-9966"></a>
<a id="trace-9981"></a>
<a id="trace-10059"></a>
<a id="trace-10077"></a>
<a id="trace-10091"></a>
<a id="trace-10100"></a>
<a id="trace-10118"></a>
<a id="trace-10130"></a>
<a id="trace-10149"></a>
<a id="trace-10157"></a>
<a id="trace-10177"></a>
<a id="trace-10187"></a>
<a id="trace-10268"></a>
<a id="trace-10282"></a>
<a id="trace-10323"></a>
<a id="trace-10338"></a>
<a id="trace-10385"></a>
<a id="trace-10395"></a>
<a id="trace-10473"></a>
<a id="trace-10493"></a>
- 54.75s–70.75s (×28), actor 5, squad 0 (trace 9726): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6785. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9841}.
<a id="trace-10501"></a>
- 71.15s–71.15s (×1), actor 0, squad 0 (trace 10501): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 10401. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07965378496820141, 'next_transition': 10845}.
<a id="trace-10845"></a>
<a id="trace-10877"></a>
<a id="trace-10915"></a>
<a id="trace-10922"></a>
<a id="trace-10940"></a>
<a id="trace-10952"></a>
<a id="trace-11030"></a>
<a id="trace-11044"></a>
<a id="trace-11062"></a>
<a id="trace-11070"></a>
<a id="trace-11089"></a>
<a id="trace-11098"></a>
<a id="trace-11133"></a>
- 71.25s–78.75s (×13), actor 5, squad 0 (trace 10845): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 10405. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3240007432247712, 'next_transition': 10877}.
<a id="trace-11164"></a>
- 79.95s–79.95s (×1), actor 1, squad 0 (trace 11164): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 75.00s, trace 10958. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.499999999990773e-05, 'next_transition': 11237}.
<a id="trace-11237"></a>
- 80.25s–80.25s (×1), actor 5, squad 0 (trace 11237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11170. Next observer evidence: None.
<a id="trace-11241"></a>
- 80.35s–80.35s (×1), actor 1, squad 0 (trace 11241): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 11167. Next observer evidence: {'until': 81.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5249901486697605, 'next_transition': 11710}.
<a id="trace-11246"></a>
- 80.35s–80.35s (×1), actor 1, squad 0 (trace 11246): MoveTactically. Knowledge: actor memory at 80.00s, trace 11167. Next observer evidence: {'until': 81.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5249901486697605, 'next_transition': 11710}.
<a id="trace-11247"></a>
- 80.35s–80.35s (×1), actor 1, squad 0 (trace 11247): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 11167. Next observer evidence: {'until': 81.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5249901486697605, 'next_transition': 11710}.
<a id="trace-11710"></a>
<a id="trace-11734"></a>
<a id="trace-11746"></a>
<a id="trace-11760"></a>
<a id="trace-11770"></a>
- 81.25s–83.75s (×5), actor 5, squad 0 (trace 11710): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11170. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3687532926158, 'next_transition': 11734}.
<a id="trace-11880"></a>
- 85.35s–85.35s (×1), actor 1, squad 0 (trace 11880): Fixing. Knowledge: actor memory at 85.00s, trace 11806. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3661783088006594, 'next_transition': 11904}.
<a id="trace-11904"></a>
<a id="trace-11923"></a>
<a id="trace-11936"></a>
<a id="trace-11949"></a>
<a id="trace-11954"></a>
<a id="trace-12025"></a>
<a id="trace-12031"></a>
<a id="trace-12039"></a>
<a id="trace-12046"></a>
<a id="trace-12060"></a>
<a id="trace-12067"></a>
<a id="trace-12082"></a>
<a id="trace-12088"></a>
<a id="trace-12105"></a>
<a id="trace-12185"></a>
<a id="trace-12197"></a>
<a id="trace-12208"></a>
<a id="trace-12227"></a>
<a id="trace-12237"></a>
<a id="trace-12245"></a>
<a id="trace-12258"></a>
<a id="trace-12280"></a>
<a id="trace-12433"></a>
<a id="trace-12466"></a>
<a id="trace-12507"></a>
<a id="trace-12539"></a>
<a id="trace-12615"></a>
<a id="trace-12653"></a>
<a id="trace-12810"></a>
<a id="trace-12859"></a>
<a id="trace-12866"></a>
<a id="trace-12875"></a>
<a id="trace-12890"></a>
<a id="trace-12894"></a>
- 86.75s–109.75s (×34), actor 5, squad 0 (trace 11904): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11809. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1597210989332483, 'next_transition': 11923}.
<a id="trace-1120"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (events line 1120): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13307160593455394, 'next_transition': 12990}.
<a id="trace-12974"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (trace 12974): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.45s, trace 12974. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13307160593455394, 'next_transition': 12990}.
<a id="trace-12990"></a>
<a id="trace-13023"></a>
<a id="trace-13052"></a>
<a id="trace-13133"></a>
<a id="trace-13180"></a>
<a id="trace-13200"></a>
<a id="trace-13221"></a>
<a id="trace-13321"></a>
<a id="trace-13337"></a>
<a id="trace-13372"></a>
- 110.75s–116.25s (×10), actor 5, squad 0 (trace 12990): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 12974. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28397857130898196, 'next_transition': 13023}.
<a id="trace-13405"></a>
- 116.80s–116.80s (×1), actor 1, squad 0 (trace 13405): movement clock expired: request actual-position arrival certification; retain stage and generation. Knowledge: actor memory at 115.00s, trace 13251. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5720317153893086, 'next_transition': 13417}.
<a id="trace-13417"></a>
<a id="trace-13435"></a>
<a id="trace-13458"></a>
<a id="trace-13483"></a>
<a id="trace-13551"></a>
- 117.25s–120.25s (×5), actor 5, squad 0 (trace 13417): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 13254. Next observer evidence: {'until': 117.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.44140584299811286, 'next_transition': 13435}.
<a id="trace-13555"></a>
- 120.30s–120.30s (×1), actor 1, squad 0 (trace 13555): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 13486. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36610289076847147, 'next_transition': 13668}.
<a id="trace-13662"></a>
- 120.30s–120.30s (×1), actor 1, squad 0 (trace 13662): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 120.00s, trace 13486. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36610289076847147, 'next_transition': 13668}.
<a id="trace-13668"></a>
<a id="trace-13676"></a>
<a id="trace-13682"></a>
<a id="trace-13690"></a>
<a id="trace-13739"></a>
<a id="trace-13768"></a>
<a id="trace-13800"></a>
<a id="trace-13831"></a>
<a id="trace-13943"></a>
<a id="trace-13964"></a>
<a id="trace-13981"></a>
<a id="trace-13989"></a>
<a id="trace-13995"></a>
<a id="trace-14020"></a>
<a id="trace-14031"></a>
<a id="trace-14038"></a>
<a id="trace-14108"></a>
<a id="trace-14127"></a>
<a id="trace-14135"></a>
<a id="trace-14142"></a>
<a id="trace-14158"></a>
<a id="trace-14162"></a>
<a id="trace-14177"></a>
<a id="trace-14252"></a>
<a id="trace-14262"></a>
<a id="trace-14270"></a>
<a id="trace-14370"></a>
<a id="trace-14430"></a>
<a id="trace-14478"></a>
<a id="trace-14553"></a>
<a id="trace-14589"></a>
<a id="trace-14688"></a>
- 120.75s–148.30s (×32), actor 5, squad 0 (trace 13668): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 13489. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33593314602339003, 'next_transition': 13676}.
<a id="trace-14700"></a>
- 148.55s–148.55s (×1), actor 4, squad 0 (trace 14700): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 145.00s, trace 14601. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14703}.
<a id="trace-14703"></a>
- 148.60s–148.60s (×1), actor 4, squad 0 (trace 14703): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 14601. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875016914267552, 'next_transition': 14934}.
<a id="trace-14706"></a>
- 148.60s–148.60s (×1), actor 4, squad 0 (trace 14706): MoveTactically. Knowledge: actor memory at 145.00s, trace 14601. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875016914267552, 'next_transition': 14934}.
<a id="trace-14707"></a>
- 148.60s–148.60s (×1), actor 4, squad 0 (trace 14707): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 145.00s, trace 14601. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875016914267552, 'next_transition': 14934}.
<a id="trace-14934"></a>
<a id="trace-15004"></a>
<a id="trace-15027"></a>
<a id="trace-15043"></a>
- 149.30s–153.30s (×4), actor 5, squad 0 (trace 14934): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 14602. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.574994410696432, 'next_transition': 15004}.
<a id="trace-15047"></a>
- 153.40s–153.40s (×1), actor 4, squad 0 (trace 15047): traveling overwatch. Knowledge: actor memory at 150.00s, trace 14943. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087351472165041, 'next_transition': 15278}.
<a id="trace-15048"></a>
- 153.40s–153.40s (×1), actor 4, squad 0 (trace 15048): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 14943. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087351472165041, 'next_transition': 15278}.
<a id="trace-15278"></a>
<a id="trace-15366"></a>
- 154.30s–156.30s (×2), actor 5, squad 0 (trace 15278): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 14944. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0103924692845285, 'next_transition': 15366}.
<a id="trace-15372"></a>
- 156.60s–156.60s (×1), actor 4, squad 0 (trace 15372): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 15289. Next observer evidence: None.
<a id="trace-15373"></a>
- 156.60s–156.60s (×1), actor 4, squad 0 (trace 15373): bounding overwatch. Knowledge: actor memory at 155.00s, trace 15289. Next observer evidence: None.
<a id="trace-15374"></a>
<a id="trace-15561"></a>
<a id="trace-15749"></a>
- 156.60s–156.75s (×3), actor 4, squad 0 (trace 15374): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 15289. Next observer evidence: None.
<a id="trace-15959"></a>
- 157.30s–157.30s (×1), actor 5, squad 0 (trace 15959): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15290. Next observer evidence: {'until': 158, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4380396915069098, 'next_transition': 15972}.
<a id="trace-15972"></a>
- 158.15s–158.15s (×1), actor 4, squad 0 (trace 15972): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 15289. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4930473013677178, 'next_transition': 16173}.
<a id="trace-16173"></a>
<a id="trace-16199"></a>
<a id="trace-16268"></a>
<a id="trace-16289"></a>
- 158.30s–161.30s (×4), actor 5, squad 0 (trace 16173): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15290. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7473101476146344, 'next_transition': 16199}.
<a id="trace-16295"></a>
- 161.50s–161.50s (×1), actor 4, squad 0 (trace 16295): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 16208. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16303}.
<a id="trace-16303"></a>
<a id="trace-16317"></a>
- 162.30s–163.30s (×2), actor 5, squad 0 (trace 16303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 16209. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237480604377225, 'next_transition': 16317}.
<a id="trace-16321"></a>
- 163.35s–163.35s (×1), actor 5, squad 0 (trace 16321): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 163.35s, trace 16321. Next observer evidence: {'until': 163.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499830244145766, 'next_transition': 16322}.
<a id="trace-16322"></a>
- 163.55s–163.55s (×1), actor 4, squad 0 (trace 16322): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 160.00s, trace 16208. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9626927985894568, 'next_transition': 16536}.
<a id="trace-16536"></a>
<a id="trace-16609"></a>
- 164.30s–165.30s (×2), actor 5, squad 0 (trace 16536): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.35s, trace 16321. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749982192529617, 'next_transition': 16609}.
<a id="trace-16632"></a>
- 166.90s–166.90s (×1), actor 4, squad 0 (trace 16632): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 165.00s, trace 16550. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4170228397222385, 'next_transition': 16639}.
<a id="trace-16639"></a>
- 167.30s–167.30s (×1), actor 5, squad 0 (trace 16639): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16551. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6411177897430395, 'next_transition': 16647}.
<a id="trace-16647"></a>
- 167.90s–167.90s (×1), actor 5, squad 0 (trace 16647): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 167.90s, trace 16647. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39434260038860874, 'next_transition': 16654}.
<a id="trace-16654"></a>
<a id="trace-16665"></a>
<a id="trace-16759"></a>
<a id="trace-16774"></a>
- 168.30s–172.30s (×4), actor 5, squad 0 (trace 16654): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 167.90s, trace 16647. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0602715023668468, 'next_transition': 16665}.
<a id="trace-16779"></a>
- 172.60s–172.60s (×1), actor 4, squad 0 (trace 16779): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 170.00s, trace 16681. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16895}.
<a id="trace-16886"></a>
- 172.60s–172.60s (×1), actor 4, squad 0 (trace 16886): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 170.00s, trace 16681. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16895}.
<a id="trace-16895"></a>
- 173.30s–173.30s (×1), actor 5, squad 0 (trace 16895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 16682. Next observer evidence: {'until': 181, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.03471499999999983, 'next_transition': 2089}.
<a id="trace-2089"></a>
- 181.00s–181.00s (×1), actor 5, squad 0 (events line 2089): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 203.5, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.06942999999999966, 'next_transition': None}.
<a id="trace-17083"></a>
- 181.00s–181.00s (×1), actor 5, squad 0 (trace 17083): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.217611 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 181.00s, trace 17083. Next observer evidence: {'until': 203.5, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.06942999999999966, 'next_transition': None}.
<a id="trace-17084"></a>
- 181.00s–181.00s (×1), actor 5, squad 0 (trace 17084): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.217611 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 181.00s, trace 17084. Next observer evidence: {'until': 203.5, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.06942999999999966, 'next_transition': None}.
<a id="trace-17384"></a>
<a id="trace-17388"></a>
<a id="trace-17393"></a>
<a id="trace-17455"></a>
<a id="trace-17464"></a>
<a id="trace-17468"></a>
<a id="trace-17476"></a>
- 197.30s–203.30s (×7), actor 38, squad 4 (trace 17384): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 195.00s, trace 17322. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17388}.

## Net delivery

150 matched order/radio deliveries; 102 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.414s; maximum 6.600s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3179: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3187: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3188: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3189: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3190: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3191: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3192: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3193: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3194: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3480: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3486: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3488: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3489: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3490: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3491: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3492: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3493: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3494: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3495: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4081: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4083: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4086: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4087: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4089: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4090: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4091: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4092: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4093: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4094: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4095: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4096: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 4183: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 4184: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6317: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6321: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6322: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6324: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6325: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6326: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6327: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6328: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6329: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6330: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6331: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6781: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6785: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6786: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6788: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6789: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6790: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6791: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6792: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6793: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6794: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6795: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9734: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9735: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9738: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9739: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9741: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9742: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9743: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9744: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9745: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9746: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9747: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9748: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9986: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9987: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9990: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9991: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9993: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9994: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9995: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9996: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9997: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9998: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9999: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10000: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 10197: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10198: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10201: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10202: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10204: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10205: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10206: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10207: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10208: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10209: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10210: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10211: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 10401: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10402: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 10403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10405: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10406: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10407: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10408: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10409: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10410: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10411: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10412: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10413: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10414: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10415: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 10957: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10958: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 10959: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10961: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10962: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10963: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10964: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10965: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10966: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10967: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10968: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10969: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10970: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10971: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 11167: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 11168: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11170: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11171: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 11172: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11173: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11174: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11175: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11176: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11177: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11178: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11179: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11180: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11806: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11807: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11809: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11810: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11811: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11812: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11813: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11814: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11815: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11816: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11817: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11818: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11819: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11957: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11958: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11960: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11961: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11962: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11963: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11964: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11965: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11966: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11967: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11968: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11969: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11970: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12109: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 12110: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12112: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12113: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12114: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12115: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12116: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12117: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12118: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12119: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12120: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12121: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12122: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12310: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 12311: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12313: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12314: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12315: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12316: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12317: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12318: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12319: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12320: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12321: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12322: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12323: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12700: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 12701: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12703: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12704: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 12705: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12706: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12707: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12708: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12709: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12710: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12711: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12712: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12713: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12903: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 12904: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12906: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12907: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12908: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12909: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12910: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12911: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12912: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12913: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12914: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12915: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12916: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.45s leader 5, trace 12974: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 13251: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 13252: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13254: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13255: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13256: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13257: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13258: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13259: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13260: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13261: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13262: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13263: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13486: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 13487: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13489: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13490: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13491: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13492: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13493: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13494: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13495: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13496: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13497: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13849: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 13850: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13852: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13853: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13854: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13855: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13856: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13857: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13858: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13859: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13860: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 14043: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 14044: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 14045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 14046: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 14047: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 14048: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 14049: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 14050: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 14051: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 14052: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 14053: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 14054: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14181: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 14182: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14184: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14185: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14186: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14187: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14188: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14189: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14190: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14191: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14192: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 14311: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14313: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14314: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14315: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14316: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14317: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14318: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14319: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14320: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 14601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14602: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14603: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14604: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14605: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14606: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14607: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14608: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14609: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 14944: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14945: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14946: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14947: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 14948: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14949: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14950: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14951: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15290: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15291: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15292: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15293: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15294: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15295: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15296: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15297: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16208: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16209: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16210: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16211: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16212: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16213: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16214: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16215: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16216: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.35s leader 5, trace 16321: estimate 10.66; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16550: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16551: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16552: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16553: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16554: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16555: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16556: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16557: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16558: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.90s leader 5, trace 16647: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16681: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16682: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16683: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16684: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16685: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16686: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16687: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16688: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16689: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16918: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 16919: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 16920: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 16921: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 16922: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16923: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 16924: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 16925: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17019: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17020: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17021: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17022: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17023: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17024: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17025: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17026: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.00s leader 5, trace 17083: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.00s leader 5, trace 17084: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17121: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17122: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17123: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17124: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17125: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17126: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17127: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17128: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17218: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17219: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17220: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17221: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17222: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17223: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17224: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17225: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17317: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17318: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17319: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17320: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17321: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17322: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17323: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17398: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17399: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17400: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17401: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17402: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17403: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17404: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren incapacitated
- 1: Vale killed in action
- 1: Reed incapacitated
- 1: Orin incapacitated
- 1: Rook incapacitated
- 1: Moss incapacitated
- 1: Ash incapacitated
- 1: Tern killed in action
- 1: Lark incapacitated
- 1: Iven killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
