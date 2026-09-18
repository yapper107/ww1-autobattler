# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/107/good-ember/battle-107-1789674013286409504`

## Battle summary

**Ember** · 360 s · 321 shots.

### Turning points

- 18.8s, squad 4: contact (events line 238). First recorded contact.
- 23.9s, squad 0: withdrawal ([trace 5500](#trace-5500)). 55.8s, squad 0: took cover and returned fire.
- 42.0s, squad 1: help call ([trace 10277](#trace-10277)). No completion observed before termination.
- 42.2s, squad 0: help call ([trace 10287](#trace-10287)). No completion observed before termination.
- 51.0s, squad 1: assault ([trace 11881](#trace-11881)). 59.2s, squad 1: new assault-element casualty.
- 60.0s, squad 0: withdrawal ([trace 12895](#trace-12895)). 81.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 175.4s, squad 0: assault ([trace 18812](#trace-18812)). 176.1s, squad 0: advanced tactically.
- 225.4s, squad 0: withdrawal ([trace 22247](#trace-22247)). 243.8s, squad 0: took cover and returned fire.
- 242.8s, squad 0: help call ([trace 23457](#trace-23457)). No completion observed before termination.
- 247.4s, squad 0: withdrawal ([trace 23804](#trace-23804)). 280.0s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 20 shots, 7/8 lost.
- **1** — FightHere; chose prepared a base of fire, new assault-element casualty and 2 further drill types; no completed objective recorded; 5 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 206 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 90 shots, 1/4 lost.

### Decisions and attribution

At 51.0s, squad 1 chose prepared a base of fire ([trace 11467](#trace-11467)), followed by 2 shots and 2 own casualties; estimate 15.2 against 0 distinct squad-reported contacts; At 60.6s, squad 1 chose took cover and returned fire ([trace 12976](#trace-12976)), followed by 0 shots and 1 own casualties; estimate 12.1 against 0 distinct squad-reported contacts; At 19.4s, squad 0 chose took cover and returned fire ([trace 2765](#trace-2765)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1432](#trace-1432)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1455}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1434](#trace-1434)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09009896187664988, 'next_transition': 1764}.

### Communication

275 matched deliveries (mean 0.55s, max 5.45s); 217 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.75s, squad 4, contact, evidence events line 238: First recorded contact; .
- 23.85s, squad 0, withdrawal, evidence 5500: BreakContact: believed ratio at least two without superiority; 55.8s, squad 0: took cover and returned fire.
- 42.00s, squad 1, help call, evidence 10277: NeedSupport; No completion observed before termination.
- 42.15s, squad 0, help call, evidence 10287: NeedSupport; No completion observed before termination.
- 51.00s, squad 1, assault, evidence 11881: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 59.2s, squad 1: new assault-element casualty.
- 60.05s, squad 0, withdrawal, evidence 12895: BreakContact: believed ratio at least two without superiority; 81.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 175.45s, squad 0, assault, evidence 18812: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 176.1s, squad 0: advanced tactically.
- 225.45s, squad 0, withdrawal, evidence 22247: BreakContact: believed ratio at least two without superiority; 243.8s, squad 0: took cover and returned fire.
- 242.80s, squad 0, help call, evidence 23457: NeedSupport; No completion observed before termination.
- 247.45s, squad 0, withdrawal, evidence 23804: BreakContact: believed ratio at least two without superiority; 280.0s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.946130154027614, 'next_transition': 983}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.946130154027614, 'next_transition': 983}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.946130154027614, 'next_transition': 983}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266050873319184, 'next_transition': 152}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266050873319184, 'next_transition': 152}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266050873319184, 'next_transition': 152}.
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
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-987"></a>
<a id="trace-989"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1059"></a>
<a id="trace-1061"></a>
<a id="trace-1083"></a>
<a id="trace-1085"></a>
<a id="trace-1117"></a>
<a id="trace-1119"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1190"></a>
<a id="trace-1192"></a>
<a id="trace-1212"></a>
<a id="trace-1214"></a>
<a id="trace-1232"></a>
<a id="trace-1234"></a>
<a id="trace-1324"></a>
<a id="trace-1326"></a>
<a id="trace-1344"></a>
<a id="trace-1346"></a>
<a id="trace-1366"></a>
<a id="trace-1368"></a>
<a id="trace-1394"></a>
<a id="trace-1396"></a>
<a id="trace-1429"></a>
<a id="trace-1431"></a>
<a id="trace-1459"></a>
<a id="trace-1461"></a>
<a id="trace-1732"></a>
<a id="trace-1734"></a>
<a id="trace-1760"></a>
<a id="trace-1762"></a>
<a id="trace-2089"></a>
<a id="trace-2091"></a>
<a id="trace-2115"></a>
<a id="trace-2117"></a>
<a id="trace-2206"></a>
<a id="trace-2208"></a>
<a id="trace-2246"></a>
<a id="trace-2248"></a>
<a id="trace-2275"></a>
<a id="trace-2277"></a>
<a id="trace-2302"></a>
<a id="trace-2304"></a>
<a id="trace-2313"></a>
<a id="trace-2315"></a>
<a id="trace-2669"></a>
<a id="trace-2671"></a>
<a id="trace-2696"></a>
<a id="trace-2698"></a>
<a id="trace-2720"></a>
<a id="trace-2722"></a>
<a id="trace-2759"></a>
<a id="trace-2761"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-4088"></a>
<a id="trace-4090"></a>
<a id="trace-5077"></a>
<a id="trace-5079"></a>
<a id="trace-5144"></a>
<a id="trace-5146"></a>
<a id="trace-5218"></a>
<a id="trace-5220"></a>
<a id="trace-5284"></a>
<a id="trace-5286"></a>
<a id="trace-5355"></a>
<a id="trace-5357"></a>
<a id="trace-5437"></a>
<a id="trace-5439"></a>
<a id="trace-5492"></a>
<a id="trace-5494"></a>
<a id="trace-5940"></a>
<a id="trace-5942"></a>
<a id="trace-5972"></a>
<a id="trace-5974"></a>
<a id="trace-6073"></a>
<a id="trace-6075"></a>
<a id="trace-6096"></a>
<a id="trace-6098"></a>
<a id="trace-6122"></a>
<a id="trace-6124"></a>
<a id="trace-6156"></a>
<a id="trace-6158"></a>
<a id="trace-6416"></a>
<a id="trace-6418"></a>
<a id="trace-6671"></a>
<a id="trace-6673"></a>
<a id="trace-6720"></a>
<a id="trace-6722"></a>
<a id="trace-6960"></a>
<a id="trace-6962"></a>
<a id="trace-7002"></a>
<a id="trace-7004"></a>
<a id="trace-7044"></a>
<a id="trace-7046"></a>
<a id="trace-7157"></a>
<a id="trace-7159"></a>
<a id="trace-7186"></a>
<a id="trace-7188"></a>
<a id="trace-7218"></a>
<a id="trace-7220"></a>
<a id="trace-7240"></a>
<a id="trace-7242"></a>
<a id="trace-7269"></a>
<a id="trace-7271"></a>
<a id="trace-7301"></a>
<a id="trace-7303"></a>
<a id="trace-9480"></a>
<a id="trace-9482"></a>
<a id="trace-9506"></a>
<a id="trace-9508"></a>
<a id="trace-9543"></a>
<a id="trace-9545"></a>
<a id="trace-9557"></a>
<a id="trace-9559"></a>
<a id="trace-9646"></a>
<a id="trace-9648"></a>
<a id="trace-9671"></a>
<a id="trace-9673"></a>
<a id="trace-9698"></a>
<a id="trace-9700"></a>
<a id="trace-9727"></a>
<a id="trace-9729"></a>
<a id="trace-9763"></a>
<a id="trace-9765"></a>
<a id="trace-9795"></a>
<a id="trace-9797"></a>
<a id="trace-9957"></a>
<a id="trace-9959"></a>
<a id="trace-10002"></a>
<a id="trace-10004"></a>
<a id="trace-10061"></a>
<a id="trace-10063"></a>
<a id="trace-10098"></a>
<a id="trace-10100"></a>
<a id="trace-10196"></a>
<a id="trace-10198"></a>
<a id="trace-10216"></a>
<a id="trace-10218"></a>
<a id="trace-10251"></a>
<a id="trace-10253"></a>
<a id="trace-10267"></a>
<a id="trace-10269"></a>
<a id="trace-10306"></a>
<a id="trace-10308"></a>
<a id="trace-10321"></a>
<a id="trace-10323"></a>
<a id="trace-10342"></a>
<a id="trace-10344"></a>
<a id="trace-10355"></a>
<a id="trace-10357"></a>
<a id="trace-10397"></a>
<a id="trace-10399"></a>
<a id="trace-10421"></a>
<a id="trace-10423"></a>
<a id="trace-10878"></a>
<a id="trace-10880"></a>
<a id="trace-10910"></a>
<a id="trace-10912"></a>
<a id="trace-10941"></a>
<a id="trace-10943"></a>
<a id="trace-10969"></a>
<a id="trace-10971"></a>
<a id="trace-10997"></a>
<a id="trace-10999"></a>
<a id="trace-11016"></a>
<a id="trace-11018"></a>
<a id="trace-11041"></a>
<a id="trace-11043"></a>
<a id="trace-11059"></a>
<a id="trace-11061"></a>
<a id="trace-11084"></a>
<a id="trace-11086"></a>
<a id="trace-11100"></a>
<a id="trace-11102"></a>
<a id="trace-11184"></a>
<a id="trace-11186"></a>
<a id="trace-11461"></a>
<a id="trace-11463"></a>
<a id="trace-12114"></a>
<a id="trace-12116"></a>
<a id="trace-12143"></a>
<a id="trace-12145"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12216"></a>
<a id="trace-12218"></a>
<a id="trace-12253"></a>
<a id="trace-12255"></a>
<a id="trace-12279"></a>
<a id="trace-12281"></a>
<a id="trace-12310"></a>
<a id="trace-12312"></a>
<a id="trace-12334"></a>
<a id="trace-12336"></a>
<a id="trace-12419"></a>
<a id="trace-12421"></a>
<a id="trace-12435"></a>
<a id="trace-12437"></a>
<a id="trace-12489"></a>
<a id="trace-12491"></a>
<a id="trace-12516"></a>
<a id="trace-12518"></a>
<a id="trace-12552"></a>
<a id="trace-12554"></a>
<a id="trace-12568"></a>
<a id="trace-12570"></a>
<a id="trace-12596"></a>
<a id="trace-12598"></a>
<a id="trace-12617"></a>
<a id="trace-12619"></a>
<a id="trace-12847"></a>
<a id="trace-12849"></a>
<a id="trace-12860"></a>
<a id="trace-12862"></a>
<a id="trace-12960"></a>
<a id="trace-12962"></a>
<a id="trace-13113"></a>
<a id="trace-13115"></a>
<a id="trace-13151"></a>
<a id="trace-13153"></a>
<a id="trace-13175"></a>
<a id="trace-13177"></a>
<a id="trace-13201"></a>
<a id="trace-13203"></a>
<a id="trace-13225"></a>
<a id="trace-13227"></a>
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13280"></a>
<a id="trace-13282"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13369"></a>
<a id="trace-13371"></a>
<a id="trace-13378"></a>
<a id="trace-13380"></a>
<a id="trace-13401"></a>
<a id="trace-13403"></a>
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13424"></a>
<a id="trace-13426"></a>
<a id="trace-13438"></a>
<a id="trace-13440"></a>
<a id="trace-13453"></a>
<a id="trace-13455"></a>
<a id="trace-13464"></a>
<a id="trace-13466"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-13486"></a>
<a id="trace-13488"></a>
<a id="trace-13557"></a>
<a id="trace-13559"></a>
<a id="trace-13566"></a>
<a id="trace-13568"></a>
<a id="trace-13583"></a>
<a id="trace-13585"></a>
<a id="trace-13594"></a>
<a id="trace-13596"></a>
<a id="trace-13606"></a>
<a id="trace-13608"></a>
<a id="trace-13614"></a>
<a id="trace-13616"></a>
<a id="trace-13631"></a>
<a id="trace-13633"></a>
<a id="trace-13641"></a>
<a id="trace-13643"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
<a id="trace-13733"></a>
<a id="trace-13735"></a>
<a id="trace-13750"></a>
<a id="trace-13752"></a>
<a id="trace-13760"></a>
<a id="trace-13762"></a>
<a id="trace-13772"></a>
<a id="trace-13774"></a>
<a id="trace-13780"></a>
<a id="trace-13782"></a>
<a id="trace-13796"></a>
<a id="trace-13798"></a>
<a id="trace-13806"></a>
<a id="trace-13808"></a>
<a id="trace-13818"></a>
<a id="trace-13820"></a>
<a id="trace-13825"></a>
<a id="trace-13827"></a>
<a id="trace-13895"></a>
<a id="trace-13897"></a>
<a id="trace-13905"></a>
<a id="trace-13907"></a>
<a id="trace-13921"></a>
<a id="trace-13923"></a>
<a id="trace-13939"></a>
<a id="trace-13941"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13973"></a>
<a id="trace-13975"></a>
<a id="trace-13992"></a>
<a id="trace-13994"></a>
<a id="trace-14004"></a>
<a id="trace-14006"></a>
<a id="trace-14027"></a>
<a id="trace-14029"></a>
<a id="trace-14035"></a>
<a id="trace-14037"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14150"></a>
<a id="trace-14152"></a>
<a id="trace-14159"></a>
<a id="trace-14161"></a>
<a id="trace-14171"></a>
<a id="trace-14173"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
<a id="trace-14194"></a>
<a id="trace-14196"></a>
<a id="trace-14202"></a>
<a id="trace-14204"></a>
<a id="trace-14215"></a>
<a id="trace-14217"></a>
<a id="trace-14222"></a>
<a id="trace-14224"></a>
<a id="trace-14292"></a>
<a id="trace-14294"></a>
<a id="trace-14309"></a>
<a id="trace-14311"></a>
<a id="trace-14332"></a>
<a id="trace-14334"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14383"></a>
<a id="trace-14385"></a>
<a id="trace-14395"></a>
<a id="trace-14397"></a>
<a id="trace-14404"></a>
<a id="trace-14406"></a>
<a id="trace-14414"></a>
<a id="trace-14416"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14489"></a>
<a id="trace-14491"></a>
<a id="trace-14496"></a>
<a id="trace-14498"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14543"></a>
<a id="trace-14545"></a>
<a id="trace-14552"></a>
<a id="trace-14554"></a>
<a id="trace-14573"></a>
<a id="trace-14575"></a>
<a id="trace-14597"></a>
<a id="trace-14599"></a>
<a id="trace-14612"></a>
<a id="trace-14614"></a>
<a id="trace-14621"></a>
<a id="trace-14623"></a>
<a id="trace-14689"></a>
<a id="trace-14691"></a>
<a id="trace-14695"></a>
<a id="trace-14697"></a>
<a id="trace-14711"></a>
<a id="trace-14713"></a>
<a id="trace-14718"></a>
<a id="trace-14720"></a>
<a id="trace-14732"></a>
<a id="trace-14734"></a>
<a id="trace-14741"></a>
<a id="trace-14743"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14782"></a>
<a id="trace-14784"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14883"></a>
<a id="trace-14885"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14912"></a>
<a id="trace-14914"></a>
<a id="trace-14920"></a>
<a id="trace-14922"></a>
<a id="trace-14933"></a>
<a id="trace-14935"></a>
<a id="trace-14942"></a>
<a id="trace-14944"></a>
<a id="trace-14956"></a>
<a id="trace-14958"></a>
<a id="trace-14964"></a>
<a id="trace-14966"></a>
<a id="trace-14976"></a>
<a id="trace-14978"></a>
<a id="trace-14983"></a>
<a id="trace-14985"></a>
<a id="trace-15058"></a>
<a id="trace-15060"></a>
<a id="trace-15068"></a>
<a id="trace-15070"></a>
<a id="trace-15091"></a>
<a id="trace-15093"></a>
<a id="trace-15118"></a>
<a id="trace-15120"></a>
<a id="trace-15131"></a>
<a id="trace-15133"></a>
<a id="trace-15141"></a>
<a id="trace-15143"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15165"></a>
<a id="trace-15167"></a>
<a id="trace-15178"></a>
<a id="trace-15180"></a>
<a id="trace-15185"></a>
<a id="trace-15187"></a>
<a id="trace-15254"></a>
<a id="trace-15256"></a>
<a id="trace-15261"></a>
<a id="trace-15263"></a>
<a id="trace-15276"></a>
<a id="trace-15278"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15305"></a>
<a id="trace-15307"></a>
<a id="trace-15322"></a>
<a id="trace-15324"></a>
<a id="trace-15343"></a>
<a id="trace-15345"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15373"></a>
<a id="trace-15375"></a>
<a id="trace-15380"></a>
<a id="trace-15382"></a>
<a id="trace-15453"></a>
<a id="trace-15455"></a>
<a id="trace-15461"></a>
<a id="trace-15463"></a>
<a id="trace-15477"></a>
<a id="trace-15479"></a>
<a id="trace-15485"></a>
<a id="trace-15487"></a>
<a id="trace-15497"></a>
<a id="trace-15499"></a>
<a id="trace-15508"></a>
<a id="trace-15510"></a>
<a id="trace-15519"></a>
<a id="trace-15521"></a>
<a id="trace-15537"></a>
<a id="trace-15539"></a>
<a id="trace-15555"></a>
<a id="trace-15557"></a>
<a id="trace-15561"></a>
<a id="trace-15563"></a>
<a id="trace-15645"></a>
<a id="trace-15647"></a>
<a id="trace-15655"></a>
<a id="trace-15657"></a>
<a id="trace-15673"></a>
<a id="trace-15675"></a>
<a id="trace-15683"></a>
<a id="trace-15685"></a>
<a id="trace-15697"></a>
<a id="trace-15699"></a>
<a id="trace-15706"></a>
<a id="trace-15708"></a>
<a id="trace-15718"></a>
<a id="trace-15720"></a>
<a id="trace-15728"></a>
<a id="trace-15730"></a>
<a id="trace-15739"></a>
<a id="trace-15741"></a>
<a id="trace-15748"></a>
<a id="trace-15750"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15830"></a>
<a id="trace-15832"></a>
<a id="trace-15853"></a>
<a id="trace-15855"></a>
<a id="trace-15876"></a>
<a id="trace-15878"></a>
<a id="trace-15890"></a>
<a id="trace-15892"></a>
<a id="trace-15902"></a>
<a id="trace-15904"></a>
<a id="trace-15919"></a>
<a id="trace-15921"></a>
<a id="trace-15927"></a>
<a id="trace-15929"></a>
<a id="trace-15937"></a>
<a id="trace-15939"></a>
<a id="trace-15945"></a>
<a id="trace-15947"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16022"></a>
<a id="trace-16024"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16054"></a>
<a id="trace-16056"></a>
<a id="trace-16067"></a>
<a id="trace-16069"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16111"></a>
<a id="trace-16113"></a>
<a id="trace-16120"></a>
<a id="trace-16122"></a>
<a id="trace-16134"></a>
<a id="trace-16136"></a>
<a id="trace-16142"></a>
<a id="trace-16144"></a>
<a id="trace-16210"></a>
<a id="trace-16212"></a>
<a id="trace-16221"></a>
<a id="trace-16223"></a>
<a id="trace-16237"></a>
<a id="trace-16239"></a>
<a id="trace-16246"></a>
<a id="trace-16248"></a>
<a id="trace-16258"></a>
<a id="trace-16260"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16305"></a>
<a id="trace-16307"></a>
<a id="trace-16378"></a>
<a id="trace-16380"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16436"></a>
<a id="trace-16438"></a>
<a id="trace-16514"></a>
<a id="trace-16516"></a>
<a id="trace-16525"></a>
<a id="trace-16527"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16569"></a>
<a id="trace-16571"></a>
<a id="trace-16582"></a>
<a id="trace-16584"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16617"></a>
<a id="trace-16619"></a>
<a id="trace-16631"></a>
<a id="trace-16633"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16725"></a>
<a id="trace-16727"></a>
<a id="trace-16739"></a>
<a id="trace-16741"></a>
<a id="trace-16770"></a>
<a id="trace-16772"></a>
<a id="trace-16779"></a>
<a id="trace-16781"></a>
<a id="trace-16795"></a>
<a id="trace-16797"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16827"></a>
<a id="trace-16829"></a>
<a id="trace-16846"></a>
<a id="trace-16848"></a>
<a id="trace-16865"></a>
<a id="trace-16867"></a>
<a id="trace-16874"></a>
<a id="trace-16876"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-16954"></a>
<a id="trace-16956"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-16997"></a>
<a id="trace-16999"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17025"></a>
<a id="trace-17027"></a>
<a id="trace-17063"></a>
<a id="trace-17065"></a>
<a id="trace-17236"></a>
<a id="trace-17238"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17353"></a>
<a id="trace-17355"></a>
<a id="trace-17371"></a>
<a id="trace-17373"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17477"></a>
<a id="trace-17479"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17759"></a>
<a id="trace-17761"></a>
<a id="trace-17842"></a>
<a id="trace-17844"></a>
<a id="trace-17854"></a>
<a id="trace-17856"></a>
<a id="trace-17881"></a>
<a id="trace-17883"></a>
<a id="trace-17899"></a>
<a id="trace-17901"></a>
<a id="trace-17918"></a>
<a id="trace-17920"></a>
<a id="trace-17932"></a>
<a id="trace-17934"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17973"></a>
<a id="trace-17975"></a>
<a id="trace-17991"></a>
<a id="trace-17993"></a>
<a id="trace-18006"></a>
<a id="trace-18008"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18101"></a>
<a id="trace-18103"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18206"></a>
<a id="trace-18208"></a>
<a id="trace-18225"></a>
<a id="trace-18227"></a>
<a id="trace-18251"></a>
<a id="trace-18253"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18284"></a>
<a id="trace-18286"></a>
<a id="trace-18308"></a>
<a id="trace-18310"></a>
<a id="trace-18321"></a>
<a id="trace-18323"></a>
<a id="trace-18395"></a>
<a id="trace-18397"></a>
<a id="trace-18885"></a>
<a id="trace-18887"></a>
<a id="trace-18989"></a>
<a id="trace-18991"></a>
<a id="trace-19017"></a>
<a id="trace-19019"></a>
<a id="trace-19046"></a>
<a id="trace-19048"></a>
<a id="trace-19071"></a>
<a id="trace-19073"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19113"></a>
<a id="trace-19115"></a>
<a id="trace-19131"></a>
<a id="trace-19133"></a>
<a id="trace-19142"></a>
<a id="trace-19144"></a>
<a id="trace-19218"></a>
<a id="trace-19220"></a>
<a id="trace-19237"></a>
<a id="trace-19239"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19283"></a>
<a id="trace-19285"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19316"></a>
<a id="trace-19318"></a>
<a id="trace-19334"></a>
<a id="trace-19336"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19379"></a>
<a id="trace-19381"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19540"></a>
<a id="trace-19542"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19568"></a>
<a id="trace-19570"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19614"></a>
<a id="trace-19616"></a>
<a id="trace-19637"></a>
<a id="trace-19639"></a>
<a id="trace-19652"></a>
<a id="trace-19654"></a>
<a id="trace-19731"></a>
<a id="trace-19733"></a>
<a id="trace-19740"></a>
<a id="trace-19742"></a>
<a id="trace-19767"></a>
<a id="trace-19769"></a>
<a id="trace-19774"></a>
<a id="trace-19776"></a>
<a id="trace-19793"></a>
<a id="trace-19795"></a>
<a id="trace-19807"></a>
<a id="trace-19809"></a>
<a id="trace-19820"></a>
<a id="trace-19822"></a>
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19851"></a>
<a id="trace-19853"></a>
<a id="trace-19862"></a>
<a id="trace-19864"></a>
<a id="trace-19933"></a>
<a id="trace-19935"></a>
<a id="trace-20011"></a>
<a id="trace-20013"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20088"></a>
<a id="trace-20090"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20111"></a>
<a id="trace-20113"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20136"></a>
<a id="trace-20138"></a>
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20405"></a>
<a id="trace-20407"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20451"></a>
<a id="trace-20453"></a>
<a id="trace-20470"></a>
<a id="trace-20472"></a>
<a id="trace-20486"></a>
<a id="trace-20488"></a>
<a id="trace-20521"></a>
<a id="trace-20523"></a>
<a id="trace-20538"></a>
<a id="trace-20540"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20621"></a>
<a id="trace-20623"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20722"></a>
<a id="trace-20724"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20759"></a>
<a id="trace-20761"></a>
<a id="trace-20775"></a>
<a id="trace-20777"></a>
<a id="trace-20854"></a>
<a id="trace-20856"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20904"></a>
<a id="trace-20906"></a>
<a id="trace-20920"></a>
<a id="trace-20922"></a>
<a id="trace-21088"></a>
<a id="trace-21090"></a>
<a id="trace-21109"></a>
<a id="trace-21111"></a>
<a id="trace-21134"></a>
<a id="trace-21136"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21171"></a>
<a id="trace-21173"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21274"></a>
<a id="trace-21276"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21320"></a>
<a id="trace-21322"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21349"></a>
<a id="trace-21351"></a>
<a id="trace-21363"></a>
<a id="trace-21365"></a>
<a id="trace-21383"></a>
<a id="trace-21385"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21413"></a>
<a id="trace-21415"></a>
<a id="trace-21490"></a>
<a id="trace-21492"></a>
<a id="trace-21510"></a>
<a id="trace-21512"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22081"></a>
<a id="trace-22083"></a>
<a id="trace-22104"></a>
<a id="trace-22106"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22239"></a>
<a id="trace-22241"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22644"></a>
<a id="trace-22646"></a>
<a id="trace-22658"></a>
<a id="trace-22660"></a>
<a id="trace-22675"></a>
<a id="trace-22677"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22737"></a>
<a id="trace-22739"></a>
<a id="trace-22751"></a>
<a id="trace-22753"></a>
<a id="trace-22823"></a>
<a id="trace-22825"></a>
<a id="trace-22841"></a>
<a id="trace-22843"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22872"></a>
<a id="trace-22874"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22922"></a>
<a id="trace-22924"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-22957"></a>
<a id="trace-22959"></a>
<a id="trace-22973"></a>
<a id="trace-22975"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23059"></a>
<a id="trace-23061"></a>
<a id="trace-23079"></a>
<a id="trace-23081"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23110"></a>
<a id="trace-23112"></a>
<a id="trace-23118"></a>
<a id="trace-23120"></a>
<a id="trace-23131"></a>
<a id="trace-23133"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23253"></a>
<a id="trace-23255"></a>
<a id="trace-23269"></a>
<a id="trace-23271"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23297"></a>
<a id="trace-23299"></a>
<a id="trace-23312"></a>
<a id="trace-23314"></a>
<a id="trace-23451"></a>
<a id="trace-23453"></a>
<a id="trace-23472"></a>
<a id="trace-23474"></a>
<a id="trace-23487"></a>
<a id="trace-23489"></a>
<a id="trace-23654"></a>
<a id="trace-23656"></a>
<a id="trace-23669"></a>
<a id="trace-23671"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23753"></a>
<a id="trace-23755"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23785"></a>
<a id="trace-23787"></a>
<a id="trace-23798"></a>
<a id="trace-23800"></a>
<a id="trace-23983"></a>
<a id="trace-23985"></a>
<a id="trace-24001"></a>
<a id="trace-24003"></a>
<a id="trace-24024"></a>
<a id="trace-24026"></a>
<a id="trace-24039"></a>
<a id="trace-24041"></a>
<a id="trace-24052"></a>
<a id="trace-24054"></a>
<a id="trace-24123"></a>
<a id="trace-24125"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24153"></a>
<a id="trace-24155"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24178"></a>
<a id="trace-24180"></a>
<a id="trace-24190"></a>
<a id="trace-24192"></a>
<a id="trace-24202"></a>
<a id="trace-24204"></a>
<a id="trace-24210"></a>
<a id="trace-24212"></a>
<a id="trace-24224"></a>
<a id="trace-24226"></a>
<a id="trace-24234"></a>
<a id="trace-24236"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24306"></a>
<a id="trace-24308"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24328"></a>
<a id="trace-24330"></a>
<a id="trace-24341"></a>
<a id="trace-24343"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24369"></a>
<a id="trace-24371"></a>
<a id="trace-24384"></a>
<a id="trace-24386"></a>
<a id="trace-24392"></a>
<a id="trace-24394"></a>
<a id="trace-24461"></a>
<a id="trace-24463"></a>
<a id="trace-24470"></a>
<a id="trace-24472"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24497"></a>
<a id="trace-24499"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24519"></a>
<a id="trace-24521"></a>
<a id="trace-24533"></a>
<a id="trace-24535"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
<a id="trace-24559"></a>
<a id="trace-24561"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24641"></a>
<a id="trace-24643"></a>
<a id="trace-24648"></a>
<a id="trace-24650"></a>
<a id="trace-24659"></a>
<a id="trace-24661"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24677"></a>
<a id="trace-24679"></a>
<a id="trace-24681"></a>
<a id="trace-24683"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24698"></a>
<a id="trace-24700"></a>
<a id="trace-24712"></a>
<a id="trace-24714"></a>
<a id="trace-24721"></a>
<a id="trace-24723"></a>
<a id="trace-24785"></a>
<a id="trace-24787"></a>
<a id="trace-24793"></a>
<a id="trace-24795"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24813"></a>
<a id="trace-24815"></a>
<a id="trace-24825"></a>
<a id="trace-24827"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24846"></a>
<a id="trace-24848"></a>
<a id="trace-24854"></a>
<a id="trace-24856"></a>
<a id="trace-24868"></a>
<a id="trace-24870"></a>
<a id="trace-24877"></a>
<a id="trace-24879"></a>
<a id="trace-24942"></a>
<a id="trace-24944"></a>
<a id="trace-24952"></a>
<a id="trace-24954"></a>
<a id="trace-24966"></a>
<a id="trace-24968"></a>
<a id="trace-24975"></a>
<a id="trace-24977"></a>
<a id="trace-24985"></a>
<a id="trace-24987"></a>
<a id="trace-24990"></a>
<a id="trace-24992"></a>
<a id="trace-25004"></a>
<a id="trace-25006"></a>
<a id="trace-25010"></a>
<a id="trace-25012"></a>
<a id="trace-25024"></a>
<a id="trace-25026"></a>
<a id="trace-25031"></a>
<a id="trace-25033"></a>
<a id="trace-25151"></a>
<a id="trace-25153"></a>
<a id="trace-25160"></a>
<a id="trace-25162"></a>
<a id="trace-25183"></a>
<a id="trace-25185"></a>
<a id="trace-25194"></a>
<a id="trace-25196"></a>
<a id="trace-25211"></a>
<a id="trace-25213"></a>
<a id="trace-25228"></a>
<a id="trace-25230"></a>
<a id="trace-25242"></a>
<a id="trace-25244"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25264"></a>
<a id="trace-25266"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25353"></a>
<a id="trace-25355"></a>
<a id="trace-25362"></a>
<a id="trace-25364"></a>
<a id="trace-25377"></a>
<a id="trace-25379"></a>
<a id="trace-25386"></a>
<a id="trace-25388"></a>
<a id="trace-25400"></a>
<a id="trace-25402"></a>
<a id="trace-25410"></a>
<a id="trace-25412"></a>
<a id="trace-25426"></a>
<a id="trace-25428"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25463"></a>
<a id="trace-25465"></a>
<a id="trace-25531"></a>
<a id="trace-25533"></a>
<a id="trace-25542"></a>
<a id="trace-25544"></a>
<a id="trace-25561"></a>
<a id="trace-25563"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25601"></a>
<a id="trace-25603"></a>
<a id="trace-25611"></a>
<a id="trace-25613"></a>
<a id="trace-25623"></a>
<a id="trace-25625"></a>
<a id="trace-25630"></a>
<a id="trace-25632"></a>
<a id="trace-25639"></a>
<a id="trace-25641"></a>
<a id="trace-25643"></a>
<a id="trace-25645"></a>
<a id="trace-25704"></a>
<a id="trace-25706"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25720"></a>
<a id="trace-25722"></a>
<a id="trace-25731"></a>
<a id="trace-25733"></a>
<a id="trace-25741"></a>
<a id="trace-25743"></a>
<a id="trace-25747"></a>
<a id="trace-25749"></a>
<a id="trace-25758"></a>
<a id="trace-25760"></a>
<a id="trace-25766"></a>
<a id="trace-25768"></a>
<a id="trace-25777"></a>
<a id="trace-25779"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25845"></a>
<a id="trace-25847"></a>
<a id="trace-25852"></a>
<a id="trace-25854"></a>
<a id="trace-25863"></a>
<a id="trace-25865"></a>
<a id="trace-25875"></a>
<a id="trace-25877"></a>
<a id="trace-25887"></a>
<a id="trace-25889"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25910"></a>
<a id="trace-25912"></a>
<a id="trace-25919"></a>
<a id="trace-25921"></a>
<a id="trace-25929"></a>
<a id="trace-25931"></a>
<a id="trace-25934"></a>
<a id="trace-25936"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26003"></a>
<a id="trace-26005"></a>
<a id="trace-26014"></a>
<a id="trace-26016"></a>
<a id="trace-26027"></a>
<a id="trace-26029"></a>
<a id="trace-26036"></a>
<a id="trace-26038"></a>
<a id="trace-26042"></a>
<a id="trace-26044"></a>
<a id="trace-26053"></a>
<a id="trace-26055"></a>
<a id="trace-26060"></a>
<a id="trace-26062"></a>
<a id="trace-26071"></a>
<a id="trace-26073"></a>
<a id="trace-26076"></a>
<a id="trace-26078"></a>
<a id="trace-26138"></a>
<a id="trace-26140"></a>
<a id="trace-26144"></a>
<a id="trace-26146"></a>
<a id="trace-26155"></a>
<a id="trace-26157"></a>
<a id="trace-26168"></a>
<a id="trace-26170"></a>
<a id="trace-26177"></a>
<a id="trace-26179"></a>
<a id="trace-26185"></a>
<a id="trace-26187"></a>
<a id="trace-26195"></a>
<a id="trace-26197"></a>
<a id="trace-26202"></a>
<a id="trace-26204"></a>
<a id="trace-26219"></a>
<a id="trace-26221"></a>
<a id="trace-26240"></a>
<a id="trace-26242"></a>
<a id="trace-26305"></a>
<a id="trace-26307"></a>
<a id="trace-26311"></a>
<a id="trace-26313"></a>
<a id="trace-26323"></a>
<a id="trace-26325"></a>
<a id="trace-26329"></a>
<a id="trace-26331"></a>
<a id="trace-26338"></a>
<a id="trace-26340"></a>
<a id="trace-26346"></a>
<a id="trace-26348"></a>
<a id="trace-26355"></a>
<a id="trace-26357"></a>
<a id="trace-26363"></a>
<a id="trace-26365"></a>
<a id="trace-26371"></a>
<a id="trace-26373"></a>
<a id="trace-26382"></a>
<a id="trace-26384"></a>
<a id="trace-26446"></a>
<a id="trace-26448"></a>
<a id="trace-26458"></a>
<a id="trace-26460"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26495"></a>
<a id="trace-26497"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26513"></a>
<a id="trace-26515"></a>
<a id="trace-26522"></a>
<a id="trace-26524"></a>
<a id="trace-26530"></a>
<a id="trace-26532"></a>
<a id="trace-26543"></a>
<a id="trace-26545"></a>
<a id="trace-26604"></a>
<a id="trace-26606"></a>
<a id="trace-26610"></a>
<a id="trace-26612"></a>
<a id="trace-26628"></a>
<a id="trace-26630"></a>
<a id="trace-26634"></a>
<a id="trace-26636"></a>
<a id="trace-26653"></a>
<a id="trace-26655"></a>
<a id="trace-26671"></a>
<a id="trace-26673"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26689"></a>
<a id="trace-26691"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
<a id="trace-26710"></a>
<a id="trace-26712"></a>
<a id="trace-26771"></a>
<a id="trace-26773"></a>
<a id="trace-26779"></a>
<a id="trace-26781"></a>
<a id="trace-26790"></a>
<a id="trace-26792"></a>
<a id="trace-26796"></a>
<a id="trace-26798"></a>
<a id="trace-26806"></a>
<a id="trace-26808"></a>
<a id="trace-26818"></a>
<a id="trace-26820"></a>
<a id="trace-26829"></a>
<a id="trace-26831"></a>
<a id="trace-26841"></a>
<a id="trace-26843"></a>
<a id="trace-26862"></a>
<a id="trace-26864"></a>
<a id="trace-26869"></a>
<a id="trace-26871"></a>
<a id="trace-26930"></a>
<a id="trace-26932"></a>
<a id="trace-26953"></a>
<a id="trace-26955"></a>
<a id="trace-26963"></a>
<a id="trace-26965"></a>
<a id="trace-26972"></a>
<a id="trace-26974"></a>
<a id="trace-26978"></a>
<a id="trace-26980"></a>
<a id="trace-26988"></a>
<a id="trace-26990"></a>
<a id="trace-26994"></a>
<a id="trace-26996"></a>
<a id="trace-27010"></a>
<a id="trace-27012"></a>
<a id="trace-27015"></a>
<a id="trace-27017"></a>
<a id="trace-27083"></a>
<a id="trace-27085"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27112"></a>
<a id="trace-27114"></a>
<a id="trace-27122"></a>
<a id="trace-27124"></a>
<a id="trace-27131"></a>
<a id="trace-27133"></a>
<a id="trace-27147"></a>
<a id="trace-27149"></a>
<a id="trace-27156"></a>
<a id="trace-27158"></a>
<a id="trace-27162"></a>
<a id="trace-27164"></a>
<a id="trace-27171"></a>
<a id="trace-27173"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27239"></a>
<a id="trace-27241"></a>
<a id="trace-27261"></a>
<a id="trace-27263"></a>
<a id="trace-27267"></a>
<a id="trace-27269"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27304"></a>
<a id="trace-27306"></a>
<a id="trace-27313"></a>
<a id="trace-27315"></a>
<a id="trace-27321"></a>
<a id="trace-27323"></a>
<a id="trace-27335"></a>
<a id="trace-27337"></a>
<a id="trace-27342"></a>
<a id="trace-27344"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27410"></a>
<a id="trace-27412"></a>
<a id="trace-27423"></a>
<a id="trace-27425"></a>
<a id="trace-27429"></a>
<a id="trace-27431"></a>
<a id="trace-27439"></a>
<a id="trace-27441"></a>
<a id="trace-27451"></a>
<a id="trace-27453"></a>
<a id="trace-27460"></a>
<a id="trace-27462"></a>
<a id="trace-27474"></a>
<a id="trace-27476"></a>
<a id="trace-27494"></a>
<a id="trace-27496"></a>
<a id="trace-27503"></a>
<a id="trace-27505"></a>
<a id="trace-27564"></a>
<a id="trace-27566"></a>
<a id="trace-27570"></a>
<a id="trace-27572"></a>
<a id="trace-27584"></a>
<a id="trace-27586"></a>
<a id="trace-27594"></a>
<a id="trace-27596"></a>
<a id="trace-27611"></a>
<a id="trace-27613"></a>
<a id="trace-27621"></a>
<a id="trace-27623"></a>
<a id="trace-27627"></a>
<a id="trace-27629"></a>
<a id="trace-27641"></a>
<a id="trace-27643"></a>
<a id="trace-27648"></a>
<a id="trace-27650"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46576843548638347, 'next_transition': 731}.
<a id="trace-983"></a>
<a id="trace-985"></a>
<a id="trace-1079"></a>
<a id="trace-1081"></a>
<a id="trace-1113"></a>
<a id="trace-1115"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1228"></a>
<a id="trace-1230"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1340"></a>
<a id="trace-1342"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1390"></a>
<a id="trace-1392"></a>
<a id="trace-1425"></a>
<a id="trace-1427"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 983): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.639656077065113, 'next_transition': 1079}.
<a id="trace-151"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 151): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1455}.
<a id="trace-152"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 152): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09009896187664988, 'next_transition': 1764}.
<a id="trace-1432"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1432): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1432. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1455}.
<a id="trace-1433"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1433): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1433. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1455}.
<a id="trace-1434"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1434): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1434. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09009896187664988, 'next_transition': 1764}.
<a id="trace-1435"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1435): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1435. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09009896187664988, 'next_transition': 1764}.
<a id="trace-1455"></a>
<a id="trace-1457"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1435. Next observer evidence: None.
<a id="trace-1463"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1463): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1728}.
<a id="trace-1464"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1464): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1728}.
<a id="trace-1728"></a>
<a id="trace-1730"></a>
<a id="trace-1756"></a>
<a id="trace-1758"></a>
<a id="trace-2202"></a>
<a id="trace-2204"></a>
<a id="trace-2271"></a>
<a id="trace-2273"></a>
<a id="trace-2665"></a>
<a id="trace-2667"></a>
<a id="trace-2716"></a>
<a id="trace-2718"></a>
<a id="trace-2755"></a>
<a id="trace-2757"></a>
- 13.20s–19.25s (×14), actor 5, squad 0 (trace 1728): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1435. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41343764623536317, 'next_transition': 1756}.
<a id="trace-1764"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1764): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567506031064573, 'next_transition': 2325}.
<a id="trace-1765"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1765): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567506031064573, 'next_transition': 2325}.
<a id="trace-2325"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2325): received platoon directive. Knowledge: actor memory at 15.00s, trace 2134. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.097431420948833, 'next_transition': 3306}.
<a id="trace-2765"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2765): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2126. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3030}.
<a id="trace-2766"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2766): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2126. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3030}.
<a id="trace-2767"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2767): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2126. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3030}.
<a id="trace-3030"></a>
<a id="trace-3032"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 3030): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2131. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3042}.
<a id="trace-3042"></a>
- 19.80s–19.80s (×1), actor 0, squad 0 (trace 3042): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2126. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01920337490683608, 'next_transition': 4084}.
<a id="trace-3306"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 3306): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2134. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16473433950087937, 'next_transition': 3735}.
<a id="trace-3307"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 3307): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2134. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16473433950087937, 'next_transition': 3735}.
<a id="trace-3308"></a>
<a id="trace-3735"></a>
<a id="trace-4352"></a>
<a id="trace-4725"></a>
- 19.90s–20.65s (×4), actor 8, squad 1 (trace 3308): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2134. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16473433950087937, 'next_transition': 3735}.
<a id="trace-4084"></a>
<a id="trace-4086"></a>
- 20.25s–20.25s (×2), actor 5, squad 0 (trace 4084): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3651. Next observer evidence: None.
<a id="trace-4093"></a>
- 20.35s–20.35s (×1), actor 0, squad 0 (trace 4093): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3646. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.029444714110727983, 'next_transition': 5073}.
<a id="trace-5073"></a>
<a id="trace-5075"></a>
<a id="trace-5214"></a>
<a id="trace-5216"></a>
<a id="trace-5280"></a>
<a id="trace-5282"></a>
<a id="trace-5351"></a>
<a id="trace-5353"></a>
<a id="trace-5433"></a>
<a id="trace-5435"></a>
<a id="trace-5488"></a>
<a id="trace-5490"></a>
- 20.75s–23.75s (×12), actor 5, squad 0 (trace 5073): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3651. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8304721991146669, 'next_transition': 5214}.
<a id="trace-5500"></a>
- 23.85s–23.85s (×1), actor 0, squad 0 (trace 5500): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 3646. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23805687478069565, 'next_transition': 5936}.
<a id="trace-5501"></a>
- 23.85s–23.85s (×1), actor 0, squad 0 (trace 5501): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 3646. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23805687478069565, 'next_transition': 5936}.
<a id="trace-5936"></a>
<a id="trace-5938"></a>
<a id="trace-6069"></a>
<a id="trace-6071"></a>
<a id="trace-6092"></a>
<a id="trace-6094"></a>
<a id="trace-6118"></a>
<a id="trace-6120"></a>
<a id="trace-6152"></a>
<a id="trace-6154"></a>
<a id="trace-6412"></a>
<a id="trace-6414"></a>
<a id="trace-6667"></a>
<a id="trace-6669"></a>
<a id="trace-6716"></a>
<a id="trace-6718"></a>
<a id="trace-6956"></a>
<a id="trace-6958"></a>
<a id="trace-7153"></a>
<a id="trace-7155"></a>
<a id="trace-7297"></a>
<a id="trace-7299"></a>
<a id="trace-9502"></a>
<a id="trace-9504"></a>
<a id="trace-9642"></a>
<a id="trace-9644"></a>
<a id="trace-9667"></a>
<a id="trace-9669"></a>
<a id="trace-9694"></a>
<a id="trace-9696"></a>
<a id="trace-9723"></a>
<a id="trace-9725"></a>
<a id="trace-9759"></a>
<a id="trace-9761"></a>
<a id="trace-9791"></a>
<a id="trace-9793"></a>
- 24.25s–37.75s (×36), actor 5, squad 0 (trace 5936): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3651. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.044752755974967, 'next_transition': 6069}.
<a id="trace-5976"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 5976): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3654. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7764233243252356, 'next_transition': 6161}.
<a id="trace-6161"></a>
- 26.75s–26.75s (×1), actor 8, squad 1 (trace 6161): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5988. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0150895298719, 'next_transition': 6439}.
<a id="trace-6439"></a>
<a id="trace-6739"></a>
- 27.65s–28.50s (×2), actor 8, squad 1 (trace 6439): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5988. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7913510332477128, 'next_transition': 6739}.
<a id="trace-7285"></a>
- 32.65s–32.65s (×1), actor 8, squad 1 (trace 7285): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7070. Next observer evidence: {'until': 32.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7309}.
<a id="trace-7309"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 7309): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 7070. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.09929650844824, 'next_transition': 737}.
<a id="trace-9351"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 9351): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 7070. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.09929650844824, 'next_transition': 737}.
<a id="trace-9352"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 9352): MoveTactically. Knowledge: actor memory at 30.00s, trace 7070. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.09929650844824, 'next_transition': 737}.
<a id="trace-9353"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 9353): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 7070. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.09929650844824, 'next_transition': 737}.
<a id="trace-9820"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 9820): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 9568. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25232628374663696, 'next_transition': 10000}.
<a id="trace-9821"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 9821): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 9568. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25232628374663696, 'next_transition': 10000}.
<a id="trace-10000"></a>
<a id="trace-10059"></a>
<a id="trace-10096"></a>
<a id="trace-10194"></a>
<a id="trace-10212"></a>
<a id="trace-10214"></a>
<a id="trace-10247"></a>
<a id="trace-10249"></a>
- 38.75s–41.25s (×8), actor 5, squad 0 (trace 10000): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 9572. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10059}.
<a id="trace-737"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 737): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10109"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 10109): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.625386 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 10109. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.623802371941732, 'next_transition': 10277}.
<a id="trace-10110"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 10110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.625386 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 10110. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.623802371941732, 'next_transition': 10277}.
<a id="trace-10277"></a>
- 42.00s–42.00s (×1), actor 8, squad 1 (trace 10277): NeedSupport. Knowledge: actor memory at 40.00s, trace 10123. Next observer evidence: {'until': 44.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.022442637991845, 'next_transition': 10430}.
<a id="trace-10287"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 10287): NeedSupport. Knowledge: actor memory at 40.00s, trace 10116. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999869613568016, 'next_transition': 10302}.
<a id="trace-10302"></a>
<a id="trace-10304"></a>
<a id="trace-10317"></a>
<a id="trace-10319"></a>
<a id="trace-10338"></a>
<a id="trace-10340"></a>
<a id="trace-10417"></a>
<a id="trace-10419"></a>
<a id="trace-10874"></a>
<a id="trace-10876"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10937"></a>
<a id="trace-10939"></a>
<a id="trace-10965"></a>
<a id="trace-10967"></a>
<a id="trace-10993"></a>
<a id="trace-10995"></a>
<a id="trace-11055"></a>
<a id="trace-11057"></a>
<a id="trace-11080"></a>
<a id="trace-11082"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11180"></a>
<a id="trace-11182"></a>
- 42.25s–50.25s (×26), actor 5, squad 0 (trace 10302): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10120. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799999104308164, 'next_transition': 10317}.
<a id="trace-10430"></a>
- 44.95s–44.95s (×1), actor 8, squad 1 (trace 10430): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 10123. Next observer evidence: {'until': 48.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.849039116209787, 'next_transition': 11065}.
<a id="trace-10431"></a>
- 44.95s–44.95s (×1), actor 8, squad 1 (trace 10431): received platoon directive. Knowledge: actor memory at 40.00s, trace 10123. Next observer evidence: {'until': 48.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.849039116209787, 'next_transition': 11065}.
<a id="trace-11065"></a>
- 48.90s–48.90s (×1), actor 8, squad 1 (trace 11065): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 10800. Next observer evidence: {'until': 51, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.2570582670292865, 'next_transition': 11467}.
<a id="trace-11196"></a>
- 50.65s–50.65s (×1), actor 1, squad 0 (trace 11196): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 11108. Next observer evidence: None.
<a id="trace-11298"></a>
- 50.65s–50.65s (×1), actor 1, squad 0 (trace 11298): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 11108. Next observer evidence: None.
<a id="trace-11457"></a>
<a id="trace-11459"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12139"></a>
<a id="trace-12141"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
<a id="trace-12212"></a>
<a id="trace-12214"></a>
<a id="trace-12249"></a>
<a id="trace-12251"></a>
<a id="trace-12306"></a>
<a id="trace-12308"></a>
<a id="trace-12330"></a>
<a id="trace-12332"></a>
- 50.75s–54.75s (×16), actor 5, squad 0 (trace 11457): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11112. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07371166331160381, 'next_transition': 12110}.
<a id="trace-11467"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 11467): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 11115. Next observer evidence: {'until': 59.2, 'shots': 2, 'casualties': 2, 'mean_displacement': 4.3074517705893145, 'next_transition': 12628}.
<a id="trace-11881"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 11881): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 11115. Next observer evidence: {'until': 59.2, 'shots': 2, 'casualties': 2, 'mean_displacement': 4.3074517705893145, 'next_transition': 12628}.
<a id="trace-11882"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 11882): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 11115. Next observer evidence: {'until': 59.2, 'shots': 2, 'casualties': 2, 'mean_displacement': 4.3074517705893145, 'next_transition': 12628}.
<a id="trace-12085"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 12085): Assaulting. Knowledge: actor memory at 50.00s, trace 11115. Next observer evidence: {'until': 59.2, 'shots': 2, 'casualties': 2, 'mean_displacement': 4.3074517705893145, 'next_transition': 12628}.
<a id="trace-12339"></a>
- 54.75s–54.75s (×1), actor 1, squad 0 (trace 12339): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 11108. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450062025893518, 'next_transition': 12415}.
<a id="trace-12415"></a>
<a id="trace-12417"></a>
<a id="trace-12431"></a>
<a id="trace-12433"></a>
- 55.25s–55.75s (×4), actor 5, squad 0 (trace 12415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12347. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629997073405902, 'next_transition': 12431}.
<a id="trace-12440"></a>
- 55.75s–55.75s (×1), actor 1, squad 0 (trace 12440): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 12344. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449943846158103, 'next_transition': 12485}.
<a id="trace-12445"></a>
- 55.75s–55.75s (×1), actor 1, squad 0 (trace 12445): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 12344. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449943846158103, 'next_transition': 12485}.
<a id="trace-12446"></a>
- 55.75s–55.75s (×1), actor 1, squad 0 (trace 12446): Reorganise complete: known contact. Knowledge: actor memory at 55.00s, trace 12344. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449943846158103, 'next_transition': 12485}.
<a id="trace-12485"></a>
<a id="trace-12487"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12564"></a>
<a id="trace-12566"></a>
<a id="trace-12592"></a>
<a id="trace-12594"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12856"></a>
<a id="trace-12858"></a>
- 56.25s–59.75s (×12), actor 5, squad 0 (trace 12485): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12347. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1549954055749272, 'next_transition': 12548}.
<a id="trace-12628"></a>
- 59.20s–59.20s (×1), actor 11, squad 1 (trace 12628): new assault-element casualty. Knowledge: actor memory at 55.00s, trace 12352. Next observer evidence: {'until': 60.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2900471746769835, 'next_transition': 12973}.
<a id="trace-12629"></a>
- 59.20s–59.20s (×1), actor 11, squad 1 (trace 12629): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 12352. Next observer evidence: {'until': 60.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2900471746769835, 'next_transition': 12973}.
<a id="trace-12895"></a>
- 60.05s–60.05s (×1), actor 1, squad 0 (trace 12895): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 12872. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20997635845759346, 'next_transition': 12956}.
<a id="trace-12896"></a>
- 60.05s–60.05s (×1), actor 1, squad 0 (trace 12896): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 12872. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20997635845759346, 'next_transition': 12956}.
<a id="trace-12956"></a>
<a id="trace-12958"></a>
<a id="trace-13147"></a>
<a id="trace-13149"></a>
<a id="trace-13171"></a>
<a id="trace-13173"></a>
<a id="trace-13197"></a>
<a id="trace-13199"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13247"></a>
<a id="trace-13259"></a>
<a id="trace-13278"></a>
<a id="trace-13292"></a>
<a id="trace-13367"></a>
<a id="trace-13376"></a>
<a id="trace-13399"></a>
<a id="trace-13410"></a>
<a id="trace-13422"></a>
- 60.25s–67.25s (×19), actor 5, squad 0 (trace 12956): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 12875. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.10216064778174, 'next_transition': 13147}.
<a id="trace-12973"></a>
- 60.55s–60.55s (×1), actor 11, squad 1 (trace 12973): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 12878. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12974}.
<a id="trace-12974"></a>
- 60.60s–60.60s (×1), actor 11, squad 1 (trace 12974): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 12878. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.515505436865521, 'next_transition': None}.
<a id="trace-12976"></a>
- 60.60s–60.60s (×1), actor 11, squad 1 (trace 12976): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 12878. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.515505436865521, 'next_transition': None}.
<a id="trace-12977"></a>
- 60.60s–60.60s (×1), actor 11, squad 1 (trace 12977): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 12878. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.515505436865521, 'next_transition': None}.
<a id="trace-1091"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (events line 1091): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13431"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 13431): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.665451 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13431. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13436}.
<a id="trace-13432"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 13432): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.665451 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13432. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13436}.
<a id="trace-13436"></a>
<a id="trace-13451"></a>
<a id="trace-13462"></a>
<a id="trace-13474"></a>
<a id="trace-13484"></a>
<a id="trace-13555"></a>
<a id="trace-13564"></a>
<a id="trace-13581"></a>
<a id="trace-13592"></a>
<a id="trace-13604"></a>
<a id="trace-13629"></a>
<a id="trace-13656"></a>
<a id="trace-13725"></a>
<a id="trace-13748"></a>
<a id="trace-13758"></a>
<a id="trace-13770"></a>
<a id="trace-13778"></a>
<a id="trace-13794"></a>
<a id="trace-13804"></a>
<a id="trace-13816"></a>
<a id="trace-13823"></a>
<a id="trace-13893"></a>
<a id="trace-13903"></a>
- 67.75s–80.75s (×23), actor 5, squad 0 (trace 13436): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.45s, trace 13432. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13451}.
<a id="trace-13926"></a>
- 81.45s–81.45s (×1), actor 1, squad 0 (trace 13926): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 13829. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13937}.
<a id="trace-13937"></a>
<a id="trace-13955"></a>
<a id="trace-13971"></a>
<a id="trace-14025"></a>
<a id="trace-14033"></a>
<a id="trace-14117"></a>
<a id="trace-14132"></a>
<a id="trace-14148"></a>
<a id="trace-14169"></a>
<a id="trace-14180"></a>
<a id="trace-14192"></a>
<a id="trace-14200"></a>
<a id="trace-14213"></a>
<a id="trace-14220"></a>
<a id="trace-14290"></a>
<a id="trace-14307"></a>
<a id="trace-14330"></a>
<a id="trace-14340"></a>
<a id="trace-14367"></a>
<a id="trace-14381"></a>
<a id="trace-14393"></a>
<a id="trace-14419"></a>
<a id="trace-14494"></a>
<a id="trace-14512"></a>
<a id="trace-14520"></a>
<a id="trace-14541"></a>
<a id="trace-14571"></a>
<a id="trace-14610"></a>
<a id="trace-14619"></a>
<a id="trace-14687"></a>
<a id="trace-14709"></a>
<a id="trace-14730"></a>
<a id="trace-14739"></a>
<a id="trace-14752"></a>
<a id="trace-14768"></a>
<a id="trace-14780"></a>
<a id="trace-14796"></a>
<a id="trace-14881"></a>
<a id="trace-14894"></a>
<a id="trace-14910"></a>
<a id="trace-14918"></a>
<a id="trace-14931"></a>
<a id="trace-14940"></a>
<a id="trace-14954"></a>
<a id="trace-14962"></a>
<a id="trace-14974"></a>
<a id="trace-14981"></a>
<a id="trace-15056"></a>
<a id="trace-15066"></a>
<a id="trace-15089"></a>
<a id="trace-15116"></a>
<a id="trace-15129"></a>
<a id="trace-15139"></a>
<a id="trace-15154"></a>
<a id="trace-15163"></a>
<a id="trace-15176"></a>
<a id="trace-15183"></a>
<a id="trace-15252"></a>
<a id="trace-15259"></a>
<a id="trace-15274"></a>
<a id="trace-15303"></a>
<a id="trace-15341"></a>
<a id="trace-15359"></a>
<a id="trace-15371"></a>
<a id="trace-15378"></a>
<a id="trace-15451"></a>
<a id="trace-15459"></a>
<a id="trace-15475"></a>
<a id="trace-15483"></a>
<a id="trace-15495"></a>
<a id="trace-15506"></a>
<a id="trace-15535"></a>
<a id="trace-15553"></a>
<a id="trace-15643"></a>
<a id="trace-15653"></a>
<a id="trace-15671"></a>
<a id="trace-15695"></a>
<a id="trace-15704"></a>
<a id="trace-15716"></a>
<a id="trace-15726"></a>
<a id="trace-15737"></a>
<a id="trace-15746"></a>
<a id="trace-15821"></a>
<a id="trace-15828"></a>
<a id="trace-15874"></a>
<a id="trace-15888"></a>
<a id="trace-15900"></a>
<a id="trace-15917"></a>
<a id="trace-16011"></a>
<a id="trace-16020"></a>
<a id="trace-16035"></a>
- 81.75s–136.30s (×91), actor 5, squad 0 (trace 13937): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13832. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13955}.
<a id="trace-1524"></a>
- 136.60s–136.60s (×1), actor 5, squad 0 (events line 1524): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16048"></a>
- 136.60s–136.60s (×1), actor 5, squad 0 (trace 16048): renew committed intent (75 s lifetime). Knowledge: actor memory at 136.60s, trace 16048. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16052}.
<a id="trace-16052"></a>
<a id="trace-16065"></a>
<a id="trace-16081"></a>
<a id="trace-16118"></a>
<a id="trace-16140"></a>
<a id="trace-16219"></a>
<a id="trace-16235"></a>
<a id="trace-16256"></a>
- 136.80s–142.30s (×8), actor 5, squad 0 (trace 16052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.60s, trace 16048. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16065}.
<a id="trace-16261"></a>
- 142.30s–142.30s (×1), actor 1, squad 0 (trace 16261): MoveTactically. Knowledge: actor memory at 140.00s, trace 16147. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16303}.
<a id="trace-16262"></a>
- 142.30s–142.30s (×1), actor 1, squad 0 (trace 16262): traveling overwatch. Knowledge: actor memory at 140.00s, trace 16147. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16303}.
<a id="trace-16263"></a>
- 142.30s–142.30s (×1), actor 1, squad 0 (trace 16263): received platoon directive. Knowledge: actor memory at 140.00s, trace 16147. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16303}.
<a id="trace-16303"></a>
- 143.30s–143.30s (×1), actor 5, squad 0 (trace 16303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 16150. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500834490648821, 'next_transition': 16404}.
<a id="trace-16308"></a>
- 143.30s–143.30s (×1), actor 1, squad 0 (trace 16308): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 16147. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500834490648821, 'next_transition': 16404}.
<a id="trace-16404"></a>
<a id="trace-16523"></a>
<a id="trace-16555"></a>
<a id="trace-16567"></a>
<a id="trace-16580"></a>
<a id="trace-16597"></a>
<a id="trace-16615"></a>
<a id="trace-16629"></a>
<a id="trace-16646"></a>
<a id="trace-16723"></a>
<a id="trace-16777"></a>
<a id="trace-16793"></a>
<a id="trace-16810"></a>
<a id="trace-16825"></a>
<a id="trace-16844"></a>
<a id="trace-16872"></a>
<a id="trace-16944"></a>
<a id="trace-16952"></a>
<a id="trace-16979"></a>
<a id="trace-16995"></a>
<a id="trace-17015"></a>
<a id="trace-17023"></a>
- 144.30s–157.80s (×22), actor 5, squad 0 (trace 16404): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 16150. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400145332737479, 'next_transition': 16523}.
<a id="trace-17048"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 17048): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 16879. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17061}.
<a id="trace-17061"></a>
- 158.30s–158.30s (×1), actor 5, squad 0 (trace 17061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 16882. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17234}.
<a id="trace-17066"></a>
- 158.30s–158.30s (×1), actor 1, squad 0 (trace 17066): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 16879. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17234}.
<a id="trace-17234"></a>
<a id="trace-17273"></a>
<a id="trace-17351"></a>
<a id="trace-17369"></a>
<a id="trace-17395"></a>
<a id="trace-17410"></a>
<a id="trace-17430"></a>
<a id="trace-17440"></a>
<a id="trace-17464"></a>
<a id="trace-17475"></a>
- 158.80s–163.80s (×10), actor 5, squad 0 (trace 17234): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 16882. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250078429523014, 'next_transition': 17273}.
<a id="trace-17490"></a>
- 163.85s–163.85s (×1), actor 1, squad 0 (trace 17490): traveling. Knowledge: actor memory at 160.00s, trace 17278. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299883078435605, 'next_transition': 1808}.
<a id="trace-17491"></a>
- 163.85s–163.85s (×1), actor 1, squad 0 (trace 17491): current contact unknown for 10 s. Knowledge: actor memory at 160.00s, trace 17278. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299883078435605, 'next_transition': 1808}.
<a id="trace-1808"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (events line 1808): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17708"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 17708): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 17708. Next observer evidence: None.
<a id="trace-17709"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 17709): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 17709. Next observer evidence: None.
<a id="trace-17714"></a>
<a id="trace-17757"></a>
<a id="trace-17840"></a>
<a id="trace-17852"></a>
<a id="trace-17879"></a>
<a id="trace-17897"></a>
<a id="trace-17916"></a>
<a id="trace-17952"></a>
<a id="trace-17971"></a>
<a id="trace-17989"></a>
<a id="trace-18081"></a>
<a id="trace-18099"></a>
<a id="trace-18124"></a>
- 164.30s–171.30s (×13), actor 5, squad 0 (trace 17714): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 164.25s, trace 17709. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812633093233402, 'next_transition': 17757}.
<a id="trace-18136"></a>
- 171.65s–171.65s (×1), actor 1, squad 0 (trace 18136): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 18011. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999474677660914, 'next_transition': 18204}.
<a id="trace-18137"></a>
- 171.65s–171.65s (×1), actor 1, squad 0 (trace 18137): bounding overwatch. Knowledge: actor memory at 170.00s, trace 18011. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999474677660914, 'next_transition': 18204}.
<a id="trace-18138"></a>
- 171.65s–171.65s (×1), actor 1, squad 0 (trace 18138): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 18011. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999474677660914, 'next_transition': 18204}.
<a id="trace-18204"></a>
<a id="trace-18223"></a>
<a id="trace-18249"></a>
<a id="trace-18269"></a>
<a id="trace-18282"></a>
<a id="trace-18319"></a>
<a id="trace-18393"></a>
- 171.80s–175.30s (×7), actor 5, squad 0 (trace 18204): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 18014. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5852595253445864, 'next_transition': 18223}.
<a id="trace-18398"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18398): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18400"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18400): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18812"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18812): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18813"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18813): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18870"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18870): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18871"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 18871): Assaulting. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050133628241864, 'next_transition': 18883}.
<a id="trace-18883"></a>
- 175.80s–175.80s (×1), actor 5, squad 0 (trace 18883): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 18329. Next observer evidence: {'until': 176, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18894}.
<a id="trace-18894"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 18894): Reorganise: completed/failed drill. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18987}.
<a id="trace-18899"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 18899): MoveTactically. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18987}.
<a id="trace-18900"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 18900): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 175.00s, trace 18326. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18987}.
<a id="trace-18987"></a>
<a id="trace-19015"></a>
<a id="trace-19044"></a>
<a id="trace-19097"></a>
<a id="trace-19111"></a>
<a id="trace-19129"></a>
<a id="trace-19140"></a>
<a id="trace-19216"></a>
<a id="trace-19235"></a>
<a id="trace-19250"></a>
<a id="trace-19261"></a>
<a id="trace-19301"></a>
<a id="trace-19314"></a>
<a id="trace-19332"></a>
<a id="trace-19363"></a>
- 176.30s–184.30s (×15), actor 5, squad 0 (trace 18987): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 18329. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937780743141555, 'next_transition': 19015}.
<a id="trace-19404"></a>
- 185.10s–185.10s (×1), actor 1, squad 0 (trace 19404): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 19385. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15014804672802173, 'next_transition': 19503}.
<a id="trace-19503"></a>
<a id="trace-19513"></a>
<a id="trace-19538"></a>
<a id="trace-19547"></a>
<a id="trace-19566"></a>
<a id="trace-19612"></a>
<a id="trace-19635"></a>
<a id="trace-19650"></a>
<a id="trace-19729"></a>
<a id="trace-19738"></a>
<a id="trace-19765"></a>
- 185.30s–191.30s (×11), actor 5, squad 0 (trace 19503): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 19388. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45636376018392405, 'next_transition': 19513}.
<a id="trace-2109"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 2109): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19777"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 19777): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=7.120069 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 19777. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000703599985515, 'next_transition': 19791}.
<a id="trace-19778"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 19778): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=7.120069 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 19778. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000703599985515, 'next_transition': 19791}.
<a id="trace-19791"></a>
<a id="trace-19805"></a>
<a id="trace-19818"></a>
<a id="trace-19826"></a>
<a id="trace-19931"></a>
- 192.30s–195.30s (×5), actor 5, squad 0 (trace 19791): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 19778. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199982489137503, 'next_transition': 19805}.
<a id="trace-19936"></a>
- 195.45s–195.45s (×1), actor 1, squad 0 (trace 19936): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 195.00s, trace 19865. Next observer evidence: {'until': 195.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20009}.
<a id="trace-20009"></a>
<a id="trace-20034"></a>
<a id="trace-20048"></a>
<a id="trace-20086"></a>
<a id="trace-20109"></a>
<a id="trace-20124"></a>
<a id="trace-20211"></a>
<a id="trace-20229"></a>
- 195.80s–200.80s (×8), actor 5, squad 0 (trace 20009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 19868. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026256819220072242, 'next_transition': 20034}.
<a id="trace-20251"></a>
- 201.45s–201.45s (×1), actor 1, squad 0 (trace 20251): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 200.00s, trace 20142. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199995390952396, 'next_transition': 20403}.
<a id="trace-20403"></a>
<a id="trace-20425"></a>
<a id="trace-20449"></a>
<a id="trace-20468"></a>
<a id="trace-20484"></a>
<a id="trace-20519"></a>
<a id="trace-20536"></a>
<a id="trace-20610"></a>
<a id="trace-20639"></a>
<a id="trace-20661"></a>
<a id="trace-20677"></a>
<a id="trace-20696"></a>
<a id="trace-20720"></a>
<a id="trace-20738"></a>
<a id="trace-20773"></a>
<a id="trace-20852"></a>
<a id="trace-20889"></a>
<a id="trace-20902"></a>
<a id="trace-20918"></a>
- 201.80s–212.30s (×19), actor 5, squad 0 (trace 20403): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 20145. Next observer evidence: {'until': 202.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16990246467490758, 'next_transition': 20425}.
<a id="trace-20927"></a>
- 212.45s–212.45s (×1), actor 1, squad 0 (trace 20927): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 20779. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40821425654140153, 'next_transition': 21086}.
<a id="trace-20928"></a>
- 212.45s–212.45s (×1), actor 1, squad 0 (trace 20928): MoveTactically. Knowledge: actor memory at 210.00s, trace 20779. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40821425654140153, 'next_transition': 21086}.
<a id="trace-20929"></a>
- 212.45s–212.45s (×1), actor 1, squad 0 (trace 20929): . Knowledge: actor memory at 210.00s, trace 20779. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40821425654140153, 'next_transition': 21086}.
<a id="trace-21086"></a>
<a id="trace-21107"></a>
<a id="trace-21132"></a>
<a id="trace-21150"></a>
<a id="trace-21169"></a>
<a id="trace-21249"></a>
<a id="trace-21294"></a>
<a id="trace-21339"></a>
<a id="trace-21361"></a>
<a id="trace-21397"></a>
<a id="trace-21411"></a>
<a id="trace-21488"></a>
<a id="trace-21526"></a>
<a id="trace-21544"></a>
- 212.80s–221.80s (×14), actor 5, squad 0 (trace 21086): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 20782. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.781401915045964, 'next_transition': 21107}.
<a id="trace-21552"></a>
- 221.85s–221.85s (×1), actor 1, squad 0 (trace 21552): ReactToContact: cover and return fire. Knowledge: actor memory at 220.00s, trace 21419. Next observer evidence: {'until': 222.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.214681105545543, 'next_transition': 22079}.
<a id="trace-21553"></a>
- 221.85s–221.85s (×1), actor 1, squad 0 (trace 21553): new contact inside 100 m. Knowledge: actor memory at 220.00s, trace 21419. Next observer evidence: {'until': 222.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.214681105545543, 'next_transition': 22079}.
<a id="trace-22079"></a>
<a id="trace-22102"></a>
<a id="trace-22139"></a>
<a id="trace-22157"></a>
<a id="trace-22237"></a>
- 222.80s–225.30s (×5), actor 5, squad 0 (trace 22079): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 21422. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4838309734072995, 'next_transition': 22102}.
<a id="trace-22247"></a>
- 225.45s–225.45s (×1), actor 1, squad 0 (trace 22247): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 225.00s, trace 22173. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8743696763467129, 'next_transition': 22603}.
<a id="trace-22248"></a>
- 225.45s–225.45s (×1), actor 1, squad 0 (trace 22248): rearward bound: one stationary suppressing element. Knowledge: actor memory at 225.00s, trace 22173. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8743696763467129, 'next_transition': 22603}.
<a id="trace-22603"></a>
<a id="trace-22622"></a>
<a id="trace-22656"></a>
<a id="trace-22673"></a>
<a id="trace-22697"></a>
<a id="trace-22735"></a>
<a id="trace-22749"></a>
<a id="trace-22821"></a>
<a id="trace-22839"></a>
<a id="trace-22857"></a>
<a id="trace-22870"></a>
<a id="trace-22890"></a>
<a id="trace-22905"></a>
<a id="trace-22920"></a>
<a id="trace-22938"></a>
<a id="trace-22955"></a>
<a id="trace-22971"></a>
<a id="trace-23075"></a>
<a id="trace-23106"></a>
<a id="trace-23127"></a>
<a id="trace-23160"></a>
<a id="trace-23249"></a>
<a id="trace-23284"></a>
<a id="trace-23308"></a>
- 225.80s–242.30s (×24), actor 5, squad 0 (trace 22603): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 22176. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8678521368278866, 'next_transition': 22622}.
<a id="trace-23317"></a>
- 242.30s–242.30s (×1), actor 1, squad 0 (trace 23317): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09263266930312557, 'next_transition': 23456}.
<a id="trace-23339"></a>
- 242.30s–242.30s (×1), actor 1, squad 0 (trace 23339): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09263266930312557, 'next_transition': 23456}.
<a id="trace-23456"></a>
- 242.80s–242.80s (×1), actor 1, squad 0 (trace 23456): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23468}.
<a id="trace-23457"></a>
- 242.80s–242.80s (×1), actor 1, squad 0 (trace 23457): NeedSupport. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23468}.
<a id="trace-23468"></a>
- 243.30s–243.30s (×1), actor 5, squad 0 (trace 23468): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 23186. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1810033960700431, 'next_transition': 23492}.
<a id="trace-23492"></a>
- 243.80s–243.80s (×1), actor 1, squad 0 (trace 23492): Reorganise: completed/failed drill. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 247.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.8096459309692627, 'next_transition': 23804}.
<a id="trace-23495"></a>
- 243.80s–243.80s (×1), actor 1, squad 0 (trace 23495): ReactToContact: cover and return fire. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 247.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.8096459309692627, 'next_transition': 23804}.
<a id="trace-23496"></a>
- 243.80s–243.80s (×1), actor 1, squad 0 (trace 23496): Reorganise complete: known contact. Knowledge: actor memory at 240.00s, trace 23183. Next observer evidence: {'until': 247.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.8096459309692627, 'next_transition': 23804}.
<a id="trace-23804"></a>
- 247.45s–247.45s (×1), actor 1, squad 0 (trace 23804): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 245.00s, trace 23679. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2096026249857788, 'next_transition': 23997}.
<a id="trace-23805"></a>
- 247.45s–247.45s (×1), actor 1, squad 0 (trace 23805): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 23679. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2096026249857788, 'next_transition': 23997}.
<a id="trace-23997"></a>
<a id="trace-24035"></a>
<a id="trace-24119"></a>
<a id="trace-24149"></a>
<a id="trace-24174"></a>
<a id="trace-24198"></a>
<a id="trace-24220"></a>
<a id="trace-24296"></a>
<a id="trace-24317"></a>
<a id="trace-24337"></a>
<a id="trace-24353"></a>
<a id="trace-24380"></a>
<a id="trace-24457"></a>
- 248.30s–260.30s (×13), actor 5, squad 0 (trace 23997): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 23681. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7419894437188417, 'next_transition': 24035}.
<a id="trace-24478"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 24478): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.90s, trace 24478. Next observer evidence: None.
<a id="trace-2691"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 2691): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1715549456354724, 'next_transition': 24506}.
<a id="trace-24506"></a>
<a id="trace-24637"></a>
<a id="trace-24655"></a>
<a id="trace-24673"></a>
<a id="trace-24708"></a>
<a id="trace-24781"></a>
- 262.30s–270.30s (×6), actor 5, squad 0 (trace 24506): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 24478. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4348265583735313, 'next_transition': 24637}.
<a id="trace-24789"></a>
- 270.35s–270.35s (×1), actor 5, squad 0 (trace 24789): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 270.35s, trace 24789. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24821}.
<a id="trace-24821"></a>
<a id="trace-24842"></a>
<a id="trace-24864"></a>
<a id="trace-24938"></a>
<a id="trace-24962"></a>
<a id="trace-25000"></a>
<a id="trace-25020"></a>
- 272.30s–279.30s (×7), actor 5, squad 0 (trace 24821): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.35s, trace 24789. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24842}.
<a id="trace-25034"></a>
- 279.95s–279.95s (×1), actor 1, squad 0 (trace 25034): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 275.00s, trace 24880. Next observer evidence: {'until': 280, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25050}.
<a id="trace-25050"></a>
- 280.00s–280.00s (×1), actor 1, squad 0 (trace 25050): MoveTactically. Knowledge: actor memory at 280.00s, trace 25037. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28349213344465163, 'next_transition': 25179}.
<a id="trace-25051"></a>
- 280.00s–280.00s (×1), actor 1, squad 0 (trace 25051): received platoon directive. Knowledge: actor memory at 280.00s, trace 25037. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28349213344465163, 'next_transition': 25179}.
<a id="trace-25179"></a>
<a id="trace-25207"></a>
<a id="trace-25238"></a>
<a id="trace-25373"></a>
<a id="trace-25453"></a>
<a id="trace-25527"></a>
<a id="trace-25557"></a>
<a id="trace-25597"></a>
- 281.30s–292.30s (×8), actor 5, squad 0 (trace 25179): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 25038. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.134018770358322, 'next_transition': 25207}.

## Net delivery

275 matched order/radio deliveries; 217 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.547s; maximum 5.450s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3646: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3654: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3658: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3659: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3660: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3661: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3666: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3667: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3668: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5980: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5986: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5988: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5990: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5992: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5993: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5994: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5995: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5996: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5997: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5998: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5999: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6000: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6001: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6002: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6003: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7062: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7068: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7070: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7073: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7074: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7075: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7076: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7077: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7078: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7079: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7080: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7081: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7082: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7083: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7084: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 9568: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 9570: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 9571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 9572: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 9573: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 9574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 9575: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 9576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 9577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 9578: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 9579: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 9580: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 9581: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 9582: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 9583: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 9584: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 9585: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 9586: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 9587: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 9588: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 9589: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 10109: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 10110: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10116: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10118: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10120: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10121: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10123: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 10125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10126: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10127: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10128: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10129: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10130: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10131: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10132: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10133: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10134: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10135: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 10136: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 10137: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10793: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10795: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10797: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10798: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10800: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10801: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 10802: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10803: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10804: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10805: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10806: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10807: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10808: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10809: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10810: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10811: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10812: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 10813: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 10814: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11108: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11110: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11112: estimate 15.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11113: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11115: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11116: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 11117: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11118: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11119: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11120: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11121: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11122: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11123: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11124: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11125: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11126: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11127: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11128: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11129: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12344: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12347: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12348: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12350: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12351: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 12352: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12353: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12354: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12355: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12356: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12357: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12358: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12359: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12360: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12361: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12362: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12363: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12364: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 12872: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 12873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12875: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 12876: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 12877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 12878: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 12879: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12880: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12881: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12882: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12883: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12884: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12885: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12886: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12887: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12888: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 12889: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 12890: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13303: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13306: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13307: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13309: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13310: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13311: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13312: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13313: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13314: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13315: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13316: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13317: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13318: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13319: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13320: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13431: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13432: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13491: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 13492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13494: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13495: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13497: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13498: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13499: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13500: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13501: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13502: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13503: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13504: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13505: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13506: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 13507: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 13508: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13661: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 13662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13664: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13665: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13667: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13668: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13669: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13670: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13671: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13672: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13673: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13674: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13675: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13676: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 13677: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 13678: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13829: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13832: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13833: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13835: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13836: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13837: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13838: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13839: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13840: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13841: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13842: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13843: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13844: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13845: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13846: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14045: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 14046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14048: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14049: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14051: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14052: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14053: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14054: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14055: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14056: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14057: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14058: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14059: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14060: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 14061: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 14062: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14226: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14229: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14230: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14232: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14233: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14234: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14235: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14236: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14237: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14238: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14239: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14240: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14241: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 14242: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 14243: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14426: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 14427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14429: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14430: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14432: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14433: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14434: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14435: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14436: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14437: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14438: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14439: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14440: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14441: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14442: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14443: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14624: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 14625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14627: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14628: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14630: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14631: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14632: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14633: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14634: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14635: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14636: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14637: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14638: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14639: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14640: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14641: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 14802: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 14803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14805: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14806: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 14807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14808: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14809: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 14810: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14811: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14812: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14813: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14814: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14815: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 14816: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 14817: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 14818: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 14819: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 14987: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 14988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 14989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 14990: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 14991: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 14992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 14993: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 14994: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 14995: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 14996: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 14997: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 14998: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 14999: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15000: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15001: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15002: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15003: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15004: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 15188: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 15189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15191: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15192: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 15193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15194: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15195: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15196: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15197: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15198: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15199: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15200: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15201: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15202: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15203: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 15204: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 15205: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 15385: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 15386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 15387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15388: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15389: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 15390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15391: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15392: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15393: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15394: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15395: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15396: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15397: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15398: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15399: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15400: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 15401: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 15402: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 15581: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 15582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 15583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15584: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 15585: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 15586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 15587: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 15588: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 15589: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15590: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15591: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15592: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 15593: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15594: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 15595: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 15596: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 15597: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 15598: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 15758: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 15759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15761: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15762: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15764: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15765: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 15766: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15767: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15768: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15769: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15770: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15771: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 15772: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 15773: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 15774: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 15775: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 15948: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 15949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15951: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15952: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 15953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15954: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15955: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 15956: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15957: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15958: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15959: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15960: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15961: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 15962: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 15963: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 15964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 15965: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 16048: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 16147: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 16148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16150: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 16151: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 16152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 16153: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16154: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16155: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16156: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16157: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16158: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16159: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16160: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16161: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16162: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 16163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 16164: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 16445: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 16446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16448: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 16449: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 16450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16451: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16452: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16453: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16454: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16455: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16456: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16457: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16458: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16459: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 16460: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 16461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 16462: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 16652: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 16653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16655: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16656: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 16657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16658: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16659: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 16660: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16661: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16662: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16663: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16664: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16665: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 16666: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 16667: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 16668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 16669: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 16879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 16880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 16884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16885: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16886: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 16887: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16888: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16889: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16890: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16891: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16892: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 16893: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 16894: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 16895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 16896: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 17279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17284: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17285: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17286: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17287: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17288: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17289: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17290: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17291: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17292: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17293: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 17294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 17295: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 17708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 17709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 17764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 17765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 17766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 17767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 17768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 17769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 17770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 17771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 17772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 17773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 17774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 17775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 17777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 17778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 17779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 17780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 17781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 18012: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 18015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18025: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 18027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 18028: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18326: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 18327: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 18330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 18331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18337: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18338: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18340: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 18342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 18343: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 19147: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 19148: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 19149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19151: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 19152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 19155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19158: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19159: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19161: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 19163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 19164: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 19385: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 19386: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 19387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 19388: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 19389: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 19390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19396: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19397: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19399: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 19401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 19402: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19656: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 19657: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 19658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19659: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 19660: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 19661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19667: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19668: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19670: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19673: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 19777: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 19778: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19865: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 19866: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19868: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19869: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 19870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19876: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19877: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19879: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19882: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 20142: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 20143: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 20145: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 20146: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 20150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 20151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 20152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 20153: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 20154: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 20155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 20156: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 20157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 20158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 20159: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 20543: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 20544: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 20545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20546: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20547: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20554: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20555: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20557: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 20559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 20560: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 20779: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 20780: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 20781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20782: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20783: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 20784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20790: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20791: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20793: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 20795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 20796: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 21179: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 21180: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 21181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 21182: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 21183: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 21184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 21185: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 21186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 21187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 21188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 21189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 21190: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 21191: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 21192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 21193: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 21194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 21195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 21196: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 21419: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 21420: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 21421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 21422: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 21423: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 21424: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 21425: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 21426: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 21427: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 21428: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 21429: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 21430: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 21431: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 21432: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 21433: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 21434: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 21435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 21436: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 22173: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 22174: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 22175: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22176: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22177: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22178: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22179: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22180: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22181: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22182: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22183: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22184: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22185: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22186: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22187: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 22188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22189: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 22757: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 22758: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 22759: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22760: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22761: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22762: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22763: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22764: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22765: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22766: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22767: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22768: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22769: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22770: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22771: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 22772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 22773: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 22978: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 22979: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 22980: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22981: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22982: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22983: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22984: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22985: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22986: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22987: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22988: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22989: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22990: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22991: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22992: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 22993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 22994: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 23183: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 23184: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 23185: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23186: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23187: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23188: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23189: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23190: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23191: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23192: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23193: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23194: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23195: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23196: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23198: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23679: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 23680: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23681: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23682: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23683: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23684: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23685: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23686: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23687: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23688: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23689: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23690: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23691: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 23692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24057: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 24058: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24059: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24060: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24061: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24062: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24063: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24064: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24065: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24066: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24067: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24068: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24069: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 24070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24237: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 24238: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24239: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24240: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24241: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24242: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24243: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24244: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24245: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24246: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24247: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24248: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24249: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 24398: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 24399: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24400: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24401: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24402: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24403: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24404: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24405: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24406: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24407: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24408: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24409: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24410: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 24411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 24478: estimate 13.44; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 24581: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24582: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24583: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24584: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24585: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24586: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24587: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24588: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24589: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24590: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24591: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24592: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 24725: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24726: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24727: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24728: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24729: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24730: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24731: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24732: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24733: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24734: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24735: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24736: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 24737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.35s leader 5, trace 24789: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 24880: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24881: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24882: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24883: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24884: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24885: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24886: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24887: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24888: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24889: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24890: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24891: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 24892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 25037: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25038: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25039: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25040: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25041: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25042: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25043: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25044: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25045: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25046: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25047: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25048: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 25049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 25282: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25283: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25284: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25285: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25286: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25287: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25288: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25289: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25290: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25291: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25292: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25293: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 25294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 25468: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25469: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25470: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25471: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25472: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25473: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25474: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25475: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25476: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25477: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25478: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25479: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25646: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25647: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25648: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25649: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25650: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25651: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25652: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25653: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25654: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25655: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25656: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25788: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25789: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25790: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25791: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25792: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25793: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25794: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25795: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25796: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25797: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25798: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 25799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25938: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25939: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25940: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25941: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25942: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25943: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25944: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25945: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25946: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25947: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25948: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 25949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26079: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26080: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26081: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26082: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26083: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26084: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26085: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26086: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26087: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26088: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26089: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 26090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26244: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26245: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26246: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26247: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26248: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26249: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26250: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26251: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26252: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26253: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26254: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 26255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26387: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26388: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26389: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26390: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26391: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26392: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26393: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26394: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26395: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26396: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26397: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 26398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26546: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26547: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26548: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26549: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26550: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26551: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26552: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26553: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26554: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26555: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26556: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26713: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26714: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26715: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26716: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26717: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26718: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26719: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26720: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26721: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26722: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26723: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 26724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26873: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26874: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26875: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26876: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26877: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26878: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26879: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26880: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26881: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26882: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26883: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 26884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27018: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27019: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27020: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27021: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27022: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27023: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27024: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27025: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27026: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27027: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27028: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 27029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27180: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27181: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27182: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27183: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27184: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27185: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27186: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27187: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27188: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27189: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27190: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 27191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27347: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27348: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27349: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27350: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27351: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27352: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27353: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27354: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27355: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27356: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27357: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 27358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27506: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27507: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27508: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27509: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27510: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27511: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27512: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27513: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27514: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27515: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27516: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 27517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27652: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27653: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27654: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27655: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27656: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27657: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27658: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27659: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27660: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27661: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 27662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Dane incapacitated
- 1: Vale killed in action
- 1: Ash incapacitated
- 1: Cole incapacitated
- 1: Bren killed in action
- 1: Ellis killed in action
- 1: Reed incapacitated
- 1: Moss incapacitated
- 1: Toll killed in action
- 1: Soren killed in action
- 1: Tern incapacitated
- 1: Rook killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
