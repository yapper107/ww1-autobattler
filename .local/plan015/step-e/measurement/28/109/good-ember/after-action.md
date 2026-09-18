# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/109/good-ember/battle-109-1789674308662277689`

## Battle summary

**Ember** · 360 s · 402 shots.

### Turning points

- 14.8s, squad 1: contact (events line 172). First recorded contact.
- 19.5s, squad 1: withdrawal ([trace 5093](#trace-5093)). 47.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 34.7s, squad 0: help call ([trace 10074](#trace-10074)). No completion observed before termination.
- 36.9s, squad 1: help call ([trace 10855](#trace-10855)). No completion observed before termination.
- 38.1s, squad 0: help call ([trace 10908](#trace-10908)). No completion observed before termination.
- 62.5s, squad 0: withdrawal ([trace 16067](#trace-16067)). No completion observed before termination.
- 301.4s, squad 1: withdrawal ([trace 29069](#trace-29069)). No completion observed before termination.
- 319.2s, squad 1: help call ([trace 29832](#trace-29832)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 49 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 6 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 281 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 66 shots, 0/2 lost.

### Decisions and attribution

At 342.7s, squad 1 chose renewed the existing objective ([trace 30770](#trace-30770)), followed by 3 shots and 0 own casualties; estimate 9.2 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 315](#trace-315)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1391](#trace-1391)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5600470128891946, 'next_transition': 1416}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1393](#trace-1393)). Following evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.942449832454894, 'next_transition': 2098}.

### Communication

154 matched deliveries (mean 0.54s, max 5.25s); 316 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.85s, squad 1, contact, evidence events line 172: First recorded contact; .
- 19.45s, squad 1, withdrawal, evidence 5093: BreakContact: believed ratio at least two without superiority; 47.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 34.70s, squad 0, help call, evidence 10074: NeedSupport; No completion observed before termination.
- 36.85s, squad 1, help call, evidence 10855: NeedSupport; No completion observed before termination.
- 38.10s, squad 0, help call, evidence 10908: NeedSupport; No completion observed before termination.
- 62.55s, squad 0, withdrawal, evidence 16067: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 301.35s, squad 1, withdrawal, evidence 29069: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 319.20s, squad 1, help call, evidence 29832: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091736148391439, 'next_transition': 781}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091736148391439, 'next_transition': 781}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091736148391439, 'next_transition': 781}.
<a id="trace-315"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 315): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1121}.
<a id="trace-316"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 316): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1121}.
<a id="trace-317"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 317): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1121}.
<a id="trace-546"></a>
<a id="trace-548"></a>
<a id="trace-574"></a>
<a id="trace-576"></a>
<a id="trace-609"></a>
<a id="trace-611"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-651"></a>
<a id="trace-653"></a>
<a id="trace-673"></a>
<a id="trace-675"></a>
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-785"></a>
<a id="trace-787"></a>
<a id="trace-811"></a>
<a id="trace-813"></a>
<a id="trace-842"></a>
<a id="trace-844"></a>
<a id="trace-877"></a>
<a id="trace-879"></a>
<a id="trace-898"></a>
<a id="trace-900"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-957"></a>
<a id="trace-959"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1011"></a>
<a id="trace-1013"></a>
<a id="trace-1028"></a>
<a id="trace-1030"></a>
<a id="trace-1117"></a>
<a id="trace-1119"></a>
<a id="trace-1365"></a>
<a id="trace-1367"></a>
<a id="trace-1387"></a>
<a id="trace-1389"></a>
<a id="trace-1420"></a>
<a id="trace-1422"></a>
<a id="trace-1453"></a>
<a id="trace-1455"></a>
<a id="trace-1477"></a>
<a id="trace-1479"></a>
<a id="trace-2003"></a>
<a id="trace-2005"></a>
<a id="trace-2025"></a>
<a id="trace-2027"></a>
<a id="trace-2067"></a>
<a id="trace-2069"></a>
<a id="trace-2090"></a>
<a id="trace-2092"></a>
<a id="trace-3436"></a>
<a id="trace-3438"></a>
<a id="trace-3502"></a>
<a id="trace-3504"></a>
<a id="trace-4244"></a>
<a id="trace-4246"></a>
<a id="trace-4282"></a>
<a id="trace-4284"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4374"></a>
<a id="trace-4376"></a>
<a id="trace-4989"></a>
<a id="trace-4991"></a>
<a id="trace-5026"></a>
<a id="trace-5028"></a>
<a id="trace-5077"></a>
<a id="trace-5079"></a>
<a id="trace-5347"></a>
<a id="trace-5349"></a>
<a id="trace-5439"></a>
<a id="trace-5441"></a>
<a id="trace-5490"></a>
<a id="trace-5492"></a>
<a id="trace-5516"></a>
<a id="trace-5518"></a>
<a id="trace-5559"></a>
<a id="trace-5561"></a>
<a id="trace-5593"></a>
<a id="trace-5595"></a>
<a id="trace-5619"></a>
<a id="trace-5621"></a>
<a id="trace-6421"></a>
<a id="trace-6423"></a>
<a id="trace-6449"></a>
<a id="trace-6451"></a>
<a id="trace-6498"></a>
<a id="trace-6500"></a>
<a id="trace-6533"></a>
<a id="trace-6535"></a>
<a id="trace-6613"></a>
<a id="trace-6615"></a>
<a id="trace-6642"></a>
<a id="trace-6644"></a>
<a id="trace-6673"></a>
<a id="trace-6675"></a>
<a id="trace-6701"></a>
<a id="trace-6703"></a>
<a id="trace-6729"></a>
<a id="trace-6731"></a>
<a id="trace-6743"></a>
<a id="trace-6745"></a>
<a id="trace-6767"></a>
<a id="trace-6769"></a>
<a id="trace-6790"></a>
<a id="trace-6792"></a>
<a id="trace-6812"></a>
<a id="trace-6814"></a>
<a id="trace-6837"></a>
<a id="trace-6839"></a>
<a id="trace-9656"></a>
<a id="trace-9658"></a>
<a id="trace-9864"></a>
<a id="trace-9866"></a>
<a id="trace-9900"></a>
<a id="trace-9902"></a>
<a id="trace-9932"></a>
<a id="trace-9934"></a>
<a id="trace-9952"></a>
<a id="trace-9954"></a>
<a id="trace-9988"></a>
<a id="trace-9990"></a>
<a id="trace-10008"></a>
<a id="trace-10010"></a>
<a id="trace-10032"></a>
<a id="trace-10034"></a>
<a id="trace-10058"></a>
<a id="trace-10060"></a>
<a id="trace-10082"></a>
<a id="trace-10084"></a>
<a id="trace-10224"></a>
<a id="trace-10226"></a>
<a id="trace-10776"></a>
<a id="trace-10778"></a>
<a id="trace-10806"></a>
<a id="trace-10808"></a>
<a id="trace-10838"></a>
<a id="trace-10840"></a>
<a id="trace-10878"></a>
<a id="trace-10880"></a>
<a id="trace-10895"></a>
<a id="trace-10897"></a>
<a id="trace-10935"></a>
<a id="trace-10937"></a>
<a id="trace-10950"></a>
<a id="trace-10952"></a>
<a id="trace-10973"></a>
<a id="trace-10975"></a>
<a id="trace-10982"></a>
<a id="trace-10984"></a>
<a id="trace-11069"></a>
<a id="trace-11071"></a>
<a id="trace-11090"></a>
<a id="trace-11092"></a>
<a id="trace-11109"></a>
<a id="trace-11111"></a>
<a id="trace-11127"></a>
<a id="trace-11129"></a>
<a id="trace-11161"></a>
<a id="trace-11163"></a>
<a id="trace-11175"></a>
<a id="trace-11177"></a>
<a id="trace-11196"></a>
<a id="trace-11198"></a>
<a id="trace-11758"></a>
<a id="trace-11760"></a>
<a id="trace-11777"></a>
<a id="trace-11779"></a>
<a id="trace-11806"></a>
<a id="trace-11808"></a>
<a id="trace-11891"></a>
<a id="trace-11893"></a>
<a id="trace-11913"></a>
<a id="trace-11915"></a>
<a id="trace-11943"></a>
<a id="trace-11945"></a>
<a id="trace-11969"></a>
<a id="trace-11971"></a>
<a id="trace-11996"></a>
<a id="trace-11998"></a>
<a id="trace-15335"></a>
<a id="trace-15337"></a>
<a id="trace-15363"></a>
<a id="trace-15365"></a>
<a id="trace-15404"></a>
<a id="trace-15406"></a>
<a id="trace-15436"></a>
<a id="trace-15438"></a>
<a id="trace-15453"></a>
<a id="trace-15455"></a>
<a id="trace-15543"></a>
<a id="trace-15545"></a>
<a id="trace-15562"></a>
<a id="trace-15564"></a>
<a id="trace-15581"></a>
<a id="trace-15583"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15617"></a>
<a id="trace-15619"></a>
<a id="trace-15634"></a>
<a id="trace-15636"></a>
<a id="trace-15651"></a>
<a id="trace-15653"></a>
<a id="trace-15668"></a>
<a id="trace-15670"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15696"></a>
<a id="trace-15698"></a>
<a id="trace-15770"></a>
<a id="trace-15772"></a>
<a id="trace-15782"></a>
<a id="trace-15784"></a>
<a id="trace-15814"></a>
<a id="trace-15816"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15849"></a>
<a id="trace-15851"></a>
<a id="trace-15861"></a>
<a id="trace-15863"></a>
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15903"></a>
<a id="trace-15905"></a>
<a id="trace-15916"></a>
<a id="trace-15918"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-15998"></a>
<a id="trace-16000"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16034"></a>
<a id="trace-16036"></a>
<a id="trace-16049"></a>
<a id="trace-16051"></a>
<a id="trace-16184"></a>
<a id="trace-16186"></a>
<a id="trace-16202"></a>
<a id="trace-16204"></a>
<a id="trace-16214"></a>
<a id="trace-16216"></a>
<a id="trace-16235"></a>
<a id="trace-16237"></a>
<a id="trace-16248"></a>
<a id="trace-16250"></a>
<a id="trace-16323"></a>
<a id="trace-16325"></a>
<a id="trace-16332"></a>
<a id="trace-16334"></a>
<a id="trace-16345"></a>
<a id="trace-16347"></a>
<a id="trace-16361"></a>
<a id="trace-16363"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
<a id="trace-16401"></a>
<a id="trace-16403"></a>
<a id="trace-16414"></a>
<a id="trace-16416"></a>
<a id="trace-16430"></a>
<a id="trace-16432"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16511"></a>
<a id="trace-16513"></a>
<a id="trace-16519"></a>
<a id="trace-16521"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16699"></a>
<a id="trace-16701"></a>
<a id="trace-16722"></a>
<a id="trace-16724"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16759"></a>
<a id="trace-16761"></a>
<a id="trace-16784"></a>
<a id="trace-16786"></a>
<a id="trace-16804"></a>
<a id="trace-16806"></a>
<a id="trace-16817"></a>
<a id="trace-16819"></a>
<a id="trace-16886"></a>
<a id="trace-16888"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16925"></a>
<a id="trace-16927"></a>
<a id="trace-16940"></a>
<a id="trace-16942"></a>
<a id="trace-16956"></a>
<a id="trace-16958"></a>
<a id="trace-16968"></a>
<a id="trace-16970"></a>
<a id="trace-17105"></a>
<a id="trace-17107"></a>
<a id="trace-17169"></a>
<a id="trace-17171"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17290"></a>
<a id="trace-17292"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
<a id="trace-17320"></a>
<a id="trace-17322"></a>
<a id="trace-17330"></a>
<a id="trace-17332"></a>
<a id="trace-17345"></a>
<a id="trace-17347"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17370"></a>
<a id="trace-17372"></a>
<a id="trace-17381"></a>
<a id="trace-17383"></a>
<a id="trace-17456"></a>
<a id="trace-17458"></a>
<a id="trace-17463"></a>
<a id="trace-17465"></a>
<a id="trace-17477"></a>
<a id="trace-17479"></a>
<a id="trace-17493"></a>
<a id="trace-17495"></a>
<a id="trace-17514"></a>
<a id="trace-17516"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17557"></a>
<a id="trace-17559"></a>
<a id="trace-17576"></a>
<a id="trace-17578"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
<a id="trace-17802"></a>
<a id="trace-17804"></a>
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17824"></a>
<a id="trace-17826"></a>
<a id="trace-17837"></a>
<a id="trace-17839"></a>
<a id="trace-17858"></a>
<a id="trace-17860"></a>
<a id="trace-17868"></a>
<a id="trace-17870"></a>
<a id="trace-18084"></a>
<a id="trace-18086"></a>
<a id="trace-18109"></a>
<a id="trace-18111"></a>
<a id="trace-18127"></a>
<a id="trace-18129"></a>
<a id="trace-18138"></a>
<a id="trace-18140"></a>
<a id="trace-18228"></a>
<a id="trace-18230"></a>
<a id="trace-18235"></a>
<a id="trace-18237"></a>
<a id="trace-18247"></a>
<a id="trace-18249"></a>
<a id="trace-18257"></a>
<a id="trace-18259"></a>
<a id="trace-18272"></a>
<a id="trace-18274"></a>
<a id="trace-18281"></a>
<a id="trace-18283"></a>
<a id="trace-18295"></a>
<a id="trace-18297"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18321"></a>
<a id="trace-18323"></a>
<a id="trace-18331"></a>
<a id="trace-18333"></a>
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18431"></a>
<a id="trace-18433"></a>
<a id="trace-18448"></a>
<a id="trace-18450"></a>
<a id="trace-18465"></a>
<a id="trace-18467"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18488"></a>
<a id="trace-18490"></a>
<a id="trace-18499"></a>
<a id="trace-18501"></a>
<a id="trace-18513"></a>
<a id="trace-18515"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18592"></a>
<a id="trace-18594"></a>
<a id="trace-18600"></a>
<a id="trace-18602"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18624"></a>
<a id="trace-18626"></a>
<a id="trace-18641"></a>
<a id="trace-18643"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18678"></a>
<a id="trace-18680"></a>
<a id="trace-18694"></a>
<a id="trace-18696"></a>
<a id="trace-18708"></a>
<a id="trace-18710"></a>
<a id="trace-18719"></a>
<a id="trace-18721"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18796"></a>
<a id="trace-18798"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18815"></a>
<a id="trace-18817"></a>
<a id="trace-18832"></a>
<a id="trace-18834"></a>
<a id="trace-18842"></a>
<a id="trace-18844"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18970"></a>
<a id="trace-18972"></a>
<a id="trace-18989"></a>
<a id="trace-18991"></a>
<a id="trace-19003"></a>
<a id="trace-19005"></a>
<a id="trace-19079"></a>
<a id="trace-19081"></a>
<a id="trace-19088"></a>
<a id="trace-19090"></a>
<a id="trace-19106"></a>
<a id="trace-19108"></a>
<a id="trace-19114"></a>
<a id="trace-19116"></a>
<a id="trace-19128"></a>
<a id="trace-19130"></a>
<a id="trace-19136"></a>
<a id="trace-19138"></a>
<a id="trace-19148"></a>
<a id="trace-19150"></a>
<a id="trace-19159"></a>
<a id="trace-19161"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19185"></a>
<a id="trace-19187"></a>
<a id="trace-19254"></a>
<a id="trace-19256"></a>
<a id="trace-19266"></a>
<a id="trace-19268"></a>
<a id="trace-19292"></a>
<a id="trace-19294"></a>
<a id="trace-19309"></a>
<a id="trace-19311"></a>
<a id="trace-19322"></a>
<a id="trace-19324"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19362"></a>
<a id="trace-19364"></a>
<a id="trace-19371"></a>
<a id="trace-19373"></a>
<a id="trace-19440"></a>
<a id="trace-19442"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19461"></a>
<a id="trace-19463"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19503"></a>
<a id="trace-19505"></a>
<a id="trace-19525"></a>
<a id="trace-19527"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19565"></a>
<a id="trace-19567"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19643"></a>
<a id="trace-19645"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
<a id="trace-19668"></a>
<a id="trace-19670"></a>
<a id="trace-19684"></a>
<a id="trace-19686"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19721"></a>
<a id="trace-19723"></a>
<a id="trace-19737"></a>
<a id="trace-19739"></a>
<a id="trace-19750"></a>
<a id="trace-19752"></a>
<a id="trace-19818"></a>
<a id="trace-19820"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19843"></a>
<a id="trace-19845"></a>
<a id="trace-19852"></a>
<a id="trace-19854"></a>
<a id="trace-19871"></a>
<a id="trace-19873"></a>
<a id="trace-19879"></a>
<a id="trace-19881"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19903"></a>
<a id="trace-19905"></a>
<a id="trace-19917"></a>
<a id="trace-19919"></a>
<a id="trace-19928"></a>
<a id="trace-19930"></a>
<a id="trace-19998"></a>
<a id="trace-20000"></a>
<a id="trace-20010"></a>
<a id="trace-20012"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20171"></a>
<a id="trace-20173"></a>
<a id="trace-20187"></a>
<a id="trace-20189"></a>
<a id="trace-20202"></a>
<a id="trace-20204"></a>
<a id="trace-20217"></a>
<a id="trace-20219"></a>
<a id="trace-20225"></a>
<a id="trace-20227"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20303"></a>
<a id="trace-20305"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20329"></a>
<a id="trace-20331"></a>
<a id="trace-20348"></a>
<a id="trace-20350"></a>
<a id="trace-20364"></a>
<a id="trace-20366"></a>
<a id="trace-20377"></a>
<a id="trace-20379"></a>
<a id="trace-20385"></a>
<a id="trace-20387"></a>
<a id="trace-20399"></a>
<a id="trace-20401"></a>
<a id="trace-20409"></a>
<a id="trace-20411"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20489"></a>
<a id="trace-20491"></a>
<a id="trace-20502"></a>
<a id="trace-20504"></a>
<a id="trace-20518"></a>
<a id="trace-20520"></a>
<a id="trace-20533"></a>
<a id="trace-20535"></a>
<a id="trace-20545"></a>
<a id="trace-20547"></a>
<a id="trace-20560"></a>
<a id="trace-20562"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20600"></a>
<a id="trace-20602"></a>
<a id="trace-20669"></a>
<a id="trace-20671"></a>
<a id="trace-20678"></a>
<a id="trace-20680"></a>
<a id="trace-20691"></a>
<a id="trace-20693"></a>
<a id="trace-20706"></a>
<a id="trace-20708"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20729"></a>
<a id="trace-20731"></a>
<a id="trace-20747"></a>
<a id="trace-20749"></a>
<a id="trace-20759"></a>
<a id="trace-20761"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20782"></a>
<a id="trace-20784"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-20880"></a>
<a id="trace-20882"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-20915"></a>
<a id="trace-20917"></a>
<a id="trace-20931"></a>
<a id="trace-20933"></a>
<a id="trace-20944"></a>
<a id="trace-20946"></a>
<a id="trace-20961"></a>
<a id="trace-20963"></a>
<a id="trace-20974"></a>
<a id="trace-20976"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21053"></a>
<a id="trace-21055"></a>
<a id="trace-21069"></a>
<a id="trace-21071"></a>
<a id="trace-21080"></a>
<a id="trace-21082"></a>
<a id="trace-21098"></a>
<a id="trace-21100"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
<a id="trace-21127"></a>
<a id="trace-21129"></a>
<a id="trace-21138"></a>
<a id="trace-21140"></a>
<a id="trace-21151"></a>
<a id="trace-21153"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21226"></a>
<a id="trace-21228"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21243"></a>
<a id="trace-21245"></a>
<a id="trace-21256"></a>
<a id="trace-21258"></a>
<a id="trace-21278"></a>
<a id="trace-21280"></a>
<a id="trace-21294"></a>
<a id="trace-21296"></a>
<a id="trace-21309"></a>
<a id="trace-21311"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21338"></a>
<a id="trace-21340"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21422"></a>
<a id="trace-21424"></a>
<a id="trace-21437"></a>
<a id="trace-21439"></a>
<a id="trace-21446"></a>
<a id="trace-21448"></a>
<a id="trace-21460"></a>
<a id="trace-21462"></a>
<a id="trace-21472"></a>
<a id="trace-21474"></a>
<a id="trace-21485"></a>
<a id="trace-21487"></a>
<a id="trace-21499"></a>
<a id="trace-21501"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21605"></a>
<a id="trace-21607"></a>
<a id="trace-21615"></a>
<a id="trace-21617"></a>
<a id="trace-21632"></a>
<a id="trace-21634"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21661"></a>
<a id="trace-21663"></a>
<a id="trace-21674"></a>
<a id="trace-21676"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21702"></a>
<a id="trace-21704"></a>
<a id="trace-21721"></a>
<a id="trace-21723"></a>
<a id="trace-21732"></a>
<a id="trace-21734"></a>
<a id="trace-21824"></a>
<a id="trace-21826"></a>
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21864"></a>
<a id="trace-21866"></a>
<a id="trace-21883"></a>
<a id="trace-21885"></a>
<a id="trace-21892"></a>
<a id="trace-21894"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21921"></a>
<a id="trace-21923"></a>
<a id="trace-21936"></a>
<a id="trace-21938"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-22020"></a>
<a id="trace-22022"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22066"></a>
<a id="trace-22068"></a>
<a id="trace-22091"></a>
<a id="trace-22093"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22130"></a>
<a id="trace-22132"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22268"></a>
<a id="trace-22270"></a>
<a id="trace-22278"></a>
<a id="trace-22280"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22310"></a>
<a id="trace-22312"></a>
<a id="trace-22331"></a>
<a id="trace-22333"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22370"></a>
<a id="trace-22372"></a>
<a id="trace-22381"></a>
<a id="trace-22383"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22502"></a>
<a id="trace-22504"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22531"></a>
<a id="trace-22533"></a>
<a id="trace-22547"></a>
<a id="trace-22549"></a>
<a id="trace-22559"></a>
<a id="trace-22561"></a>
<a id="trace-22578"></a>
<a id="trace-22580"></a>
<a id="trace-22590"></a>
<a id="trace-22592"></a>
<a id="trace-22669"></a>
<a id="trace-22671"></a>
<a id="trace-22677"></a>
<a id="trace-22679"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22723"></a>
<a id="trace-22725"></a>
<a id="trace-22740"></a>
<a id="trace-22742"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22768"></a>
<a id="trace-22770"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22797"></a>
<a id="trace-22799"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22882"></a>
<a id="trace-22884"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22926"></a>
<a id="trace-22928"></a>
<a id="trace-22948"></a>
<a id="trace-22950"></a>
<a id="trace-22965"></a>
<a id="trace-22967"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-23004"></a>
<a id="trace-23006"></a>
<a id="trace-23022"></a>
<a id="trace-23024"></a>
<a id="trace-23033"></a>
<a id="trace-23035"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23115"></a>
<a id="trace-23117"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23174"></a>
<a id="trace-23176"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23213"></a>
<a id="trace-23215"></a>
<a id="trace-23230"></a>
<a id="trace-23232"></a>
<a id="trace-23250"></a>
<a id="trace-23252"></a>
<a id="trace-23324"></a>
<a id="trace-23326"></a>
<a id="trace-23334"></a>
<a id="trace-23336"></a>
<a id="trace-23355"></a>
<a id="trace-23357"></a>
<a id="trace-23367"></a>
<a id="trace-23369"></a>
<a id="trace-23386"></a>
<a id="trace-23388"></a>
<a id="trace-23397"></a>
<a id="trace-23399"></a>
<a id="trace-23413"></a>
<a id="trace-23415"></a>
<a id="trace-23424"></a>
<a id="trace-23426"></a>
<a id="trace-23442"></a>
<a id="trace-23444"></a>
<a id="trace-23459"></a>
<a id="trace-23461"></a>
<a id="trace-23530"></a>
<a id="trace-23532"></a>
<a id="trace-23545"></a>
<a id="trace-23547"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23581"></a>
<a id="trace-23583"></a>
<a id="trace-23601"></a>
<a id="trace-23603"></a>
<a id="trace-23618"></a>
<a id="trace-23620"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23647"></a>
<a id="trace-23649"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23675"></a>
<a id="trace-23677"></a>
<a id="trace-23748"></a>
<a id="trace-23750"></a>
<a id="trace-23760"></a>
<a id="trace-23762"></a>
<a id="trace-23777"></a>
<a id="trace-23779"></a>
<a id="trace-23793"></a>
<a id="trace-23795"></a>
<a id="trace-23815"></a>
<a id="trace-23817"></a>
<a id="trace-23825"></a>
<a id="trace-23827"></a>
<a id="trace-23848"></a>
<a id="trace-23850"></a>
<a id="trace-23861"></a>
<a id="trace-23863"></a>
<a id="trace-23883"></a>
<a id="trace-23885"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23969"></a>
<a id="trace-23971"></a>
<a id="trace-23978"></a>
<a id="trace-23980"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24010"></a>
<a id="trace-24012"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24039"></a>
<a id="trace-24041"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24071"></a>
<a id="trace-24073"></a>
<a id="trace-24091"></a>
<a id="trace-24093"></a>
<a id="trace-24109"></a>
<a id="trace-24111"></a>
<a id="trace-24182"></a>
<a id="trace-24184"></a>
<a id="trace-24194"></a>
<a id="trace-24196"></a>
<a id="trace-24213"></a>
<a id="trace-24215"></a>
<a id="trace-24225"></a>
<a id="trace-24227"></a>
<a id="trace-24248"></a>
<a id="trace-24250"></a>
<a id="trace-24261"></a>
<a id="trace-24263"></a>
<a id="trace-24274"></a>
<a id="trace-24276"></a>
<a id="trace-24288"></a>
<a id="trace-24290"></a>
<a id="trace-24307"></a>
<a id="trace-24309"></a>
<a id="trace-24319"></a>
<a id="trace-24321"></a>
<a id="trace-24392"></a>
<a id="trace-24394"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24427"></a>
<a id="trace-24429"></a>
<a id="trace-24439"></a>
<a id="trace-24441"></a>
<a id="trace-24460"></a>
<a id="trace-24462"></a>
<a id="trace-24470"></a>
<a id="trace-24472"></a>
<a id="trace-24486"></a>
<a id="trace-24488"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24521"></a>
<a id="trace-24523"></a>
<a id="trace-24534"></a>
<a id="trace-24536"></a>
<a id="trace-24606"></a>
<a id="trace-24608"></a>
<a id="trace-24615"></a>
<a id="trace-24617"></a>
<a id="trace-24635"></a>
<a id="trace-24637"></a>
<a id="trace-24649"></a>
<a id="trace-24651"></a>
<a id="trace-24671"></a>
<a id="trace-24673"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24704"></a>
<a id="trace-24706"></a>
<a id="trace-24716"></a>
<a id="trace-24718"></a>
<a id="trace-24734"></a>
<a id="trace-24736"></a>
<a id="trace-24748"></a>
<a id="trace-24750"></a>
<a id="trace-24820"></a>
<a id="trace-24822"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24852"></a>
<a id="trace-24854"></a>
<a id="trace-24864"></a>
<a id="trace-24866"></a>
<a id="trace-24882"></a>
<a id="trace-24884"></a>
<a id="trace-24897"></a>
<a id="trace-24899"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24954"></a>
<a id="trace-24956"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-25036"></a>
<a id="trace-25038"></a>
<a id="trace-25048"></a>
<a id="trace-25050"></a>
<a id="trace-25062"></a>
<a id="trace-25064"></a>
<a id="trace-25078"></a>
<a id="trace-25080"></a>
<a id="trace-25098"></a>
<a id="trace-25100"></a>
<a id="trace-25109"></a>
<a id="trace-25111"></a>
<a id="trace-25130"></a>
<a id="trace-25132"></a>
<a id="trace-25142"></a>
<a id="trace-25144"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25258"></a>
<a id="trace-25260"></a>
<a id="trace-25281"></a>
<a id="trace-25283"></a>
<a id="trace-25295"></a>
<a id="trace-25297"></a>
<a id="trace-25311"></a>
<a id="trace-25313"></a>
<a id="trace-25324"></a>
<a id="trace-25326"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25352"></a>
<a id="trace-25354"></a>
<a id="trace-25370"></a>
<a id="trace-25372"></a>
<a id="trace-25388"></a>
<a id="trace-25390"></a>
<a id="trace-25462"></a>
<a id="trace-25464"></a>
<a id="trace-25472"></a>
<a id="trace-25474"></a>
<a id="trace-25494"></a>
<a id="trace-25496"></a>
<a id="trace-25505"></a>
<a id="trace-25507"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25546"></a>
<a id="trace-25548"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25576"></a>
<a id="trace-25578"></a>
<a id="trace-25594"></a>
<a id="trace-25596"></a>
<a id="trace-25605"></a>
<a id="trace-25607"></a>
<a id="trace-25678"></a>
<a id="trace-25680"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25711"></a>
<a id="trace-25713"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25759"></a>
<a id="trace-25761"></a>
<a id="trace-25777"></a>
<a id="trace-25779"></a>
<a id="trace-25794"></a>
<a id="trace-25796"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25941"></a>
<a id="trace-25943"></a>
<a id="trace-25957"></a>
<a id="trace-25959"></a>
<a id="trace-25973"></a>
<a id="trace-25975"></a>
<a id="trace-25988"></a>
<a id="trace-25990"></a>
<a id="trace-26007"></a>
<a id="trace-26009"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26056"></a>
<a id="trace-26058"></a>
<a id="trace-26081"></a>
<a id="trace-26083"></a>
<a id="trace-26100"></a>
<a id="trace-26102"></a>
<a id="trace-26170"></a>
<a id="trace-26172"></a>
<a id="trace-26191"></a>
<a id="trace-26193"></a>
<a id="trace-26207"></a>
<a id="trace-26209"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26238"></a>
<a id="trace-26240"></a>
<a id="trace-26252"></a>
<a id="trace-26254"></a>
<a id="trace-26268"></a>
<a id="trace-26270"></a>
<a id="trace-26283"></a>
<a id="trace-26285"></a>
<a id="trace-26302"></a>
<a id="trace-26304"></a>
<a id="trace-26316"></a>
<a id="trace-26318"></a>
<a id="trace-27444"></a>
<a id="trace-27446"></a>
<a id="trace-27480"></a>
<a id="trace-27482"></a>
<a id="trace-27862"></a>
<a id="trace-27864"></a>
<a id="trace-28242"></a>
<a id="trace-28244"></a>
<a id="trace-28286"></a>
<a id="trace-28288"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28690"></a>
<a id="trace-28692"></a>
<a id="trace-28712"></a>
<a id="trace-28714"></a>
<a id="trace-28736"></a>
<a id="trace-28738"></a>
<a id="trace-28750"></a>
<a id="trace-28752"></a>
<a id="trace-28816"></a>
<a id="trace-28818"></a>
<a id="trace-28826"></a>
<a id="trace-28828"></a>
<a id="trace-28848"></a>
<a id="trace-28850"></a>
<a id="trace-28864"></a>
<a id="trace-28866"></a>
<a id="trace-28883"></a>
<a id="trace-28885"></a>
<a id="trace-28898"></a>
<a id="trace-28900"></a>
<a id="trace-28919"></a>
<a id="trace-28921"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-28964"></a>
<a id="trace-28966"></a>
<a id="trace-29036"></a>
<a id="trace-29038"></a>
<a id="trace-29045"></a>
<a id="trace-29047"></a>
<a id="trace-29064"></a>
<a id="trace-29066"></a>
<a id="trace-29128"></a>
<a id="trace-29130"></a>
<a id="trace-29149"></a>
<a id="trace-29151"></a>
<a id="trace-29165"></a>
<a id="trace-29167"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29201"></a>
<a id="trace-29203"></a>
<a id="trace-29218"></a>
<a id="trace-29220"></a>
<a id="trace-29231"></a>
<a id="trace-29233"></a>
<a id="trace-29302"></a>
<a id="trace-29304"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29331"></a>
<a id="trace-29333"></a>
<a id="trace-29343"></a>
<a id="trace-29345"></a>
<a id="trace-29359"></a>
<a id="trace-29361"></a>
<a id="trace-29369"></a>
<a id="trace-29371"></a>
<a id="trace-29386"></a>
<a id="trace-29388"></a>
<a id="trace-29402"></a>
<a id="trace-29404"></a>
<a id="trace-29418"></a>
<a id="trace-29420"></a>
<a id="trace-29433"></a>
<a id="trace-29435"></a>
<a id="trace-29503"></a>
<a id="trace-29505"></a>
<a id="trace-29516"></a>
<a id="trace-29518"></a>
<a id="trace-29536"></a>
<a id="trace-29538"></a>
<a id="trace-29551"></a>
<a id="trace-29553"></a>
<a id="trace-29571"></a>
<a id="trace-29573"></a>
<a id="trace-29584"></a>
<a id="trace-29586"></a>
<a id="trace-29601"></a>
<a id="trace-29603"></a>
<a id="trace-29618"></a>
<a id="trace-29620"></a>
<a id="trace-29637"></a>
<a id="trace-29639"></a>
<a id="trace-29649"></a>
<a id="trace-29651"></a>
<a id="trace-29718"></a>
<a id="trace-29720"></a>
<a id="trace-29729"></a>
<a id="trace-29731"></a>
<a id="trace-29746"></a>
<a id="trace-29748"></a>
<a id="trace-29759"></a>
<a id="trace-29761"></a>
<a id="trace-29776"></a>
<a id="trace-29778"></a>
<a id="trace-29789"></a>
<a id="trace-29791"></a>
<a id="trace-29807"></a>
<a id="trace-29809"></a>
<a id="trace-29824"></a>
<a id="trace-29826"></a>
<a id="trace-29845"></a>
<a id="trace-29847"></a>
<a id="trace-29857"></a>
<a id="trace-29859"></a>
<a id="trace-29926"></a>
<a id="trace-29928"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29954"></a>
<a id="trace-29956"></a>
<a id="trace-29971"></a>
<a id="trace-29973"></a>
<a id="trace-29993"></a>
<a id="trace-29995"></a>
<a id="trace-30004"></a>
<a id="trace-30006"></a>
<a id="trace-30019"></a>
<a id="trace-30021"></a>
<a id="trace-30037"></a>
<a id="trace-30039"></a>
<a id="trace-30053"></a>
<a id="trace-30055"></a>
<a id="trace-30063"></a>
<a id="trace-30065"></a>
<a id="trace-30131"></a>
<a id="trace-30133"></a>
<a id="trace-30140"></a>
<a id="trace-30142"></a>
<a id="trace-30157"></a>
<a id="trace-30159"></a>
<a id="trace-30167"></a>
<a id="trace-30169"></a>
<a id="trace-30183"></a>
<a id="trace-30185"></a>
<a id="trace-30193"></a>
<a id="trace-30195"></a>
<a id="trace-30206"></a>
<a id="trace-30208"></a>
<a id="trace-30217"></a>
<a id="trace-30219"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30249"></a>
<a id="trace-30251"></a>
<a id="trace-30315"></a>
<a id="trace-30317"></a>
<a id="trace-30327"></a>
<a id="trace-30329"></a>
<a id="trace-30340"></a>
<a id="trace-30342"></a>
<a id="trace-30351"></a>
<a id="trace-30353"></a>
<a id="trace-30364"></a>
<a id="trace-30366"></a>
<a id="trace-30372"></a>
<a id="trace-30374"></a>
<a id="trace-30386"></a>
<a id="trace-30388"></a>
<a id="trace-30397"></a>
<a id="trace-30399"></a>
<a id="trace-30419"></a>
<a id="trace-30421"></a>
<a id="trace-30429"></a>
<a id="trace-30431"></a>
<a id="trace-30497"></a>
<a id="trace-30499"></a>
<a id="trace-30511"></a>
<a id="trace-30513"></a>
<a id="trace-30527"></a>
<a id="trace-30529"></a>
<a id="trace-30544"></a>
<a id="trace-30546"></a>
<a id="trace-30562"></a>
<a id="trace-30564"></a>
<a id="trace-30574"></a>
<a id="trace-30576"></a>
<a id="trace-30595"></a>
<a id="trace-30597"></a>
<a id="trace-30609"></a>
<a id="trace-30611"></a>
<a id="trace-30628"></a>
<a id="trace-30630"></a>
<a id="trace-30641"></a>
<a id="trace-30643"></a>
<a id="trace-30707"></a>
<a id="trace-30709"></a>
<a id="trace-30718"></a>
<a id="trace-30720"></a>
<a id="trace-30732"></a>
<a id="trace-30734"></a>
<a id="trace-30748"></a>
<a id="trace-30750"></a>
<a id="trace-30763"></a>
<a id="trace-30765"></a>
<a id="trace-30775"></a>
<a id="trace-30777"></a>
<a id="trace-30793"></a>
<a id="trace-30795"></a>
<a id="trace-30802"></a>
<a id="trace-30804"></a>
<a id="trace-30820"></a>
<a id="trace-30822"></a>
<a id="trace-30832"></a>
<a id="trace-30834"></a>
<a id="trace-30899"></a>
<a id="trace-30901"></a>
<a id="trace-30907"></a>
<a id="trace-30909"></a>
<a id="trace-30924"></a>
<a id="trace-30926"></a>
<a id="trace-30934"></a>
<a id="trace-30936"></a>
<a id="trace-30948"></a>
<a id="trace-30950"></a>
<a id="trace-30958"></a>
<a id="trace-30960"></a>
<a id="trace-30976"></a>
<a id="trace-30978"></a>
<a id="trace-30984"></a>
<a id="trace-30986"></a>
<a id="trace-31001"></a>
<a id="trace-31003"></a>
<a id="trace-31012"></a>
<a id="trace-31014"></a>
<a id="trace-31079"></a>
<a id="trace-31081"></a>
<a id="trace-31088"></a>
<a id="trace-31090"></a>
<a id="trace-31100"></a>
<a id="trace-31102"></a>
<a id="trace-31110"></a>
<a id="trace-31112"></a>
<a id="trace-31128"></a>
<a id="trace-31130"></a>
<a id="trace-31139"></a>
<a id="trace-31141"></a>
<a id="trace-31155"></a>
<a id="trace-31157"></a>
<a id="trace-31164"></a>
<a id="trace-31166"></a>
<a id="trace-31183"></a>
<a id="trace-31185"></a>
<a id="trace-31199"></a>
<a id="trace-31201"></a>
<a id="trace-31272"></a>
<a id="trace-31274"></a>
<a id="trace-31284"></a>
<a id="trace-31286"></a>
<a id="trace-31302"></a>
<a id="trace-31304"></a>
<a id="trace-31313"></a>
<a id="trace-31315"></a>
<a id="trace-31332"></a>
<a id="trace-31334"></a>
<a id="trace-31345"></a>
<a id="trace-31347"></a>
<a id="trace-31365"></a>
<a id="trace-31367"></a>
<a id="trace-31378"></a>
<a id="trace-31380"></a>
<a id="trace-31398"></a>
<a id="trace-31400"></a>
<a id="trace-31412"></a>
<a id="trace-31414"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.507937058323342, 'next_transition': 574}.
<a id="trace-781"></a>
<a id="trace-783"></a>
<a id="trace-807"></a>
<a id="trace-809"></a>
<a id="trace-838"></a>
<a id="trace-840"></a>
<a id="trace-873"></a>
<a id="trace-875"></a>
<a id="trace-894"></a>
<a id="trace-896"></a>
<a id="trace-924"></a>
<a id="trace-926"></a>
<a id="trace-953"></a>
<a id="trace-955"></a>
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1113"></a>
<a id="trace-1115"></a>
<a id="trace-1361"></a>
<a id="trace-1363"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 781): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 713. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600243844709564, 'next_transition': 807}.
<a id="trace-1121"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1121): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1042. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5204513378927982, 'next_transition': 126}.
<a id="trace-1122"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1122): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1042. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5204513378927982, 'next_transition': 126}.
<a id="trace-125"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 125): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5600470128891946, 'next_transition': 1416}.
<a id="trace-126"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 126): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.942449832454894, 'next_transition': 2098}.
<a id="trace-1391"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1391): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1391. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5600470128891946, 'next_transition': 1416}.
<a id="trace-1392"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1392): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1392. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5600470128891946, 'next_transition': 1416}.
<a id="trace-1393"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1393): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1393. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.942449832454894, 'next_transition': 2098}.
<a id="trace-1394"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1394): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1394. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.942449832454894, 'next_transition': 2098}.
<a id="trace-1416"></a>
<a id="trace-1418"></a>
<a id="trace-1449"></a>
<a id="trace-1451"></a>
<a id="trace-1473"></a>
<a id="trace-1475"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1416): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1394. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5118687770967698, 'next_transition': 1449}.
<a id="trace-1483"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1483): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804963221119886, 'next_transition': 1999}.
<a id="trace-1484"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1484): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804963221119886, 'next_transition': 1999}.
<a id="trace-1999"></a>
<a id="trace-2001"></a>
<a id="trace-2063"></a>
<a id="trace-2065"></a>
<a id="trace-3432"></a>
<a id="trace-3434"></a>
<a id="trace-3498"></a>
<a id="trace-3500"></a>
<a id="trace-4240"></a>
<a id="trace-4242"></a>
<a id="trace-4337"></a>
<a id="trace-4339"></a>
- 13.20s–17.25s (×12), actor 5, squad 0 (trace 1999): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1394. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5487233331626253, 'next_transition': 2063}.
<a id="trace-2098"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2098): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1042. Next observer evidence: None.
<a id="trace-2099"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2099): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1042. Next observer evidence: None.
<a id="trace-2100"></a>
<a id="trace-2416"></a>
<a id="trace-2757"></a>
<a id="trace-3114"></a>
<a id="trace-3530"></a>
<a id="trace-3880"></a>
- 14.85s–16.10s (×6), actor 8, squad 1 (trace 2100): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1042. Next observer evidence: None.
<a id="trace-4377"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4377): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2731. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8075442895041525, 'next_transition': 5022}.
<a id="trace-4378"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4378): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2731. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8075442895041525, 'next_transition': 5022}.
<a id="trace-4379"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4379): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2731. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8075442895041525, 'next_transition': 5022}.
<a id="trace-5022"></a>
<a id="trace-5024"></a>
<a id="trace-5073"></a>
<a id="trace-5075"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5486"></a>
<a id="trace-5488"></a>
<a id="trace-5512"></a>
<a id="trace-5514"></a>
- 18.75s–21.25s (×10), actor 5, squad 0 (trace 5022): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2736. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.702471733816218, 'next_transition': 5073}.
<a id="trace-5093"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 5093): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 2739. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.220349882472032, 'next_transition': 10162}.
<a id="trace-5094"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 5094): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 2739. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.220349882472032, 'next_transition': 10162}.
<a id="trace-5537"></a>
- 21.45s–21.45s (×1), actor 0, squad 0 (trace 5537): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5354. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29904434647055217, 'next_transition': 5555}.
<a id="trace-5555"></a>
<a id="trace-5557"></a>
<a id="trace-5589"></a>
<a id="trace-5591"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 5555): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5359. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.9963967267828656, 'next_transition': 5589}.
<a id="trace-5631"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 5631): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 5354. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7199944149334915, 'next_transition': 6445}.
<a id="trace-6445"></a>
<a id="trace-6447"></a>
<a id="trace-6494"></a>
<a id="trace-6496"></a>
<a id="trace-6529"></a>
<a id="trace-6531"></a>
<a id="trace-6638"></a>
<a id="trace-6640"></a>
<a id="trace-6669"></a>
<a id="trace-6671"></a>
- 23.75s–26.25s (×10), actor 5, squad 0 (trace 6445): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5359. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48100444127507885, 'next_transition': 6494}.
<a id="trace-6689"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 6689): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 6540. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7200011420329153, 'next_transition': 6725}.
<a id="trace-6725"></a>
<a id="trace-6727"></a>
<a id="trace-6739"></a>
<a id="trace-6741"></a>
<a id="trace-6763"></a>
<a id="trace-6765"></a>
<a id="trace-6786"></a>
<a id="trace-6788"></a>
<a id="trace-6808"></a>
<a id="trace-6810"></a>
<a id="trace-6833"></a>
<a id="trace-6835"></a>
- 27.25s–29.75s (×12), actor 5, squad 0 (trace 6725): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6544. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35999866221064963, 'next_transition': 6739}.
<a id="trace-6861"></a>
- 30.00s–30.00s (×1), actor 0, squad 0 (trace 6861): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6842. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15148868604561852, 'next_transition': 9652}.
<a id="trace-8966"></a>
- 30.00s–30.00s (×1), actor 0, squad 0 (trace 8966): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 6842. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15148868604561852, 'next_transition': 9652}.
<a id="trace-8967"></a>
- 30.00s–30.00s (×1), actor 0, squad 0 (trace 8967): MoveTactically. Knowledge: actor memory at 30.00s, trace 6842. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15148868604561852, 'next_transition': 9652}.
<a id="trace-8968"></a>
- 30.00s–30.00s (×1), actor 0, squad 0 (trace 8968): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 6842. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15148868604561852, 'next_transition': 9652}.
<a id="trace-9652"></a>
<a id="trace-9654"></a>
- 30.25s–30.25s (×2), actor 5, squad 0 (trace 9652): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6846. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26341469068200746, 'next_transition': 9860}.
<a id="trace-9661"></a>
- 30.25s–30.25s (×1), actor 0, squad 0 (trace 9661): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 30.00s, trace 6842. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26341469068200746, 'next_transition': 9860}.
<a id="trace-9860"></a>
<a id="trace-9862"></a>
<a id="trace-9896"></a>
<a id="trace-9898"></a>
<a id="trace-9928"></a>
<a id="trace-9930"></a>
<a id="trace-9984"></a>
<a id="trace-9986"></a>
<a id="trace-10028"></a>
<a id="trace-10030"></a>
<a id="trace-10054"></a>
<a id="trace-10056"></a>
- 30.75s–34.25s (×12), actor 5, squad 0 (trace 9860): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6846. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35690330795807385, 'next_transition': 9896}.
<a id="trace-10072"></a>
- 34.70s–34.70s (×1), actor 1, squad 0 (trace 10072): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 6843. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8125044529380672, 'next_transition': 10235}.
<a id="trace-10074"></a>
- 34.70s–34.70s (×1), actor 1, squad 0 (trace 10074): NeedSupport. Knowledge: actor memory at 30.00s, trace 6843. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8125044529380672, 'next_transition': 10235}.
<a id="trace-10162"></a>
- 35.20s–35.20s (×1), actor 8, squad 1 (trace 10162): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 10099. Next observer evidence: {'until': 36.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.917270720888877, 'next_transition': 10855}.
<a id="trace-10163"></a>
- 35.20s–35.20s (×1), actor 8, squad 1 (trace 10163): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 10099. Next observer evidence: {'until': 36.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.917270720888877, 'next_transition': 10855}.
<a id="trace-10235"></a>
- 35.65s–35.65s (×1), actor 1, squad 0 (trace 10235): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 10093. Next observer evidence: None.
<a id="trace-10240"></a>
- 35.65s–35.65s (×1), actor 1, squad 0 (trace 10240): MoveTactically. Knowledge: actor memory at 35.00s, trace 10093. Next observer evidence: None.
<a id="trace-10241"></a>
- 35.65s–35.65s (×1), actor 1, squad 0 (trace 10241): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 10093. Next observer evidence: None.
<a id="trace-10772"></a>
<a id="trace-10774"></a>
<a id="trace-10802"></a>
<a id="trace-10804"></a>
<a id="trace-10874"></a>
<a id="trace-10876"></a>
- 35.75s–37.25s (×6), actor 5, squad 0 (trace 10772): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10096. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299995974112682, 'next_transition': 10802}.
<a id="trace-10855"></a>
- 36.85s–36.85s (×1), actor 8, squad 1 (trace 10855): NeedSupport. Knowledge: actor memory at 35.00s, trace 10099. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.369786774656347, 'next_transition': 11981}.
<a id="trace-10908"></a>
- 38.10s–38.10s (×1), actor 1, squad 0 (trace 10908): NeedSupport. Knowledge: actor memory at 35.00s, trace 10093. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999906489357786, 'next_transition': 10933}.
<a id="trace-10933"></a>
<a id="trace-10948"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 10933): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10096. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8254551440052119, 'next_transition': 10948}.
<a id="trace-571"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 571): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10957"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10957): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.492681 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10957. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000681885591296, 'next_transition': 10971}.
<a id="trace-10958"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10958): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.492681 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10958. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000681885591296, 'next_transition': 10971}.
<a id="trace-10971"></a>
<a id="trace-10980"></a>
<a id="trace-11088"></a>
<a id="trace-11123"></a>
<a id="trace-11125"></a>
<a id="trace-11157"></a>
<a id="trace-11159"></a>
<a id="trace-11171"></a>
<a id="trace-11173"></a>
<a id="trace-11192"></a>
<a id="trace-11194"></a>
- 39.25s–43.25s (×11), actor 5, squad 0 (trace 10971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 10958. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420004900508326, 'next_transition': 10980}.
<a id="trace-11208"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 11208): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 10992. Next observer evidence: None.
<a id="trace-11209"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 11209): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 10992. Next observer evidence: None.
<a id="trace-11754"></a>
<a id="trace-11756"></a>
<a id="trace-11773"></a>
<a id="trace-11775"></a>
<a id="trace-11802"></a>
<a id="trace-11804"></a>
<a id="trace-11939"></a>
<a id="trace-11941"></a>
<a id="trace-11965"></a>
<a id="trace-11967"></a>
- 43.75s–46.75s (×10), actor 5, squad 0 (trace 11754): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10995. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17776756425956272, 'next_transition': 11773}.
<a id="trace-11981"></a>
- 47.00s–47.00s (×1), actor 8, squad 1 (trace 11981): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 45.00s, trace 11825. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056694932754170826, 'next_transition': 906}.
<a id="trace-12008"></a>
- 47.50s–47.50s (×1), actor 1, squad 0 (trace 12008): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 11819. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17101555172925686, 'next_transition': 15331}.
<a id="trace-12010"></a>
- 47.50s–47.50s (×1), actor 1, squad 0 (trace 12010): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 11819. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17101555172925686, 'next_transition': 15331}.
<a id="trace-15138"></a>
- 47.50s–47.50s (×1), actor 1, squad 0 (trace 15138): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 11819. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17101555172925686, 'next_transition': 15331}.
<a id="trace-15139"></a>
- 47.50s–47.50s (×1), actor 1, squad 0 (trace 15139): MoveTactically. Knowledge: actor memory at 45.00s, trace 11819. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17101555172925686, 'next_transition': 15331}.
<a id="trace-15140"></a>
- 47.50s–47.50s (×1), actor 1, squad 0 (trace 15140): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 11819. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17101555172925686, 'next_transition': 15331}.
<a id="trace-15331"></a>
<a id="trace-15333"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15400"></a>
<a id="trace-15402"></a>
<a id="trace-15539"></a>
<a id="trace-15541"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15630"></a>
<a id="trace-15632"></a>
<a id="trace-15647"></a>
<a id="trace-15649"></a>
<a id="trace-15766"></a>
<a id="trace-15768"></a>
<a id="trace-15778"></a>
<a id="trace-15780"></a>
<a id="trace-15810"></a>
<a id="trace-15812"></a>
<a id="trace-15845"></a>
<a id="trace-15847"></a>
<a id="trace-15881"></a>
<a id="trace-15883"></a>
<a id="trace-15899"></a>
<a id="trace-15901"></a>
<a id="trace-15914"></a>
<a id="trace-15924"></a>
<a id="trace-16011"></a>
<a id="trace-16022"></a>
<a id="trace-16047"></a>
- 47.75s–62.25s (×31), actor 5, squad 0 (trace 15331): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 11822. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8016567605140749, 'next_transition': 15359}.
<a id="trace-16067"></a>
- 62.55s–62.55s (×1), actor 7, squad 0 (trace 16067): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 15933. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1396591662471327, 'next_transition': 16212}.
<a id="trace-16068"></a>
- 62.55s–62.55s (×1), actor 7, squad 0 (trace 16068): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 15933. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1396591662471327, 'next_transition': 16212}.
<a id="trace-16212"></a>
<a id="trace-16233"></a>
<a id="trace-16246"></a>
<a id="trace-16330"></a>
<a id="trace-16343"></a>
<a id="trace-16374"></a>
<a id="trace-16381"></a>
<a id="trace-16399"></a>
<a id="trace-16428"></a>
<a id="trace-16438"></a>
<a id="trace-16509"></a>
<a id="trace-16517"></a>
<a id="trace-16532"></a>
<a id="trace-16697"></a>
<a id="trace-16720"></a>
<a id="trace-16782"></a>
<a id="trace-16802"></a>
<a id="trace-16815"></a>
<a id="trace-16884"></a>
<a id="trace-16896"></a>
<a id="trace-16908"></a>
<a id="trace-16923"></a>
<a id="trace-16938"></a>
<a id="trace-16954"></a>
<a id="trace-17103"></a>
<a id="trace-17167"></a>
<a id="trace-17182"></a>
<a id="trace-17255"></a>
<a id="trace-17269"></a>
<a id="trace-17288"></a>
<a id="trace-17300"></a>
<a id="trace-17318"></a>
<a id="trace-17328"></a>
<a id="trace-17343"></a>
<a id="trace-17353"></a>
<a id="trace-17368"></a>
<a id="trace-17454"></a>
<a id="trace-17475"></a>
<a id="trace-17491"></a>
<a id="trace-17512"></a>
<a id="trace-17529"></a>
<a id="trace-17555"></a>
<a id="trace-17715"></a>
<a id="trace-17729"></a>
<a id="trace-17808"></a>
<a id="trace-17835"></a>
<a id="trace-17856"></a>
<a id="trace-18125"></a>
<a id="trace-18136"></a>
<a id="trace-18226"></a>
<a id="trace-18245"></a>
<a id="trace-18255"></a>
<a id="trace-18270"></a>
<a id="trace-18279"></a>
<a id="trace-18293"></a>
<a id="trace-18305"></a>
<a id="trace-18319"></a>
<a id="trace-18329"></a>
<a id="trace-18403"></a>
<a id="trace-18411"></a>
<a id="trace-18463"></a>
<a id="trace-18472"></a>
<a id="trace-18486"></a>
<a id="trace-18497"></a>
<a id="trace-18511"></a>
<a id="trace-18520"></a>
<a id="trace-18590"></a>
<a id="trace-18598"></a>
<a id="trace-18622"></a>
<a id="trace-18652"></a>
<a id="trace-18676"></a>
<a id="trace-18692"></a>
<a id="trace-18706"></a>
<a id="trace-18717"></a>
<a id="trace-18787"></a>
<a id="trace-18794"></a>
<a id="trace-18840"></a>
<a id="trace-18954"></a>
<a id="trace-18968"></a>
<a id="trace-18987"></a>
<a id="trace-19077"></a>
<a id="trace-19104"></a>
<a id="trace-19112"></a>
<a id="trace-19126"></a>
<a id="trace-19134"></a>
<a id="trace-19146"></a>
<a id="trace-19157"></a>
<a id="trace-19172"></a>
<a id="trace-19264"></a>
<a id="trace-19280"></a>
<a id="trace-19290"></a>
<a id="trace-19320"></a>
<a id="trace-19335"></a>
<a id="trace-19347"></a>
<a id="trace-19369"></a>
<a id="trace-19438"></a>
<a id="trace-19447"></a>
<a id="trace-19459"></a>
<a id="trace-19472"></a>
<a id="trace-19491"></a>
<a id="trace-19501"></a>
<a id="trace-19523"></a>
<a id="trace-19536"></a>
<a id="trace-19551"></a>
<a id="trace-19563"></a>
<a id="trace-19631"></a>
<a id="trace-19641"></a>
<a id="trace-19654"></a>
<a id="trace-19666"></a>
<a id="trace-19682"></a>
<a id="trace-19691"></a>
<a id="trace-19719"></a>
<a id="trace-19748"></a>
<a id="trace-19841"></a>
<a id="trace-19869"></a>
<a id="trace-19877"></a>
<a id="trace-19889"></a>
<a id="trace-19926"></a>
<a id="trace-19996"></a>
<a id="trace-20008"></a>
<a id="trace-20124"></a>
<a id="trace-20138"></a>
<a id="trace-20155"></a>
<a id="trace-20185"></a>
<a id="trace-20200"></a>
<a id="trace-20215"></a>
<a id="trace-20292"></a>
<a id="trace-20301"></a>
<a id="trace-20316"></a>
<a id="trace-20346"></a>
<a id="trace-20362"></a>
<a id="trace-20397"></a>
<a id="trace-20407"></a>
<a id="trace-20476"></a>
<a id="trace-20487"></a>
<a id="trace-20500"></a>
<a id="trace-20516"></a>
<a id="trace-20531"></a>
<a id="trace-20543"></a>
<a id="trace-20558"></a>
<a id="trace-20573"></a>
<a id="trace-20598"></a>
<a id="trace-20667"></a>
<a id="trace-20676"></a>
<a id="trace-20689"></a>
<a id="trace-20704"></a>
<a id="trace-20718"></a>
<a id="trace-20745"></a>
<a id="trace-20757"></a>
<a id="trace-20853"></a>
<a id="trace-20861"></a>
<a id="trace-20878"></a>
<a id="trace-20891"></a>
<a id="trace-20913"></a>
<a id="trace-20929"></a>
<a id="trace-20942"></a>
<a id="trace-20959"></a>
<a id="trace-20972"></a>
<a id="trace-21044"></a>
<a id="trace-21067"></a>
<a id="trace-21078"></a>
<a id="trace-21096"></a>
<a id="trace-21112"></a>
<a id="trace-21125"></a>
<a id="trace-21136"></a>
<a id="trace-21157"></a>
<a id="trace-21230"></a>
<a id="trace-21254"></a>
<a id="trace-21276"></a>
<a id="trace-21292"></a>
<a id="trace-21323"></a>
<a id="trace-21344"></a>
<a id="trace-21413"></a>
<a id="trace-21435"></a>
<a id="trace-21458"></a>
<a id="trace-21470"></a>
<a id="trace-21483"></a>
<a id="trace-21497"></a>
<a id="trace-21518"></a>
<a id="trace-21530"></a>
<a id="trace-21603"></a>
<a id="trace-21613"></a>
<a id="trace-21630"></a>
<a id="trace-21641"></a>
<a id="trace-21672"></a>
<a id="trace-21686"></a>
<a id="trace-21700"></a>
<a id="trace-21730"></a>
<a id="trace-21809"></a>
<a id="trace-21822"></a>
<a id="trace-21844"></a>
<a id="trace-21862"></a>
<a id="trace-21881"></a>
<a id="trace-21906"></a>
<a id="trace-21934"></a>
<a id="trace-22018"></a>
<a id="trace-22029"></a>
<a id="trace-22047"></a>
<a id="trace-22064"></a>
<a id="trace-22089"></a>
<a id="trace-22106"></a>
<a id="trace-22128"></a>
<a id="trace-22157"></a>
<a id="trace-22238"></a>
<a id="trace-22250"></a>
<a id="trace-22296"></a>
<a id="trace-22308"></a>
<a id="trace-22329"></a>
<a id="trace-22345"></a>
<a id="trace-22368"></a>
<a id="trace-22379"></a>
<a id="trace-22461"></a>
<a id="trace-22473"></a>
<a id="trace-22500"></a>
<a id="trace-22519"></a>
<a id="trace-22529"></a>
<a id="trace-22545"></a>
<a id="trace-22576"></a>
<a id="trace-22588"></a>
<a id="trace-22667"></a>
<a id="trace-22721"></a>
<a id="trace-22738"></a>
<a id="trace-22751"></a>
<a id="trace-22777"></a>
<a id="trace-22795"></a>
<a id="trace-22806"></a>
<a id="trace-22880"></a>
<a id="trace-22891"></a>
<a id="trace-22909"></a>
<a id="trace-22924"></a>
<a id="trace-22946"></a>
<a id="trace-22963"></a>
<a id="trace-22985"></a>
<a id="trace-23002"></a>
<a id="trace-23020"></a>
<a id="trace-23031"></a>
<a id="trace-23103"></a>
<a id="trace-23113"></a>
<a id="trace-23131"></a>
<a id="trace-23143"></a>
<a id="trace-23172"></a>
<a id="trace-23192"></a>
<a id="trace-23211"></a>
<a id="trace-23322"></a>
<a id="trace-23332"></a>
<a id="trace-23353"></a>
<a id="trace-23365"></a>
<a id="trace-23395"></a>
<a id="trace-23411"></a>
<a id="trace-23440"></a>
<a id="trace-23457"></a>
<a id="trace-23528"></a>
<a id="trace-23543"></a>
<a id="trace-23568"></a>
<a id="trace-23579"></a>
<a id="trace-23599"></a>
<a id="trace-23616"></a>
<a id="trace-23645"></a>
<a id="trace-23663"></a>
<a id="trace-23673"></a>
<a id="trace-23746"></a>
<a id="trace-23758"></a>
<a id="trace-23791"></a>
<a id="trace-23813"></a>
<a id="trace-23846"></a>
<a id="trace-23859"></a>
<a id="trace-23881"></a>
<a id="trace-23895"></a>
<a id="trace-23967"></a>
<a id="trace-23993"></a>
<a id="trace-24008"></a>
<a id="trace-24024"></a>
<a id="trace-24058"></a>
<a id="trace-24069"></a>
<a id="trace-24107"></a>
<a id="trace-24180"></a>
<a id="trace-24192"></a>
<a id="trace-24211"></a>
<a id="trace-24223"></a>
<a id="trace-24246"></a>
<a id="trace-24259"></a>
<a id="trace-24286"></a>
<a id="trace-24305"></a>
<a id="trace-24437"></a>
<a id="trace-24458"></a>
<a id="trace-24468"></a>
<a id="trace-24504"></a>
<a id="trace-24532"></a>
<a id="trace-24613"></a>
<a id="trace-24647"></a>
<a id="trace-24686"></a>
<a id="trace-24702"></a>
<a id="trace-24714"></a>
<a id="trace-24746"></a>
<a id="trace-24818"></a>
<a id="trace-24833"></a>
<a id="trace-24850"></a>
<a id="trace-24895"></a>
<a id="trace-24914"></a>
<a id="trace-24929"></a>
<a id="trace-24962"></a>
<a id="trace-25034"></a>
<a id="trace-25060"></a>
<a id="trace-25076"></a>
<a id="trace-25107"></a>
<a id="trace-25128"></a>
<a id="trace-25140"></a>
<a id="trace-25173"></a>
<a id="trace-25256"></a>
<a id="trace-25279"></a>
<a id="trace-25293"></a>
<a id="trace-25309"></a>
<a id="trace-25322"></a>
<a id="trace-25340"></a>
<a id="trace-25386"></a>
<a id="trace-25460"></a>
<a id="trace-25492"></a>
<a id="trace-25503"></a>
<a id="trace-25525"></a>
<a id="trace-25544"></a>
<a id="trace-25557"></a>
<a id="trace-25574"></a>
<a id="trace-25592"></a>
<a id="trace-25603"></a>
<a id="trace-25676"></a>
<a id="trace-25687"></a>
<a id="trace-25709"></a>
<a id="trace-25724"></a>
<a id="trace-25744"></a>
<a id="trace-25775"></a>
<a id="trace-25792"></a>
<a id="trace-25853"></a>
<a id="trace-25955"></a>
<a id="trace-25971"></a>
<a id="trace-25986"></a>
<a id="trace-26005"></a>
<a id="trace-26021"></a>
<a id="trace-26039"></a>
<a id="trace-26054"></a>
<a id="trace-26079"></a>
<a id="trace-26098"></a>
<a id="trace-26189"></a>
<a id="trace-26205"></a>
<a id="trace-26218"></a>
<a id="trace-26236"></a>
<a id="trace-26250"></a>
<a id="trace-26266"></a>
<a id="trace-26281"></a>
<a id="trace-26300"></a>
<a id="trace-26314"></a>
<a id="trace-27442"></a>
<a id="trace-27478"></a>
<a id="trace-28284"></a>
<a id="trace-28325"></a>
<a id="trace-28688"></a>
<a id="trace-28710"></a>
<a id="trace-28734"></a>
<a id="trace-28748"></a>
<a id="trace-28846"></a>
<a id="trace-28862"></a>
<a id="trace-28881"></a>
<a id="trace-28917"></a>
<a id="trace-28931"></a>
<a id="trace-29126"></a>
<a id="trace-29147"></a>
<a id="trace-29163"></a>
<a id="trace-29179"></a>
<a id="trace-29199"></a>
<a id="trace-29216"></a>
<a id="trace-29229"></a>
<a id="trace-29300"></a>
<a id="trace-29329"></a>
<a id="trace-29341"></a>
<a id="trace-29367"></a>
<a id="trace-29384"></a>
<a id="trace-29416"></a>
<a id="trace-29431"></a>
<a id="trace-29514"></a>
<a id="trace-29534"></a>
<a id="trace-29549"></a>
<a id="trace-29569"></a>
<a id="trace-29599"></a>
<a id="trace-29616"></a>
<a id="trace-29635"></a>
<a id="trace-29647"></a>
<a id="trace-29716"></a>
<a id="trace-29727"></a>
<a id="trace-29757"></a>
<a id="trace-29774"></a>
<a id="trace-29787"></a>
<a id="trace-29805"></a>
<a id="trace-29822"></a>
<a id="trace-29843"></a>
<a id="trace-29855"></a>
<a id="trace-29924"></a>
<a id="trace-29933"></a>
<a id="trace-29952"></a>
<a id="trace-29969"></a>
<a id="trace-29991"></a>
<a id="trace-30002"></a>
<a id="trace-30017"></a>
<a id="trace-30051"></a>
<a id="trace-30061"></a>
<a id="trace-30129"></a>
<a id="trace-30138"></a>
<a id="trace-30155"></a>
<a id="trace-30165"></a>
<a id="trace-30181"></a>
<a id="trace-30191"></a>
<a id="trace-30204"></a>
<a id="trace-30233"></a>
<a id="trace-30247"></a>
<a id="trace-30313"></a>
<a id="trace-30325"></a>
<a id="trace-30349"></a>
<a id="trace-30362"></a>
<a id="trace-30370"></a>
<a id="trace-30384"></a>
<a id="trace-30395"></a>
<a id="trace-30417"></a>
<a id="trace-30427"></a>
<a id="trace-30495"></a>
<a id="trace-30509"></a>
<a id="trace-30525"></a>
<a id="trace-30542"></a>
<a id="trace-30560"></a>
<a id="trace-30572"></a>
<a id="trace-30593"></a>
<a id="trace-30607"></a>
<a id="trace-30626"></a>
<a id="trace-30639"></a>
<a id="trace-30705"></a>
<a id="trace-30716"></a>
<a id="trace-30730"></a>
<a id="trace-30746"></a>
<a id="trace-30761"></a>
<a id="trace-30791"></a>
<a id="trace-30800"></a>
<a id="trace-30818"></a>
<a id="trace-30830"></a>
<a id="trace-30905"></a>
<a id="trace-30922"></a>
<a id="trace-30932"></a>
<a id="trace-30956"></a>
<a id="trace-30974"></a>
<a id="trace-30999"></a>
<a id="trace-31010"></a>
<a id="trace-31077"></a>
<a id="trace-31086"></a>
<a id="trace-31108"></a>
<a id="trace-31126"></a>
<a id="trace-31137"></a>
<a id="trace-31162"></a>
<a id="trace-31181"></a>
<a id="trace-31197"></a>
<a id="trace-31270"></a>
<a id="trace-31282"></a>
<a id="trace-31300"></a>
<a id="trace-31311"></a>
<a id="trace-31330"></a>
<a id="trace-31376"></a>
<a id="trace-31394"></a>
- 63.75s–359.30s (×462), actor 5, squad 0 (trace 16212): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 15931. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.610629434281636, 'next_transition': 16233}.
<a id="trace-906"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (events line 906): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16353"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 16353): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.414395 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 16353. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16542}.
<a id="trace-16354"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 16354): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.414395 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 16354. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16542}.
<a id="trace-16542"></a>
- 71.65s–71.65s (×1), actor 8, squad 1 (trace 16542): MoveTactically. Knowledge: actor memory at 70.00s, trace 16450. Next observer evidence: None.
<a id="trace-16543"></a>
- 71.65s–71.65s (×1), actor 8, squad 1 (trace 16543): received platoon directive. Knowledge: actor memory at 70.00s, trace 16450. Next observer evidence: None.
<a id="trace-16641"></a>
- 71.70s–71.70s (×1), actor 8, squad 1 (trace 16641): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 16450. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.534697367697714, 'next_transition': 16978}.
<a id="trace-16978"></a>
- 78.70s–78.70s (×1), actor 8, squad 1 (trace 16978): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 75.00s, trace 16825. Next observer evidence: None.
<a id="trace-17109"></a>
- 78.75s–78.75s (×1), actor 8, squad 1 (trace 17109): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 16825. Next observer evidence: {'until': 88.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.90757010411864, 'next_transition': 17584}.
<a id="trace-17584"></a>
- 88.90s–88.90s (×1), actor 8, squad 1 (trace 17584): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 17392. Next observer evidence: {'until': 93, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.223590643306452, 'next_transition': 17878}.
<a id="trace-17878"></a>
- 93.10s–93.10s (×1), actor 8, squad 1 (trace 17878): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 17738. Next observer evidence: None.
<a id="trace-17971"></a>
- 93.10s–93.10s (×1), actor 8, squad 1 (trace 17971): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 90.00s, trace 17738. Next observer evidence: None.
<a id="trace-17977"></a>
- 93.15s–93.15s (×1), actor 8, squad 1 (trace 17977): recovering: retry accepted element corridor in column. Knowledge: actor memory at 90.00s, trace 17738. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18078}.
<a id="trace-18070"></a>
- 93.15s–93.15s (×1), actor 8, squad 1 (trace 18070): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 90.00s, trace 17738. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18078}.
<a id="trace-18078"></a>
- 93.20s–93.20s (×1), actor 8, squad 1 (trace 18078): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 90.00s, trace 17738. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1042}.
<a id="trace-1042"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1042): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 113, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18849}.
<a id="trace-18659"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18659): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.470675 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18659. Next observer evidence: {'until': 113, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18849}.
<a id="trace-18660"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18660): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.470675 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18660. Next observer evidence: {'until': 113, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18849}.
<a id="trace-18849"></a>
- 113.15s–113.15s (×1), actor 8, squad 1 (trace 18849): received platoon directive. Knowledge: actor memory at 110.00s, trace 18726. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18949}.
<a id="trace-18942"></a>
- 113.15s–113.15s (×1), actor 8, squad 1 (trace 18942): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 110.00s, trace 18726. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18949}.
<a id="trace-18949"></a>
- 113.20s–113.20s (×1), actor 8, squad 1 (trace 18949): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 110.00s, trace 18726. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1123}.
<a id="trace-1123"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (events line 1123): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19825"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 19825): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.520803 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 19825. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20015}.
<a id="trace-19826"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 19826): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.520803 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 19826. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20015}.
<a id="trace-20015"></a>
- 140.80s–140.80s (×1), actor 8, squad 1 (trace 20015): received platoon directive. Knowledge: actor memory at 140.00s, trace 19936. Next observer evidence: None.
<a id="trace-20108"></a>
- 140.80s–140.80s (×1), actor 8, squad 1 (trace 20108): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 140.00s, trace 19936. Next observer evidence: None.
<a id="trace-20113"></a>
- 140.85s–140.85s (×1), actor 8, squad 1 (trace 20113): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 140.00s, trace 19936. Next observer evidence: {'until': 149.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1163}.
<a id="trace-1163"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (events line 1163): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20402"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (trace 20402): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.337779 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 20402. Next observer evidence: {'until': 179.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22886}.
<a id="trace-20403"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (trace 20403): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.337779 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 20403. Next observer evidence: {'until': 179.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22886}.
<a id="trace-22886"></a>
- 210.60s–210.60s (×1), actor 8, squad 1 (trace 22886): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 22815. Next observer evidence: {'until': 218.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1653}.
<a id="trace-1653"></a>
- 218.50s–218.50s (×1), actor 5, squad 1 (events line 1653): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 248.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2175}.
<a id="trace-23205"></a>
- 218.50s–218.50s (×1), actor 5, squad 1 (trace 23205): renew committed intent (75 s lifetime). Knowledge: actor memory at 218.50s, trace 23205. Next observer evidence: {'until': 248.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2175}.
<a id="trace-2175"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (events line 2175): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25570"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 25570): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 25570. Next observer evidence: {'until': 278.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25797}.
<a id="trace-25571"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 25571): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 25571. Next observer evidence: {'until': 278.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25797}.
<a id="trace-25797"></a>
- 278.90s–278.90s (×1), actor 8, squad 1 (trace 25797): MoveTactically. Knowledge: actor memory at 275.00s, trace 25614. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.451011016311895, 'next_transition': 26319}.
<a id="trace-25798"></a>
- 278.90s–278.90s (×1), actor 8, squad 1 (trace 25798): traveling overwatch. Knowledge: actor memory at 275.00s, trace 25614. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.451011016311895, 'next_transition': 26319}.
<a id="trace-25799"></a>
- 278.90s–278.90s (×1), actor 8, squad 1 (trace 25799): received platoon directive. Knowledge: actor memory at 275.00s, trace 25614. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.451011016311895, 'next_transition': 26319}.
<a id="trace-26319"></a>
- 289.80s–289.80s (×1), actor 8, squad 1 (trace 26319): ReactToContact: cover and return fire. Knowledge: actor memory at 285.00s, trace 26105. Next observer evidence: None.
<a id="trace-26320"></a>
- 289.80s–289.80s (×1), actor 8, squad 1 (trace 26320): bounding overwatch. Knowledge: actor memory at 285.00s, trace 26105. Next observer evidence: None.
<a id="trace-26321"></a>
<a id="trace-26672"></a>
<a id="trace-27025"></a>
<a id="trace-27501"></a>
<a id="trace-27871"></a>
<a id="trace-28338"></a>
- 289.80s–292.85s (×6), actor 8, squad 1 (trace 26321): new contact inside 100 m. Knowledge: actor memory at 285.00s, trace 26105. Next observer evidence: None.
<a id="trace-28834"></a>
- 296.20s–296.20s (×1), actor 9, squad 1 (trace 28834): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 295.00s, trace 28755. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.216072480786672, 'next_transition': 29069}.
<a id="trace-29069"></a>
- 301.35s–301.35s (×1), actor 9, squad 1 (trace 29069): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 300.00s, trace 28974. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18654809996352195, 'next_transition': 29832}.
<a id="trace-29070"></a>
- 301.35s–301.35s (×1), actor 9, squad 1 (trace 29070): rearward bound: one stationary suppressing element. Knowledge: actor memory at 300.00s, trace 28974. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18654809996352195, 'next_transition': 29832}.
<a id="trace-29832"></a>
- 319.20s–319.20s (×1), actor 9, squad 1 (trace 29832): NeedSupport. Knowledge: actor memory at 315.00s, trace 29655. Next observer evidence: {'until': 342.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 7.881843433334616, 'next_transition': 2692}.
<a id="trace-2692"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (events line 2692): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30770"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (trace 30770): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.70s, trace 30770. Next observer evidence: {'until': 360, 'shots': 3, 'casualties': 0, 'mean_displacement': 4.910906382573383, 'next_transition': None}.

## Net delivery

154 matched order/radio deliveries; 316 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.540s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2739: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2741: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2748: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5354: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5357: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5362: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5363: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5364: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5365: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5366: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5367: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5368: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5369: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5370: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5371: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5372: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5373: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6540: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6541: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6545: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6547: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6548: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6549: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6550: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6551: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6552: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6553: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6554: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6555: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6556: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6557: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6558: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6842: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6843: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6846: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6847: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6849: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6850: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6851: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6852: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6853: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6854: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6855: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6856: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6857: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6858: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6859: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6860: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10093: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10096: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10097: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 10099: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10100: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10101: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10102: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10103: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10104: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10105: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10106: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10107: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10108: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10109: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10110: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10957: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10958: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10992: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10993: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10995: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10996: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10998: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10999: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11000: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11001: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11002: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11003: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11004: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11005: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11006: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11007: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11008: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11009: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11819: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 11820: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11821: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11822: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11823: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 11825: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11826: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11827: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11828: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11829: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11830: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11831: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11832: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11833: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11834: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11835: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11836: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 15458: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 15459: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 15460: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 15461: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 15462: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 15463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 15464: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 15465: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 15466: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 15467: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 15468: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 15469: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 15470: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 15471: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 15472: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 15473: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 15474: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 15475: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 15701: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 15702: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 15703: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 15704: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 15705: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 15706: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 15707: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 15708: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 15709: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 15710: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 15711: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 15712: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 15713: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 15714: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 15715: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15931: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15932: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15933: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 15934: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15935: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15936: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15937: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15938: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15939: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15940: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15941: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15942: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15943: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15944: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16259: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16260: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16261: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 16262: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 16263: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16264: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16265: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16266: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 16267: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16268: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16269: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 16270: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16271: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16272: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 16353: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 16354: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16448: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16449: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 16450: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16451: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16452: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16453: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16454: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16455: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16456: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16457: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16458: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16459: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16460: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16823: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16824: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 16825: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16826: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16827: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16828: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16829: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16830: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16831: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16832: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16833: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16834: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16835: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 17194: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 17195: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 17196: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17197: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 17198: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17199: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 17200: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 17201: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 17202: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17203: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 17204: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17205: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17206: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17390: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 17391: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 17392: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17393: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17394: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17395: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17396: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 17397: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17398: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17399: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17400: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17401: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17402: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17736: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17737: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 17738: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17739: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17740: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17741: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17742: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17743: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17744: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17745: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17746: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17747: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17748: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 18158: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 18159: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 18160: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18161: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 18162: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18163: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 18164: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 18165: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18166: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18167: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 18168: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18169: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18170: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18340: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 18341: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 18342: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18343: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18344: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18345: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18346: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18347: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18348: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18349: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18350: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18351: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18352: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18527: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 18528: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 18529: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18530: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18531: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18532: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18533: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18534: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18535: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18536: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18537: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18538: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18539: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18659: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18660: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18724: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18725: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 18726: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18727: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18728: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18729: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18730: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18731: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18732: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18733: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18734: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18735: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18736: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19011: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 19012: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 19013: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19014: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19015: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19016: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19017: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19018: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19019: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19020: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19021: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19022: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19023: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19190: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19191: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 19192: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19193: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19194: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19195: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19196: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19197: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19198: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19199: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19200: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19201: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19202: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19376: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19377: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 19378: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19380: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19381: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19382: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19383: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19384: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19385: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19386: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19387: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19388: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19569: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19570: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 19571: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 19573: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19574: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19575: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19576: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19577: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19578: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19579: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19580: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19581: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 19755: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 19756: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 19757: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 19759: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19760: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19761: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19762: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19763: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19764: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19765: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19766: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19767: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 19825: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 19826: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 19934: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 19935: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 19936: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 19937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 19938: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 19939: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 19940: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 19941: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 19942: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 19943: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 19944: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 19945: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 19946: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20230: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20231: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 20232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20234: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20235: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20236: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20237: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20238: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20239: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20240: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20241: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20242: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 20402: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 20403: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 20412: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 20413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 20414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 20416: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20417: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20418: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20419: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20420: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20421: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20422: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20423: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20424: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20605: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 20606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 20607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20609: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20610: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20611: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20612: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20613: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20614: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20615: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20616: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20617: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20787: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 20789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 20790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20791: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20792: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20793: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20794: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20795: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20796: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20797: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20798: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20799: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20981: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 20983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 20984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20985: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20986: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20987: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20988: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20989: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20990: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20991: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20992: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20993: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21165: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 21166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 21167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21172: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21173: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21175: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21349: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 21351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21356: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21357: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21359: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 21535: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 21536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 21537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 21538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 21539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 21540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 21541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 21542: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 21543: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 21544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 21545: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 21546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21741: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 21742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 21743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21748: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21749: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21751: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21954: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 21956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21961: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21962: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21964: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 22174: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 22175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 22176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 22177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22181: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22182: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22184: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 22397: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 22398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 22399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 22400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22404: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22405: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 22407: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22599: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 22600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 22601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22606: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22607: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22609: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22813: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 22815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22820: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22821: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22823: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 23039: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 23040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 23041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 23042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 23045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23046: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23047: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23049: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 23205: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23256: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 23258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23263: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23264: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23266: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23462: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 23463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 23464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23469: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23470: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23472: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23681: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 23682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 23683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23688: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23689: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23691: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23901: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 23903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 23904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23908: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23909: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23911: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 24114: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 24115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 24116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 24117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 24120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24121: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 24122: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24124: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 24327: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 24328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 24329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 24330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24334: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24335: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24337: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24541: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 24542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 24543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 24544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24548: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24549: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24551: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24751: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 24753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24758: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24759: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24761: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24970: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 24972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 24973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24977: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24978: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24980: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25179: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 25181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25394: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 25396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 25397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 25570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 25571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 25614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 25615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 25878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 25879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 25880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 26104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 26105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 27380: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27383: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 27384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27385: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27386: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27387: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 28753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 28754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28756: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28757: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28758: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28759: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28760: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28761: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28762: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28763: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 28973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28975: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28976: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28977: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28978: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28979: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28980: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28981: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28982: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 29239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 29240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 29241: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 29242: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 29243: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 29244: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 29245: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 29246: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 29247: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 29248: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 29249: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 29441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 29442: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 29443: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29444: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29445: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29446: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29447: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29448: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29449: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29450: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29451: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 29653: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 29654: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29655: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29656: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29657: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29658: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29659: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29660: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29661: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29662: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29663: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29862: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29863: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29864: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29865: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29866: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29867: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29868: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29869: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29870: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29871: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29872: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 30070: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 30071: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 30072: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 30073: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 30074: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 30075: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 30076: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 30077: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 30078: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 30079: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 30080: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 30254: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 30255: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 30256: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 30257: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 30258: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 30259: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 30260: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 30261: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 30262: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 30263: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 30264: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 30434: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 30435: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 30436: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30437: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30438: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30439: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30440: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30441: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30442: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30443: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30444: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 30646: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 30647: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 30648: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30649: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30650: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30651: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30652: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30653: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30654: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30655: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30656: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 30770: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 30838: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 30839: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 30840: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30841: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30842: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30843: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30844: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30845: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30846: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30847: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30848: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 31017: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 31018: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 31019: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 31020: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 31021: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 31022: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 31023: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 31024: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 31025: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 31026: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 31027: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 31204: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 31205: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 31206: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31207: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31208: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 31209: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 31210: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31211: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 31212: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31213: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31214: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 31418: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 31419: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 31420: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 31421: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 31422: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 31423: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 31424: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 31425: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 31426: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 31427: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Ash killed in action
- 1: Vale killed in action
- 1: Rook incapacitated
- 1: Orin killed in action
- 1: Soren killed in action
- 1: Tern incapacitated
- 1: Reed killed in action
- 1: Voss incapacitated
- 1: Bren killed in action
- 1: Moss killed in action

## Outcome attribution

- 93.20s, evidence 18078: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1042}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 113.20s, evidence 18949: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1123}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 140.85s, evidence 20113: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 149.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1163}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
