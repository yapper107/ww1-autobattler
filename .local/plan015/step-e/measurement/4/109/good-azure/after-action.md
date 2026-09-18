# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/4/109/good-azure/battle-109-1789673712775765765`

## Battle summary

**Ember** · 147.15 s · 203 shots.

### Turning points

- 24.6s, squad 4: contact (events line 225). First recorded contact.
- 38.0s, squad 0: help call ([trace 2122](#trace-2122)). No completion observed before termination.
- 58.9s, squad 0: withdrawal ([trace 3884](#trace-3884)). 62.1s, squad 0: took cover and returned fire.
- 62.0s, squad 0: help call ([trace 4294](#trace-4294)). No completion observed before termination.
- 65.5s, squad 0: withdrawal ([trace 4537](#trace-4537)). 89.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 95.2s, squad 0: withdrawal ([trace 5539](#trace-5539)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 29 shots, 6/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 174 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.0s, squad 0 chose took cover and returned fire ([trace 1500](#trace-1500)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
- 29.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.507003 retreat threshold=0.500000 initiative=delegated ([trace 1840](#trace-1840)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199881365593757, 'next_transition': 1914}.

### Communication

78 matched deliveries (mean 0.24s, max 1.65s); 92 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.60s, squad 4, contact, evidence events line 225: First recorded contact; .
- 37.95s, squad 0, help call, evidence 2122: NeedSupport; No completion observed before termination.
- 58.85s, squad 0, withdrawal, evidence 3884: BreakContact: believed ratio at least two without superiority; 62.1s, squad 0: took cover and returned fire.
- 62.05s, squad 0, help call, evidence 4294: NeedSupport; No completion observed before termination.
- 65.45s, squad 0, withdrawal, evidence 4537: BreakContact: believed ratio at least two without superiority; 89.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 95.25s, squad 0, withdrawal, evidence 5539: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260013408446737, 'next_transition': 353}.
<a id="trace-60"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 60): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-400"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 400): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 400. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-401"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 401): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-414"></a>
<a id="trace-433"></a>
<a id="trace-507"></a>
<a id="trace-519"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400077263624559, 'next_transition': 433}.
<a id="trace-521"></a>
<a id="trace-616"></a>
<a id="trace-639"></a>
<a id="trace-663"></a>
<a id="trace-708"></a>
<a id="trace-746"></a>
<a id="trace-760"></a>
<a id="trace-773"></a>
<a id="trace-854"></a>
<a id="trace-869"></a>
<a id="trace-883"></a>
<a id="trace-895"></a>
<a id="trace-916"></a>
<a id="trace-927"></a>
<a id="trace-936"></a>
<a id="trace-957"></a>
<a id="trace-1091"></a>
<a id="trace-1106"></a>
<a id="trace-1121"></a>
<a id="trace-1137"></a>
<a id="trace-1148"></a>
<a id="trace-1175"></a>
<a id="trace-1186"></a>
<a id="trace-1204"></a>
<a id="trace-1284"></a>
<a id="trace-1300"></a>
<a id="trace-1313"></a>
<a id="trace-1328"></a>
<a id="trace-1348"></a>
<a id="trace-1358"></a>
<a id="trace-1374"></a>
<a id="trace-1383"></a>
<a id="trace-1409"></a>
<a id="trace-1486"></a>
<a id="trace-1492"></a>
<a id="trace-1730"></a>
<a id="trace-1742"></a>
<a id="trace-1766"></a>
<a id="trace-1778"></a>
<a id="trace-1791"></a>
<a id="trace-1825"></a>
<a id="trace-1838"></a>
<a id="trace-1916"></a>
<a id="trace-1923"></a>
<a id="trace-1936"></a>
<a id="trace-1942"></a>
<a id="trace-1959"></a>
<a id="trace-1973"></a>
<a id="trace-1983"></a>
<a id="trace-1988"></a>
<a id="trace-1998"></a>
<a id="trace-2002"></a>
<a id="trace-2074"></a>
<a id="trace-2080"></a>
<a id="trace-2099"></a>
<a id="trace-2108"></a>
<a id="trace-2113"></a>
<a id="trace-2134"></a>
<a id="trace-2138"></a>
<a id="trace-2258"></a>
<a id="trace-2268"></a>
<a id="trace-2345"></a>
<a id="trace-2363"></a>
<a id="trace-2374"></a>
<a id="trace-2380"></a>
<a id="trace-2400"></a>
<a id="trace-2409"></a>
<a id="trace-2417"></a>
<a id="trace-2430"></a>
<a id="trace-2443"></a>
<a id="trace-2517"></a>
<a id="trace-2525"></a>
<a id="trace-2540"></a>
<a id="trace-2547"></a>
<a id="trace-2713"></a>
<a id="trace-2724"></a>
<a id="trace-2743"></a>
<a id="trace-2858"></a>
<a id="trace-2866"></a>
<a id="trace-2878"></a>
<a id="trace-2885"></a>
<a id="trace-2903"></a>
<a id="trace-2932"></a>
<a id="trace-2943"></a>
<a id="trace-3431"></a>
<a id="trace-3763"></a>
<a id="trace-3785"></a>
<a id="trace-3805"></a>
<a id="trace-3840"></a>
<a id="trace-3856"></a>
<a id="trace-3870"></a>
<a id="trace-3880"></a>
<a id="trace-4151"></a>
<a id="trace-4165"></a>
<a id="trace-4244"></a>
<a id="trace-4274"></a>
<a id="trace-4281"></a>
<a id="trace-4416"></a>
<a id="trace-4427"></a>
<a id="trace-4437"></a>
<a id="trace-4443"></a>
<a id="trace-4536"></a>
<a id="trace-4646"></a>
<a id="trace-4666"></a>
<a id="trace-4671"></a>
<a id="trace-4688"></a>
<a id="trace-4706"></a>
<a id="trace-4718"></a>
<a id="trace-4728"></a>
<a id="trace-4816"></a>
<a id="trace-4823"></a>
<a id="trace-4833"></a>
<a id="trace-4838"></a>
<a id="trace-4846"></a>
<a id="trace-4850"></a>
<a id="trace-4858"></a>
<a id="trace-4864"></a>
<a id="trace-4933"></a>
<a id="trace-4940"></a>
<a id="trace-4948"></a>
<a id="trace-4962"></a>
<a id="trace-4969"></a>
<a id="trace-4982"></a>
<a id="trace-4988"></a>
<a id="trace-5056"></a>
<a id="trace-5064"></a>
<a id="trace-5078"></a>
<a id="trace-5085"></a>
<a id="trace-5089"></a>
<a id="trace-5102"></a>
<a id="trace-5108"></a>
<a id="trace-5188"></a>
<a id="trace-5197"></a>
<a id="trace-5206"></a>
<a id="trace-5209"></a>
<a id="trace-5217"></a>
<a id="trace-5222"></a>
<a id="trace-5228"></a>
<a id="trace-5341"></a>
<a id="trace-5413"></a>
<a id="trace-5427"></a>
<a id="trace-5450"></a>
<a id="trace-5458"></a>
<a id="trace-5466"></a>
<a id="trace-5470"></a>
<a id="trace-5662"></a>
<a id="trace-5665"></a>
<a id="trace-5677"></a>
<a id="trace-5681"></a>
<a id="trace-5687"></a>
<a id="trace-5697"></a>
<a id="trace-5768"></a>
<a id="trace-5771"></a>
<a id="trace-5779"></a>
<a id="trace-5784"></a>
<a id="trace-5790"></a>
<a id="trace-5792"></a>
<a id="trace-5799"></a>
<a id="trace-5803"></a>
<a id="trace-5811"></a>
<a id="trace-5817"></a>
<a id="trace-5886"></a>
<a id="trace-5893"></a>
<a id="trace-5895"></a>
<a id="trace-5904"></a>
<a id="trace-5911"></a>
<a id="trace-5914"></a>
<a id="trace-5922"></a>
<a id="trace-5930"></a>
<a id="trace-5996"></a>
<a id="trace-6000"></a>
<a id="trace-6009"></a>
<a id="trace-6014"></a>
<a id="trace-6025"></a>
<a id="trace-6028"></a>
<a id="trace-6039"></a>
<a id="trace-6048"></a>
<a id="trace-6060"></a>
<a id="trace-6132"></a>
<a id="trace-6135"></a>
<a id="trace-6145"></a>
<a id="trace-6149"></a>
<a id="trace-6155"></a>
<a id="trace-6178"></a>
<a id="trace-6184"></a>
<a id="trace-6189"></a>
<a id="trace-6255"></a>
<a id="trace-6268"></a>
<a id="trace-6287"></a>
<a id="trace-6289"></a>
<a id="trace-6293"></a>
<a id="trace-6367"></a>
<a id="trace-6370"></a>
<a id="trace-6374"></a>
<a id="trace-6383"></a>
<a id="trace-6387"></a>
<a id="trace-6395"></a>
<a id="trace-6457"></a>
<a id="trace-6459"></a>
<a id="trace-6464"></a>
<a id="trace-6466"></a>
<a id="trace-6471"></a>
<a id="trace-6475"></a>
<a id="trace-6481"></a>
<a id="trace-6485"></a>
<a id="trace-6490"></a>
<a id="trace-6494"></a>
<a id="trace-6555"></a>
<a id="trace-6557"></a>
<a id="trace-6562"></a>
<a id="trace-6564"></a>
<a id="trace-6567"></a>
<a id="trace-6576"></a>
<a id="trace-6581"></a>
<a id="trace-6586"></a>
<a id="trace-6589"></a>
<a id="trace-6650"></a>
<a id="trace-6654"></a>
<a id="trace-6661"></a>
<a id="trace-6664"></a>
<a id="trace-6668"></a>
<a id="trace-6676"></a>
<a id="trace-6679"></a>
<a id="trace-6682"></a>
<a id="trace-6687"></a>
<a id="trace-6755"></a>
<a id="trace-6758"></a>
- 5.70s–146.80s (×227), actor 37, squad 4 (trace 521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22947479268293206, 'next_transition': 616}.
<a id="trace-530"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 530): traveling overwatch. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300022930209063, 'next_transition': 614}.
<a id="trace-531"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 531): received platoon directive. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300022930209063, 'next_transition': 614}.
<a id="trace-614"></a>
<a id="trace-637"></a>
<a id="trace-661"></a>
<a id="trace-681"></a>
<a id="trace-706"></a>
<a id="trace-744"></a>
<a id="trace-758"></a>
<a id="trace-771"></a>
<a id="trace-852"></a>
<a id="trace-867"></a>
<a id="trace-881"></a>
<a id="trace-893"></a>
<a id="trace-904"></a>
<a id="trace-914"></a>
<a id="trace-925"></a>
<a id="trace-934"></a>
<a id="trace-947"></a>
<a id="trace-955"></a>
- 6.20s–14.70s (×18), actor 5, squad 0 (trace 614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 440. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1519918241457512, 'next_transition': 637}.
<a id="trace-958"></a>
- 14.70s–14.70s (×1), actor 0, squad 0 (trace 958): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 776. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1089}.
<a id="trace-1089"></a>
<a id="trace-1104"></a>
<a id="trace-1119"></a>
<a id="trace-1135"></a>
<a id="trace-1146"></a>
<a id="trace-1158"></a>
<a id="trace-1173"></a>
<a id="trace-1184"></a>
<a id="trace-1195"></a>
<a id="trace-1202"></a>
<a id="trace-1282"></a>
<a id="trace-1298"></a>
<a id="trace-1311"></a>
<a id="trace-1326"></a>
<a id="trace-1346"></a>
<a id="trace-1356"></a>
<a id="trace-1372"></a>
<a id="trace-1381"></a>
<a id="trace-1393"></a>
<a id="trace-1407"></a>
<a id="trace-1484"></a>
<a id="trace-1490"></a>
- 15.20s–25.75s (×22), actor 5, squad 0 (trace 1089): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1018. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968800396449, 'next_transition': 1104}.
<a id="trace-1500"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1500): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15057616474359065, 'next_transition': 1728}.
<a id="trace-1501"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1501): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15057616474359065, 'next_transition': 1728}.
<a id="trace-1502"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1502): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15057616474359065, 'next_transition': 1728}.
<a id="trace-1728"></a>
<a id="trace-1740"></a>
<a id="trace-1764"></a>
<a id="trace-1776"></a>
<a id="trace-1789"></a>
<a id="trace-1809"></a>
<a id="trace-1823"></a>
<a id="trace-1836"></a>
- 26.25s–29.75s (×8), actor 5, squad 0 (trace 1728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1415. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15624226291955132, 'next_transition': 1740}.
<a id="trace-282"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 282): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1840"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1840): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.507003 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1840. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199881365593757, 'next_transition': 1914}.
<a id="trace-1841"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1841): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.507003 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1841. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199881365593757, 'next_transition': 1914}.
<a id="trace-1914"></a>
<a id="trace-1921"></a>
- 30.25s–30.75s (×2), actor 5, squad 0 (trace 1914): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1847. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2479037684021767, 'next_transition': 1921}.
<a id="trace-1928"></a>
- 31.15s–31.15s (×1), actor 1, squad 0 (trace 1928): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 1845. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600027436478062, 'next_transition': 1934}.
<a id="trace-1934"></a>
<a id="trace-1940"></a>
<a id="trace-1957"></a>
- 31.25s–32.25s (×3), actor 5, squad 0 (trace 1934): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1847. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200092718083406, 'next_transition': 1940}.
<a id="trace-1960"></a>
- 32.40s–32.40s (×1), actor 1, squad 0 (trace 1960): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 1845. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1971}.
<a id="trace-1971"></a>
<a id="trace-1981"></a>
<a id="trace-1986"></a>
- 32.75s–33.75s (×3), actor 5, squad 0 (trace 1971): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1847. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7731211089003259, 'next_transition': 1981}.
<a id="trace-1992"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 1992): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 1992. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501920773218006, 'next_transition': 1996}.
<a id="trace-1996"></a>
<a id="trace-2000"></a>
<a id="trace-2072"></a>
<a id="trace-2078"></a>
<a id="trace-2088"></a>
<a id="trace-2097"></a>
<a id="trace-2106"></a>
<a id="trace-2111"></a>
- 34.25s–37.75s (×8), actor 5, squad 0 (trace 1996): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 1992. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299982460673181, 'next_transition': 2000}.
<a id="trace-2120"></a>
- 37.95s–37.95s (×1), actor 4, squad 0 (trace 2120): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299970355757908, 'next_transition': 2132}.
<a id="trace-2122"></a>
- 37.95s–37.95s (×1), actor 4, squad 0 (trace 2122): NeedSupport. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299970355757908, 'next_transition': 2132}.
<a id="trace-2132"></a>
<a id="trace-2136"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 2132): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2009. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300037741414666, 'next_transition': 2136}.
<a id="trace-2140"></a>
- 38.95s–38.95s (×1), actor 4, squad 0 (trace 2140): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6277797444596175, 'next_transition': 2256}.
<a id="trace-2143"></a>
- 38.95s–38.95s (×1), actor 4, squad 0 (trace 2143): MoveTactically. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6277797444596175, 'next_transition': 2256}.
<a id="trace-2144"></a>
- 38.95s–38.95s (×1), actor 4, squad 0 (trace 2144): traveling. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6277797444596175, 'next_transition': 2256}.
<a id="trace-2145"></a>
- 38.95s–38.95s (×1), actor 4, squad 0 (trace 2145): Reorganise complete. Knowledge: actor memory at 35.00s, trace 2008. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6277797444596175, 'next_transition': 2256}.
<a id="trace-2256"></a>
<a id="trace-2266"></a>
<a id="trace-2343"></a>
<a id="trace-2361"></a>
<a id="trace-2372"></a>
<a id="trace-2378"></a>
<a id="trace-2392"></a>
<a id="trace-2398"></a>
<a id="trace-2407"></a>
<a id="trace-2415"></a>
<a id="trace-2428"></a>
<a id="trace-2441"></a>
<a id="trace-2515"></a>
<a id="trace-2523"></a>
<a id="trace-2538"></a>
<a id="trace-2545"></a>
- 39.25s–46.75s (×16), actor 5, squad 0 (trace 2256): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2009. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662679945122871, 'next_transition': 2266}.
<a id="trace-2549"></a>
- 46.85s–46.85s (×1), actor 4, squad 0 (trace 2549): traveling overwatch. Knowledge: actor memory at 45.00s, trace 2445. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600150199369669, 'next_transition': 2711}.
<a id="trace-2550"></a>
- 46.85s–46.85s (×1), actor 4, squad 0 (trace 2550): current contact unknown for 10 s. Knowledge: actor memory at 45.00s, trace 2445. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600150199369669, 'next_transition': 2711}.
<a id="trace-2711"></a>
<a id="trace-2722"></a>
<a id="trace-2741"></a>
<a id="trace-2760"></a>
<a id="trace-2773"></a>
<a id="trace-2780"></a>
<a id="trace-2856"></a>
<a id="trace-2864"></a>
<a id="trace-2876"></a>
<a id="trace-2883"></a>
<a id="trace-2901"></a>
<a id="trace-2916"></a>
<a id="trace-2930"></a>
<a id="trace-2941"></a>
- 47.25s–53.75s (×14), actor 5, squad 0 (trace 2711): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2446. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600012536276497, 'next_transition': 2722}.
<a id="trace-2949"></a>
- 53.85s–53.85s (×1), actor 4, squad 0 (trace 2949): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 2788. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3866650379959059, 'next_transition': 3183}.
<a id="trace-2950"></a>
- 53.85s–53.85s (×1), actor 4, squad 0 (trace 2950): bounding overwatch. Knowledge: actor memory at 50.00s, trace 2788. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3866650379959059, 'next_transition': 3183}.
<a id="trace-2951"></a>
<a id="trace-3183"></a>
- 53.85s–54.10s (×2), actor 4, squad 0 (trace 2951): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 2788. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3866650379959059, 'next_transition': 3183}.
<a id="trace-3417"></a>
<a id="trace-3429"></a>
- 54.25s–54.75s (×2), actor 5, squad 0 (trace 3417): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 2789. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450070336908941, 'next_transition': 3429}.
<a id="trace-3450"></a>
- 55.10s–55.10s (×1), actor 4, squad 0 (trace 3450): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 3436. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500122518769436, 'next_transition': 3761}.
<a id="trace-3761"></a>
<a id="trace-3783"></a>
<a id="trace-3803"></a>
<a id="trace-3826"></a>
<a id="trace-3838"></a>
<a id="trace-3854"></a>
<a id="trace-3868"></a>
<a id="trace-3878"></a>
- 55.25s–58.75s (×8), actor 5, squad 0 (trace 3761): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3437. Next observer evidence: {'until': 55.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6300020547783948, 'next_transition': 3783}.
<a id="trace-3884"></a>
- 58.85s–58.85s (×1), actor 4, squad 0 (trace 3884): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 3436. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8561652798652577, 'next_transition': 4149}.
<a id="trace-3885"></a>
- 58.85s–58.85s (×1), actor 4, squad 0 (trace 3885): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 3436. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8561652798652577, 'next_transition': 4149}.
<a id="trace-4149"></a>
<a id="trace-4163"></a>
<a id="trace-4242"></a>
<a id="trace-4256"></a>
<a id="trace-4272"></a>
<a id="trace-4279"></a>
- 59.25s–61.75s (×6), actor 5, squad 0 (trace 4149): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3437. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7125233416308544, 'next_transition': 4163}.
<a id="trace-4293"></a>
- 62.05s–62.05s (×1), actor 4, squad 0 (trace 4293): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 4169. Next observer evidence: None.
<a id="trace-4294"></a>
- 62.05s–62.05s (×1), actor 4, squad 0 (trace 4294): NeedSupport. Knowledge: actor memory at 60.00s, trace 4169. Next observer evidence: None.
<a id="trace-4299"></a>
- 62.10s–62.10s (×1), actor 4, squad 0 (trace 4299): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 4169. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001058811931891, 'next_transition': 4414}.
<a id="trace-4301"></a>
- 62.10s–62.10s (×1), actor 4, squad 0 (trace 4301): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 4169. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001058811931891, 'next_transition': 4414}.
<a id="trace-4302"></a>
- 62.10s–62.10s (×1), actor 4, squad 0 (trace 4302): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 4169. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001058811931891, 'next_transition': 4414}.
<a id="trace-4414"></a>
<a id="trace-4425"></a>
<a id="trace-4435"></a>
<a id="trace-4441"></a>
<a id="trace-4456"></a>
<a id="trace-4462"></a>
<a id="trace-4534"></a>
- 62.25s–65.25s (×7), actor 5, squad 0 (trace 4414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 4170. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999229971777124, 'next_transition': 4425}.
<a id="trace-4537"></a>
- 65.45s–65.45s (×1), actor 4, squad 0 (trace 4537): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 4470. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359178364959776, 'next_transition': 4644}.
<a id="trace-4538"></a>
- 65.45s–65.45s (×1), actor 4, squad 0 (trace 4538): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 4470. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359178364959776, 'next_transition': 4644}.
<a id="trace-4644"></a>
<a id="trace-4664"></a>
<a id="trace-4669"></a>
<a id="trace-4679"></a>
<a id="trace-4686"></a>
<a id="trace-4698"></a>
<a id="trace-4704"></a>
<a id="trace-4716"></a>
<a id="trace-4726"></a>
<a id="trace-4799"></a>
<a id="trace-4807"></a>
<a id="trace-4814"></a>
<a id="trace-4821"></a>
<a id="trace-4831"></a>
<a id="trace-4836"></a>
<a id="trace-4844"></a>
<a id="trace-4848"></a>
<a id="trace-4856"></a>
<a id="trace-4862"></a>
<a id="trace-4931"></a>
<a id="trace-4938"></a>
<a id="trace-4946"></a>
<a id="trace-4952"></a>
<a id="trace-4957"></a>
<a id="trace-4960"></a>
<a id="trace-4967"></a>
<a id="trace-4972"></a>
- 65.75s–78.75s (×27), actor 5, squad 0 (trace 4644): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4471. Next observer evidence: {'until': 66.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.40265399371359484, 'next_transition': 4664}.
<a id="trace-4976"></a>
- 78.95s–78.95s (×1), actor 4, squad 0 (trace 4976): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 4866. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4980}.
<a id="trace-4980"></a>
<a id="trace-4986"></a>
<a id="trace-5054"></a>
<a id="trace-5062"></a>
<a id="trace-5071"></a>
<a id="trace-5076"></a>
<a id="trace-5083"></a>
<a id="trace-5087"></a>
<a id="trace-5100"></a>
<a id="trace-5106"></a>
<a id="trace-5114"></a>
- 79.25s–84.25s (×11), actor 5, squad 0 (trace 4980): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4867. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4986}.
<a id="trace-651"></a>
- 87.75s–87.75s (×1), actor 6, squad 0 (events line 651): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875000000000121, 'next_transition': 5214}.
<a id="trace-5210"></a>
- 87.75s–87.75s (×1), actor 6, squad 0 (trace 5210): renew committed intent (75 s lifetime). Knowledge: actor memory at 87.75s, trace 5210. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875000000000121, 'next_transition': 5214}.
<a id="trace-5214"></a>
<a id="trace-5225"></a>
- 88.25s–89.25s (×2), actor 6, squad 0 (trace 5214): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 87.75s, trace 5210. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5225}.
<a id="trace-5231"></a>
- 89.65s–89.65s (×1), actor 4, squad 0 (trace 5231): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 5125. Next observer evidence: None.
<a id="trace-5234"></a>
- 89.70s–89.70s (×1), actor 4, squad 0 (trace 5234): MoveTactically. Knowledge: actor memory at 85.00s, trace 5125. Next observer evidence: None.
<a id="trace-5235"></a>
- 89.70s–89.70s (×1), actor 4, squad 0 (trace 5235): received platoon directive. Knowledge: actor memory at 85.00s, trace 5125. Next observer evidence: None.
<a id="trace-5342"></a>
- 89.75s–89.75s (×1), actor 4, squad 0 (trace 5342): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 5125. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5410}.
<a id="trace-5410"></a>
<a id="trace-5447"></a>
- 90.25s–93.25s (×2), actor 6, squad 0 (trace 5410): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 90.00s, trace 5344. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0007000000000001, 'next_transition': 5447}.
<a id="trace-670"></a>
- 93.40s–93.40s (×1), actor 6, squad 0 (events line 670): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5452"></a>
- 93.40s–93.40s (×1), actor 6, squad 0 (trace 5452): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.135551 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.40s, trace 5452. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5463}.
<a id="trace-5453"></a>
- 93.40s–93.40s (×1), actor 6, squad 0 (trace 5453): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.135551 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.40s, trace 5453. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5463}.
<a id="trace-5463"></a>
<a id="trace-5536"></a>
- 94.25s–95.25s (×2), actor 6, squad 0 (trace 5463): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 93.40s, trace 5453. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5536}.
<a id="trace-5539"></a>
- 95.25s–95.25s (×1), actor 4, squad 0 (trace 5539): Withdraw to received rally. Knowledge: actor memory at 95.00s, trace 5471. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7653499999999998, 'next_transition': 5659}.
<a id="trace-5540"></a>
- 95.25s–95.25s (×1), actor 4, squad 0 (trace 5540): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 5471. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7653499999999998, 'next_transition': 5659}.
<a id="trace-5659"></a>
<a id="trace-5684"></a>
<a id="trace-5694"></a>
<a id="trace-5765"></a>
<a id="trace-5776"></a>
<a id="trace-5787"></a>
<a id="trace-5796"></a>
<a id="trace-5808"></a>
<a id="trace-5880"></a>
<a id="trace-5890"></a>
<a id="trace-5899"></a>
<a id="trace-5908"></a>
<a id="trace-5919"></a>
<a id="trace-5993"></a>
<a id="trace-6006"></a>
<a id="trace-6022"></a>
<a id="trace-6036"></a>
<a id="trace-6057"></a>
<a id="trace-6129"></a>
<a id="trace-6142"></a>
<a id="trace-6152"></a>
<a id="trace-6169"></a>
<a id="trace-6181"></a>
<a id="trace-6252"></a>
<a id="trace-6262"></a>
<a id="trace-6273"></a>
- 96.25s–122.25s (×26), actor 6, squad 0 (trace 5659): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 95.00s, trace 5472. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31819999999999915, 'next_transition': 5684}.

## Net delivery

78 matched order/radio deliveries; 92 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.244s; maximum 1.650s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1419: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1422: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1423: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1840: estimate 7.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1841: estimate 7.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1847: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1848: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1850: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1851: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 1852: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1853: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1854: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 1855: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 1992: estimate 7.80; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2009: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2010: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2012: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2013: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2014: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2015: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2016: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2017: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2271: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2272: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2274: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2275: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2276: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2277: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2278: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2279: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2446: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2447: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2449: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2450: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2451: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2452: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2453: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2454: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 2788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2789: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2790: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 2791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2792: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2793: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 2794: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2795: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2796: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 2797: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3436: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3437: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3438: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3440: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3441: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3442: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3443: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3444: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3445: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4169: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4170: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4171: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4172: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4173: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4174: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4175: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4176: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4177: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4178: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4470: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4471: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4472: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4473: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4474: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4475: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4476: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4477: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4478: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4731: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4732: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4733: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4734: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4735: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4736: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4737: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4738: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4739: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4866: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4867: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4868: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4869: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4870: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4871: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4872: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4873: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4874: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4989: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4990: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4991: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4992: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4993: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4994: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4995: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4996: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4997: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5125: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5126: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5127: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5128: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5129: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5130: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5131: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5132: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.75s leader 6, trace 5210: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5343: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5344: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5345: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5346: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5347: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5348: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5349: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5350: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.40s leader 6, trace 5452: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.40s leader 6, trace 5453: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5471: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5472: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5473: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5474: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5475: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5476: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5477: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5478: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5703: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5704: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5705: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5706: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5707: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5708: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5709: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5710: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5818: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5819: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5820: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5821: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5822: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5823: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5824: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5825: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5932: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5933: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5934: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5935: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5936: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5937: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5938: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5939: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6065: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6066: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6067: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6068: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6069: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6070: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6071: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6190: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6191: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6192: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6193: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6194: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6195: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6196: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6298: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6299: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6300: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6301: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6302: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6303: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6397: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6398: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6399: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6400: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6401: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6402: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6495: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6496: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6497: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6498: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6499: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6500: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6590: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6591: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6592: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6593: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6594: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6595: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6688: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6689: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 6690: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6691: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6692: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6693: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Reed killed in action
- 1: Iven killed in action
- 1: Kest killed in action
- 1: Tern killed in action
- 1: Moss killed in action

## Outcome attribution

- 93.40s, evidence 670: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 93.40s, evidence 5452: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.135551 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5463}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 93.40s, evidence 5453: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.135551 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5463}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
