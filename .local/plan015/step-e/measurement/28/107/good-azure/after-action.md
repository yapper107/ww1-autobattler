# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/107/good-azure/battle-107-1789674285059492113`

## Battle summary

**Ember** · 360 s · 233 shots.

### Turning points

- 14.8s, squad 1: contact (events line 174). First recorded contact.
- 33.2s, squad 0: assault ([trace 7197](#trace-7197)). 33.9s, squad 0: new loss of own base of fire.
- 37.1s, squad 0: help call ([trace 8266](#trace-8266)). 38.3s, squad 1: answered a neighbour with support by fire.
- 38.3s, squad 1: help answer ([trace 8900](#trace-8900)). 67.8s, squad 1: answered a neighbour with support by fire.
- 46.8s, squad 0: assault ([trace 9751](#trace-9751)). 47.2s, squad 0: advanced tactically.
- 64.8s, squad 0: withdrawal ([trace 12734](#trace-12734)). 67.1s, squad 0: took cover and returned fire.
- 66.6s, squad 0: help call ([trace 13233](#trace-13233)). 67.8s, squad 1: answered a neighbour with support by fire.
- 67.8s, squad 1: help answer ([trace 13538](#trace-13538)). 74.7s, squad 1: answered a neighbour with support by fire.
- 70.9s, squad 0: withdrawal ([trace 13689](#trace-13689)). 92.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 73.5s, squad 0: help call ([trace 13949](#trace-13949)). 74.7s, squad 1: answered a neighbour with support by fire.
- 6 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 28 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 2 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 165 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 38 shots, 0/2 lost.

### Decisions and attribution

At 33.9s, squad 0 chose new loss of own base of fire ([trace 7584](#trace-7584)), followed by 0 shots and 1 own casualties; estimate 12.1 against 0 distinct squad-reported contacts; At 205.1s, squad 1 chose renewed the existing objective ([trace 20203](#trace-20203)), followed by 2 shots and 0 own casualties; estimate 2.9 against 2 distinct squad-reported contacts; At 46.8s, squad 0 chose prepared a base of fire ([trace 9349](#trace-9349)), followed by 1 shots and 0 own casualties; estimate 9.9 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 660](#trace-660)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 662](#trace-662)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.

### Communication

188 matched deliveries (mean 0.44s, max 2.30s); 514 explicit drops; 6 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.85s, squad 1, contact, evidence events line 174: First recorded contact; .
- 33.15s, squad 0, assault, evidence 7197: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 33.9s, squad 0: new loss of own base of fire.
- 37.10s, squad 0, help call, evidence 8266: NeedSupport; 38.3s, squad 1: answered a neighbour with support by fire.
- 38.30s, squad 1, help answer, evidence 8900: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 67.8s, squad 1: answered a neighbour with support by fire.
- 46.75s, squad 0, assault, evidence 9751: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 47.2s, squad 0: advanced tactically.
- 64.80s, squad 0, withdrawal, evidence 12734: BreakContact: believed ratio at least two without superiority; 67.1s, squad 0: took cover and returned fire.
- 66.60s, squad 0, help call, evidence 13233: NeedSupport; 67.8s, squad 1: answered a neighbour with support by fire.
- 67.80s, squad 1, help answer, evidence 13538: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 74.7s, squad 1: answered a neighbour with support by fire.
- 70.90s, squad 0, withdrawal, evidence 13689: BreakContact: believed ratio at least two without superiority; 92.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 73.50s, squad 0, help call, evidence 13949: NeedSupport; 74.7s, squad 1: answered a neighbour with support by fire.
- 74.70s, squad 1, help answer, evidence 13984: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.0s, squad 1: advanced tactically.
- 83.45s, squad 1, withdrawal, evidence 14351: Withdraw to received rally; No completion observed before termination.
- 98.25s, squad 0, withdrawal, evidence 15025: Withdraw to received rally; 139.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 232.70s, squad 0, help call, evidence 22097: NeedSupport; No completion observed before termination.
- 258.25s, squad 0, withdrawal, evidence 23591: BreakContact: believed ratio at least two without superiority; 278.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 288.20s, squad 0, withdrawal, evidence 24705: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
<a id="trace-315"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 315): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-316"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 316): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-317"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 317): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-546"></a>
<a id="trace-548"></a>
<a id="trace-574"></a>
<a id="trace-576"></a>
<a id="trace-605"></a>
<a id="trace-607"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-649"></a>
<a id="trace-651"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259977561068375, 'next_transition': 574}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-660"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 660): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 660. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-661"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 661): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 661. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-662"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 662): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 662. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-663"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 663): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-679"></a>
<a id="trace-681"></a>
<a id="trace-705"></a>
<a id="trace-707"></a>
<a id="trace-787"></a>
<a id="trace-789"></a>
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-914"></a>
<a id="trace-916"></a>
<a id="trace-944"></a>
<a id="trace-946"></a>
<a id="trace-973"></a>
<a id="trace-975"></a>
<a id="trace-1004"></a>
<a id="trace-1006"></a>
<a id="trace-1032"></a>
<a id="trace-1034"></a>
<a id="trace-1064"></a>
<a id="trace-1066"></a>
<a id="trace-1080"></a>
<a id="trace-1082"></a>
<a id="trace-1175"></a>
<a id="trace-1177"></a>
<a id="trace-1187"></a>
<a id="trace-1189"></a>
<a id="trace-1210"></a>
<a id="trace-1212"></a>
<a id="trace-1230"></a>
<a id="trace-1232"></a>
<a id="trace-1259"></a>
<a id="trace-1261"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449919534912736, 'next_transition': 705}.
<a id="trace-793"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 793): traveling overwatch. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.474627007291724, 'next_transition': 1901}.
<a id="trace-794"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 794): received platoon directive. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.474627007291724, 'next_transition': 1901}.
<a id="trace-851"></a>
<a id="trace-885"></a>
<a id="trace-918"></a>
<a id="trace-920"></a>
<a id="trace-1008"></a>
<a id="trace-1010"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1084"></a>
<a id="trace-1086"></a>
<a id="trace-1179"></a>
<a id="trace-1181"></a>
<a id="trace-1191"></a>
<a id="trace-1193"></a>
<a id="trace-1214"></a>
<a id="trace-1216"></a>
<a id="trace-1263"></a>
<a id="trace-1265"></a>
<a id="trace-1870"></a>
<a id="trace-1872"></a>
<a id="trace-1893"></a>
<a id="trace-1895"></a>
<a id="trace-2937"></a>
<a id="trace-2939"></a>
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3580"></a>
<a id="trace-3582"></a>
<a id="trace-4197"></a>
<a id="trace-4199"></a>
<a id="trace-4231"></a>
<a id="trace-4233"></a>
<a id="trace-4295"></a>
<a id="trace-4297"></a>
<a id="trace-4394"></a>
<a id="trace-4396"></a>
<a id="trace-4429"></a>
<a id="trace-4431"></a>
<a id="trace-4484"></a>
<a id="trace-4486"></a>
<a id="trace-4512"></a>
<a id="trace-4514"></a>
<a id="trace-4535"></a>
<a id="trace-4537"></a>
<a id="trace-5383"></a>
<a id="trace-5385"></a>
<a id="trace-5413"></a>
<a id="trace-5415"></a>
<a id="trace-5465"></a>
<a id="trace-5467"></a>
<a id="trace-5487"></a>
<a id="trace-5489"></a>
<a id="trace-5578"></a>
<a id="trace-5580"></a>
<a id="trace-5616"></a>
<a id="trace-5618"></a>
<a id="trace-5698"></a>
<a id="trace-5700"></a>
<a id="trace-5719"></a>
<a id="trace-5721"></a>
<a id="trace-5749"></a>
<a id="trace-5751"></a>
<a id="trace-5780"></a>
<a id="trace-5782"></a>
<a id="trace-5805"></a>
<a id="trace-5807"></a>
<a id="trace-5827"></a>
<a id="trace-5829"></a>
<a id="trace-5925"></a>
<a id="trace-5927"></a>
<a id="trace-5937"></a>
<a id="trace-5939"></a>
<a id="trace-5958"></a>
<a id="trace-5960"></a>
<a id="trace-5972"></a>
<a id="trace-5974"></a>
<a id="trace-5993"></a>
<a id="trace-5995"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-7567"></a>
<a id="trace-7569"></a>
<a id="trace-7580"></a>
<a id="trace-7582"></a>
<a id="trace-8107"></a>
<a id="trace-8109"></a>
<a id="trace-8218"></a>
<a id="trace-8220"></a>
<a id="trace-8240"></a>
<a id="trace-8242"></a>
<a id="trace-8254"></a>
<a id="trace-8256"></a>
<a id="trace-8283"></a>
<a id="trace-8285"></a>
<a id="trace-8896"></a>
<a id="trace-8898"></a>
<a id="trace-8914"></a>
<a id="trace-8916"></a>
<a id="trace-8945"></a>
<a id="trace-8947"></a>
<a id="trace-9042"></a>
<a id="trace-9044"></a>
<a id="trace-9092"></a>
<a id="trace-9094"></a>
<a id="trace-9112"></a>
<a id="trace-9114"></a>
<a id="trace-9135"></a>
<a id="trace-9137"></a>
<a id="trace-9153"></a>
<a id="trace-9155"></a>
<a id="trace-9171"></a>
<a id="trace-9173"></a>
<a id="trace-9186"></a>
<a id="trace-9188"></a>
<a id="trace-9205"></a>
<a id="trace-9207"></a>
<a id="trace-9300"></a>
<a id="trace-9302"></a>
<a id="trace-9315"></a>
<a id="trace-9317"></a>
<a id="trace-9332"></a>
<a id="trace-9334"></a>
<a id="trace-9346"></a>
<a id="trace-9348"></a>
<a id="trace-10222"></a>
<a id="trace-10224"></a>
<a id="trace-10827"></a>
<a id="trace-10829"></a>
<a id="trace-10892"></a>
<a id="trace-10894"></a>
<a id="trace-11497"></a>
<a id="trace-11499"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
<a id="trace-11653"></a>
<a id="trace-11655"></a>
<a id="trace-11673"></a>
<a id="trace-11675"></a>
<a id="trace-11691"></a>
<a id="trace-11693"></a>
<a id="trace-11712"></a>
<a id="trace-11714"></a>
<a id="trace-11718"></a>
<a id="trace-11720"></a>
<a id="trace-11816"></a>
<a id="trace-11818"></a>
<a id="trace-11827"></a>
<a id="trace-11829"></a>
<a id="trace-11931"></a>
<a id="trace-11933"></a>
<a id="trace-12011"></a>
<a id="trace-12013"></a>
<a id="trace-12018"></a>
<a id="trace-12020"></a>
<a id="trace-12046"></a>
<a id="trace-12048"></a>
<a id="trace-12062"></a>
<a id="trace-12064"></a>
<a id="trace-12077"></a>
<a id="trace-12079"></a>
<a id="trace-12505"></a>
<a id="trace-12507"></a>
<a id="trace-12531"></a>
<a id="trace-12533"></a>
<a id="trace-12545"></a>
<a id="trace-12547"></a>
<a id="trace-12629"></a>
<a id="trace-12631"></a>
<a id="trace-12651"></a>
<a id="trace-12657"></a>
<a id="trace-12679"></a>
<a id="trace-12693"></a>
<a id="trace-12702"></a>
<a id="trace-12704"></a>
<a id="trace-12723"></a>
<a id="trace-12725"></a>
<a id="trace-13191"></a>
<a id="trace-13193"></a>
<a id="trace-13203"></a>
<a id="trace-13205"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13241"></a>
<a id="trace-13243"></a>
<a id="trace-13521"></a>
<a id="trace-13523"></a>
<a id="trace-13531"></a>
<a id="trace-13533"></a>
<a id="trace-13573"></a>
<a id="trace-13575"></a>
<a id="trace-13598"></a>
<a id="trace-13600"></a>
<a id="trace-13607"></a>
<a id="trace-13609"></a>
<a id="trace-13676"></a>
<a id="trace-13678"></a>
<a id="trace-13685"></a>
<a id="trace-13687"></a>
<a id="trace-13883"></a>
<a id="trace-13885"></a>
<a id="trace-13894"></a>
<a id="trace-13896"></a>
<a id="trace-13916"></a>
<a id="trace-13918"></a>
<a id="trace-13922"></a>
<a id="trace-13924"></a>
<a id="trace-13958"></a>
<a id="trace-13960"></a>
<a id="trace-13974"></a>
<a id="trace-13976"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14056"></a>
<a id="trace-14058"></a>
<a id="trace-14063"></a>
<a id="trace-14065"></a>
<a id="trace-14078"></a>
<a id="trace-14080"></a>
<a id="trace-14090"></a>
<a id="trace-14092"></a>
<a id="trace-14107"></a>
<a id="trace-14109"></a>
<a id="trace-14115"></a>
<a id="trace-14117"></a>
<a id="trace-14143"></a>
<a id="trace-14145"></a>
<a id="trace-14238"></a>
<a id="trace-14240"></a>
<a id="trace-14266"></a>
<a id="trace-14268"></a>
<a id="trace-14326"></a>
<a id="trace-14328"></a>
<a id="trace-14341"></a>
<a id="trace-14343"></a>
<a id="trace-14406"></a>
<a id="trace-14408"></a>
<a id="trace-14432"></a>
<a id="trace-14434"></a>
<a id="trace-14510"></a>
<a id="trace-14512"></a>
<a id="trace-14516"></a>
<a id="trace-14518"></a>
<a id="trace-14531"></a>
<a id="trace-14533"></a>
<a id="trace-14536"></a>
<a id="trace-14538"></a>
<a id="trace-14554"></a>
<a id="trace-14556"></a>
<a id="trace-14590"></a>
<a id="trace-14592"></a>
<a id="trace-14620"></a>
<a id="trace-14622"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14735"></a>
<a id="trace-14737"></a>
<a id="trace-14755"></a>
<a id="trace-14757"></a>
<a id="trace-14767"></a>
<a id="trace-14769"></a>
<a id="trace-14793"></a>
<a id="trace-14795"></a>
<a id="trace-14807"></a>
<a id="trace-14809"></a>
<a id="trace-14827"></a>
<a id="trace-14829"></a>
<a id="trace-14846"></a>
<a id="trace-14848"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-14974"></a>
<a id="trace-14976"></a>
<a id="trace-14984"></a>
<a id="trace-14986"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15006"></a>
<a id="trace-15008"></a>
<a id="trace-15022"></a>
<a id="trace-15024"></a>
<a id="trace-15091"></a>
<a id="trace-15093"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15122"></a>
<a id="trace-15124"></a>
<a id="trace-15206"></a>
<a id="trace-15208"></a>
<a id="trace-15275"></a>
<a id="trace-15277"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15299"></a>
<a id="trace-15301"></a>
<a id="trace-15318"></a>
<a id="trace-15320"></a>
<a id="trace-15407"></a>
<a id="trace-15409"></a>
<a id="trace-15422"></a>
<a id="trace-15424"></a>
<a id="trace-15430"></a>
<a id="trace-15432"></a>
<a id="trace-15449"></a>
<a id="trace-15451"></a>
<a id="trace-15459"></a>
<a id="trace-15461"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15498"></a>
<a id="trace-15500"></a>
<a id="trace-15514"></a>
<a id="trace-15516"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15696"></a>
<a id="trace-15698"></a>
<a id="trace-15712"></a>
<a id="trace-15714"></a>
<a id="trace-15725"></a>
<a id="trace-15727"></a>
<a id="trace-15739"></a>
<a id="trace-15741"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
<a id="trace-15854"></a>
<a id="trace-15856"></a>
<a id="trace-15894"></a>
<a id="trace-15896"></a>
<a id="trace-15920"></a>
<a id="trace-15922"></a>
<a id="trace-15929"></a>
<a id="trace-15931"></a>
<a id="trace-15944"></a>
<a id="trace-15946"></a>
<a id="trace-15952"></a>
<a id="trace-15954"></a>
<a id="trace-15966"></a>
<a id="trace-15968"></a>
<a id="trace-15977"></a>
<a id="trace-15979"></a>
<a id="trace-16049"></a>
<a id="trace-16051"></a>
<a id="trace-16065"></a>
<a id="trace-16067"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16171"></a>
<a id="trace-16173"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16206"></a>
<a id="trace-16208"></a>
<a id="trace-16221"></a>
<a id="trace-16223"></a>
<a id="trace-16242"></a>
<a id="trace-16244"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16334"></a>
<a id="trace-16336"></a>
<a id="trace-16350"></a>
<a id="trace-16352"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16379"></a>
<a id="trace-16381"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16450"></a>
<a id="trace-16452"></a>
<a id="trace-16526"></a>
<a id="trace-16528"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16553"></a>
<a id="trace-16555"></a>
<a id="trace-16564"></a>
<a id="trace-16566"></a>
<a id="trace-16584"></a>
<a id="trace-16586"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16607"></a>
<a id="trace-16609"></a>
<a id="trace-16672"></a>
<a id="trace-16674"></a>
<a id="trace-16693"></a>
<a id="trace-16695"></a>
<a id="trace-16786"></a>
<a id="trace-16788"></a>
<a id="trace-16839"></a>
<a id="trace-16841"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16897"></a>
<a id="trace-16899"></a>
<a id="trace-16909"></a>
<a id="trace-16911"></a>
<a id="trace-16998"></a>
<a id="trace-17000"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17063"></a>
<a id="trace-17065"></a>
<a id="trace-17085"></a>
<a id="trace-17087"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
<a id="trace-17259"></a>
<a id="trace-17261"></a>
<a id="trace-17273"></a>
<a id="trace-17275"></a>
<a id="trace-17287"></a>
<a id="trace-17289"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17342"></a>
<a id="trace-17344"></a>
<a id="trace-17348"></a>
<a id="trace-17350"></a>
<a id="trace-17367"></a>
<a id="trace-17369"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17537"></a>
<a id="trace-17539"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17572"></a>
<a id="trace-17574"></a>
<a id="trace-17581"></a>
<a id="trace-17583"></a>
<a id="trace-17607"></a>
<a id="trace-17609"></a>
<a id="trace-17632"></a>
<a id="trace-17634"></a>
<a id="trace-17714"></a>
<a id="trace-17716"></a>
<a id="trace-17725"></a>
<a id="trace-17727"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17754"></a>
<a id="trace-17756"></a>
<a id="trace-17771"></a>
<a id="trace-17773"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17835"></a>
<a id="trace-17837"></a>
<a id="trace-18029"></a>
<a id="trace-18031"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18057"></a>
<a id="trace-18059"></a>
<a id="trace-18081"></a>
<a id="trace-18083"></a>
<a id="trace-18100"></a>
<a id="trace-18102"></a>
<a id="trace-18113"></a>
<a id="trace-18115"></a>
<a id="trace-18133"></a>
<a id="trace-18135"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18160"></a>
<a id="trace-18162"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18244"></a>
<a id="trace-18246"></a>
<a id="trace-18280"></a>
<a id="trace-18282"></a>
<a id="trace-18292"></a>
<a id="trace-18294"></a>
<a id="trace-18321"></a>
<a id="trace-18323"></a>
<a id="trace-18345"></a>
<a id="trace-18347"></a>
<a id="trace-18356"></a>
<a id="trace-18358"></a>
<a id="trace-18372"></a>
<a id="trace-18374"></a>
<a id="trace-18380"></a>
<a id="trace-18382"></a>
<a id="trace-18455"></a>
<a id="trace-18457"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-18588"></a>
<a id="trace-18590"></a>
<a id="trace-18606"></a>
<a id="trace-18608"></a>
<a id="trace-18625"></a>
<a id="trace-18627"></a>
<a id="trace-18633"></a>
<a id="trace-18635"></a>
<a id="trace-18661"></a>
<a id="trace-18663"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18693"></a>
<a id="trace-18695"></a>
<a id="trace-18710"></a>
<a id="trace-18712"></a>
<a id="trace-18793"></a>
<a id="trace-18795"></a>
<a id="trace-18811"></a>
<a id="trace-18813"></a>
<a id="trace-18823"></a>
<a id="trace-18825"></a>
<a id="trace-18843"></a>
<a id="trace-18845"></a>
<a id="trace-18852"></a>
<a id="trace-18854"></a>
<a id="trace-18876"></a>
<a id="trace-18878"></a>
<a id="trace-18906"></a>
<a id="trace-18908"></a>
<a id="trace-18989"></a>
<a id="trace-18991"></a>
<a id="trace-19001"></a>
<a id="trace-19003"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19047"></a>
<a id="trace-19049"></a>
<a id="trace-19055"></a>
<a id="trace-19057"></a>
<a id="trace-19073"></a>
<a id="trace-19075"></a>
<a id="trace-19081"></a>
<a id="trace-19083"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19105"></a>
<a id="trace-19107"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19191"></a>
<a id="trace-19193"></a>
<a id="trace-19209"></a>
<a id="trace-19211"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19246"></a>
<a id="trace-19248"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19397"></a>
<a id="trace-19399"></a>
<a id="trace-19411"></a>
<a id="trace-19413"></a>
<a id="trace-19483"></a>
<a id="trace-19485"></a>
<a id="trace-19492"></a>
<a id="trace-19494"></a>
<a id="trace-19507"></a>
<a id="trace-19509"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19536"></a>
<a id="trace-19538"></a>
<a id="trace-19545"></a>
<a id="trace-19547"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19573"></a>
<a id="trace-19575"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19617"></a>
<a id="trace-19619"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19705"></a>
<a id="trace-19707"></a>
<a id="trace-19723"></a>
<a id="trace-19725"></a>
<a id="trace-19801"></a>
<a id="trace-19803"></a>
<a id="trace-19810"></a>
<a id="trace-19812"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-19982"></a>
<a id="trace-19984"></a>
<a id="trace-19991"></a>
<a id="trace-19993"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20030"></a>
<a id="trace-20032"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20262"></a>
<a id="trace-20264"></a>
<a id="trace-20273"></a>
<a id="trace-20275"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20364"></a>
<a id="trace-20366"></a>
<a id="trace-20373"></a>
<a id="trace-20375"></a>
<a id="trace-20390"></a>
<a id="trace-20392"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-20500"></a>
<a id="trace-20502"></a>
<a id="trace-20688"></a>
<a id="trace-20690"></a>
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20910"></a>
<a id="trace-20912"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20953"></a>
<a id="trace-20955"></a>
<a id="trace-20967"></a>
<a id="trace-20969"></a>
<a id="trace-21048"></a>
<a id="trace-21050"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21088"></a>
<a id="trace-21090"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
<a id="trace-21306"></a>
<a id="trace-21308"></a>
<a id="trace-21314"></a>
<a id="trace-21316"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21349"></a>
<a id="trace-21351"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21456"></a>
<a id="trace-21458"></a>
<a id="trace-21495"></a>
<a id="trace-21497"></a>
<a id="trace-21507"></a>
<a id="trace-21509"></a>
<a id="trace-21537"></a>
<a id="trace-21539"></a>
<a id="trace-21745"></a>
<a id="trace-21747"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21836"></a>
<a id="trace-21838"></a>
<a id="trace-21884"></a>
<a id="trace-21886"></a>
<a id="trace-21897"></a>
<a id="trace-21899"></a>
<a id="trace-21920"></a>
<a id="trace-21922"></a>
<a id="trace-21934"></a>
<a id="trace-21936"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22060"></a>
<a id="trace-22062"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22103"></a>
<a id="trace-22105"></a>
<a id="trace-22119"></a>
<a id="trace-22121"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22223"></a>
<a id="trace-22225"></a>
<a id="trace-22232"></a>
<a id="trace-22234"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22268"></a>
<a id="trace-22270"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22420"></a>
<a id="trace-22422"></a>
<a id="trace-22438"></a>
<a id="trace-22440"></a>
<a id="trace-22517"></a>
<a id="trace-22519"></a>
<a id="trace-22526"></a>
<a id="trace-22528"></a>
<a id="trace-22544"></a>
<a id="trace-22546"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22788"></a>
<a id="trace-22790"></a>
<a id="trace-22800"></a>
<a id="trace-22802"></a>
<a id="trace-22974"></a>
<a id="trace-22976"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23057"></a>
<a id="trace-23059"></a>
<a id="trace-23064"></a>
<a id="trace-23066"></a>
<a id="trace-23070"></a>
<a id="trace-23072"></a>
<a id="trace-23081"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23087"></a>
<a id="trace-23096"></a>
<a id="trace-23098"></a>
<a id="trace-23270"></a>
<a id="trace-23272"></a>
<a id="trace-23303"></a>
<a id="trace-23305"></a>
<a id="trace-23374"></a>
<a id="trace-23376"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23414"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23434"></a>
<a id="trace-23436"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23526"></a>
<a id="trace-23528"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23577"></a>
<a id="trace-23579"></a>
<a id="trace-23652"></a>
<a id="trace-23654"></a>
<a id="trace-23675"></a>
<a id="trace-23677"></a>
<a id="trace-23745"></a>
<a id="trace-23747"></a>
<a id="trace-23757"></a>
<a id="trace-23759"></a>
<a id="trace-23777"></a>
<a id="trace-23779"></a>
<a id="trace-23798"></a>
<a id="trace-23800"></a>
<a id="trace-23815"></a>
<a id="trace-23817"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23924"></a>
<a id="trace-23926"></a>
<a id="trace-23952"></a>
<a id="trace-23954"></a>
<a id="trace-23972"></a>
<a id="trace-23974"></a>
<a id="trace-23996"></a>
<a id="trace-23998"></a>
<a id="trace-24014"></a>
<a id="trace-24016"></a>
<a id="trace-24023"></a>
<a id="trace-24025"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24111"></a>
<a id="trace-24113"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24147"></a>
<a id="trace-24149"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24195"></a>
<a id="trace-24197"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24280"></a>
<a id="trace-24282"></a>
<a id="trace-24304"></a>
<a id="trace-24306"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24328"></a>
<a id="trace-24330"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
<a id="trace-24387"></a>
<a id="trace-24389"></a>
<a id="trace-24470"></a>
<a id="trace-24472"></a>
<a id="trace-24484"></a>
<a id="trace-24486"></a>
<a id="trace-24491"></a>
<a id="trace-24493"></a>
<a id="trace-24509"></a>
<a id="trace-24511"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24551"></a>
<a id="trace-24553"></a>
<a id="trace-24560"></a>
<a id="trace-24562"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24663"></a>
<a id="trace-24665"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24698"></a>
<a id="trace-24700"></a>
<a id="trace-24758"></a>
<a id="trace-24760"></a>
<a id="trace-24769"></a>
<a id="trace-24771"></a>
<a id="trace-24786"></a>
<a id="trace-24788"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24867"></a>
<a id="trace-24869"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24891"></a>
<a id="trace-24893"></a>
<a id="trace-24906"></a>
<a id="trace-24908"></a>
<a id="trace-24925"></a>
<a id="trace-24927"></a>
<a id="trace-24930"></a>
<a id="trace-24932"></a>
<a id="trace-24947"></a>
<a id="trace-24949"></a>
<a id="trace-24960"></a>
<a id="trace-24962"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-24983"></a>
<a id="trace-24985"></a>
<a id="trace-25054"></a>
<a id="trace-25056"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25084"></a>
<a id="trace-25086"></a>
<a id="trace-25102"></a>
<a id="trace-25104"></a>
<a id="trace-25110"></a>
<a id="trace-25112"></a>
<a id="trace-25122"></a>
<a id="trace-25124"></a>
<a id="trace-25133"></a>
<a id="trace-25135"></a>
<a id="trace-25151"></a>
<a id="trace-25153"></a>
<a id="trace-25238"></a>
<a id="trace-25240"></a>
<a id="trace-25276"></a>
<a id="trace-25278"></a>
<a id="trace-25286"></a>
<a id="trace-25288"></a>
<a id="trace-25300"></a>
<a id="trace-25302"></a>
<a id="trace-25322"></a>
<a id="trace-25324"></a>
<a id="trace-25330"></a>
<a id="trace-25332"></a>
<a id="trace-25403"></a>
<a id="trace-25405"></a>
<a id="trace-25434"></a>
<a id="trace-25436"></a>
<a id="trace-25447"></a>
<a id="trace-25449"></a>
<a id="trace-25462"></a>
<a id="trace-25464"></a>
<a id="trace-25468"></a>
<a id="trace-25470"></a>
<a id="trace-25503"></a>
<a id="trace-25505"></a>
<a id="trace-25513"></a>
<a id="trace-25515"></a>
<a id="trace-25589"></a>
<a id="trace-25591"></a>
<a id="trace-25604"></a>
<a id="trace-25606"></a>
<a id="trace-25616"></a>
<a id="trace-25618"></a>
<a id="trace-25645"></a>
<a id="trace-25647"></a>
<a id="trace-25667"></a>
<a id="trace-25669"></a>
<a id="trace-25673"></a>
<a id="trace-25675"></a>
<a id="trace-25687"></a>
<a id="trace-25689"></a>
<a id="trace-25696"></a>
<a id="trace-25698"></a>
<a id="trace-25767"></a>
<a id="trace-25769"></a>
<a id="trace-25779"></a>
<a id="trace-25781"></a>
<a id="trace-25792"></a>
<a id="trace-25794"></a>
<a id="trace-25798"></a>
<a id="trace-25800"></a>
<a id="trace-25815"></a>
<a id="trace-25817"></a>
<a id="trace-25839"></a>
<a id="trace-25841"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25946"></a>
<a id="trace-25948"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-25971"></a>
<a id="trace-25973"></a>
<a id="trace-25981"></a>
<a id="trace-25983"></a>
<a id="trace-26001"></a>
<a id="trace-26003"></a>
<a id="trace-26016"></a>
<a id="trace-26018"></a>
<a id="trace-26025"></a>
<a id="trace-26027"></a>
<a id="trace-26045"></a>
<a id="trace-26047"></a>
<a id="trace-26125"></a>
<a id="trace-26127"></a>
<a id="trace-26174"></a>
<a id="trace-26176"></a>
<a id="trace-26182"></a>
<a id="trace-26184"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26225"></a>
<a id="trace-26227"></a>
<a id="trace-26298"></a>
<a id="trace-26300"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26326"></a>
<a id="trace-26328"></a>
<a id="trace-26342"></a>
<a id="trace-26344"></a>
<a id="trace-26353"></a>
<a id="trace-26355"></a>
<a id="trace-26372"></a>
<a id="trace-26374"></a>
<a id="trace-26387"></a>
<a id="trace-26389"></a>
<a id="trace-26403"></a>
<a id="trace-26405"></a>
<a id="trace-26479"></a>
<a id="trace-26481"></a>
<a id="trace-26502"></a>
<a id="trace-26504"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26542"></a>
<a id="trace-26544"></a>
<a id="trace-26551"></a>
<a id="trace-26553"></a>
<a id="trace-26569"></a>
<a id="trace-26571"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26661"></a>
<a id="trace-26663"></a>
<a id="trace-26678"></a>
<a id="trace-26680"></a>
<a id="trace-26689"></a>
<a id="trace-26691"></a>
<a id="trace-26707"></a>
<a id="trace-26709"></a>
<a id="trace-26728"></a>
<a id="trace-26730"></a>
<a id="trace-26734"></a>
<a id="trace-26736"></a>
<a id="trace-26747"></a>
<a id="trace-26749"></a>
<a id="trace-26759"></a>
<a id="trace-26761"></a>
<a id="trace-26828"></a>
<a id="trace-26830"></a>
<a id="trace-26857"></a>
<a id="trace-26859"></a>
<a id="trace-26865"></a>
<a id="trace-26867"></a>
<a id="trace-26885"></a>
<a id="trace-26887"></a>
<a id="trace-26910"></a>
<a id="trace-26912"></a>
<a id="trace-26934"></a>
<a id="trace-26936"></a>
<a id="trace-26940"></a>
<a id="trace-26942"></a>
<a id="trace-27011"></a>
<a id="trace-27013"></a>
<a id="trace-27021"></a>
<a id="trace-27023"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27062"></a>
<a id="trace-27064"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27110"></a>
<a id="trace-27112"></a>
<a id="trace-27197"></a>
<a id="trace-27199"></a>
<a id="trace-27204"></a>
<a id="trace-27206"></a>
<a id="trace-27217"></a>
<a id="trace-27219"></a>
<a id="trace-27260"></a>
<a id="trace-27262"></a>
<a id="trace-27266"></a>
<a id="trace-27268"></a>
<a id="trace-27283"></a>
<a id="trace-27285"></a>
<a id="trace-27296"></a>
<a id="trace-27298"></a>
- 5.70s–359.80s (×1094), actor 37, squad 4 (trace 851): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 729. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624536610865512, 'next_transition': 885}.
<a id="trace-1283"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1283): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1094. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1805}.
<a id="trace-1284"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1284): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1094. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1805}.
<a id="trace-1805"></a>
<a id="trace-1807"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-1866"></a>
<a id="trace-1868"></a>
<a id="trace-1889"></a>
<a id="trace-1891"></a>
<a id="trace-2872"></a>
<a id="trace-2874"></a>
<a id="trace-2933"></a>
<a id="trace-2935"></a>
<a id="trace-3455"></a>
<a id="trace-3457"></a>
<a id="trace-3492"></a>
<a id="trace-3494"></a>
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3576"></a>
<a id="trace-3578"></a>
- 13.20s–17.75s (×20), actor 5, squad 0 (trace 1805): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1099. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134345779017986, 'next_transition': 1826}.
<a id="trace-1901"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 1901): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1102. Next observer evidence: None.
<a id="trace-1902"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 1902): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1102. Next observer evidence: None.
<a id="trace-1903"></a>
<a id="trace-2128"></a>
<a id="trace-2379"></a>
<a id="trace-2645"></a>
<a id="trace-2967"></a>
<a id="trace-3204"></a>
- 14.85s–16.10s (×6), actor 8, squad 1 (trace 1903): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1102. Next observer evidence: None.
<a id="trace-3583"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 3583): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2352. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1719166698495949, 'next_transition': 4193}.
<a id="trace-3584"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 3584): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2352. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1719166698495949, 'next_transition': 4193}.
<a id="trace-3585"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 3585): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2352. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1719166698495949, 'next_transition': 4193}.
<a id="trace-4193"></a>
<a id="trace-4195"></a>
- 18.25s–18.25s (×2), actor 5, squad 0 (trace 4193): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2357. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31979476358673686, 'next_transition': 311}.
<a id="trace-311"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 311): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-312"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 312): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4217"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4217): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4217. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24112635004562555, 'next_transition': 4227}.
<a id="trace-4218"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4218): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4218. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24112635004562555, 'next_transition': 4227}.
<a id="trace-4219"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4219): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4219. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4303}.
<a id="trace-4220"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4220): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4220. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4303}.
<a id="trace-4227"></a>
<a id="trace-4229"></a>
<a id="trace-4271"></a>
<a id="trace-4273"></a>
<a id="trace-4291"></a>
<a id="trace-4293"></a>
<a id="trace-4390"></a>
<a id="trace-4392"></a>
<a id="trace-4425"></a>
<a id="trace-4427"></a>
<a id="trace-4462"></a>
<a id="trace-4464"></a>
- 18.75s–21.25s (×12), actor 5, squad 0 (trace 4227): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 4220. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7356754373947292, 'next_transition': 4271}.
<a id="trace-4303"></a>
- 19.95s–19.95s (×1), actor 9, squad 1 (trace 4303): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 2361. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5853}.
<a id="trace-4472"></a>
- 21.45s–21.45s (×1), actor 0, squad 0 (trace 4472): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4305. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3403955591875354, 'next_transition': 4480}.
<a id="trace-4480"></a>
<a id="trace-4482"></a>
<a id="trace-4508"></a>
<a id="trace-4510"></a>
<a id="trace-4531"></a>
<a id="trace-4533"></a>
- 21.75s–22.75s (×6), actor 5, squad 0 (trace 4480): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4310. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812446872339029, 'next_transition': 4508}.
<a id="trace-4538"></a>
- 22.75s–22.75s (×1), actor 0, squad 0 (trace 4538): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4305. Next observer evidence: {'until': 23.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0797320737033667, 'next_transition': 5379}.
<a id="trace-5379"></a>
<a id="trace-5381"></a>
- 23.25s–23.25s (×2), actor 5, squad 0 (trace 5379): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4310. Next observer evidence: None.
<a id="trace-5389"></a>
- 23.30s–23.30s (×1), actor 0, squad 0 (trace 5389): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4305. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6036827097897388, 'next_transition': 5409}.
<a id="trace-5409"></a>
<a id="trace-5411"></a>
<a id="trace-5461"></a>
<a id="trace-5463"></a>
<a id="trace-5483"></a>
<a id="trace-5485"></a>
<a id="trace-5574"></a>
<a id="trace-5576"></a>
<a id="trace-5612"></a>
<a id="trace-5614"></a>
<a id="trace-5648"></a>
<a id="trace-5650"></a>
- 23.75s–26.25s (×12), actor 5, squad 0 (trace 5409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4310. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0541635156856428, 'next_transition': 5461}.
<a id="trace-5656"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 5656): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5494. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.013202542664515, 'next_transition': 5669}.
<a id="trace-5669"></a>
<a id="trace-5671"></a>
<a id="trace-5694"></a>
<a id="trace-5696"></a>
<a id="trace-5715"></a>
<a id="trace-5717"></a>
<a id="trace-5745"></a>
<a id="trace-5747"></a>
<a id="trace-5776"></a>
<a id="trace-5778"></a>
<a id="trace-5801"></a>
<a id="trace-5803"></a>
<a id="trace-5823"></a>
<a id="trace-5825"></a>
<a id="trace-5921"></a>
<a id="trace-5923"></a>
<a id="trace-5933"></a>
<a id="trace-5935"></a>
<a id="trace-5954"></a>
<a id="trace-5956"></a>
<a id="trace-5968"></a>
<a id="trace-5970"></a>
<a id="trace-5989"></a>
<a id="trace-5991"></a>
- 26.75s–32.25s (×24), actor 5, squad 0 (trace 5669): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5499. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.24711027594082, 'next_transition': 5694}.
<a id="trace-5853"></a>
- 30.00s–30.00s (×1), actor 9, squad 1 (trace 5853): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5842. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8111}.
<a id="trace-5996"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 5996): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 32.25s, trace 5996. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5053561775894629, 'next_transition': 6005}.
<a id="trace-6005"></a>
<a id="trace-6007"></a>
- 32.75s–32.75s (×2), actor 5, squad 0 (trace 6005): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5996. Next observer evidence: {'until': 33, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35434284499555846, 'next_transition': 6023}.
<a id="trace-6023"></a>
- 33.15s–33.15s (×1), actor 0, squad 0 (trace 6023): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900000809069931, 'next_transition': 7563}.
<a id="trace-7197"></a>
- 33.15s–33.15s (×1), actor 0, squad 0 (trace 7197): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900000809069931, 'next_transition': 7563}.
<a id="trace-7198"></a>
- 33.15s–33.15s (×1), actor 0, squad 0 (trace 7198): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900000809069931, 'next_transition': 7563}.
<a id="trace-7541"></a>
- 33.15s–33.15s (×1), actor 0, squad 0 (trace 7541): Assaulting. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900000809069931, 'next_transition': 7563}.
<a id="trace-7563"></a>
<a id="trace-7565"></a>
<a id="trace-7576"></a>
<a id="trace-7578"></a>
- 33.25s–33.75s (×4), actor 5, squad 0 (trace 7563): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5996. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.011338469464434725, 'next_transition': 7576}.
<a id="trace-7584"></a>
- 33.85s–33.85s (×1), actor 0, squad 0 (trace 7584): new loss of own base of fire. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.1311209599872665, 'next_transition': 8103}.
<a id="trace-7585"></a>
- 33.85s–33.85s (×1), actor 0, squad 0 (trace 7585): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 5835. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.1311209599872665, 'next_transition': 8103}.
<a id="trace-8103"></a>
<a id="trace-8105"></a>
<a id="trace-8124"></a>
<a id="trace-8126"></a>
<a id="trace-8197"></a>
<a id="trace-8199"></a>
<a id="trace-8214"></a>
<a id="trace-8216"></a>
<a id="trace-8236"></a>
<a id="trace-8238"></a>
<a id="trace-8250"></a>
<a id="trace-8252"></a>
- 34.25s–36.75s (×12), actor 5, squad 0 (trace 8103): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5996. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09838333333333378, 'next_transition': 8124}.
<a id="trace-8111"></a>
- 34.35s–34.35s (×1), actor 9, squad 1 (trace 8111): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 5842. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8291}.
<a id="trace-8258"></a>
- 36.80s–36.80s (×1), actor 5, squad 0 (trace 8258): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 36.80s, trace 8258. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20694180875091708, 'next_transition': 8265}.
<a id="trace-8265"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 8265): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 8130. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15180952494837138, 'next_transition': 8279}.
<a id="trace-8266"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 8266): NeedSupport. Knowledge: actor memory at 35.00s, trace 8130. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15180952494837138, 'next_transition': 8279}.
<a id="trace-8279"></a>
<a id="trace-8281"></a>
<a id="trace-8295"></a>
<a id="trace-8297"></a>
- 37.25s–37.75s (×4), actor 5, squad 0 (trace 8279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 36.80s, trace 8258. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30668833046898875, 'next_transition': 8295}.
<a id="trace-8291"></a>
- 37.65s–37.65s (×1), actor 9, squad 1 (trace 8291): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 8136. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8900}.
<a id="trace-8293"></a>
- 37.65s–37.65s (×1), actor 9, squad 1 (trace 8293): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 8136. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8900}.
<a id="trace-8303"></a>
- 38.10s–38.10s (×1), actor 1, squad 0 (trace 8303): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 8130. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22395055270564881, 'next_transition': 8892}.
<a id="trace-8308"></a>
- 38.10s–38.10s (×1), actor 1, squad 0 (trace 8308): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 8130. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22395055270564881, 'next_transition': 8892}.
<a id="trace-8309"></a>
- 38.10s–38.10s (×1), actor 1, squad 0 (trace 8309): Reorganise complete: known contact. Knowledge: actor memory at 35.00s, trace 8130. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22395055270564881, 'next_transition': 8892}.
<a id="trace-8892"></a>
<a id="trace-8894"></a>
<a id="trace-8910"></a>
<a id="trace-8912"></a>
<a id="trace-8941"></a>
<a id="trace-8943"></a>
<a id="trace-8956"></a>
<a id="trace-8958"></a>
<a id="trace-9038"></a>
<a id="trace-9040"></a>
<a id="trace-9065"></a>
<a id="trace-9067"></a>
- 38.25s–40.75s (×12), actor 5, squad 0 (trace 8892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 36.80s, trace 8258. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36778723270381986, 'next_transition': 8910}.
<a id="trace-8900"></a>
- 38.30s–38.30s (×1), actor 9, squad 1 (trace 8900): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 8136. Next observer evidence: None.
<a id="trace-8901"></a>
- 38.30s–38.30s (×1), actor 9, squad 1 (trace 8901): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 35.00s, trace 8136. Next observer evidence: None.
<a id="trace-8904"></a>
- 38.35s–38.35s (×1), actor 9, squad 1 (trace 8904): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 35.00s, trace 8136. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13538}.
<a id="trace-624"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (events line 624): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9074"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 9074): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416015 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 9074. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38141897492223814, 'next_transition': 9088}.
<a id="trace-9075"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 9075): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.416015 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 9075. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38141897492223814, 'next_transition': 9088}.
<a id="trace-9088"></a>
<a id="trace-9090"></a>
<a id="trace-9108"></a>
<a id="trace-9110"></a>
- 41.25s–41.75s (×4), actor 5, squad 0 (trace 9088): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 9075. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34443236346459977, 'next_transition': 9108}.
<a id="trace-9115"></a>
- 41.75s–41.75s (×1), actor 1, squad 0 (trace 9115): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 8965. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5475612441260245, 'next_transition': 9131}.
<a id="trace-9131"></a>
<a id="trace-9133"></a>
<a id="trace-9149"></a>
<a id="trace-9151"></a>
<a id="trace-9167"></a>
<a id="trace-9169"></a>
<a id="trace-9182"></a>
<a id="trace-9184"></a>
<a id="trace-9201"></a>
<a id="trace-9203"></a>
<a id="trace-9219"></a>
<a id="trace-9221"></a>
<a id="trace-9296"></a>
<a id="trace-9298"></a>
<a id="trace-9311"></a>
<a id="trace-9313"></a>
<a id="trace-9328"></a>
<a id="trace-9330"></a>
- 42.25s–46.25s (×18), actor 5, squad 0 (trace 9131): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 9075. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3146254921883142, 'next_transition': 9149}.
<a id="trace-9338"></a>
- 46.30s–46.30s (×1), actor 1, squad 0 (trace 9338): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120515823799727, 'next_transition': 9342}.
<a id="trace-9342"></a>
<a id="trace-9344"></a>
- 46.75s–46.75s (×2), actor 5, squad 0 (trace 9342): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9232. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-9349"></a>
- 46.75s–46.75s (×1), actor 1, squad 0 (trace 9349): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-9751"></a>
- 46.75s–46.75s (×1), actor 1, squad 0 (trace 9751): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-9752"></a>
- 46.75s–46.75s (×1), actor 1, squad 0 (trace 9752): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-10191"></a>
- 46.75s–46.75s (×1), actor 1, squad 0 (trace 10191): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-10192"></a>
- 46.75s–46.75s (×1), actor 1, squad 0 (trace 10192): Assaulting. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22679287798072015, 'next_transition': 10218}.
<a id="trace-10218"></a>
<a id="trace-10220"></a>
- 47.25s–47.25s (×2), actor 5, squad 0 (trace 10218): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9232. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511985057612821, 'next_transition': 10823}.
<a id="trace-10225"></a>
- 47.25s–47.25s (×1), actor 1, squad 0 (trace 10225): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511985057612821, 'next_transition': 10823}.
<a id="trace-10230"></a>
- 47.25s–47.25s (×1), actor 1, squad 0 (trace 10230): MoveTactically. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511985057612821, 'next_transition': 10823}.
<a id="trace-10231"></a>
- 47.25s–47.25s (×1), actor 1, squad 0 (trace 10231): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511985057612821, 'next_transition': 10823}.
<a id="trace-10823"></a>
<a id="trace-10825"></a>
<a id="trace-10860"></a>
<a id="trace-10862"></a>
<a id="trace-10888"></a>
<a id="trace-10890"></a>
- 47.75s–48.75s (×6), actor 5, squad 0 (trace 10823): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9232. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3580551788268054, 'next_transition': 10860}.
<a id="trace-10895"></a>
- 48.75s–48.75s (×1), actor 1, squad 0 (trace 10895): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 9229. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5377338759737826, 'next_transition': 11493}.
<a id="trace-11493"></a>
<a id="trace-11495"></a>
<a id="trace-11533"></a>
<a id="trace-11535"></a>
<a id="trace-11630"></a>
<a id="trace-11632"></a>
<a id="trace-11667"></a>
<a id="trace-11669"></a>
<a id="trace-11706"></a>
<a id="trace-11708"></a>
- 49.25s–52.25s (×10), actor 5, squad 0 (trace 11493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9232. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3686682891467202, 'next_transition': 11533}.
<a id="trace-11723"></a>
- 53.10s–53.10s (×1), actor 1, squad 0 (trace 11723): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 11555. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03300000000000036, 'next_transition': 11810}.
<a id="trace-11799"></a>
- 53.10s–53.10s (×1), actor 1, squad 0 (trace 11799): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 50.00s, trace 11555. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03300000000000036, 'next_transition': 11810}.
<a id="trace-11810"></a>
<a id="trace-11812"></a>
- 53.25s–53.25s (×2), actor 5, squad 0 (trace 11810): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11558. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13584999999999958, 'next_transition': 11832}.
<a id="trace-11832"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 11832): recovering: retry accepted element corridor in column. Knowledge: actor memory at 50.00s, trace 11555. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15370002635003088, 'next_transition': 11918}.
<a id="trace-11908"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 11908): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 50.00s, trace 11555. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15370002635003088, 'next_transition': 11918}.
<a id="trace-11918"></a>
<a id="trace-11920"></a>
- 54.25s–54.25s (×2), actor 5, squad 0 (trace 11918): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11558. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.005828263034558154, 'next_transition': 11934}.
<a id="trace-11934"></a>
- 54.80s–54.80s (×1), actor 1, squad 0 (trace 11934): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 50.00s, trace 11555. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.003408111647232301, 'next_transition': 12006}.
<a id="trace-12006"></a>
<a id="trace-12008"></a>
<a id="trace-12034"></a>
<a id="trace-12036"></a>
<a id="trace-12057"></a>
<a id="trace-12059"></a>
<a id="trace-12086"></a>
<a id="trace-12088"></a>
- 55.25s–58.25s (×8), actor 5, squad 0 (trace 12006): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 11942. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0054801488346573664, 'next_transition': 12034}.
<a id="trace-788"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (events line 788): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12098"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (trace 12098): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.346209 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 58.35s, trace 12098. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11980775514588957, 'next_transition': 12525}.
<a id="trace-12099"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (trace 12099): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.346209 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 58.35s, trace 12099. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11980775514588957, 'next_transition': 12525}.
<a id="trace-12100"></a>
- 58.35s–58.35s (×1), actor 1, squad 0 (trace 12100): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 11940. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11980775514588957, 'next_transition': 12525}.
<a id="trace-12101"></a>
- 58.35s–58.35s (×1), actor 1, squad 0 (trace 12101): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 11940. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11980775514588957, 'next_transition': 12525}.
<a id="trace-12525"></a>
<a id="trace-12527"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12645"></a>
<a id="trace-12647"></a>
- 59.25s–61.25s (×6), actor 5, squad 0 (trace 12525): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 58.35s, trace 12099. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5423990923126925, 'next_transition': 12613}.
<a id="trace-12663"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 12663): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 12548. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750131443895946, 'next_transition': 12668}.
<a id="trace-12668"></a>
<a id="trace-12670"></a>
<a id="trace-12687"></a>
<a id="trace-12689"></a>
<a id="trace-12717"></a>
<a id="trace-12719"></a>
- 62.25s–64.25s (×6), actor 5, squad 0 (trace 12668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 12550. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874993800394385, 'next_transition': 12687}.
<a id="trace-12734"></a>
- 64.80s–64.80s (×1), actor 1, squad 0 (trace 12734): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 12548. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13185}.
<a id="trace-12735"></a>
- 64.80s–64.80s (×1), actor 1, squad 0 (trace 12735): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 12548. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13185}.
<a id="trace-13185"></a>
<a id="trace-13187"></a>
<a id="trace-13215"></a>
<a id="trace-13217"></a>
- 65.25s–66.25s (×4), actor 5, squad 0 (trace 13185): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13120. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6870903138991377, 'next_transition': 13215}.
<a id="trace-13232"></a>
- 66.60s–66.60s (×1), actor 1, squad 0 (trace 13232): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 65.00s, trace 13118. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.49580963704809605, 'next_transition': 13249}.
<a id="trace-13233"></a>
- 66.60s–66.60s (×1), actor 1, squad 0 (trace 13233): NeedSupport. Knowledge: actor memory at 65.00s, trace 13118. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.49580963704809605, 'next_transition': 13249}.
<a id="trace-13249"></a>
- 67.05s–67.05s (×1), actor 1, squad 0 (trace 13249): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 13118. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000059060763512, 'next_transition': 13515}.
<a id="trace-13252"></a>
- 67.05s–67.05s (×1), actor 1, squad 0 (trace 13252): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 13118. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000059060763512, 'next_transition': 13515}.
<a id="trace-13253"></a>
- 67.05s–67.05s (×1), actor 1, squad 0 (trace 13253): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 13118. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000059060763512, 'next_transition': 13515}.
<a id="trace-13515"></a>
<a id="trace-13517"></a>
<a id="trace-13561"></a>
<a id="trace-13563"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13670"></a>
<a id="trace-13672"></a>
- 67.25s–70.25s (×8), actor 5, squad 0 (trace 13515): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13120. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.006181853296996, 'next_transition': 13561}.
<a id="trace-13538"></a>
- 67.80s–67.80s (×1), actor 9, squad 1 (trace 13538): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 13122. Next observer evidence: None.
<a id="trace-13539"></a>
- 67.80s–67.80s (×1), actor 9, squad 1 (trace 13539): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 13122. Next observer evidence: None.
<a id="trace-13543"></a>
- 67.85s–67.85s (×1), actor 9, squad 1 (trace 13543): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 13122. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13984}.
<a id="trace-13689"></a>
- 70.90s–70.90s (×1), actor 1, squad 0 (trace 13689): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 13610. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13877}.
<a id="trace-13690"></a>
- 70.90s–70.90s (×1), actor 1, squad 0 (trace 13690): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 13610. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13877}.
<a id="trace-13877"></a>
<a id="trace-13879"></a>
<a id="trace-13910"></a>
<a id="trace-13912"></a>
<a id="trace-13934"></a>
<a id="trace-13936"></a>
- 71.25s–73.25s (×6), actor 5, squad 0 (trace 13877): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 13611. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.245894877280237, 'next_transition': 13910}.
<a id="trace-13949"></a>
- 73.50s–73.50s (×1), actor 1, squad 0 (trace 13949): NeedSupport. Knowledge: actor memory at 70.00s, trace 13610. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399920588844214, 'next_transition': 13968}.
<a id="trace-13968"></a>
<a id="trace-13970"></a>
- 74.25s–74.25s (×2), actor 5, squad 0 (trace 13968): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 13611. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.199995272674588, 'next_transition': 14101}.
<a id="trace-13984"></a>
- 74.70s–74.70s (×1), actor 9, squad 1 (trace 13984): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 13613. Next observer evidence: None.
<a id="trace-13985"></a>
- 74.70s–74.70s (×1), actor 9, squad 1 (trace 13985): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 13613. Next observer evidence: None.
<a id="trace-13991"></a>
- 74.75s–74.75s (×1), actor 9, squad 1 (trace 13991): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 70.00s, trace 13613. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14119}.
<a id="trace-14101"></a>
<a id="trace-14103"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
- 78.25s–79.25s (×4), actor 1, squad 0 (trace 14101): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 75.00s, trace 13995. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.575025257733983, 'next_transition': 14130}.
<a id="trace-14119"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 14119): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 13997. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14125}.
<a id="trace-14120"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 14120): MoveTactically. Knowledge: actor memory at 75.00s, trace 13997. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14125}.
<a id="trace-14121"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 14121): . Knowledge: actor memory at 75.00s, trace 13997. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14125}.
<a id="trace-14125"></a>
- 79.00s–79.00s (×1), actor 9, squad 1 (trace 14125): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 13997. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 906}.
<a id="trace-905"></a>
- 80.15s–80.15s (×1), actor 1, squad 0 (events line 905): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-906"></a>
- 80.15s–80.15s (×1), actor 1, squad 1 (events line 906): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14160"></a>
- 80.15s–80.15s (×1), actor 1, squad 0 (trace 14160): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 14160. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315003448393823, 'next_transition': 14209}.
<a id="trace-14161"></a>
- 80.15s–80.15s (×1), actor 1, squad 1 (trace 14161): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 14161. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 913}.
<a id="trace-14209"></a>
<a id="trace-14211"></a>
<a id="trace-14228"></a>
<a id="trace-14230"></a>
<a id="trace-14260"></a>
<a id="trace-14262"></a>
- 80.25s–82.25s (×6), actor 1, squad 0 (trace 14209): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.15s, trace 14161. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3821932073700833, 'next_transition': 14228}.
<a id="trace-913"></a>
- 81.80s–81.80s (×1), actor 1, squad 1 (events line 913): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14242"></a>
- 81.80s–81.80s (×1), actor 1, squad 1 (trace 14242): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.347656 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.80s, trace 14242. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}.
<a id="trace-14243"></a>
- 81.80s–81.80s (×1), actor 1, squad 1 (trace 14243): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.347656 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.80s, trace 14243. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}.
<a id="trace-14244"></a>
- 81.80s–81.80s (×1), actor 9, squad 1 (trace 14244): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 14149. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}.
<a id="trace-14245"></a>
- 81.80s–81.80s (×1), actor 9, squad 1 (trace 14245): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 14149. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}.
<a id="trace-14270"></a>
- 82.65s–82.65s (×1), actor 1, squad 0 (trace 14270): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 81.80s, trace 14243. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14335}.
<a id="trace-14271"></a>
- 82.65s–82.65s (×1), actor 1, squad 0 (trace 14271): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 81.80s, trace 14243. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14335}.
<a id="trace-14335"></a>
<a id="trace-14337"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14504"></a>
<a id="trace-14506"></a>
<a id="trace-14525"></a>
<a id="trace-14527"></a>
<a id="trace-14548"></a>
<a id="trace-14550"></a>
<a id="trace-14578"></a>
<a id="trace-14580"></a>
<a id="trace-14614"></a>
<a id="trace-14616"></a>
<a id="trace-14698"></a>
<a id="trace-14700"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
- 83.25s–92.25s (×20), actor 1, squad 0 (trace 14335): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 81.80s, trace 14243. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087444074029786, 'next_transition': 14421}.
<a id="trace-14351"></a>
- 83.45s–83.45s (×1), actor 9, squad 1 (trace 14351): Withdraw to received rally. Knowledge: actor memory at 80.00s, trace 14149. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 14841}.
<a id="trace-14352"></a>
- 83.45s–83.45s (×1), actor 9, squad 1 (trace 14352): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 14149. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 14841}.
<a id="trace-14758"></a>
- 92.25s–92.25s (×1), actor 1, squad 0 (trace 14758): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 14637. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.697856174293816, 'next_transition': 14787}.
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14821"></a>
<a id="trace-14823"></a>
<a id="trace-14922"></a>
<a id="trace-14924"></a>
- 93.25s–95.25s (×6), actor 1, squad 0 (trace 14787): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 90.00s, trace 14637. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3387414696273525, 'next_transition': 14821}.
<a id="trace-14841"></a>
- 94.70s–94.70s (×1), actor 9, squad 1 (trace 14841): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 14639. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1528}.
<a id="trace-14842"></a>
- 94.70s–94.70s (×1), actor 9, squad 1 (trace 14842): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 14639. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1528}.
<a id="trace-1026"></a>
- 95.95s–95.95s (×1), actor 1, squad 0 (events line 1026): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14949"></a>
- 95.95s–95.95s (×1), actor 1, squad 0 (trace 14949): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369241 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 95.95s, trace 14949. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14968}.
<a id="trace-14950"></a>
- 95.95s–95.95s (×1), actor 1, squad 0 (trace 14950): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369241 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 95.95s, trace 14950. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14968}.
<a id="trace-14968"></a>
<a id="trace-14970"></a>
<a id="trace-14994"></a>
<a id="trace-14996"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
- 96.25s–98.25s (×6), actor 1, squad 0 (trace 14968): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 95.95s, trace 14950. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14994}.
<a id="trace-15025"></a>
- 98.25s–98.25s (×1), actor 1, squad 0 (trace 15025): Withdraw to received rally. Knowledge: actor memory at 95.95s, trace 14950. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39371555722374074, 'next_transition': 15106}.
<a id="trace-15026"></a>
- 98.25s–98.25s (×1), actor 1, squad 0 (trace 15026): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.95s, trace 14950. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39371555722374074, 'next_transition': 15106}.
<a id="trace-15106"></a>
<a id="trace-15189"></a>
<a id="trace-15191"></a>
<a id="trace-15220"></a>
<a id="trace-15222"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
<a id="trace-15286"></a>
<a id="trace-15288"></a>
<a id="trace-15312"></a>
<a id="trace-15314"></a>
<a id="trace-15394"></a>
<a id="trace-15396"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15443"></a>
<a id="trace-15445"></a>
<a id="trace-15474"></a>
<a id="trace-15476"></a>
<a id="trace-15508"></a>
<a id="trace-15510"></a>
- 99.25s–109.25s (×21), actor 1, squad 0 (trace 15106): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 95.95s, trace 14950. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750131150247602, 'next_transition': 15189}.
<a id="trace-15552"></a>
- 110.10s–110.10s (×1), actor 1, squad 0 (trace 15552): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 15538. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15652}.
<a id="trace-15553"></a>
- 110.10s–110.10s (×1), actor 1, squad 0 (trace 15553): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 15538. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15652}.
<a id="trace-15652"></a>
<a id="trace-15654"></a>
<a id="trace-15682"></a>
<a id="trace-15684"></a>
<a id="trace-15706"></a>
<a id="trace-15708"></a>
<a id="trace-15733"></a>
<a id="trace-15735"></a>
<a id="trace-15761"></a>
<a id="trace-15763"></a>
<a id="trace-15849"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-15914"></a>
<a id="trace-15916"></a>
<a id="trace-15938"></a>
<a id="trace-15940"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-16043"></a>
<a id="trace-16045"></a>
<a id="trace-16078"></a>
<a id="trace-16080"></a>
- 110.25s–121.25s (×23), actor 1, squad 0 (trace 15652): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.00s, trace 15538. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15682}.
<a id="trace-16105"></a>
- 122.05s–122.05s (×1), actor 1, squad 0 (trace 16105): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 15982. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16165}.
<a id="trace-16106"></a>
- 122.05s–122.05s (×1), actor 1, squad 0 (trace 16106): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 15982. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16165}.
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16200"></a>
<a id="trace-16202"></a>
<a id="trace-16236"></a>
<a id="trace-16238"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16373"></a>
<a id="trace-16375"></a>
<a id="trace-16400"></a>
<a id="trace-16402"></a>
<a id="trace-16434"></a>
<a id="trace-16436"></a>
<a id="trace-16520"></a>
<a id="trace-16522"></a>
<a id="trace-16547"></a>
<a id="trace-16549"></a>
<a id="trace-16578"></a>
<a id="trace-16580"></a>
<a id="trace-16603"></a>
- 122.25s–133.30s (×23), actor 1, squad 0 (trace 16165): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 120.00s, trace 15982. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087280014222668, 'next_transition': 16200}.
<a id="trace-16612"></a>
- 133.45s–133.45s (×1), actor 1, squad 0 (trace 16612): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 16454. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16687}.
<a id="trace-16613"></a>
- 133.45s–133.45s (×1), actor 1, squad 0 (trace 16613): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 16454. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16687}.
<a id="trace-16687"></a>
<a id="trace-16689"></a>
<a id="trace-16780"></a>
<a id="trace-16782"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16834"></a>
<a id="trace-16866"></a>
<a id="trace-16868"></a>
- 134.30s–138.30s (×9), actor 1, squad 0 (trace 16687): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 16454. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237617752680537, 'next_transition': 16780}.
<a id="trace-16881"></a>
- 139.05s–139.05s (×1), actor 1, squad 0 (trace 16881): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 16710. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31503001841094763, 'next_transition': 16891}.
<a id="trace-16891"></a>
<a id="trace-16893"></a>
<a id="trace-16985"></a>
<a id="trace-16987"></a>
<a id="trace-17014"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
- 139.30s–142.30s (×7), actor 1, squad 0 (trace 16891): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 135.00s, trace 16710. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.417512372080046, 'next_transition': 16985}.
<a id="trace-1527"></a>
- 143.25s–143.25s (×1), actor 1, squad 0 (events line 1527): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1528"></a>
- 143.25s–143.25s (×1), actor 1, squad 1 (events line 1528): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2180}.
<a id="trace-17072"></a>
- 143.25s–143.25s (×1), actor 1, squad 0 (trace 17072): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.822053 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.25s, trace 17072. Next observer evidence: None.
<a id="trace-17073"></a>
- 143.25s–143.25s (×1), actor 1, squad 0 (trace 17073): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.822053 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.25s, trace 17073. Next observer evidence: None.
<a id="trace-17074"></a>
- 143.25s–143.25s (×1), actor 1, squad 1 (trace 17074): renew committed intent (75 s lifetime). Knowledge: actor memory at 143.25s, trace 17074. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2180}.
<a id="trace-17077"></a>
<a id="trace-17079"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
- 143.30s–145.30s (×6), actor 1, squad 0 (trace 17077): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 143.25s, trace 17074. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17103}.
<a id="trace-17203"></a>
- 145.65s–145.65s (×1), actor 1, squad 0 (trace 17203): MoveTactically. Knowledge: actor memory at 145.00s, trace 17128. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17267}.
<a id="trace-17204"></a>
- 145.65s–145.65s (×1), actor 1, squad 0 (trace 17204): received platoon directive. Knowledge: actor memory at 145.00s, trace 17128. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17267}.
<a id="trace-17267"></a>
<a id="trace-17269"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17336"></a>
<a id="trace-17338"></a>
- 146.30s–148.30s (×6), actor 1, squad 0 (trace 17267): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 17128. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087740295750139, 'next_transition': 17300}.
<a id="trace-17357"></a>
- 149.05s–149.05s (×1), actor 1, squad 0 (trace 17357): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 17128. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17362}.
<a id="trace-17362"></a>
- 149.30s–149.30s (×1), actor 1, squad 0 (trace 17362): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 17128. Next observer evidence: {'until': 150, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17399}.
<a id="trace-17399"></a>
- 150.05s–150.05s (×1), actor 1, squad 0 (trace 17399): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 17383. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17507}.
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17567"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17622"></a>
<a id="trace-17624"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
<a id="trace-17737"></a>
<a id="trace-17739"></a>
- 150.30s–156.30s (×13), actor 1, squad 0 (trace 17507): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 150.00s, trace 17383. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087732288962344, 'next_transition': 17531}.
<a id="trace-1683"></a>
- 157.30s–157.30s (×1), actor 1, squad 0 (events line 1683): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9881518114642088, 'next_transition': 17793}.
<a id="trace-17765"></a>
<a id="trace-17767"></a>
- 157.30s–157.30s (×2), actor 1, squad 0 (trace 17765): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 155.00s, trace 17646. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9881518114642088, 'next_transition': 17793}.
<a id="trace-17774"></a>
- 157.30s–157.30s (×1), actor 1, squad 0 (trace 17774): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.30s, trace 17774. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9881518114642088, 'next_transition': 17793}.
<a id="trace-17775"></a>
- 157.30s–157.30s (×1), actor 1, squad 0 (trace 17775): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.30s, trace 17775. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9881518114642088, 'next_transition': 17793}.
<a id="trace-17793"></a>
<a id="trace-17795"></a>
- 158.30s–158.30s (×2), actor 1, squad 0 (trace 17793): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 157.30s, trace 17775. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17824}.
<a id="trace-17824"></a>
- 159.25s–159.25s (×1), actor 1, squad 0 (trace 17824): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 157.30s, trace 17775. Next observer evidence: None.
<a id="trace-17829"></a>
<a id="trace-17831"></a>
- 159.30s–159.30s (×2), actor 1, squad 0 (trace 17829): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 157.30s, trace 17775. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17914}.
<a id="trace-17914"></a>
- 160.25s–160.25s (×1), actor 1, squad 0 (trace 17914): traveling. Knowledge: actor memory at 160.00s, trace 17848. Next observer evidence: None.
<a id="trace-17915"></a>
- 160.25s–160.25s (×1), actor 1, squad 0 (trace 17915): received platoon directive. Knowledge: actor memory at 160.00s, trace 17848. Next observer evidence: None.
<a id="trace-18023"></a>
<a id="trace-18025"></a>
<a id="trace-18051"></a>
<a id="trace-18053"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18127"></a>
<a id="trace-18129"></a>
<a id="trace-18154"></a>
<a id="trace-18156"></a>
<a id="trace-18238"></a>
<a id="trace-18240"></a>
<a id="trace-18274"></a>
<a id="trace-18276"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18339"></a>
<a id="trace-18341"></a>
<a id="trace-18366"></a>
<a id="trace-18368"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
- 160.30s–170.30s (×22), actor 1, squad 0 (trace 18023): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 17848. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937331583699847, 'next_transition': 18051}.
<a id="trace-18463"></a>
- 170.65s–170.65s (×1), actor 1, squad 0 (trace 18463): matching received arrivals: traveling stage complete. Knowledge: actor memory at 170.00s, trace 18389. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450060581816406, 'next_transition': 18582}.
<a id="trace-18582"></a>
<a id="trace-18584"></a>
<a id="trace-18619"></a>
<a id="trace-18621"></a>
<a id="trace-18655"></a>
<a id="trace-18657"></a>
<a id="trace-18689"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18805"></a>
<a id="trace-18807"></a>
<a id="trace-18837"></a>
<a id="trace-18839"></a>
<a id="trace-18865"></a>
<a id="trace-18867"></a>
<a id="trace-18889"></a>
<a id="trace-18891"></a>
- 171.30s–179.30s (×17), actor 1, squad 0 (trace 18582): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 18389. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4830713832217803, 'next_transition': 18619}.
<a id="trace-18980"></a>
- 180.25s–180.25s (×1), actor 1, squad 0 (trace 18980): matching received arrivals: deployment leg complete. Knowledge: actor memory at 180.00s, trace 18912. Next observer evidence: None.
<a id="trace-18983"></a>
<a id="trace-18985"></a>
<a id="trace-19016"></a>
<a id="trace-19018"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19067"></a>
<a id="trace-19069"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
- 180.30s–185.30s (×12), actor 1, squad 0 (trace 18983): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 180.00s, trace 18912. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19016}.
<a id="trace-1979"></a>
- 185.40s–185.40s (×1), actor 1, squad 0 (events line 1979): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19183"></a>
- 185.40s–185.40s (×1), actor 1, squad 0 (trace 19183): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.40s, trace 19183. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19203}.
<a id="trace-19184"></a>
- 185.40s–185.40s (×1), actor 1, squad 0 (trace 19184): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19203}.
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19240"></a>
<a id="trace-19242"></a>
- 186.30s–187.30s (×4), actor 1, squad 0 (trace 19203): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19240}.
<a id="trace-19267"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 19267): Reorganise: completed/failed drill. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: None.
<a id="trace-19270"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 19270): MoveTactically. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: None.
<a id="trace-19271"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 19271): traveling overwatch. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: None.
<a id="trace-19272"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 19272): Reorganise complete. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: None.
<a id="trace-19362"></a>
<a id="trace-19364"></a>
<a id="trace-19391"></a>
<a id="trace-19393"></a>
<a id="trace-19477"></a>
<a id="trace-19479"></a>
<a id="trace-19501"></a>
<a id="trace-19503"></a>
<a id="trace-19530"></a>
<a id="trace-19532"></a>
<a id="trace-19557"></a>
<a id="trace-19559"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19686"></a>
<a id="trace-19688"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
- 188.30s–196.30s (×18), actor 1, squad 0 (trace 19362): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.40s, trace 19184. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19391}.
<a id="trace-19740"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 19740): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 19622. Next observer evidence: None.
<a id="trace-19795"></a>
<a id="trace-19797"></a>
<a id="trace-19825"></a>
<a id="trace-19827"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19933"></a>
<a id="trace-19935"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-20003"></a>
<a id="trace-20024"></a>
<a id="trace-20026"></a>
<a id="trace-20042"></a>
<a id="trace-20044"></a>
- 197.30s–204.30s (×15), actor 1, squad 0 (trace 19795): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 195.00s, trace 19622. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724893755419254, 'next_transition': 19825}.
<a id="trace-20052"></a>
- 204.40s–204.40s (×1), actor 1, squad 0 (trace 20052): ReactToContact: cover and return fire. Knowledge: actor memory at 200.00s, trace 19872. Next observer evidence: {'until': 205, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450021033839026, 'next_transition': 2179}.
<a id="trace-20053"></a>
- 204.40s–204.40s (×1), actor 1, squad 0 (trace 20053): bounding overwatch. Knowledge: actor memory at 200.00s, trace 19872. Next observer evidence: {'until': 205, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450021033839026, 'next_transition': 2179}.
<a id="trace-20054"></a>
- 204.40s–204.40s (×1), actor 1, squad 0 (trace 20054): new contact inside 100 m. Knowledge: actor memory at 200.00s, trace 19872. Next observer evidence: {'until': 205, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450021033839026, 'next_transition': 2179}.
<a id="trace-2179"></a>
- 205.10s–205.10s (×1), actor 1, squad 0 (events line 2179): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2180"></a>
- 205.10s–205.10s (×1), actor 1, squad 1 (events line 2180): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20201"></a>
- 205.10s–205.10s (×1), actor 1, squad 0 (trace 20201): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.036012 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 205.10s, trace 20201. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3142419087661607, 'next_transition': 20256}.
<a id="trace-20202"></a>
- 205.10s–205.10s (×1), actor 1, squad 0 (trace 20202): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.036012 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 205.10s, trace 20202. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3142419087661607, 'next_transition': 20256}.
<a id="trace-20203"></a>
- 205.10s–205.10s (×1), actor 1, squad 1 (trace 20203): renew committed intent (75 s lifetime). Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: {'until': 235, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2655}.
<a id="trace-20256"></a>
<a id="trace-20258"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20297"></a>
<a id="trace-20315"></a>
<a id="trace-20319"></a>
<a id="trace-20321"></a>
<a id="trace-20331"></a>
- 205.30s–207.55s (×9), actor 1, squad 0 (trace 20256): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: {'until': 206.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5749838850048594, 'next_transition': 20284}.
<a id="trace-20345"></a>
- 208.00s–208.00s (×1), actor 1, squad 0 (trace 20345): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: None.
<a id="trace-20349"></a>
<a id="trace-20358"></a>
<a id="trace-20360"></a>
<a id="trace-20369"></a>
- 208.05s–208.55s (×4), actor 1, squad 0 (trace 20349): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149926947168772, 'next_transition': 20358}.
<a id="trace-20376"></a>
- 209.00s–209.00s (×1), actor 1, squad 0 (trace 20376): received platoon directive; retain contact cover stage. Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: None.
<a id="trace-20379"></a>
<a id="trace-20384"></a>
<a id="trace-20386"></a>
<a id="trace-20396"></a>
- 209.05s–209.55s (×4), actor 1, squad 0 (trace 20379): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.10s, trace 20203. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150011072996409, 'next_transition': 20384}.
<a id="trace-20415"></a>
- 210.00s–210.00s (×1), actor 1, squad 0 (trace 20415): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: None.
<a id="trace-20419"></a>
<a id="trace-20468"></a>
<a id="trace-20470"></a>
<a id="trace-20480"></a>
<a id="trace-20490"></a>
<a id="trace-20494"></a>
<a id="trace-20496"></a>
- 210.05s–211.30s (×7), actor 1, squad 0 (trace 20419): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31496478299168656, 'next_transition': 20468}.
<a id="trace-20503"></a>
- 211.30s–211.30s (×1), actor 1, squad 0 (trace 20503): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 211.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20685}.
<a id="trace-20685"></a>
<a id="trace-20697"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20718"></a>
- 211.55s–212.55s (×5), actor 1, squad 0 (trace 20685): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 212, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20697}.
<a id="trace-20719"></a>
- 212.55s–212.55s (×1), actor 1, squad 0 (trace 20719): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 213, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.762668911143623, 'next_transition': 20895}.
<a id="trace-20895"></a>
<a id="trace-20904"></a>
<a id="trace-20906"></a>
- 213.05s–213.30s (×3), actor 1, squad 0 (trace 20895): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20904}.
<a id="trace-2258"></a>
- 213.55s–213.55s (×1), actor 1, squad 0 (events line 2258): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039569674089248, 'next_transition': 20939}.
<a id="trace-20917"></a>
- 213.55s–213.55s (×1), actor 1, squad 0 (trace 20917): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 20403. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039569674089248, 'next_transition': 20939}.
<a id="trace-20918"></a>
- 213.55s–213.55s (×1), actor 1, squad 0 (trace 20918): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.612000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 213.55s, trace 20918. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039569674089248, 'next_transition': 20939}.
<a id="trace-20919"></a>
- 213.55s–213.55s (×1), actor 1, squad 0 (trace 20919): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.612000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 213.55s, trace 20919. Next observer evidence: {'until': 214, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039569674089248, 'next_transition': 20939}.
<a id="trace-20939"></a>
<a id="trace-20947"></a>
<a id="trace-20949"></a>
<a id="trace-20964"></a>
<a id="trace-20993"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21058"></a>
<a id="trace-21068"></a>
<a id="trace-21071"></a>
<a id="trace-21073"></a>
<a id="trace-21083"></a>
- 214.05s–216.55s (×12), actor 1, squad 0 (trace 20939): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 213.55s, trace 20919. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28115426370588764, 'next_transition': 20947}.
<a id="trace-21086"></a>
- 216.70s–216.70s (×1), actor 1, squad 0 (trace 21086): received platoon directive; retain contact cover stage. Knowledge: actor memory at 215.00s, trace 20975. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21095}.
<a id="trace-21095"></a>
<a id="trace-21098"></a>
<a id="trace-21100"></a>
<a id="trace-21111"></a>
- 217.05s–217.55s (×4), actor 1, squad 0 (trace 21095): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 215.00s, trace 20975. Next observer evidence: {'until': 217.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21098}.
<a id="trace-21113"></a>
- 217.70s–217.70s (×1), actor 1, squad 0 (trace 21113): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 215.00s, trace 20975. Next observer evidence: {'until': 218, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4864806187300786, 'next_transition': 21295}.
<a id="trace-21295"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21312"></a>
<a id="trace-21325"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21344"></a>
<a id="trace-21367"></a>
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21429"></a>
<a id="trace-21446"></a>
<a id="trace-21450"></a>
<a id="trace-21452"></a>
<a id="trace-21461"></a>
<a id="trace-21478"></a>
- 218.05s–222.05s (×17), actor 1, squad 0 (trace 21295): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 215.00s, trace 20975. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2496170591626304, 'next_transition': 21300}.
<a id="trace-21486"></a>
- 222.25s–222.25s (×1), actor 1, squad 0 (trace 21486): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: None.
<a id="trace-21491"></a>
<a id="trace-21500"></a>
<a id="trace-21513"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
- 222.30s–223.30s (×5), actor 1, squad 0 (trace 21491): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6145000000000014, 'next_transition': 21500}.
<a id="trace-21528"></a>
- 223.45s–223.45s (×1), actor 1, squad 0 (trace 21528): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: None.
<a id="trace-21532"></a>
- 223.55s–223.55s (×1), actor 1, squad 0 (trace 21532): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31374999999999886, 'next_transition': 21540}.
<a id="trace-21540"></a>
- 223.80s–223.80s (×1), actor 1, squad 0 (trace 21540): new contact inside 100 m. Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: {'until': 224, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000013, 'next_transition': 21721}.
<a id="trace-21721"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21740"></a>
<a id="trace-21767"></a>
<a id="trace-21818"></a>
<a id="trace-21832"></a>
<a id="trace-21844"></a>
<a id="trace-21848"></a>
<a id="trace-21850"></a>
<a id="trace-21859"></a>
<a id="trace-21872"></a>
<a id="trace-21879"></a>
<a id="trace-21891"></a>
- 224.05s–227.55s (×14), actor 1, squad 0 (trace 21721): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 21352. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000013, 'next_transition': 21727}.
<a id="trace-2337"></a>
- 227.60s–227.60s (×1), actor 1, squad 0 (events line 2337): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21892"></a>
- 227.60s–227.60s (×1), actor 1, squad 0 (trace 21892): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.510309 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 227.60s, trace 21892. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13966833427803158, 'next_transition': 21901}.
<a id="trace-21893"></a>
- 227.60s–227.60s (×1), actor 1, squad 0 (trace 21893): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.510309 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 227.60s, trace 21893. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13966833427803158, 'next_transition': 21901}.
<a id="trace-21901"></a>
- 227.85s–227.85s (×1), actor 1, squad 0 (trace 21901): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 227.60s, trace 21893. Next observer evidence: {'until': 228, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14272687457167987, 'next_transition': 21909}.
<a id="trace-21903"></a>
- 227.85s–227.85s (×1), actor 1, squad 0 (trace 21903): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 227.60s, trace 21893. Next observer evidence: {'until': 228, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14272687457167987, 'next_transition': 21909}.
<a id="trace-21909"></a>
<a id="trace-21914"></a>
<a id="trace-21916"></a>
<a id="trace-21928"></a>
<a id="trace-21940"></a>
<a id="trace-21947"></a>
<a id="trace-21949"></a>
<a id="trace-21958"></a>
<a id="trace-21982"></a>
<a id="trace-22030"></a>
<a id="trace-22032"></a>
<a id="trace-22040"></a>
- 228.05s–230.55s (×12), actor 1, squad 0 (trace 21909): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 227.60s, trace 21893. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14579041678039065, 'next_transition': 21914}.
<a id="trace-22047"></a>
- 230.85s–230.85s (×1), actor 1, squad 0 (trace 22047): received platoon directive; retain held slots. Knowledge: actor memory at 230.00s, trace 21967. Next observer evidence: {'until': 231, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18868379527664753, 'next_transition': 22050}.
<a id="trace-22050"></a>
<a id="trace-22054"></a>
<a id="trace-22056"></a>
<a id="trace-22066"></a>
<a id="trace-22077"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22096"></a>
- 231.05s–232.55s (×8), actor 1, squad 0 (trace 22050): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 21967. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19168754289207182, 'next_transition': 22054}.
<a id="trace-22097"></a>
- 232.70s–232.70s (×1), actor 1, squad 0 (trace 22097): NeedSupport. Knowledge: actor memory at 230.00s, trace 21967. Next observer evidence: {'until': 233, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3691928478451325, 'next_transition': 22108}.
<a id="trace-22108"></a>
<a id="trace-22113"></a>
<a id="trace-22115"></a>
<a id="trace-22125"></a>
<a id="trace-22137"></a>
<a id="trace-22139"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
- 233.05s–235.30s (×8), actor 1, squad 0 (trace 22108): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 21967. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22233321064620562, 'next_transition': 22113}.
<a id="trace-2525"></a>
- 236.05s–236.05s (×1), actor 1, squad 0 (events line 2525): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680195347483215, 'next_transition': 22248}.
<a id="trace-22240"></a>
- 236.05s–236.05s (×1), actor 1, squad 0 (trace 22240): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.05s, trace 22240. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680195347483215, 'next_transition': 22248}.
<a id="trace-22241"></a>
- 236.05s–236.05s (×1), actor 1, squad 0 (trace 22241): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680195347483215, 'next_transition': 22248}.
<a id="trace-22248"></a>
<a id="trace-22250"></a>
<a id="trace-22278"></a>
<a id="trace-22280"></a>
- 236.30s–237.30s (×4), actor 1, squad 0 (trace 22248): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9482164639469196, 'next_transition': 22278}.
<a id="trace-22296"></a>
- 238.15s–238.15s (×1), actor 1, squad 0 (trace 22296): MoveTactically. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22355}.
<a id="trace-22297"></a>
- 238.15s–238.15s (×1), actor 1, squad 0 (trace 22297): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22355}.
<a id="trace-22355"></a>
<a id="trace-22357"></a>
- 238.30s–238.30s (×2), actor 1, squad 0 (trace 22355): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 238.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22364}.
<a id="trace-22364"></a>
- 238.40s–238.40s (×1), actor 1, squad 0 (trace 22364): received platoon directive. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340007451496681, 'next_transition': 22432}.
<a id="trace-22432"></a>
<a id="trace-22434"></a>
<a id="trace-22511"></a>
<a id="trace-22513"></a>
<a id="trace-22540"></a>
- 239.30s–241.30s (×5), actor 1, squad 0 (trace 22432): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 236.05s, trace 22241. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0820713190913065, 'next_transition': 22511}.
<a id="trace-22552"></a>
- 241.50s–241.50s (×1), actor 1, squad 0 (trace 22552): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 241.50s, trace 22552. Next observer evidence: {'until': 242, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6692210285100127, 'next_transition': 22562}.
<a id="trace-22562"></a>
- 242.05s–242.05s (×1), actor 1, squad 0 (trace 22562): ReactToContact: cover and return fire. Knowledge: actor memory at 241.50s, trace 22552. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20681191938570614, 'next_transition': 22742}.
<a id="trace-22563"></a>
- 242.05s–242.05s (×1), actor 1, squad 0 (trace 22563): new contact inside 100 m. Knowledge: actor memory at 241.50s, trace 22552. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20681191938570614, 'next_transition': 22742}.
<a id="trace-22742"></a>
<a id="trace-22744"></a>
<a id="trace-22774"></a>
<a id="trace-22776"></a>
<a id="trace-22794"></a>
<a id="trace-22796"></a>
- 242.30s–244.30s (×6), actor 1, squad 0 (trace 22742): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 241.50s, trace 22552. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.968233001399974, 'next_transition': 22774}.
<a id="trace-22803"></a>
- 244.30s–244.30s (×1), actor 1, squad 0 (trace 22803): new contact inside 100 m. Knowledge: actor memory at 241.50s, trace 22552. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6620083175459351, 'next_transition': 23038}.
<a id="trace-23038"></a>
<a id="trace-23040"></a>
- 245.30s–245.30s (×2), actor 1, squad 0 (trace 23038): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 245.00s, trace 22977. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.07019633181299459, 'next_transition': 23099}.
<a id="trace-23099"></a>
- 248.35s–248.35s (×1), actor 7, squad 0 (trace 23099): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 245.00s, trace 22978. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23277}.
<a id="trace-23277"></a>
<a id="trace-23279"></a>
<a id="trace-23369"></a>
- 249.30s–250.30s (×3), actor 7, squad 0 (trace 23277): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 245.00s, trace 22978. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23369}.
<a id="trace-2654"></a>
- 250.90s–250.90s (×1), actor 7, squad 0 (events line 2654): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2655"></a>
- 250.90s–250.90s (×1), actor 7, squad 1 (events line 2655): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23383"></a>
- 250.90s–250.90s (×1), actor 7, squad 0 (trace 23383): renew committed intent (75 s lifetime). Knowledge: actor memory at 250.90s, trace 23383. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23389}.
<a id="trace-23384"></a>
- 250.90s–250.90s (×1), actor 7, squad 1 (trace 23384): renew committed intent (75 s lifetime). Knowledge: actor memory at 250.90s, trace 23384. Next observer evidence: {'until': 280.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3115}.
<a id="trace-23389"></a>
<a id="trace-23391"></a>
- 251.30s–251.30s (×2), actor 7, squad 0 (trace 23389): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 250.90s, trace 23384. Next observer evidence: {'until': 251.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23397}.
<a id="trace-23397"></a>
- 251.70s–251.70s (×1), actor 7, squad 0 (trace 23397): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 250.90s, trace 23384. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23409}.
<a id="trace-23409"></a>
<a id="trace-23426"></a>
<a id="trace-23443"></a>
<a id="trace-23445"></a>
<a id="trace-23520"></a>
<a id="trace-23522"></a>
- 252.30s–255.30s (×6), actor 7, squad 0 (trace 23409): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 250.90s, trace 23384. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23426}.
<a id="trace-23530"></a>
- 255.50s–255.50s (×1), actor 7, squad 0 (trace 23530): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 255.00s, trace 23459. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23541}.
<a id="trace-23541"></a>
<a id="trace-23543"></a>
- 256.30s–256.30s (×2), actor 7, squad 0 (trace 23541): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 255.00s, trace 23459. Next observer evidence: {'until': 256.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2670}.
<a id="trace-2670"></a>
- 256.55s–256.55s (×1), actor 7, squad 0 (events line 2670): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23552"></a>
- 256.55s–256.55s (×1), actor 7, squad 0 (trace 23552): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340567 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 256.55s, trace 23552. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23553"></a>
- 256.55s–256.55s (×1), actor 7, squad 0 (trace 23553): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340567 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 256.55s, trace 23553. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23571"></a>
<a id="trace-23573"></a>
- 257.30s–257.30s (×2), actor 7, squad 0 (trace 23571): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 256.55s, trace 23553. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23591}.
<a id="trace-23591"></a>
- 258.25s–258.25s (×1), actor 7, squad 0 (trace 23591): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 256.55s, trace 23553. Next observer evidence: None.
<a id="trace-23592"></a>
- 258.25s–258.25s (×1), actor 7, squad 0 (trace 23592): rearward bound: one stationary suppressing element. Knowledge: actor memory at 256.55s, trace 23553. Next observer evidence: None.
<a id="trace-23638"></a>
<a id="trace-23640"></a>
<a id="trace-23661"></a>
<a id="trace-23663"></a>
<a id="trace-23739"></a>
<a id="trace-23741"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23787"></a>
<a id="trace-23789"></a>
<a id="trace-23809"></a>
<a id="trace-23811"></a>
<a id="trace-23842"></a>
<a id="trace-23844"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23936"></a>
<a id="trace-23938"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24089"></a>
<a id="trace-24091"></a>
<a id="trace-24120"></a>
<a id="trace-24122"></a>
<a id="trace-24141"></a>
<a id="trace-24143"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24264"></a>
<a id="trace-24266"></a>
<a id="trace-24292"></a>
<a id="trace-24294"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
- 258.30s–278.30s (×42), actor 7, squad 0 (trace 23638): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 256.55s, trace 23553. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23661}.
<a id="trace-24346"></a>
- 278.30s–278.30s (×1), actor 7, squad 0 (trace 24346): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 275.00s, trace 24206. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24371}.
<a id="trace-24371"></a>
<a id="trace-24373"></a>
<a id="trace-24459"></a>
<a id="trace-24461"></a>
<a id="trace-24478"></a>
<a id="trace-24480"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24545"></a>
<a id="trace-24547"></a>
<a id="trace-24634"></a>
<a id="trace-24636"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
- 279.30s–286.30s (×16), actor 7, squad 0 (trace 24371): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 275.00s, trace 24206. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24459}.
<a id="trace-2909"></a>
- 286.50s–286.50s (×1), actor 7, squad 0 (events line 2909): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}.
<a id="trace-24666"></a>
- 286.50s–286.50s (×1), actor 7, squad 0 (trace 24666): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380775 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 286.50s, trace 24666. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}.
<a id="trace-24667"></a>
- 286.50s–286.50s (×1), actor 7, squad 0 (trace 24667): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380775 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 286.50s, trace 24667. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}.
<a id="trace-24685"></a>
<a id="trace-24687"></a>
- 287.30s–287.30s (×2), actor 7, squad 0 (trace 24685): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 286.50s, trace 24667. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24705}.
<a id="trace-24705"></a>
- 288.20s–288.20s (×1), actor 7, squad 0 (trace 24705): Withdraw to received rally. Knowledge: actor memory at 286.50s, trace 24667. Next observer evidence: None.
<a id="trace-24706"></a>
- 288.20s–288.20s (×1), actor 7, squad 0 (trace 24706): rearward bound: one stationary suppressing element. Knowledge: actor memory at 286.50s, trace 24667. Next observer evidence: None.
<a id="trace-24752"></a>
<a id="trace-24754"></a>
<a id="trace-24780"></a>
<a id="trace-24782"></a>
<a id="trace-24861"></a>
<a id="trace-24863"></a>
<a id="trace-24885"></a>
<a id="trace-24887"></a>
<a id="trace-24919"></a>
<a id="trace-24921"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-25048"></a>
<a id="trace-25050"></a>
<a id="trace-25068"></a>
<a id="trace-25070"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25118"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25232"></a>
<a id="trace-25234"></a>
<a id="trace-25252"></a>
<a id="trace-25254"></a>
<a id="trace-25270"></a>
<a id="trace-25272"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25316"></a>
<a id="trace-25318"></a>
<a id="trace-25397"></a>
<a id="trace-25399"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25456"></a>
<a id="trace-25458"></a>
<a id="trace-25475"></a>
<a id="trace-25477"></a>
<a id="trace-25497"></a>
<a id="trace-25499"></a>
<a id="trace-25578"></a>
<a id="trace-25580"></a>
<a id="trace-25598"></a>
<a id="trace-25600"></a>
<a id="trace-25626"></a>
<a id="trace-25628"></a>
<a id="trace-25661"></a>
<a id="trace-25663"></a>
<a id="trace-25681"></a>
<a id="trace-25683"></a>
<a id="trace-25761"></a>
<a id="trace-25763"></a>
<a id="trace-25786"></a>
<a id="trace-25788"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25833"></a>
<a id="trace-25835"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25940"></a>
<a id="trace-25942"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26010"></a>
<a id="trace-26012"></a>
<a id="trace-26034"></a>
<a id="trace-26036"></a>
<a id="trace-26112"></a>
<a id="trace-26114"></a>
<a id="trace-26134"></a>
<a id="trace-26136"></a>
<a id="trace-26168"></a>
<a id="trace-26170"></a>
<a id="trace-26190"></a>
<a id="trace-26192"></a>
<a id="trace-26213"></a>
<a id="trace-26215"></a>
<a id="trace-26292"></a>
<a id="trace-26294"></a>
<a id="trace-26313"></a>
<a id="trace-26315"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26366"></a>
<a id="trace-26368"></a>
<a id="trace-26397"></a>
<a id="trace-26399"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26496"></a>
<a id="trace-26498"></a>
<a id="trace-26520"></a>
<a id="trace-26536"></a>
<a id="trace-26538"></a>
<a id="trace-26563"></a>
<a id="trace-26565"></a>
<a id="trace-26645"></a>
<a id="trace-26647"></a>
<a id="trace-26672"></a>
<a id="trace-26674"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
<a id="trace-26722"></a>
<a id="trace-26724"></a>
<a id="trace-26741"></a>
<a id="trace-26743"></a>
<a id="trace-26822"></a>
<a id="trace-26824"></a>
<a id="trace-26851"></a>
<a id="trace-26853"></a>
<a id="trace-26875"></a>
<a id="trace-26877"></a>
<a id="trace-26904"></a>
<a id="trace-26906"></a>
- 288.30s–348.30s (×120), actor 7, squad 0 (trace 24752): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 286.50s, trace 24667. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24780}.
<a id="trace-3115"></a>
- 311.70s–311.70s (×1), actor 7, squad 1 (events line 3115): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25613"></a>
- 311.70s–311.70s (×1), actor 7, squad 1 (trace 25613): renew committed intent (75 s lifetime). Knowledge: actor memory at 311.70s, trace 25613. Next observer evidence: {'until': 341.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-3428"></a>
- 349.20s–349.20s (×1), actor 7, squad 0 (events line 3428): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26922"></a>
- 349.20s–349.20s (×1), actor 7, squad 0 (trace 26922): renew committed intent (75 s lifetime). Knowledge: actor memory at 349.20s, trace 26922. Next observer evidence: None.
<a id="trace-26928"></a>
<a id="trace-26930"></a>
<a id="trace-27005"></a>
<a id="trace-27007"></a>
<a id="trace-27030"></a>
<a id="trace-27032"></a>
<a id="trace-27056"></a>
<a id="trace-27058"></a>
<a id="trace-27083"></a>
<a id="trace-27085"></a>
<a id="trace-27104"></a>
<a id="trace-27106"></a>
<a id="trace-27191"></a>
<a id="trace-27193"></a>
<a id="trace-27211"></a>
<a id="trace-27213"></a>
<a id="trace-27234"></a>
<a id="trace-27236"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27277"></a>
<a id="trace-27279"></a>
- 349.30s–359.30s (×22), actor 7, squad 0 (trace 26928): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 349.20s, trace 26922. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27005}.

## Net delivery

188 matched order/radio deliveries; 514 explicitly recorded losses; 6 unmatched orders (not classified as lost).
Matched delay: mean 0.437s; maximum 2.300s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2360: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2362: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2365: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2369: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4217: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4218: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4219: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4220: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4305: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4308: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4310: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4311: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4314: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4315: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4316: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4317: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4318: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4319: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4320: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4321: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4322: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4323: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5494: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5495: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5497: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5499: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5500: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5503: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5504: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5505: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5506: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5507: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5508: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5509: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5510: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5511: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5512: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5835: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5836: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5839: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5840: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5843: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5844: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5845: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5846: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5847: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5848: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5849: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5850: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5851: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5852: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5996: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8130: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8133: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8134: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8136: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8137: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8138: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8139: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8140: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8141: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8142: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8143: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8144: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8145: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8146: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 36.80s leader 5, trace 8258: estimate 12.16; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8965: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8966: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8968: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8969: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8971: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8972: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8973: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8974: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8975: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8976: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8977: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8978: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8979: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8980: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8981: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 9074: estimate 12.02; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 9075: estimate 12.02; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9229: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9230: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9232: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9233: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9235: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9236: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9237: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9238: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9239: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9240: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9241: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9242: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9243: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9244: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9245: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11555: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11556: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11558: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11559: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11561: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11562: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11563: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11564: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11565: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11566: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11567: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11568: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11569: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11570: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11571: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11940: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11942: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11944: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11945: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11946: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11947: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11948: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11949: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11950: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11951: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11952: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11953: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 58.35s leader 5, trace 12098: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 58.35s leader 5, trace 12099: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 12548: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12550: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 12551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 12552: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12553: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12554: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12555: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12556: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12557: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12558: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12559: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12560: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12561: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13118: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13119: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13120: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13122: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13123: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13124: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13125: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13126: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13127: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13128: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13129: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13130: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13131: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13610: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13611: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 13613: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13614: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13615: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13616: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13617: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13618: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13619: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13620: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13621: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13622: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13995: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13997: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13998: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13999: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14000: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14001: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14002: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14003: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14004: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14005: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14006: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14147: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14149: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14150: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14151: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14152: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14153: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14154: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14155: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14156: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14157: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14158: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 1, trace 14160: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 1, trace 14161: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 1, trace 14242: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 1, trace 14243: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14444: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14446: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14447: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14448: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14449: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14450: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14451: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14452: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14453: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14454: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14455: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14637: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14639: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14640: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14641: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14642: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14643: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14644: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14645: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14646: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14647: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14648: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14861: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14863: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14864: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14865: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14866: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14867: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14868: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14869: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14870: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14871: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14872: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.95s leader 1, trace 14949: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.95s leader 1, trace 14950: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15127: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15129: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15130: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15131: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15132: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15133: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15134: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15135: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15136: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15137: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15138: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15332: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15334: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15335: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15336: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15337: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15338: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15339: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15340: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15341: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15342: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15343: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15538: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15540: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15541: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15542: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15543: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15544: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15545: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15546: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15547: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15548: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15549: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 15784: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 15785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15786: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15787: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15788: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15789: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15790: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15791: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15792: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15793: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15794: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15795: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 15982: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 15983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 15984: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15985: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15986: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15987: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15988: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15989: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15990: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15991: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15992: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15993: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16260: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16262: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16263: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16264: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16265: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16266: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16267: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16268: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16269: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16270: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16271: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16454: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16456: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16457: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16458: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16459: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16460: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16461: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16462: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16463: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16464: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16465: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 16710: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 16711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16712: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16713: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16714: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16715: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16716: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16717: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16718: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16719: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16720: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16721: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 16917: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 16918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16919: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16920: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16921: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16922: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16923: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16924: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16925: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16926: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16927: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16928: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.25s leader 1, trace 17072: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.25s leader 1, trace 17073: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.25s leader 1, trace 17074: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17128: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17130: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17131: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17132: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17133: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17134: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17135: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17136: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17137: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17138: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17139: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 17383: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 17384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17385: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17386: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17387: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17388: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17389: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17390: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17391: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17392: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17393: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17394: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 17646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17649: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17650: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17651: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17652: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17653: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17654: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17655: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17656: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17657: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.30s leader 1, trace 17774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.30s leader 1, trace 17775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17851: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17852: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17853: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17854: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17855: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17856: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17857: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17858: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17859: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18178: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18179: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18180: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18181: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18182: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18183: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18184: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18185: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18186: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18392: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18396: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18397: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18398: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 18717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18719: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18723: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18724: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18725: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 18912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 18913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 19111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 19112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 19113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.40s leader 1, trace 19183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.40s leader 1, trace 19184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 19415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 20186: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20187: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20191: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20193: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20194: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.10s leader 1, trace 20201: estimate 2.90; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.10s leader 1, trace 20202: estimate 2.90; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.10s leader 1, trace 20203: estimate 2.90; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 20403: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 20404: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20405: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20406: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20407: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20408: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20410: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20411: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 213.55s leader 1, trace 20918: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 213.55s leader 1, trace 20919: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 20975: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 20976: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20977: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20978: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20979: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20980: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20982: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20983: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20984: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 21352: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 21353: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 21354: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 21355: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 21356: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 21357: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 21358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 21359: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 21360: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 21361: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 21362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 21363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 21748: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 21749: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 21750: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 21751: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 21752: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 21753: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 21754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 21755: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 21756: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 21757: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 21758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 21759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 227.60s leader 1, trace 21892: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 227.60s leader 1, trace 21893: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 21967: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 21968: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21969: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 21970: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 21971: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21972: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21974: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21975: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21976: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 22156: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 22157: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 22158: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22159: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22160: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22161: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22163: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22164: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22165: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.05s leader 1, trace 22240: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.05s leader 1, trace 22241: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 22451: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 22452: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 22453: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 22454: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 22455: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22456: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22458: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22459: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22460: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.50s leader 1, trace 22552: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 22977: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 22978: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 22979: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 22980: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 22981: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 22982: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 22983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 22984: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 22985: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 22986: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 22987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 22988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23309: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23310: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23311: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23312: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23313: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23315: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23316: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23317: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.90s leader 7, trace 23383: estimate 5.99; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.90s leader 7, trace 23384: estimate 5.99; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 23459: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 23460: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23461: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 23462: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23463: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23465: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23466: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23467: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 256.55s leader 7, trace 23552: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 256.55s leader 7, trace 23553: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 23681: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 23682: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23683: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 23684: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23685: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23687: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23688: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23689: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 23857: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 23858: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 23859: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 23860: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23861: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 23863: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23864: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23865: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24027: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24028: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24029: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24030: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24031: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24033: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24034: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24035: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 24206: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24207: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24208: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24209: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24210: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24212: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24213: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24214: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 24393: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 24394: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24395: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24396: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24397: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24399: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24400: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24401: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 24565: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 24566: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24567: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 24568: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24569: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24571: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24572: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24573: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 286.50s leader 7, trace 24666: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 286.50s leader 7, trace 24667: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 24801: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 24802: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 24803: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 24804: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 24805: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 24806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 24807: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 24808: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 24809: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 24810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 24811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 24986: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 24987: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 24988: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 24989: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 24990: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 24991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 24992: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 24993: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 24994: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 24995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 24996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25165: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25166: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25167: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25168: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25169: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25171: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25172: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25173: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 25336: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25337: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25338: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25339: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25340: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25342: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25343: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25344: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 25516: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 25517: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25518: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 25519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25520: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25522: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25523: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25524: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 311.70s leader 7, trace 25613: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 25699: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 25700: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25701: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 25702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25703: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25705: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25706: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25707: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 25708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 25882: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 25883: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 25884: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 25885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 25886: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 25887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 25888: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 25889: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 25890: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 25891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 25892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 26051: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26052: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26053: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26055: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26057: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26058: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26059: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 26229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 26230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26231: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26233: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26235: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26236: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26237: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 26414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 26415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26416: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26418: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26420: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26421: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26422: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 26585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 26586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26587: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26589: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26591: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26592: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26593: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 26762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 26763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 26764: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 26765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 26766: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 26767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 26768: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 26769: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 26770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 26771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 26772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 349.20s leader 7, trace 26922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 26947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 26948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 26949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 26950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 26951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 26952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 26953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 26954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 26955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 26956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 26957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 27126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 27300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 27301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Ash killed in action
- 1: Vale incapacitated
- 1: Moss incapacitated
- 1: Soren killed in action
- 1: Voss killed in action
- 1: Tern incapacitated
- 1: Iven killed in action
- 1: Rook killed in action

## Outcome attribution

- 54.80s, evidence 11934: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.003408111647232301, 'next_transition': 12006}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 81.80s, evidence 913: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 81.80s, evidence 14242: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.347656 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 81.80s, evidence 14243: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.347656 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14351}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 95.95s, evidence 1026: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 95.95s, evidence 14949: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369241 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14968}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 95.95s, evidence 14950: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369241 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14968}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 143.25s, evidence 1528: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2180}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 205.10s, evidence 2180: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 250.90s, evidence 2655: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 286.50s, evidence 2909: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 286.50s, evidence 24666: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380775 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 286.50s, evidence 24667: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380775 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24685}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 311.70s, evidence 3115: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 349.20s, evidence 3428: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
