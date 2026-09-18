# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/109/good-ember/battle-109-1789674214519925547`

## Battle summary

**Ember** · 360 s · 279 shots.

### Turning points

- 14.5s, squad 1: contact (events line 170). First recorded contact.
- 21.3s, squad 1: withdrawal ([trace 6703](#trace-6703)). 57.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 41.8s, squad 0: help call ([trace 10574](#trace-10574)). No completion observed before termination.
- 51.7s, squad 0: assault ([trace 12135](#trace-12135)). 65.6s, squad 0: new loss of own base of fire.
- 104.6s, squad 1: withdrawal ([trace 15531](#trace-15531)). 124.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 113.3s, squad 0: withdrawal ([trace 15923](#trace-15923)). 154.4s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose new loss of own base of fire, broke contact and 3 further drill types; withdrew; 83 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 4 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 151 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 41 shots, 0/2 lost.

### Decisions and attribution

At 21.3s, squad 1 chose broke contact ([trace 6703](#trace-6703)), followed by 0 shots and 1 own casualties; estimate 10.1 against 0 distinct squad-reported contacts; At 113.3s, squad 0 chose broke contact ([trace 15923](#trace-15923)), followed by 2 shots and 0 own casualties; estimate 11.0 against 0 distinct squad-reported contacts; At 16.8s, squad 0 chose took cover and returned fire ([trace 3720](#trace-3720)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1330](#trace-1330)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5691418009074327, 'next_transition': 1355}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1332](#trace-1332)). Following evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.427140316678962, 'next_transition': 1846}.

### Communication

205 matched deliveries (mean 0.40s, max 5.10s); 300 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.50s, squad 1, contact, evidence events line 170: First recorded contact; .
- 21.30s, squad 1, withdrawal, evidence 6703: BreakContact: believed ratio at least two without superiority; 57.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 41.80s, squad 0, help call, evidence 10574: NeedSupport; No completion observed before termination.
- 51.65s, squad 0, assault, evidence 12135: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 65.6s, squad 0: new loss of own base of fire.
- 104.60s, squad 1, withdrawal, evidence 15531: BreakContact: believed ratio at least two without superiority; 124.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 113.30s, squad 0, withdrawal, evidence 15923: BreakContact: believed ratio at least two without superiority; 154.4s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07381375754428, 'next_transition': 805}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07381375754428, 'next_transition': 805}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07381375754428, 'next_transition': 805}.
<a id="trace-327"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 327): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1146}.
<a id="trace-328"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 328): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1146}.
<a id="trace-329"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 329): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1146}.
<a id="trace-570"></a>
<a id="trace-572"></a>
<a id="trace-598"></a>
<a id="trace-600"></a>
<a id="trace-633"></a>
<a id="trace-635"></a>
<a id="trace-654"></a>
<a id="trace-656"></a>
<a id="trace-675"></a>
<a id="trace-677"></a>
<a id="trace-697"></a>
<a id="trace-699"></a>
<a id="trace-725"></a>
<a id="trace-727"></a>
<a id="trace-809"></a>
<a id="trace-811"></a>
<a id="trace-835"></a>
<a id="trace-837"></a>
<a id="trace-866"></a>
<a id="trace-868"></a>
<a id="trace-902"></a>
<a id="trace-904"></a>
<a id="trace-923"></a>
<a id="trace-925"></a>
<a id="trace-953"></a>
<a id="trace-955"></a>
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1011"></a>
<a id="trace-1013"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1305"></a>
<a id="trace-1307"></a>
<a id="trace-1326"></a>
<a id="trace-1328"></a>
<a id="trace-1359"></a>
<a id="trace-1361"></a>
<a id="trace-1394"></a>
<a id="trace-1396"></a>
<a id="trace-1417"></a>
<a id="trace-1419"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-1789"></a>
<a id="trace-1791"></a>
<a id="trace-1830"></a>
<a id="trace-1832"></a>
<a id="trace-2225"></a>
<a id="trace-2227"></a>
<a id="trace-2515"></a>
<a id="trace-2517"></a>
<a id="trace-2963"></a>
<a id="trace-2965"></a>
<a id="trace-3457"></a>
<a id="trace-3459"></a>
<a id="trace-3717"></a>
<a id="trace-3719"></a>
<a id="trace-4187"></a>
<a id="trace-4189"></a>
<a id="trace-5077"></a>
<a id="trace-5079"></a>
<a id="trace-5780"></a>
<a id="trace-5782"></a>
<a id="trace-5850"></a>
<a id="trace-5852"></a>
<a id="trace-6359"></a>
<a id="trace-6361"></a>
<a id="trace-6402"></a>
<a id="trace-6404"></a>
<a id="trace-6557"></a>
<a id="trace-6559"></a>
<a id="trace-6649"></a>
<a id="trace-6651"></a>
<a id="trace-6694"></a>
<a id="trace-6696"></a>
<a id="trace-6911"></a>
<a id="trace-6913"></a>
<a id="trace-6961"></a>
<a id="trace-6963"></a>
<a id="trace-6992"></a>
<a id="trace-6994"></a>
<a id="trace-7019"></a>
<a id="trace-7021"></a>
<a id="trace-7042"></a>
<a id="trace-7044"></a>
<a id="trace-7069"></a>
<a id="trace-7071"></a>
<a id="trace-7100"></a>
<a id="trace-7102"></a>
<a id="trace-7190"></a>
<a id="trace-7192"></a>
<a id="trace-7206"></a>
<a id="trace-7208"></a>
<a id="trace-7231"></a>
<a id="trace-7233"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7543"></a>
<a id="trace-7545"></a>
<a id="trace-7567"></a>
<a id="trace-7569"></a>
<a id="trace-7602"></a>
<a id="trace-7604"></a>
<a id="trace-7630"></a>
<a id="trace-7632"></a>
<a id="trace-7656"></a>
<a id="trace-7658"></a>
<a id="trace-7682"></a>
<a id="trace-7684"></a>
<a id="trace-7770"></a>
<a id="trace-7772"></a>
<a id="trace-7786"></a>
<a id="trace-7788"></a>
<a id="trace-7801"></a>
<a id="trace-7803"></a>
<a id="trace-7812"></a>
<a id="trace-7814"></a>
<a id="trace-7824"></a>
<a id="trace-7826"></a>
<a id="trace-7841"></a>
<a id="trace-7843"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
<a id="trace-10061"></a>
<a id="trace-10063"></a>
<a id="trace-10087"></a>
<a id="trace-10089"></a>
<a id="trace-10115"></a>
<a id="trace-10117"></a>
<a id="trace-10209"></a>
<a id="trace-10211"></a>
<a id="trace-10225"></a>
<a id="trace-10227"></a>
<a id="trace-10250"></a>
<a id="trace-10252"></a>
<a id="trace-10279"></a>
<a id="trace-10281"></a>
<a id="trace-10299"></a>
<a id="trace-10301"></a>
<a id="trace-10320"></a>
<a id="trace-10322"></a>
<a id="trace-10345"></a>
<a id="trace-10347"></a>
<a id="trace-10368"></a>
<a id="trace-10370"></a>
<a id="trace-10392"></a>
<a id="trace-10394"></a>
<a id="trace-10410"></a>
<a id="trace-10412"></a>
<a id="trace-10506"></a>
<a id="trace-10508"></a>
<a id="trace-10527"></a>
<a id="trace-10529"></a>
<a id="trace-10544"></a>
<a id="trace-10546"></a>
<a id="trace-10563"></a>
<a id="trace-10565"></a>
<a id="trace-10959"></a>
<a id="trace-10961"></a>
<a id="trace-10973"></a>
<a id="trace-10975"></a>
<a id="trace-11010"></a>
<a id="trace-11012"></a>
<a id="trace-11036"></a>
<a id="trace-11038"></a>
<a id="trace-11056"></a>
<a id="trace-11058"></a>
<a id="trace-11459"></a>
<a id="trace-11461"></a>
<a id="trace-11551"></a>
<a id="trace-11553"></a>
<a id="trace-11574"></a>
<a id="trace-11576"></a>
<a id="trace-11596"></a>
<a id="trace-11598"></a>
<a id="trace-11616"></a>
<a id="trace-11618"></a>
<a id="trace-11647"></a>
<a id="trace-11649"></a>
<a id="trace-11664"></a>
<a id="trace-11666"></a>
<a id="trace-11689"></a>
<a id="trace-11691"></a>
<a id="trace-11714"></a>
<a id="trace-11716"></a>
<a id="trace-11737"></a>
<a id="trace-11739"></a>
<a id="trace-11750"></a>
<a id="trace-11752"></a>
<a id="trace-11835"></a>
<a id="trace-11837"></a>
<a id="trace-11851"></a>
<a id="trace-11853"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-12433"></a>
<a id="trace-12435"></a>
<a id="trace-12453"></a>
<a id="trace-12455"></a>
<a id="trace-12476"></a>
<a id="trace-12478"></a>
<a id="trace-12499"></a>
<a id="trace-12501"></a>
<a id="trace-12518"></a>
<a id="trace-12520"></a>
<a id="trace-12542"></a>
<a id="trace-12544"></a>
<a id="trace-12576"></a>
<a id="trace-12578"></a>
<a id="trace-12680"></a>
<a id="trace-12682"></a>
<a id="trace-12713"></a>
<a id="trace-12715"></a>
<a id="trace-12742"></a>
<a id="trace-12744"></a>
<a id="trace-12766"></a>
<a id="trace-12768"></a>
<a id="trace-12802"></a>
<a id="trace-12804"></a>
<a id="trace-12829"></a>
<a id="trace-12831"></a>
<a id="trace-12850"></a>
<a id="trace-12852"></a>
<a id="trace-12869"></a>
<a id="trace-12871"></a>
<a id="trace-12888"></a>
<a id="trace-12890"></a>
<a id="trace-12901"></a>
<a id="trace-12903"></a>
<a id="trace-12984"></a>
<a id="trace-12986"></a>
<a id="trace-12999"></a>
<a id="trace-13001"></a>
<a id="trace-13013"></a>
<a id="trace-13015"></a>
<a id="trace-13025"></a>
<a id="trace-13027"></a>
<a id="trace-13040"></a>
<a id="trace-13042"></a>
<a id="trace-13050"></a>
<a id="trace-13052"></a>
<a id="trace-13064"></a>
<a id="trace-13066"></a>
<a id="trace-13078"></a>
<a id="trace-13080"></a>
<a id="trace-13096"></a>
<a id="trace-13098"></a>
<a id="trace-13107"></a>
<a id="trace-13109"></a>
<a id="trace-13183"></a>
<a id="trace-13185"></a>
<a id="trace-13405"></a>
<a id="trace-13407"></a>
<a id="trace-13419"></a>
<a id="trace-13421"></a>
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13496"></a>
<a id="trace-13498"></a>
<a id="trace-13532"></a>
<a id="trace-13534"></a>
<a id="trace-13560"></a>
<a id="trace-13562"></a>
<a id="trace-13600"></a>
<a id="trace-13602"></a>
<a id="trace-13623"></a>
<a id="trace-13625"></a>
<a id="trace-13710"></a>
<a id="trace-13712"></a>
<a id="trace-13734"></a>
<a id="trace-13736"></a>
<a id="trace-13753"></a>
<a id="trace-13755"></a>
<a id="trace-13769"></a>
<a id="trace-13771"></a>
<a id="trace-13789"></a>
<a id="trace-13791"></a>
<a id="trace-13803"></a>
<a id="trace-13805"></a>
<a id="trace-13822"></a>
<a id="trace-13824"></a>
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13870"></a>
<a id="trace-13872"></a>
<a id="trace-13900"></a>
<a id="trace-13902"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14019"></a>
<a id="trace-14021"></a>
<a id="trace-14050"></a>
<a id="trace-14052"></a>
<a id="trace-14088"></a>
<a id="trace-14090"></a>
<a id="trace-14222"></a>
<a id="trace-14224"></a>
<a id="trace-14240"></a>
<a id="trace-14242"></a>
<a id="trace-14273"></a>
<a id="trace-14275"></a>
<a id="trace-14389"></a>
<a id="trace-14391"></a>
<a id="trace-14407"></a>
<a id="trace-14409"></a>
<a id="trace-14435"></a>
<a id="trace-14437"></a>
<a id="trace-14519"></a>
<a id="trace-14521"></a>
<a id="trace-14536"></a>
<a id="trace-14538"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14573"></a>
<a id="trace-14575"></a>
<a id="trace-14594"></a>
<a id="trace-14596"></a>
<a id="trace-14613"></a>
<a id="trace-14615"></a>
<a id="trace-14634"></a>
<a id="trace-14636"></a>
<a id="trace-14651"></a>
<a id="trace-14653"></a>
<a id="trace-14675"></a>
<a id="trace-14677"></a>
<a id="trace-14693"></a>
<a id="trace-14695"></a>
<a id="trace-14779"></a>
<a id="trace-14781"></a>
<a id="trace-14797"></a>
<a id="trace-14799"></a>
<a id="trace-14817"></a>
<a id="trace-14819"></a>
<a id="trace-14839"></a>
<a id="trace-14841"></a>
<a id="trace-14859"></a>
<a id="trace-14861"></a>
<a id="trace-14873"></a>
<a id="trace-14875"></a>
<a id="trace-14892"></a>
<a id="trace-14894"></a>
<a id="trace-14907"></a>
<a id="trace-14909"></a>
<a id="trace-14931"></a>
<a id="trace-14933"></a>
<a id="trace-14944"></a>
<a id="trace-14946"></a>
<a id="trace-15023"></a>
<a id="trace-15025"></a>
<a id="trace-15035"></a>
<a id="trace-15037"></a>
<a id="trace-15049"></a>
<a id="trace-15051"></a>
<a id="trace-15060"></a>
<a id="trace-15062"></a>
<a id="trace-15079"></a>
<a id="trace-15081"></a>
<a id="trace-15087"></a>
<a id="trace-15089"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15112"></a>
<a id="trace-15114"></a>
<a id="trace-15134"></a>
<a id="trace-15136"></a>
<a id="trace-15145"></a>
<a id="trace-15147"></a>
<a id="trace-15222"></a>
<a id="trace-15224"></a>
<a id="trace-15232"></a>
<a id="trace-15234"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15257"></a>
<a id="trace-15259"></a>
<a id="trace-15275"></a>
<a id="trace-15277"></a>
<a id="trace-15284"></a>
<a id="trace-15286"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15307"></a>
<a id="trace-15309"></a>
<a id="trace-15326"></a>
<a id="trace-15328"></a>
<a id="trace-15335"></a>
<a id="trace-15337"></a>
<a id="trace-15419"></a>
<a id="trace-15421"></a>
<a id="trace-15431"></a>
<a id="trace-15433"></a>
<a id="trace-15448"></a>
<a id="trace-15450"></a>
<a id="trace-15458"></a>
<a id="trace-15460"></a>
<a id="trace-15472"></a>
<a id="trace-15474"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15494"></a>
<a id="trace-15496"></a>
<a id="trace-15507"></a>
<a id="trace-15509"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15585"></a>
<a id="trace-15587"></a>
<a id="trace-15664"></a>
<a id="trace-15666"></a>
<a id="trace-15673"></a>
<a id="trace-15675"></a>
<a id="trace-15690"></a>
<a id="trace-15692"></a>
<a id="trace-15697"></a>
<a id="trace-15699"></a>
<a id="trace-15713"></a>
<a id="trace-15715"></a>
<a id="trace-15720"></a>
<a id="trace-15722"></a>
<a id="trace-15739"></a>
<a id="trace-15741"></a>
<a id="trace-15749"></a>
<a id="trace-15751"></a>
<a id="trace-15764"></a>
<a id="trace-15766"></a>
<a id="trace-15773"></a>
<a id="trace-15775"></a>
<a id="trace-15846"></a>
<a id="trace-15848"></a>
<a id="trace-15855"></a>
<a id="trace-15857"></a>
<a id="trace-15868"></a>
<a id="trace-15870"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-15894"></a>
<a id="trace-15896"></a>
<a id="trace-15901"></a>
<a id="trace-15903"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-16087"></a>
<a id="trace-16089"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
<a id="trace-16121"></a>
<a id="trace-16123"></a>
<a id="trace-16193"></a>
<a id="trace-16195"></a>
<a id="trace-16203"></a>
<a id="trace-16205"></a>
<a id="trace-16219"></a>
<a id="trace-16221"></a>
<a id="trace-16230"></a>
<a id="trace-16232"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
<a id="trace-16255"></a>
<a id="trace-16257"></a>
<a id="trace-16271"></a>
<a id="trace-16273"></a>
<a id="trace-16283"></a>
<a id="trace-16285"></a>
<a id="trace-16300"></a>
<a id="trace-16302"></a>
<a id="trace-16314"></a>
<a id="trace-16316"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16407"></a>
<a id="trace-16409"></a>
<a id="trace-16432"></a>
<a id="trace-16434"></a>
<a id="trace-16449"></a>
<a id="trace-16451"></a>
<a id="trace-16457"></a>
<a id="trace-16459"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16499"></a>
<a id="trace-16501"></a>
<a id="trace-16574"></a>
<a id="trace-16576"></a>
<a id="trace-16720"></a>
<a id="trace-16722"></a>
<a id="trace-16732"></a>
<a id="trace-16734"></a>
<a id="trace-16762"></a>
<a id="trace-16764"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
<a id="trace-16796"></a>
<a id="trace-16798"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-16824"></a>
<a id="trace-16826"></a>
<a id="trace-16834"></a>
<a id="trace-16836"></a>
<a id="trace-16851"></a>
<a id="trace-16853"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16937"></a>
<a id="trace-16939"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16974"></a>
<a id="trace-16976"></a>
<a id="trace-16991"></a>
<a id="trace-16993"></a>
<a id="trace-17006"></a>
<a id="trace-17008"></a>
<a id="trace-17024"></a>
<a id="trace-17026"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17135"></a>
<a id="trace-17137"></a>
<a id="trace-17147"></a>
<a id="trace-17149"></a>
<a id="trace-17219"></a>
<a id="trace-17221"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17336"></a>
<a id="trace-17338"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17363"></a>
<a id="trace-17365"></a>
<a id="trace-17370"></a>
<a id="trace-17372"></a>
<a id="trace-17390"></a>
<a id="trace-17392"></a>
<a id="trace-17399"></a>
<a id="trace-17401"></a>
<a id="trace-17422"></a>
<a id="trace-17424"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17580"></a>
<a id="trace-17582"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17606"></a>
<a id="trace-17608"></a>
<a id="trace-17623"></a>
<a id="trace-17625"></a>
<a id="trace-17629"></a>
<a id="trace-17631"></a>
<a id="trace-17644"></a>
<a id="trace-17646"></a>
<a id="trace-17652"></a>
<a id="trace-17654"></a>
<a id="trace-17666"></a>
<a id="trace-17668"></a>
<a id="trace-17672"></a>
<a id="trace-17674"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
<a id="trace-17768"></a>
<a id="trace-17770"></a>
<a id="trace-17781"></a>
<a id="trace-17783"></a>
<a id="trace-17789"></a>
<a id="trace-17791"></a>
<a id="trace-17798"></a>
<a id="trace-17800"></a>
<a id="trace-17803"></a>
<a id="trace-17805"></a>
<a id="trace-17816"></a>
<a id="trace-17818"></a>
<a id="trace-17822"></a>
<a id="trace-17824"></a>
<a id="trace-17889"></a>
<a id="trace-17891"></a>
<a id="trace-17894"></a>
<a id="trace-17896"></a>
<a id="trace-17904"></a>
<a id="trace-17906"></a>
<a id="trace-17912"></a>
<a id="trace-17914"></a>
<a id="trace-17925"></a>
<a id="trace-17927"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17959"></a>
<a id="trace-17961"></a>
<a id="trace-17968"></a>
<a id="trace-17970"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-17992"></a>
<a id="trace-17994"></a>
<a id="trace-18063"></a>
<a id="trace-18065"></a>
<a id="trace-18071"></a>
<a id="trace-18073"></a>
<a id="trace-18080"></a>
<a id="trace-18082"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18103"></a>
<a id="trace-18105"></a>
<a id="trace-18108"></a>
<a id="trace-18110"></a>
<a id="trace-18122"></a>
<a id="trace-18124"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18147"></a>
<a id="trace-18149"></a>
<a id="trace-18167"></a>
<a id="trace-18169"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18243"></a>
<a id="trace-18245"></a>
<a id="trace-18256"></a>
<a id="trace-18258"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18276"></a>
<a id="trace-18278"></a>
<a id="trace-18285"></a>
<a id="trace-18287"></a>
<a id="trace-18290"></a>
<a id="trace-18292"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18314"></a>
<a id="trace-18316"></a>
<a id="trace-18382"></a>
<a id="trace-18384"></a>
<a id="trace-18390"></a>
<a id="trace-18392"></a>
<a id="trace-18414"></a>
<a id="trace-18416"></a>
<a id="trace-18421"></a>
<a id="trace-18423"></a>
<a id="trace-18435"></a>
<a id="trace-18437"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18455"></a>
<a id="trace-18457"></a>
<a id="trace-18461"></a>
<a id="trace-18463"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18480"></a>
<a id="trace-18482"></a>
<a id="trace-18546"></a>
<a id="trace-18548"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18563"></a>
<a id="trace-18565"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-18585"></a>
<a id="trace-18587"></a>
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18620"></a>
<a id="trace-18622"></a>
<a id="trace-18636"></a>
<a id="trace-18638"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18713"></a>
<a id="trace-18715"></a>
<a id="trace-18719"></a>
<a id="trace-18721"></a>
<a id="trace-18728"></a>
<a id="trace-18730"></a>
<a id="trace-18733"></a>
<a id="trace-18735"></a>
<a id="trace-18750"></a>
<a id="trace-18752"></a>
<a id="trace-18755"></a>
<a id="trace-18757"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18774"></a>
<a id="trace-18776"></a>
<a id="trace-18793"></a>
<a id="trace-18795"></a>
<a id="trace-18805"></a>
<a id="trace-18807"></a>
<a id="trace-18873"></a>
<a id="trace-18875"></a>
<a id="trace-18889"></a>
<a id="trace-18891"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18923"></a>
<a id="trace-18925"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-18995"></a>
<a id="trace-18997"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19026"></a>
<a id="trace-19028"></a>
<a id="trace-19106"></a>
<a id="trace-19108"></a>
<a id="trace-19125"></a>
<a id="trace-19127"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19160"></a>
<a id="trace-19162"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19200"></a>
<a id="trace-19202"></a>
<a id="trace-19208"></a>
<a id="trace-19210"></a>
<a id="trace-19279"></a>
<a id="trace-19281"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19342"></a>
<a id="trace-19344"></a>
<a id="trace-19358"></a>
<a id="trace-19360"></a>
<a id="trace-19367"></a>
<a id="trace-19369"></a>
<a id="trace-19439"></a>
<a id="trace-19441"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19529"></a>
<a id="trace-19531"></a>
<a id="trace-19534"></a>
<a id="trace-19536"></a>
<a id="trace-19548"></a>
<a id="trace-19550"></a>
<a id="trace-19559"></a>
<a id="trace-19561"></a>
<a id="trace-19572"></a>
<a id="trace-19574"></a>
<a id="trace-19583"></a>
<a id="trace-19585"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19607"></a>
<a id="trace-19609"></a>
<a id="trace-19628"></a>
<a id="trace-19630"></a>
<a id="trace-19635"></a>
<a id="trace-19637"></a>
<a id="trace-19709"></a>
<a id="trace-19711"></a>
<a id="trace-19719"></a>
<a id="trace-19721"></a>
<a id="trace-19730"></a>
<a id="trace-19732"></a>
<a id="trace-19744"></a>
<a id="trace-19746"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19765"></a>
<a id="trace-19767"></a>
<a id="trace-19777"></a>
<a id="trace-19779"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19809"></a>
<a id="trace-19811"></a>
<a id="trace-19825"></a>
<a id="trace-19827"></a>
<a id="trace-19980"></a>
<a id="trace-19982"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20010"></a>
<a id="trace-20012"></a>
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20033"></a>
<a id="trace-20035"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20060"></a>
<a id="trace-20062"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20219"></a>
<a id="trace-20221"></a>
<a id="trace-20226"></a>
<a id="trace-20228"></a>
<a id="trace-20242"></a>
<a id="trace-20244"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20315"></a>
<a id="trace-20317"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20340"></a>
<a id="trace-20342"></a>
<a id="trace-20411"></a>
<a id="trace-20413"></a>
<a id="trace-20418"></a>
<a id="trace-20420"></a>
<a id="trace-20433"></a>
<a id="trace-20435"></a>
<a id="trace-20443"></a>
<a id="trace-20445"></a>
<a id="trace-20454"></a>
<a id="trace-20456"></a>
<a id="trace-20467"></a>
<a id="trace-20469"></a>
<a id="trace-20481"></a>
<a id="trace-20483"></a>
<a id="trace-20495"></a>
<a id="trace-20497"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20520"></a>
<a id="trace-20522"></a>
<a id="trace-20590"></a>
<a id="trace-20592"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20617"></a>
<a id="trace-20619"></a>
<a id="trace-20632"></a>
<a id="trace-20634"></a>
<a id="trace-20646"></a>
<a id="trace-20648"></a>
<a id="trace-20660"></a>
<a id="trace-20662"></a>
<a id="trace-20669"></a>
<a id="trace-20671"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20693"></a>
<a id="trace-20695"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20820"></a>
<a id="trace-20822"></a>
<a id="trace-20833"></a>
<a id="trace-20835"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20862"></a>
<a id="trace-20864"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20936"></a>
<a id="trace-20938"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20985"></a>
<a id="trace-20987"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21112"></a>
<a id="trace-21114"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21134"></a>
<a id="trace-21136"></a>
<a id="trace-21147"></a>
<a id="trace-21149"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21176"></a>
<a id="trace-21178"></a>
<a id="trace-21191"></a>
<a id="trace-21193"></a>
<a id="trace-21262"></a>
<a id="trace-21264"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21277"></a>
<a id="trace-21279"></a>
<a id="trace-21282"></a>
<a id="trace-21284"></a>
<a id="trace-21292"></a>
<a id="trace-21294"></a>
<a id="trace-21298"></a>
<a id="trace-21300"></a>
<a id="trace-21308"></a>
<a id="trace-21310"></a>
<a id="trace-21314"></a>
<a id="trace-21316"></a>
<a id="trace-21328"></a>
<a id="trace-21330"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21406"></a>
<a id="trace-21408"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21429"></a>
<a id="trace-21431"></a>
<a id="trace-21446"></a>
<a id="trace-21448"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21465"></a>
<a id="trace-21467"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21493"></a>
<a id="trace-21495"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21592"></a>
<a id="trace-21594"></a>
<a id="trace-21608"></a>
<a id="trace-21610"></a>
<a id="trace-21618"></a>
<a id="trace-21620"></a>
<a id="trace-21637"></a>
<a id="trace-21639"></a>
<a id="trace-21646"></a>
<a id="trace-21648"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
<a id="trace-21667"></a>
<a id="trace-21669"></a>
<a id="trace-21732"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21746"></a>
<a id="trace-21748"></a>
<a id="trace-21751"></a>
<a id="trace-21753"></a>
<a id="trace-21764"></a>
<a id="trace-21766"></a>
<a id="trace-21771"></a>
<a id="trace-21773"></a>
<a id="trace-21785"></a>
<a id="trace-21787"></a>
<a id="trace-21798"></a>
<a id="trace-21800"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21821"></a>
<a id="trace-21823"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21931"></a>
<a id="trace-21933"></a>
<a id="trace-21937"></a>
<a id="trace-21939"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22068"></a>
<a id="trace-22070"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
<a id="trace-22102"></a>
<a id="trace-22104"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22132"></a>
<a id="trace-22134"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22208"></a>
<a id="trace-22210"></a>
<a id="trace-22212"></a>
<a id="trace-22214"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22257"></a>
<a id="trace-22259"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22276"></a>
<a id="trace-22278"></a>
<a id="trace-22294"></a>
<a id="trace-22296"></a>
<a id="trace-22304"></a>
<a id="trace-22306"></a>
<a id="trace-22369"></a>
<a id="trace-22371"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22405"></a>
<a id="trace-22407"></a>
<a id="trace-22412"></a>
<a id="trace-22414"></a>
<a id="trace-22425"></a>
<a id="trace-22427"></a>
<a id="trace-22436"></a>
<a id="trace-22438"></a>
<a id="trace-22452"></a>
<a id="trace-22454"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22533"></a>
<a id="trace-22535"></a>
<a id="trace-22545"></a>
<a id="trace-22547"></a>
<a id="trace-22554"></a>
<a id="trace-22556"></a>
<a id="trace-22567"></a>
<a id="trace-22569"></a>
<a id="trace-22574"></a>
<a id="trace-22576"></a>
<a id="trace-22585"></a>
<a id="trace-22587"></a>
<a id="trace-22595"></a>
<a id="trace-22597"></a>
<a id="trace-22609"></a>
<a id="trace-22611"></a>
<a id="trace-22619"></a>
<a id="trace-22621"></a>
<a id="trace-22689"></a>
<a id="trace-22691"></a>
<a id="trace-22696"></a>
<a id="trace-22698"></a>
<a id="trace-22708"></a>
<a id="trace-22710"></a>
<a id="trace-22713"></a>
<a id="trace-22715"></a>
<a id="trace-22725"></a>
<a id="trace-22727"></a>
<a id="trace-22731"></a>
<a id="trace-22733"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22756"></a>
<a id="trace-22758"></a>
<a id="trace-22768"></a>
<a id="trace-22770"></a>
<a id="trace-22776"></a>
<a id="trace-22778"></a>
<a id="trace-22846"></a>
<a id="trace-22848"></a>
<a id="trace-22852"></a>
<a id="trace-22854"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22895"></a>
<a id="trace-22897"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22916"></a>
<a id="trace-22918"></a>
<a id="trace-22929"></a>
<a id="trace-22931"></a>
<a id="trace-22936"></a>
<a id="trace-22938"></a>
<a id="trace-23007"></a>
<a id="trace-23009"></a>
<a id="trace-23014"></a>
<a id="trace-23016"></a>
<a id="trace-23023"></a>
<a id="trace-23025"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23053"></a>
<a id="trace-23055"></a>
<a id="trace-23070"></a>
<a id="trace-23072"></a>
<a id="trace-23076"></a>
<a id="trace-23078"></a>
<a id="trace-23090"></a>
<a id="trace-23092"></a>
<a id="trace-23099"></a>
<a id="trace-23101"></a>
<a id="trace-23165"></a>
<a id="trace-23167"></a>
<a id="trace-23171"></a>
<a id="trace-23173"></a>
<a id="trace-23181"></a>
<a id="trace-23183"></a>
<a id="trace-23190"></a>
<a id="trace-23192"></a>
<a id="trace-23202"></a>
<a id="trace-23204"></a>
<a id="trace-23212"></a>
<a id="trace-23214"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23233"></a>
<a id="trace-23235"></a>
<a id="trace-23251"></a>
<a id="trace-23253"></a>
<a id="trace-23260"></a>
<a id="trace-23262"></a>
<a id="trace-23332"></a>
<a id="trace-23334"></a>
<a id="trace-23339"></a>
<a id="trace-23341"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23356"></a>
<a id="trace-23358"></a>
<a id="trace-23366"></a>
<a id="trace-23368"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23391"></a>
<a id="trace-23393"></a>
<a id="trace-23404"></a>
<a id="trace-23406"></a>
<a id="trace-23419"></a>
<a id="trace-23421"></a>
<a id="trace-23488"></a>
<a id="trace-23490"></a>
<a id="trace-23493"></a>
<a id="trace-23495"></a>
<a id="trace-23506"></a>
<a id="trace-23508"></a>
<a id="trace-23517"></a>
<a id="trace-23519"></a>
<a id="trace-23531"></a>
<a id="trace-23533"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23551"></a>
<a id="trace-23553"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23568"></a>
<a id="trace-23570"></a>
<a id="trace-23577"></a>
<a id="trace-23579"></a>
<a id="trace-23643"></a>
<a id="trace-23645"></a>
<a id="trace-23647"></a>
<a id="trace-23649"></a>
<a id="trace-23662"></a>
<a id="trace-23664"></a>
<a id="trace-23671"></a>
<a id="trace-23673"></a>
<a id="trace-23683"></a>
<a id="trace-23685"></a>
<a id="trace-23693"></a>
<a id="trace-23695"></a>
<a id="trace-23708"></a>
<a id="trace-23710"></a>
<a id="trace-23719"></a>
<a id="trace-23721"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23743"></a>
<a id="trace-23745"></a>
<a id="trace-23808"></a>
<a id="trace-23810"></a>
<a id="trace-23812"></a>
<a id="trace-23814"></a>
<a id="trace-23822"></a>
<a id="trace-23824"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23838"></a>
<a id="trace-23840"></a>
<a id="trace-23844"></a>
<a id="trace-23846"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23869"></a>
<a id="trace-23871"></a>
<a id="trace-23886"></a>
<a id="trace-23888"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23973"></a>
<a id="trace-23975"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-23992"></a>
<a id="trace-23994"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24068"></a>
<a id="trace-24070"></a>
<a id="trace-24082"></a>
<a id="trace-24084"></a>
<a id="trace-24088"></a>
<a id="trace-24090"></a>
<a id="trace-24114"></a>
<a id="trace-24116"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24207"></a>
<a id="trace-24209"></a>
<a id="trace-24225"></a>
<a id="trace-24227"></a>
<a id="trace-24230"></a>
<a id="trace-24232"></a>
<a id="trace-24249"></a>
<a id="trace-24251"></a>
<a id="trace-24259"></a>
<a id="trace-24261"></a>
<a id="trace-24276"></a>
<a id="trace-24278"></a>
<a id="trace-24282"></a>
<a id="trace-24284"></a>
<a id="trace-24302"></a>
<a id="trace-24304"></a>
<a id="trace-24308"></a>
<a id="trace-24310"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24380"></a>
<a id="trace-24382"></a>
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24400"></a>
<a id="trace-24402"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24433"></a>
<a id="trace-24435"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24462"></a>
<a id="trace-24464"></a>
<a id="trace-24477"></a>
<a id="trace-24479"></a>
<a id="trace-24484"></a>
<a id="trace-24486"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24554"></a>
<a id="trace-24556"></a>
<a id="trace-24564"></a>
<a id="trace-24566"></a>
<a id="trace-24570"></a>
<a id="trace-24572"></a>
<a id="trace-24582"></a>
<a id="trace-24584"></a>
<a id="trace-24590"></a>
<a id="trace-24592"></a>
<a id="trace-24604"></a>
<a id="trace-24606"></a>
<a id="trace-24610"></a>
<a id="trace-24612"></a>
<a id="trace-24628"></a>
<a id="trace-24630"></a>
<a id="trace-24643"></a>
<a id="trace-24645"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-24720"></a>
<a id="trace-24722"></a>
<a id="trace-24730"></a>
<a id="trace-24732"></a>
<a id="trace-24736"></a>
<a id="trace-24738"></a>
<a id="trace-24748"></a>
<a id="trace-24750"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24770"></a>
<a id="trace-24772"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24870"></a>
<a id="trace-24872"></a>
<a id="trace-24885"></a>
<a id="trace-24887"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24920"></a>
<a id="trace-24922"></a>
<a id="trace-24933"></a>
<a id="trace-24935"></a>
<a id="trace-24938"></a>
<a id="trace-24940"></a>
<a id="trace-24952"></a>
<a id="trace-24954"></a>
<a id="trace-24959"></a>
<a id="trace-24961"></a>
<a id="trace-25024"></a>
<a id="trace-25026"></a>
<a id="trace-25030"></a>
<a id="trace-25032"></a>
<a id="trace-25041"></a>
<a id="trace-25043"></a>
<a id="trace-25049"></a>
<a id="trace-25051"></a>
<a id="trace-25063"></a>
<a id="trace-25065"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25095"></a>
<a id="trace-25097"></a>
<a id="trace-25102"></a>
<a id="trace-25104"></a>
<a id="trace-25117"></a>
<a id="trace-25119"></a>
<a id="trace-25123"></a>
<a id="trace-25125"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079367292524973, 'next_transition': 598}.
<a id="trace-805"></a>
<a id="trace-807"></a>
<a id="trace-831"></a>
<a id="trace-833"></a>
<a id="trace-862"></a>
<a id="trace-864"></a>
<a id="trace-898"></a>
<a id="trace-900"></a>
<a id="trace-919"></a>
<a id="trace-921"></a>
<a id="trace-949"></a>
<a id="trace-951"></a>
<a id="trace-978"></a>
<a id="trace-980"></a>
<a id="trace-1007"></a>
<a id="trace-1009"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1301"></a>
<a id="trace-1303"></a>
<a id="trace-1322"></a>
<a id="trace-1324"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 805): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 737. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599989415268702, 'next_transition': 831}.
<a id="trace-1146"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1146): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5692600120598243, 'next_transition': 126}.
<a id="trace-1147"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1147): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5692600120598243, 'next_transition': 126}.
<a id="trace-125"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 125): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5691418009074327, 'next_transition': 1355}.
<a id="trace-126"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 126): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.427140316678962, 'next_transition': 1846}.
<a id="trace-1330"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1330): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1330. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5691418009074327, 'next_transition': 1355}.
<a id="trace-1331"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1331): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1331. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5691418009074327, 'next_transition': 1355}.
<a id="trace-1332"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1332): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1332. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.427140316678962, 'next_transition': 1846}.
<a id="trace-1333"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1333): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1333. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.427140316678962, 'next_transition': 1846}.
<a id="trace-1355"></a>
<a id="trace-1357"></a>
<a id="trace-1390"></a>
<a id="trace-1392"></a>
<a id="trace-1413"></a>
<a id="trace-1415"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1355): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1333. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3047723339238896, 'next_transition': 1390}.
<a id="trace-1423"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1423): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250017144844303, 'next_transition': 1762}.
<a id="trace-1424"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1424): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250017144844303, 'next_transition': 1762}.
<a id="trace-1762"></a>
<a id="trace-1764"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-2511"></a>
<a id="trace-2513"></a>
<a id="trace-2959"></a>
<a id="trace-2961"></a>
<a id="trace-3453"></a>
<a id="trace-3455"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1762): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1333. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600086266758233, 'next_transition': 1826}.
<a id="trace-1846"></a>
- 14.50s–14.50s (×1), actor 8, squad 1 (trace 1846): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: None.
<a id="trace-1847"></a>
- 14.50s–14.50s (×1), actor 8, squad 1 (trace 1847): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: None.
<a id="trace-1848"></a>
<a id="trace-2027"></a>
<a id="trace-2238"></a>
<a id="trace-2528"></a>
<a id="trace-2731"></a>
<a id="trace-2966"></a>
<a id="trace-3223"></a>
<a id="trace-3477"></a>
<a id="trace-5097"></a>
- 14.50s–17.95s (×9), actor 8, squad 1 (trace 1848): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: None.
<a id="trace-3720"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3720): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2433. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449888460916214, 'next_transition': 4183}.
<a id="trace-3721"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3721): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2433. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449888460916214, 'next_transition': 4183}.
<a id="trace-3722"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3722): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2433. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449888460916214, 'next_transition': 4183}.
<a id="trace-4183"></a>
<a id="trace-4185"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 4183): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2438. Next observer evidence: None.
<a id="trace-4197"></a>
<a id="trace-4643"></a>
<a id="trace-5321"></a>
- 17.35s–18.00s (×3), actor 0, squad 0 (trace 4197): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2433. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7032222909395013, 'next_transition': 4643}.
<a id="trace-5846"></a>
<a id="trace-5848"></a>
- 18.75s–18.75s (×2), actor 5, squad 0 (trace 5846): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2438. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6204690820731392, 'next_transition': 6355}.
<a id="trace-5853"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 5853): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2433. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6204690820731392, 'next_transition': 6355}.
<a id="trace-6355"></a>
<a id="trace-6357"></a>
<a id="trace-6553"></a>
<a id="trace-6555"></a>
<a id="trace-6645"></a>
<a id="trace-6647"></a>
<a id="trace-6690"></a>
<a id="trace-6692"></a>
<a id="trace-6907"></a>
<a id="trace-6909"></a>
<a id="trace-6957"></a>
<a id="trace-6959"></a>
- 19.25s–22.25s (×12), actor 5, squad 0 (trace 6355): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2438. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3674894868253713, 'next_transition': 6553}.
<a id="trace-6703"></a>
- 21.30s–21.30s (×1), actor 8, squad 1 (trace 6703): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 6447. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.095911874712062, 'next_transition': 10306}.
<a id="trace-6704"></a>
- 21.30s–21.30s (×1), actor 8, squad 1 (trace 6704): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 6447. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.095911874712062, 'next_transition': 10306}.
<a id="trace-6981"></a>
- 22.45s–22.45s (×1), actor 0, squad 0 (trace 6981): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 6439. Next observer evidence: {'until': 23.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4660940729147391, 'next_transition': 7038}.
<a id="trace-7038"></a>
<a id="trace-7040"></a>
<a id="trace-7065"></a>
<a id="trace-7067"></a>
<a id="trace-7096"></a>
<a id="trace-7098"></a>
<a id="trace-7202"></a>
<a id="trace-7204"></a>
<a id="trace-7227"></a>
<a id="trace-7229"></a>
- 23.75s–26.25s (×10), actor 5, squad 0 (trace 7038): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 6444. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.05906387162428494, 'next_transition': 7065}.
<a id="trace-7250"></a>
- 26.85s–26.85s (×1), actor 1, squad 0 (trace 7250): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 7110. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08013754920033896, 'next_transition': 7539}.
<a id="trace-7539"></a>
<a id="trace-7541"></a>
<a id="trace-7563"></a>
<a id="trace-7565"></a>
<a id="trace-7598"></a>
<a id="trace-7600"></a>
<a id="trace-7626"></a>
<a id="trace-7628"></a>
<a id="trace-7654"></a>
<a id="trace-7680"></a>
<a id="trace-7768"></a>
- 27.25s–30.25s (×11), actor 5, squad 0 (trace 7539): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 7114. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09662375381372608, 'next_transition': 7563}.
<a id="trace-7781"></a>
- 30.70s–30.70s (×1), actor 1, squad 0 (trace 7781): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7688. Next observer evidence: None.
<a id="trace-7784"></a>
<a id="trace-7799"></a>
<a id="trace-7810"></a>
<a id="trace-7839"></a>
- 30.75s–32.75s (×4), actor 5, squad 0 (trace 7784): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7692. Next observer evidence: {'until': 31.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7799}.
<a id="trace-7877"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 7877): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 7688. Next observer evidence: None.
<a id="trace-9649"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 9649): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 7688. Next observer evidence: None.
<a id="trace-9650"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 9650): MoveTactically. Knowledge: actor memory at 30.00s, trace 7688. Next observer evidence: None.
<a id="trace-9651"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 9651): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 7688. Next observer evidence: None.
<a id="trace-10057"></a>
<a id="trace-10059"></a>
<a id="trace-10083"></a>
<a id="trace-10085"></a>
<a id="trace-10221"></a>
<a id="trace-10223"></a>
<a id="trace-10246"></a>
<a id="trace-10248"></a>
<a id="trace-10295"></a>
<a id="trace-10297"></a>
<a id="trace-10341"></a>
<a id="trace-10343"></a>
<a id="trace-10364"></a>
<a id="trace-10366"></a>
- 33.75s–38.75s (×14), actor 5, squad 0 (trace 10057): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7692. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4364852151585548, 'next_transition': 10083}.
<a id="trace-10306"></a>
- 37.30s–37.30s (×1), actor 9, squad 1 (trace 10306): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 10141. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12808}.
<a id="trace-10307"></a>
- 37.30s–37.30s (×1), actor 9, squad 1 (trace 10307): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 10141. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12808}.
<a id="trace-659"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 659): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10373"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10373): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.587925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10373. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6590458618708955, 'next_transition': 10388}.
<a id="trace-10374"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10374): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.587925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10374. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6590458618708955, 'next_transition': 10388}.
<a id="trace-10388"></a>
<a id="trace-10390"></a>
<a id="trace-10406"></a>
<a id="trace-10408"></a>
<a id="trace-10525"></a>
<a id="trace-10561"></a>
- 39.25s–41.75s (×6), actor 5, squad 0 (trace 10388): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 10374. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6144386675824088, 'next_transition': 10406}.
<a id="trace-10572"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 10572): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.7360623627190818, 'next_transition': 10593}.
<a id="trace-10574"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 10574): NeedSupport. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.7360623627190818, 'next_transition': 10593}.
<a id="trace-10593"></a>
- 42.05s–42.05s (×1), actor 1, squad 0 (trace 10593): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200032881095923, 'next_transition': 10957}.
<a id="trace-10598"></a>
- 42.05s–42.05s (×1), actor 1, squad 0 (trace 10598): MoveTactically. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200032881095923, 'next_transition': 10957}.
<a id="trace-10599"></a>
- 42.05s–42.05s (×1), actor 1, squad 0 (trace 10599): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200032881095923, 'next_transition': 10957}.
<a id="trace-10957"></a>
<a id="trace-10971"></a>
<a id="trace-11008"></a>
<a id="trace-11032"></a>
<a id="trace-11034"></a>
<a id="trace-11052"></a>
<a id="trace-11054"></a>
- 42.25s–44.25s (×7), actor 5, squad 0 (trace 10957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10430. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.695596711944387, 'next_transition': 10971}.
<a id="trace-11062"></a>
- 44.45s–44.45s (×1), actor 1, squad 0 (trace 11062): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150015412935155, 'next_transition': 11455}.
<a id="trace-11063"></a>
- 44.45s–44.45s (×1), actor 1, squad 0 (trace 11063): received platoon directive. Knowledge: actor memory at 40.00s, trace 10426. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150015412935155, 'next_transition': 11455}.
<a id="trace-11455"></a>
<a id="trace-11457"></a>
<a id="trace-11592"></a>
<a id="trace-11594"></a>
<a id="trace-11612"></a>
<a id="trace-11614"></a>
<a id="trace-11660"></a>
<a id="trace-11662"></a>
- 44.75s–47.75s (×8), actor 5, squad 0 (trace 11455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10430. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5757523467021501, 'next_transition': 11592}.
<a id="trace-11677"></a>
- 48.15s–48.15s (×1), actor 1, squad 0 (trace 11677): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 11477. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31500059976108186, 'next_transition': 11685}.
<a id="trace-11685"></a>
<a id="trace-11687"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11831"></a>
<a id="trace-11833"></a>
- 48.25s–50.25s (×6), actor 5, squad 0 (trace 11685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 11480. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6065408969922935, 'next_transition': 11710}.
<a id="trace-11873"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 11873): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 11758. Next observer evidence: None.
<a id="trace-12135"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 12135): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 11758. Next observer evidence: None.
<a id="trace-12136"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 12136): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 11758. Next observer evidence: None.
<a id="trace-12415"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 12415): Assaulting. Knowledge: actor memory at 50.00s, trace 11758. Next observer evidence: None.
<a id="trace-12429"></a>
<a id="trace-12431"></a>
<a id="trace-12472"></a>
<a id="trace-12474"></a>
<a id="trace-12495"></a>
<a id="trace-12497"></a>
<a id="trace-12676"></a>
<a id="trace-12678"></a>
<a id="trace-12709"></a>
<a id="trace-12711"></a>
<a id="trace-12738"></a>
<a id="trace-12740"></a>
<a id="trace-12798"></a>
<a id="trace-12800"></a>
<a id="trace-12846"></a>
<a id="trace-12848"></a>
<a id="trace-12865"></a>
<a id="trace-12867"></a>
<a id="trace-12884"></a>
<a id="trace-12886"></a>
<a id="trace-12897"></a>
<a id="trace-12899"></a>
<a id="trace-12995"></a>
<a id="trace-12997"></a>
<a id="trace-13009"></a>
<a id="trace-13011"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13074"></a>
<a id="trace-13076"></a>
<a id="trace-13092"></a>
<a id="trace-13094"></a>
<a id="trace-13103"></a>
<a id="trace-13105"></a>
- 51.75s–64.75s (×34), actor 5, squad 0 (trace 12429): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11761. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5053887031148512, 'next_transition': 12472}.
<a id="trace-12808"></a>
- 57.30s–57.30s (×1), actor 9, squad 1 (trace 12808): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 12605. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1133}.
<a id="trace-13191"></a>
- 65.55s–65.55s (×1), actor 1, squad 0 (trace 13191): new loss of own base of fire. Knowledge: actor memory at 65.00s, trace 13114. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13401}.
<a id="trace-13192"></a>
- 65.55s–65.55s (×1), actor 1, squad 0 (trace 13192): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 13114. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13401}.
<a id="trace-13401"></a>
<a id="trace-13403"></a>
<a id="trace-13415"></a>
<a id="trace-13417"></a>
<a id="trace-13465"></a>
<a id="trace-13467"></a>
<a id="trace-13492"></a>
<a id="trace-13494"></a>
<a id="trace-13528"></a>
<a id="trace-13530"></a>
<a id="trace-13596"></a>
<a id="trace-13598"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13706"></a>
<a id="trace-13708"></a>
<a id="trace-13730"></a>
<a id="trace-13732"></a>
<a id="trace-13749"></a>
<a id="trace-13751"></a>
<a id="trace-13765"></a>
<a id="trace-13767"></a>
<a id="trace-13785"></a>
<a id="trace-13787"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13866"></a>
<a id="trace-13868"></a>
<a id="trace-13896"></a>
<a id="trace-13898"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14015"></a>
<a id="trace-14017"></a>
<a id="trace-14046"></a>
<a id="trace-14048"></a>
<a id="trace-14084"></a>
<a id="trace-14086"></a>
- 65.75s–76.75s (×38), actor 5, squad 0 (trace 13401): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13117. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13415}.
<a id="trace-14106"></a>
- 77.15s–77.15s (×1), actor 1, squad 0 (trace 14106): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21671017422005628, 'next_transition': 14218}.
<a id="trace-14107"></a>
- 77.15s–77.15s (×1), actor 1, squad 0 (trace 14107): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21671017422005628, 'next_transition': 14218}.
<a id="trace-14218"></a>
<a id="trace-14220"></a>
<a id="trace-14236"></a>
<a id="trace-14238"></a>
- 77.25s–77.75s (×4), actor 5, squad 0 (trace 14218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 13916. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.388086198336469, 'next_transition': 14236}.
<a id="trace-14287"></a>
- 78.40s–78.40s (×1), actor 1, squad 0 (trace 14287): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749992081922612, 'next_transition': 14292}.
<a id="trace-14292"></a>
- 78.65s–78.65s (×1), actor 1, squad 0 (trace 14292): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: None.
<a id="trace-14295"></a>
- 78.65s–78.65s (×1), actor 1, squad 0 (trace 14295): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: None.
<a id="trace-14296"></a>
- 78.65s–78.65s (×1), actor 1, squad 0 (trace 14296): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 13913. Next observer evidence: None.
<a id="trace-14385"></a>
<a id="trace-14387"></a>
<a id="trace-14403"></a>
<a id="trace-14405"></a>
<a id="trace-14431"></a>
<a id="trace-14433"></a>
<a id="trace-14515"></a>
<a id="trace-14517"></a>
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14556"></a>
<a id="trace-14558"></a>
<a id="trace-14569"></a>
<a id="trace-14571"></a>
<a id="trace-14590"></a>
<a id="trace-14592"></a>
- 78.75s–82.25s (×16), actor 5, squad 0 (trace 14385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 13916. Next observer evidence: {'until': 79.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5090316056562003, 'next_transition': 14403}.
<a id="trace-1133"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1133): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14524"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 14524): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.764271 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 14524. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14784}.
<a id="trace-14525"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 14525): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.764271 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 14525. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14784}.
<a id="trace-14604"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 14604): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 14447. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150152463632379, 'next_transition': 14609}.
<a id="trace-14609"></a>
<a id="trace-14611"></a>
<a id="trace-14630"></a>
<a id="trace-14632"></a>
- 82.75s–83.25s (×4), actor 5, squad 0 (trace 14609): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 14525. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9339686154264083, 'next_transition': 14630}.
<a id="trace-14645"></a>
- 83.70s–83.70s (×1), actor 1, squad 0 (trace 14645): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 80.00s, trace 14447. Next observer evidence: None.
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14671"></a>
<a id="trace-14673"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
<a id="trace-14813"></a>
<a id="trace-14815"></a>
<a id="trace-14835"></a>
<a id="trace-14837"></a>
<a id="trace-14855"></a>
<a id="trace-14857"></a>
<a id="trace-14869"></a>
<a id="trace-14871"></a>
<a id="trace-14888"></a>
<a id="trace-14890"></a>
<a id="trace-14927"></a>
<a id="trace-14929"></a>
<a id="trace-14940"></a>
<a id="trace-14942"></a>
<a id="trace-15031"></a>
<a id="trace-15033"></a>
<a id="trace-15056"></a>
<a id="trace-15058"></a>
<a id="trace-15075"></a>
<a id="trace-15077"></a>
<a id="trace-15128"></a>
<a id="trace-15130"></a>
<a id="trace-15216"></a>
<a id="trace-15218"></a>
<a id="trace-15245"></a>
<a id="trace-15269"></a>
<a id="trace-15271"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15320"></a>
<a id="trace-15322"></a>
<a id="trace-15413"></a>
<a id="trace-15415"></a>
<a id="trace-15443"></a>
<a id="trace-15467"></a>
<a id="trace-15488"></a>
<a id="trace-15490"></a>
<a id="trace-15519"></a>
<a id="trace-15521"></a>
<a id="trace-15658"></a>
<a id="trace-15660"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15709"></a>
- 83.75s–107.25s (×50), actor 5, squad 0 (trace 14647): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 14525. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724941555260237, 'next_transition': 14671}.
<a id="trace-14784"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 14784): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 14713. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14900}.
<a id="trace-14785"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 14785): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 14713. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14900}.
<a id="trace-14900"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 14900): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 14713. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15531}.
<a id="trace-14902"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 14902): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 14713. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15531}.
<a id="trace-15531"></a>
- 104.60s–104.60s (×1), actor 9, squad 1 (trace 15531): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 15349. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2054}.
<a id="trace-15532"></a>
- 104.60s–104.60s (×1), actor 9, squad 1 (trace 15532): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 15349. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2054}.
<a id="trace-2053"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 2053): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15733}.
<a id="trace-2054"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 2054): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16562}.
<a id="trace-15723"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 15723): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.630132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 15723. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15733}.
<a id="trace-15724"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 15724): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.630132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 15724. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15733}.
<a id="trace-15725"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 15725): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.630132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 15725. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16562}.
<a id="trace-15726"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 15726): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.630132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 15726. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16562}.
<a id="trace-15733"></a>
<a id="trace-15735"></a>
<a id="trace-15760"></a>
<a id="trace-15840"></a>
<a id="trace-15842"></a>
<a id="trace-15862"></a>
<a id="trace-15864"></a>
<a id="trace-15888"></a>
<a id="trace-15890"></a>
<a id="trace-15911"></a>
<a id="trace-15913"></a>
- 108.25s–113.25s (×11), actor 5, squad 0 (trace 15733): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 15726. Next observer evidence: {'until': 109.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15760}.
<a id="trace-15923"></a>
- 113.30s–113.30s (×1), actor 1, squad 0 (trace 15923): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 15780. Next observer evidence: {'until': 114.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21000106878034872, 'next_transition': 16102}.
<a id="trace-15924"></a>
- 113.30s–113.30s (×1), actor 1, squad 0 (trace 15924): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 15780. Next observer evidence: {'until': 114.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21000106878034872, 'next_transition': 16102}.
<a id="trace-16102"></a>
<a id="trace-16104"></a>
<a id="trace-16187"></a>
<a id="trace-16189"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16238"></a>
<a id="trace-16240"></a>
<a id="trace-16265"></a>
<a id="trace-16267"></a>
<a id="trace-16294"></a>
<a id="trace-16296"></a>
<a id="trace-16387"></a>
<a id="trace-16389"></a>
<a id="trace-16417"></a>
<a id="trace-16419"></a>
<a id="trace-16443"></a>
<a id="trace-16445"></a>
<a id="trace-16466"></a>
<a id="trace-16493"></a>
<a id="trace-16495"></a>
- 114.25s–124.25s (×21), actor 5, squad 0 (trace 16102): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15782. Next observer evidence: {'until': 115.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0499708308593896, 'next_transition': 16187}.
<a id="trace-16507"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 16507): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 16322. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250003603479193, 'next_transition': 16715}.
<a id="trace-16508"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 16508): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 16322. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250003603479193, 'next_transition': 16715}.
<a id="trace-16562"></a>
- 124.65s–124.65s (×1), actor 9, squad 1 (trace 16562): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 16325. Next observer evidence: None.
<a id="trace-16565"></a>
- 124.70s–124.70s (×1), actor 9, squad 1 (trace 16565): MoveTactically. Knowledge: actor memory at 120.00s, trace 16325. Next observer evidence: None.
<a id="trace-16566"></a>
- 124.70s–124.70s (×1), actor 9, squad 1 (trace 16566): received platoon directive. Knowledge: actor memory at 120.00s, trace 16325. Next observer evidence: None.
<a id="trace-16579"></a>
- 124.75s–124.75s (×1), actor 9, squad 1 (trace 16579): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 16325. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.999975963321294, 'next_transition': 17029}.
<a id="trace-16715"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16845"></a>
<a id="trace-16847"></a>
<a id="trace-16933"></a>
<a id="trace-16956"></a>
<a id="trace-16958"></a>
<a id="trace-16985"></a>
<a id="trace-16987"></a>
<a id="trace-17020"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17357"></a>
<a id="trace-17359"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17416"></a>
<a id="trace-17418"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
- 125.25s–140.30s (×25), actor 5, squad 0 (trace 16715): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 16640. Next observer evidence: {'until': 126.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1655003043677858, 'next_transition': 16756}.
<a id="trace-17029"></a>
- 133.70s–133.70s (×1), actor 9, squad 1 (trace 17029): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 16870. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.670030013580175, 'next_transition': 17230}.
<a id="trace-17230"></a>
- 135.80s–135.80s (×1), actor 9, squad 1 (trace 17230): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 135.00s, trace 17154. Next observer evidence: {'until': 139.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.560635104145016, 'next_transition': 17431}.
<a id="trace-17431"></a>
- 139.70s–139.70s (×1), actor 9, squad 1 (trace 17431): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 17154. Next observer evidence: {'until': 169.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2415}.
<a id="trace-17522"></a>
- 140.65s–140.65s (×1), actor 1, squad 0 (trace 17522): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 17444. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250115956391391, 'next_transition': 17589}.
<a id="trace-17523"></a>
- 140.65s–140.65s (×1), actor 1, squad 0 (trace 17523): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 17444. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250115956391391, 'next_transition': 17589}.
<a id="trace-17589"></a>
<a id="trace-17591"></a>
<a id="trace-17619"></a>
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17660"></a>
<a id="trace-17662"></a>
<a id="trace-17736"></a>
<a id="trace-17754"></a>
<a id="trace-17777"></a>
<a id="trace-17811"></a>
<a id="trace-17885"></a>
<a id="trace-17898"></a>
<a id="trace-17900"></a>
<a id="trace-17919"></a>
<a id="trace-17921"></a>
<a id="trace-17955"></a>
- 141.30s–153.30s (×17), actor 5, squad 0 (trace 17589): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 17446. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7751262578158183, 'next_transition': 17619}.
<a id="trace-17985"></a>
- 154.40s–154.40s (×1), actor 1, squad 0 (trace 17985): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 17826. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18059}.
<a id="trace-18059"></a>
<a id="trace-18076"></a>
<a id="trace-18097"></a>
<a id="trace-18099"></a>
<a id="trace-18116"></a>
<a id="trace-18118"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18232"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18297"></a>
<a id="trace-18299"></a>
<a id="trace-18376"></a>
<a id="trace-18378"></a>
<a id="trace-18408"></a>
<a id="trace-18410"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
<a id="trace-18468"></a>
<a id="trace-18470"></a>
<a id="trace-18559"></a>
<a id="trace-18579"></a>
<a id="trace-18581"></a>
<a id="trace-18605"></a>
<a id="trace-18631"></a>
<a id="trace-18707"></a>
<a id="trace-18709"></a>
<a id="trace-18723"></a>
- 155.30s–176.30s (×31), actor 5, squad 0 (trace 18059): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 17997. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18076}.
<a id="trace-2414"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (events line 2414): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18746}.
<a id="trace-2415"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (events line 2415): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18908}.
<a id="trace-18736"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 18736): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.996147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 18736. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18746}.
<a id="trace-18737"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 18737): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.996147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 18737. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18746}.
<a id="trace-18738"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 18738): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.996147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 18738. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18908}.
<a id="trace-18739"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 18739): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.996147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 18739. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18908}.
<a id="trace-18746"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18787"></a>
<a id="trace-18789"></a>
<a id="trace-18868"></a>
<a id="trace-18894"></a>
<a id="trace-18912"></a>
- 177.30s–182.30s (×8), actor 5, squad 0 (trace 18746): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 18739. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18763}.
<a id="trace-18908"></a>
- 182.00s–182.00s (×1), actor 9, squad 1 (trace 18908): received platoon directive. Knowledge: actor memory at 180.00s, trace 18811. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2544}.
<a id="trace-18927"></a>
- 183.15s–183.15s (×1), actor 1, squad 0 (trace 18927): MoveTactically. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18984}.
<a id="trace-18928"></a>
- 183.15s–183.15s (×1), actor 1, squad 0 (trace 18928): received platoon directive. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18984}.
<a id="trace-18984"></a>
<a id="trace-18986"></a>
<a id="trace-19008"></a>
<a id="trace-19010"></a>
<a id="trace-19088"></a>
<a id="trace-19090"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19146"></a>
<a id="trace-19148"></a>
<a id="trace-19169"></a>
<a id="trace-19194"></a>
<a id="trace-19196"></a>
<a id="trace-19273"></a>
<a id="trace-19275"></a>
<a id="trace-19295"></a>
<a id="trace-19320"></a>
- 183.30s–192.30s (×17), actor 5, squad 0 (trace 18984): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 18810. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36749050630216545, 'next_transition': 19008}.
<a id="trace-19346"></a>
- 192.85s–192.85s (×1), actor 1, squad 0 (trace 19346): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 190.00s, trace 19213. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200108437224495, 'next_transition': 19354}.
<a id="trace-19354"></a>
- 193.30s–193.30s (×1), actor 5, squad 0 (trace 19354): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 19215. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300009171862808, 'next_transition': 19371}.
<a id="trace-19371"></a>
- 193.85s–193.85s (×1), actor 1, squad 0 (trace 19371): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 190.00s, trace 19213. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199785192390472, 'next_transition': 19433}.
<a id="trace-19433"></a>
<a id="trace-19435"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19544"></a>
<a id="trace-19566"></a>
<a id="trace-19568"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19622"></a>
<a id="trace-19624"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19771"></a>
<a id="trace-19773"></a>
<a id="trace-19803"></a>
<a id="trace-19805"></a>
- 194.30s–204.30s (×19), actor 5, squad 0 (trace 19433): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 19215. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2331152624962333, 'next_transition': 19523}.
<a id="trace-2543"></a>
- 204.65s–204.65s (×1), actor 5, squad 0 (events line 2543): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2544"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 2544): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19814"></a>
- 204.65s–204.65s (×1), actor 5, squad 0 (trace 19814): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.193972 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 19814. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501442207832483, 'next_transition': 19829}.
<a id="trace-19815"></a>
- 204.65s–204.65s (×1), actor 5, squad 0 (trace 19815): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.193972 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 19815. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501442207832483, 'next_transition': 19829}.
<a id="trace-19816"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 19816): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.193972 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 19816. Next observer evidence: {'until': 210, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20111}.
<a id="trace-19817"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 19817): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.193972 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 19817. Next observer evidence: {'until': 210, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20111}.
<a id="trace-19829"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 19829): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 200.00s, trace 19639. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199912031353885, 'next_transition': 19974}.
<a id="trace-19974"></a>
<a id="trace-19976"></a>
<a id="trace-20004"></a>
<a id="trace-20006"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20055"></a>
<a id="trace-20082"></a>
- 205.30s–209.30s (×8), actor 5, squad 0 (trace 19974): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 19915. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.653110047304965, 'next_transition': 20004}.
<a id="trace-20111"></a>
<a id="trace-20951"></a>
- 210.05s–231.65s (×2), actor 9, squad 1 (trace 20111): current contact unknown for 10 s. Knowledge: actor memory at 210.00s, trace 20101. Next observer evidence: {'until': 231.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20951}.
<a id="trace-20159"></a>
- 210.20s–210.20s (×1), actor 1, squad 0 (trace 20159): received platoon directive. Knowledge: actor memory at 210.00s, trace 20098. Next observer evidence: None.
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20238"></a>
<a id="trace-20267"></a>
<a id="trace-20298"></a>
<a id="trace-20300"></a>
<a id="trace-20327"></a>
<a id="trace-20329"></a>
<a id="trace-20405"></a>
<a id="trace-20407"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20449"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20508"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20654"></a>
<a id="trace-20656"></a>
<a id="trace-20757"></a>
<a id="trace-20759"></a>
<a id="trace-20781"></a>
<a id="trace-20783"></a>
<a id="trace-20829"></a>
<a id="trace-20849"></a>
<a id="trace-20851"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20940"></a>
<a id="trace-20942"></a>
- 210.30s–231.30s (×35), actor 5, squad 0 (trace 20213): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 20100. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.70530500318814, 'next_transition': 20238}.
<a id="trace-2652"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 2652): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20992}.
<a id="trace-2653"></a>
- 232.30s–232.30s (×1), actor 5, squad 1 (events line 2653): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21116}.
<a id="trace-20966"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 20966): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 20866. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20992}.
<a id="trace-20974"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 20974): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.481963 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 20974. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20992}.
<a id="trace-20975"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 20975): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.481963 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 20975. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20992}.
<a id="trace-20976"></a>
- 232.30s–232.30s (×1), actor 5, squad 1 (trace 20976): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.481963 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 20976. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21116}.
<a id="trace-20977"></a>
- 232.30s–232.30s (×1), actor 5, squad 1 (trace 20977): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.481963 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 20977. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21116}.
<a id="trace-20992"></a>
<a id="trace-20994"></a>
<a id="trace-21014"></a>
<a id="trace-21016"></a>
<a id="trace-21087"></a>
<a id="trace-21089"></a>
<a id="trace-21101"></a>
<a id="trace-21103"></a>
<a id="trace-21120"></a>
- 233.30s–237.30s (×9), actor 5, squad 0 (trace 20992): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 20977. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21014}.
<a id="trace-21116"></a>
- 237.25s–237.25s (×1), actor 9, squad 1 (trace 21116): received platoon directive. Knowledge: actor memory at 235.00s, trace 21032. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2881}.
<a id="trace-21131"></a>
- 237.65s–237.65s (×1), actor 1, squad 0 (trace 21131): received platoon directive. Knowledge: actor memory at 235.00s, trace 21030. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21143}.
<a id="trace-21143"></a>
<a id="trace-21170"></a>
<a id="trace-21172"></a>
<a id="trace-21256"></a>
<a id="trace-21258"></a>
<a id="trace-21271"></a>
<a id="trace-21273"></a>
<a id="trace-21287"></a>
<a id="trace-21304"></a>
<a id="trace-21323"></a>
<a id="trace-21401"></a>
<a id="trace-21423"></a>
<a id="trace-21425"></a>
<a id="trace-21452"></a>
<a id="trace-21454"></a>
<a id="trace-21470"></a>
<a id="trace-21489"></a>
<a id="trace-21560"></a>
<a id="trace-21576"></a>
<a id="trace-21578"></a>
<a id="trace-21602"></a>
<a id="trace-21604"></a>
<a id="trace-21631"></a>
<a id="trace-21633"></a>
<a id="trace-21655"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21779"></a>
<a id="trace-21781"></a>
<a id="trace-21808"></a>
<a id="trace-21810"></a>
<a id="trace-21887"></a>
<a id="trace-21907"></a>
<a id="trace-21909"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21942"></a>
<a id="trace-21944"></a>
<a id="trace-21964"></a>
<a id="trace-21966"></a>
<a id="trace-22043"></a>
<a id="trace-22045"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22081"></a>
<a id="trace-22083"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22220"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22289"></a>
<a id="trace-22364"></a>
<a id="trace-22381"></a>
<a id="trace-22383"></a>
<a id="trace-22399"></a>
<a id="trace-22401"></a>
<a id="trace-22420"></a>
<a id="trace-22446"></a>
<a id="trace-22448"></a>
<a id="trace-22523"></a>
<a id="trace-22525"></a>
<a id="trace-22541"></a>
<a id="trace-22562"></a>
<a id="trace-22579"></a>
<a id="trace-22581"></a>
<a id="trace-22603"></a>
<a id="trace-22605"></a>
<a id="trace-22685"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22721"></a>
<a id="trace-22737"></a>
<a id="trace-22763"></a>
<a id="trace-22840"></a>
<a id="trace-22842"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22883"></a>
<a id="trace-22885"></a>
<a id="trace-22902"></a>
<a id="trace-22904"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-23002"></a>
<a id="trace-23018"></a>
<a id="trace-23038"></a>
<a id="trace-23040"></a>
<a id="trace-23066"></a>
<a id="trace-23159"></a>
<a id="trace-23161"></a>
- 238.30s–300.30s (×97), actor 5, squad 0 (trace 21143): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 21031. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21170}.
<a id="trace-2880"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (events line 2880): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2881"></a>
- 301.30s–301.30s (×1), actor 5, squad 1 (events line 2881): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23175"></a>
<a id="trace-23177"></a>
- 301.30s–301.30s (×2), actor 5, squad 0 (trace 23175): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 23103. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23197}.
<a id="trace-23184"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (trace 23184): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 23184. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23197}.
<a id="trace-23185"></a>
- 301.30s–301.30s (×1), actor 5, squad 1 (trace 23185): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 23185. Next observer evidence: {'until': 327, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24051}.
<a id="trace-23197"></a>
<a id="trace-23222"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23326"></a>
<a id="trace-23328"></a>
<a id="trace-23345"></a>
<a id="trace-23347"></a>
<a id="trace-23361"></a>
<a id="trace-23379"></a>
<a id="trace-23381"></a>
<a id="trace-23398"></a>
<a id="trace-23400"></a>
<a id="trace-23482"></a>
<a id="trace-23484"></a>
<a id="trace-23502"></a>
<a id="trace-23527"></a>
<a id="trace-23545"></a>
<a id="trace-23547"></a>
<a id="trace-23637"></a>
<a id="trace-23639"></a>
<a id="trace-23657"></a>
<a id="trace-23677"></a>
<a id="trace-23679"></a>
<a id="trace-23703"></a>
<a id="trace-23729"></a>
<a id="trace-23731"></a>
<a id="trace-23803"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23853"></a>
<a id="trace-23882"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23980"></a>
<a id="trace-23982"></a>
- 302.30s–326.30s (×36), actor 5, squad 0 (trace 23197): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 301.30s, trace 23185. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23222}.
<a id="trace-23996"></a>
- 327.05s–327.05s (×1), actor 1, squad 0 (trace 23996): traveling. Knowledge: actor memory at 325.00s, trace 23902. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24055}.
<a id="trace-23997"></a>
- 327.05s–327.05s (×1), actor 1, squad 0 (trace 23997): current contact unknown for 10 s. Knowledge: actor memory at 325.00s, trace 23902. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24055}.
<a id="trace-24051"></a>
- 327.05s–327.05s (×1), actor 9, squad 1 (trace 24051): traveling overwatch. Knowledge: actor memory at 325.00s, trace 23904. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24096}.
<a id="trace-24052"></a>
- 327.05s–327.05s (×1), actor 9, squad 1 (trace 24052): current contact unknown for 10 s. Knowledge: actor memory at 325.00s, trace 23904. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24096}.
<a id="trace-24055"></a>
<a id="trace-24078"></a>
- 327.30s–328.30s (×2), actor 5, squad 0 (trace 24055): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23903. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087427427494392, 'next_transition': 24078}.
<a id="trace-24094"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (trace 24094): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 328.90s, trace 24094. Next observer evidence: None.
<a id="trace-24095"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (trace 24095): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 328.90s, trace 24095. Next observer evidence: None.
<a id="trace-24096"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (trace 24096): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 328.90s, trace 24096. Next observer evidence: None.
<a id="trace-24097"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (trace 24097): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 328.90s, trace 24097. Next observer evidence: None.
<a id="trace-2983"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (events line 2983): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300030571552808, 'next_transition': 24110}.
<a id="trace-2984"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (events line 2984): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24288}.
<a id="trace-24110"></a>
<a id="trace-24187"></a>
<a id="trace-24189"></a>
<a id="trace-24219"></a>
<a id="trace-24221"></a>
<a id="trace-24243"></a>
<a id="trace-24245"></a>
<a id="trace-24271"></a>
- 329.30s–333.30s (×8), actor 5, squad 0 (trace 24110): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.90s, trace 24097. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750088325466631, 'next_transition': 24187}.
<a id="trace-24286"></a>
- 333.85s–333.85s (×1), actor 1, squad 0 (trace 24286): traveling overwatch. Knowledge: actor memory at 330.00s, trace 24126. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299657675024884, 'next_transition': 24294}.
<a id="trace-24287"></a>
- 333.85s–333.85s (×1), actor 1, squad 0 (trace 24287): matching received arrivals: traveling stage complete. Knowledge: actor memory at 330.00s, trace 24126. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299657675024884, 'next_transition': 24294}.
<a id="trace-24288"></a>
- 333.85s–333.85s (×1), actor 9, squad 1 (trace 24288): received platoon directive. Knowledge: actor memory at 330.00s, trace 24128. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-24294"></a>
- 334.25s–334.25s (×1), actor 1, squad 0 (trace 24294): received platoon directive. Knowledge: actor memory at 330.00s, trace 24126. Next observer evidence: None.
<a id="trace-24297"></a>
<a id="trace-24368"></a>
<a id="trace-24370"></a>
<a id="trace-24388"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24473"></a>
<a id="trace-24545"></a>
<a id="trace-24560"></a>
<a id="trace-24576"></a>
<a id="trace-24578"></a>
<a id="trace-24598"></a>
<a id="trace-24600"></a>
<a id="trace-24622"></a>
<a id="trace-24624"></a>
<a id="trace-24708"></a>
<a id="trace-24710"></a>
<a id="trace-24724"></a>
<a id="trace-24726"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24764"></a>
<a id="trace-24766"></a>
<a id="trace-24782"></a>
<a id="trace-24859"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24910"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-25020"></a>
<a id="trace-25036"></a>
<a id="trace-25058"></a>
<a id="trace-25089"></a>
<a id="trace-25091"></a>
<a id="trace-25111"></a>
<a id="trace-25113"></a>
- 334.30s–359.30s (×41), actor 5, squad 0 (trace 24297): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 24127. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749984474674887, 'next_transition': 24368}.

## Net delivery

205 matched order/radio deliveries; 300 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.399s; maximum 5.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 11.25s leader 5, trace 1330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2441: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2449: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2450: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2452: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 6439: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 6440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 6441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 6442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 6443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 6444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 6445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 6446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 6447: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 6448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 6449: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 6450: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 6451: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 6452: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 6453: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 6454: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 6455: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 6456: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 6457: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 6458: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 7110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 7111: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 7112: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 7113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 7114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 7115: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 7116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 7117: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 7118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 7119: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 7120: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 7121: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 7122: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 7123: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 7124: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 7125: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 7126: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 7127: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 7128: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7688: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7689: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7690: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7692: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7693: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7695: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7697: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7698: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7699: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7700: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7701: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7702: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7703: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7704: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7705: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7706: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10134: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10135: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10136: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10138: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10139: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10142: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10143: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10144: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10145: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10146: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10147: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10148: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10149: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10150: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10151: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10373: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10374: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10426: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10427: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10428: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10430: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10431: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10434: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10435: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10436: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10437: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10438: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10439: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10440: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10441: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10442: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10443: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11477: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11478: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11479: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11480: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11481: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11484: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11485: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11486: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11487: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11488: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11489: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11490: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11491: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11492: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11493: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11758: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11759: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11760: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11761: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11762: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11763: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11765: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11766: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11767: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11768: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11769: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11770: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11771: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11772: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11773: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11774: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12600: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12601: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12602: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12603: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12604: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12606: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12607: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12608: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12609: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12610: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12611: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12612: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12613: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12614: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12615: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 12912: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 12913: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12914: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12915: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 12916: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 12917: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 12918: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12919: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12920: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12921: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12922: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12923: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12924: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12925: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12926: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12927: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13114: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13115: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13116: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13117: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13118: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13119: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13120: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13121: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13122: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13123: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13124: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13125: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13126: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13127: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13128: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13129: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13634: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 13635: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13636: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13637: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13638: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 13639: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13640: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13641: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13642: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13643: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13644: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13645: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13646: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13647: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13648: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13649: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13913: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13914: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13915: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13916: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13917: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13918: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13919: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13920: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13921: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13922: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13923: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13924: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13925: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13926: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13927: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13928: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14447: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14448: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14449: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14450: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14451: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14452: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14453: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14454: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14455: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14456: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14457: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14458: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14459: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14460: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14461: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 14524: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 14525: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14709: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14710: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14711: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14712: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14713: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14714: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14715: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14716: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14717: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14718: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14719: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14720: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14721: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14722: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14723: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14953: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14954: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14955: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14956: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14957: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14958: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14959: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14960: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14961: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14962: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14963: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14964: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14965: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14966: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14967: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 15155: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15156: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15157: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 15158: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15159: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15160: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15161: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15162: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15163: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15164: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15165: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15166: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 15167: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 15168: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15346: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15347: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15348: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15349: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15350: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15351: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15352: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15353: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15354: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15355: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15356: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15357: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15358: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15597: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15598: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15599: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15600: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15601: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15602: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15603: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15604: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15605: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15606: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15607: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15608: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15609: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 15723: estimate 11.90; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 15724: estimate 11.90; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 15725: estimate 11.90; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 15726: estimate 11.90; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15780: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15781: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15782: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15783: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15784: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15785: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15786: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15787: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15788: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15789: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15790: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15791: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15792: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16128: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16129: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16130: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16131: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16132: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16133: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16134: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16135: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16136: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16137: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16138: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16139: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16140: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16322: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16323: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16324: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16325: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16326: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16327: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16328: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16329: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16330: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16331: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16332: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16333: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16334: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16638: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16639: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16640: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16641: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16642: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16643: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16644: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16645: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16646: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16647: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16648: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16649: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16650: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16867: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16868: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16869: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16870: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16871: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16872: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16873: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16874: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16875: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16876: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16877: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16878: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16879: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17151: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 17152: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17153: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17154: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17155: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17156: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17157: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17158: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17159: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17160: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17161: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17162: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17163: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17444: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17445: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17446: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17447: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17448: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17449: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17450: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17451: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17452: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17453: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17454: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17455: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17456: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17678: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17679: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17680: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17681: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17682: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17683: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17684: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17685: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17686: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17687: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17688: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17689: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17690: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 17826: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 17827: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17828: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17829: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17830: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17831: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17832: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17833: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17834: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17835: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17836: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17837: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17838: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 17995: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17996: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17997: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17998: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17999: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18000: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18001: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18002: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18003: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18004: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18005: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18006: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18007: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 18170: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 18171: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18172: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18173: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18174: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18175: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18176: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18177: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18178: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18179: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18180: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18181: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18182: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18317: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18318: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18319: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18320: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18321: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18322: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18323: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18324: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18325: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18326: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18327: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18328: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18329: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18483: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18484: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18485: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18486: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18487: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18488: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18489: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18490: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18491: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18492: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18493: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18494: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18495: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18647: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18648: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18649: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18650: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18651: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18652: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18653: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18655: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18656: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18657: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18658: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18659: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 18736: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 18737: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 18738: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 18739: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 18808: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 18809: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18810: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18811: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18812: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18813: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18814: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18817: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18818: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18819: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 19030: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 19031: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 19032: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 19033: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19034: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19035: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19036: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19039: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19040: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19041: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19213: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 19214: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19215: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19216: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19217: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19218: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19219: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19222: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19223: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19224: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19456: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19457: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19458: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19459: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19460: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19461: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19462: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19465: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19466: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19467: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19639: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19640: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19641: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19642: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19643: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19644: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19645: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19648: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19649: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19650: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 19814: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 19815: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 19816: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 19817: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 19913: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19914: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19915: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19916: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19917: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19918: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19919: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19922: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19923: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19924: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 20098: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 20099: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20100: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20101: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20102: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20103: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20104: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20107: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20108: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20109: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 20345: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 20346: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 20347: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20348: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20349: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20350: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20351: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20354: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20355: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20356: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 20523: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20524: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20525: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20526: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20527: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20528: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20531: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20532: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20533: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20697: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20698: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20700: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20701: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20702: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20705: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20706: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20707: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 20865: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20866: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20868: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20869: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20870: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20873: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20874: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20875: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 20974: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 20975: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 20976: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 20977: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 21030: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 21031: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21032: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21033: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21034: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21035: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21038: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21039: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21040: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 21194: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21195: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21196: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21197: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21198: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21199: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21202: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21203: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21204: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 21341: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21342: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21343: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21344: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21345: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21346: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21349: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21350: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21351: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21503: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21504: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21505: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21506: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21507: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21508: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21511: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21512: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21513: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 21671: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 21672: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21673: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21674: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21675: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21676: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21679: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21680: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21681: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 21829: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21830: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21831: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21832: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21833: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21834: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21837: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21838: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21839: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 21981: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21982: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21983: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21984: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21985: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21986: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21989: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21990: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21991: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 22143: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22144: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 22145: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22146: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22147: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22148: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22151: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22152: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22153: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 22307: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22308: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22309: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22310: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22311: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22312: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22315: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22316: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22317: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 22466: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 22467: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22468: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22469: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22470: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22471: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22474: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22475: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22476: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 22622: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22623: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22624: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22625: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22626: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22627: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22630: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22631: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22632: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 22780: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22781: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22782: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22783: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22784: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22785: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22788: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22789: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22790: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 22941: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22942: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22943: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22944: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22945: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22946: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22949: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22950: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22951: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 23102: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23103: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23104: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23105: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23106: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23107: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23110: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23111: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23112: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 23184: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 23185: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 23268: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 23269: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 23270: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23271: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23272: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23273: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23276: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23277: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23278: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 23424: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 23425: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 23426: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23427: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23428: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23429: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23432: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23433: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23434: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23580: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23581: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23582: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23583: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23584: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23585: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23588: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23589: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23590: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 24094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 24096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 24097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 24126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 24127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 24128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 24311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 24312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 24313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 24489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 25126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 25127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 25128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren killed in action
- 1: Soren incapacitated
- 1: Reed incapacitated
- 1: Ash killed in action
- 1: Moss killed in action
- 1: Pike incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
